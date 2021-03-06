#ifndef CREATEFRAMECOMMAND_H
#define CREATEFRAMECOMMAND_H

#include <QUndoCommand>
#include "component/grpframe.h"

class MainWindow;
class GrpFrame;
class QListWidget;

class CreateFrameCommand : public QUndoCommand
{
public:
    CreateFrameCommand(MainWindow *mw, int index,
                       const GrpFrame& frame,
                       QUndoCommand *parent = 0);

    void undo() Q_DECL_OVERRIDE;
    void redo() Q_DECL_OVERRIDE;

private:
    MainWindow *mw;
    GrpFrame frame;
    int index;
    QListWidget *listWidget;
};

#endif // CREATEFRAMECOMMAND_H
