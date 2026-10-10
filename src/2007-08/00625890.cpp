// from server: 62% by colin
struct MouseCommand {
    virtual void v0();
    virtual void v1();
    virtual void v2(void*);
};

struct RunDragger {
    bool isDragging();
    void startDragging();
    void updateDragging(void*);
};

struct MegaDragger {
    void update(void*);
};

struct PartDragTool : MouseCommand {
    char pad[0x18];
    void* field18;
    void* field20;
    RunDragger* runDragger;
    float field28;
    float field2c;
    char field30;
    char pad2[3];
    char field34[8];

    void onMouseMove(void* inputObject);
};

extern float g_dragThreshold;

void PartDragTool::onMouseMove(void* inputObject) {
    if (!field30) {
        if (runDragger->isDragging()) {
            short x = *(short*)((char*)inputObject + 8);
            short y = *(short*)((char*)inputObject + 0xa);
            float fx = (float)x - field28;
            float fy = (float)y - field2c;
            float dist = fx * fy + fx * fy;
            if (dist > g_dragThreshold * g_dragThreshold) {
                field30 = 1;
                runDragger->startDragging();
                runDragger->updateDragging(field34);
                ((MegaDragger*)field20)->update(field18);
            }
        }
    }
    v2(inputObject);
}
