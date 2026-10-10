// from server: 73% by colin
// roc 2007-08 005fb2d0  unit: RBX::LeftMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb2d0

struct MouseCommand {
    void setCursorName(const char*);
    void setSticky(int);
    void setEnabled(int);
    void setPriority(float);
    void setDistance(float);
};

struct LeftMotorTool {
    MouseCommand* command;
    void construct(int);
};

extern float g_motorPriority;
extern float g_motorDistance;

void LeftMotorTool::construct(int workspace)
{
    MouseCommand* cmd = command;
    cmd->setCursorName("MotorCursor");
    cmd->setSticky(7);
    cmd->setEnabled(1);
    cmd->setPriority(g_motorPriority);
    cmd->setDistance(g_motorDistance);
}
