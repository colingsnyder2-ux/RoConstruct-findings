// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

extern "C" double __cdecl sqrt(double);

struct RenderSystem {
    virtual float getWidth();
    virtual float getHeight();
    virtual void setViewport(int, float, float, float, float);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedPtr {
    void* ptr;
    Control* control;
};

struct Vector3 {
    float x, y, z;
};

struct Camera {
    virtual void* getViewport();
};

struct Workspace {
    char pad[0x204];
    Camera* camera;
};

struct Viewport {
    char pad[0x288];
    virtual void* getCamera();
};

struct CRobloxWnd {
    char pad0[0x5c];
    int mode;
    char pad1[0x10];
    Workspace* workspace;
    SharedPtr something;
    char pad2[0x18];
    double timer;
    char pad3[0x1c];
    RenderSystem* renderSystem;

    void update();
};

extern double gTimerLimit;
extern double gScaleA;
extern double gScaleB;
extern float gMulA;
extern float gMulB;
extern bool gFlag;

extern void* gCriticalSection;
extern void* gCriticalSection2;

extern "C" void* __cdecl getRenderSystemGlobal();

extern void* __cdecl sub_411b40(void*, void*);
extern void* __cdecl sub_412d50();
extern void* __cdecl sub_45ac40(void*, void*, void*);
extern void* __cdecl sub_45af00(void*, void*);
extern void* __cdecl sub_5773c0(void*, void*);

void CRobloxWnd::update()
{
    EnterCriticalSection(&gCriticalSection);

    if (timer == gTimerLimit) {
        LeaveCriticalSection(&gCriticalSection);
        return;
    }

    double saved = timer;
    timer = gTimerLimit;
    LeaveCriticalSection(&gCriticalSection);

    if (renderSystem == 0)
        return;
    if (workspace == 0)
        return;

    SharedPtr sp;
    sp.ptr = workspace;
    sp.control = something.control;
    if (sp.control)
        _InterlockedExchangeAdd(&sp.control->strong, 1);

    sub_411b40(&sp, 0);

    RenderSystem* rs = renderSystem;
    float w = rs->getWidth();
    float h = rs->getHeight();

    float scaleX = (float)saved;
    if (scaleX < gScaleA) {
        w = w * gMulA;
        h = h * gMulA;
    } else if (scaleX > gScaleB) {
        w = w * gMulB + 1.0f;
        h = h * gMulB + 1.0f;
    }

    void* vp = sub_412d50();
    float vx = *(float*)((char*)vp + 0x148);
    w = (vx < w) ? vx : w;

    vp = sub_412d50();
    float vy = *(float*)((char*)vp + 0x144);
    w = (vy > w) ? vy : w;

    vp = sub_412d50();
    float vz = *(float*)((char*)vp + 0x150);
    h = (vz < h) ? vz : h;

    vp = sub_412d50();
    float vw = *(float*)((char*)vp + 0x14c);
    h = (vw > h) ? vw : h;

    Workspace* ws = workspace;
    if (ws->camera != 0) {
        Viewport* viewport = (Viewport*)((char*)ws->camera + 0x288);
        if (viewport->getCamera() != 0) {
            void* cam = viewport->getCamera();
            Vector3 pos;
            sub_45af00(cam, &pos);

            void* cam2 = viewport->getCamera();
            Vector3 diff;
            sub_45ac40((char*)cam2 + 0x1c8, &pos, &diff);

            float dist = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;
            dist = (float)sqrt((double)dist);

            if (mode == 4 || mode == 3) {
                if (gCriticalSection2 != 0) {
                    void* r = getRenderSystemGlobal();
                    if (r != 0) {
                        void* r2 = getRenderSystemGlobal();
                        void* flags = *(void**)((char*)r2 + 0x64);
                        if ((*(int*)((char*)flags + 8) & 0x200) == 0)
                            gFlag = false;
                    }
                }
            }

            RenderSystem* rs2 = renderSystem;
            rs2->setViewport(gFlag ? 1 : 0, w, h, dist, 0);
        }
    }

    sub_5773c0(&sp, 0);
}
