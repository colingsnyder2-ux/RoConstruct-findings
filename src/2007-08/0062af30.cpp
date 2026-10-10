// from server: 60% by colin
struct MouseCommand {
    virtual void f0();
    virtual void f1();
    virtual void mouseDown(void*);
};

struct MegaDragger {
    void a();
    void b();
    void c(void*, void*);
};

struct GroupDragTool : MouseCommand {
    char pad[0x1c];
    MegaDragger* megaDragger;
    float downX;
    float downY;
    bool dragging;
    float lastHitX;
    float lastHitY;
    float lastHitZ;
    void mouseDown(void*);
};

extern float g_threshold;

void GroupDragTool::mouseDown(void* arg)
{
    if (!dragging) {
        float dx = (float)(*(short*)((char*)arg + 8)) - downX;
        float dy = (float)(*(short*)((char*)arg + 10)) - downY;
        float dist = dx * dx + dy * dy;
        float len = dist;
        if (len > g_threshold) {
            dragging = true;
            megaDragger->a();
            megaDragger->b();
            float tmp[3];
            megaDragger->c(arg, tmp);
            lastHitX = tmp[0];
            lastHitY = tmp[1];
            lastHitZ = tmp[2];
        }
    }
    MouseCommand::mouseDown(arg);
}
