// from server: 44% by colin
struct Vector3 {
    float x, y, z;
};

struct GuiItem {
    char pad[0xc8];
    int field_c8;
    char pad2[0xfc - 0xcc];
    int field_fc;
};

struct UnifiedWidget : GuiItem {
    void render2dChildren(void* adorn);
};

extern float g_7a0be0;
extern float g_8c1e2c;
extern float g_8c1e30;
extern float g_8c1e34;
extern float g_8c1e38;
extern unsigned int g_8c1e3c;

extern "C" Vector3* __cdecl func_0050b200();
extern "C" Vector3* __cdecl func_0050b190();
extern "C" void* __cdecl func_00736ed0(int);

extern void func_00555c00();
extern void func_00555600();

void UnifiedWidget::render2dChildren(void* adorn)
{
    Vector3 v;
    float one;
    void* p;

    if (this->field_fc != 0) {
        if ((g_8c1e3c & 1) == 0) {
            g_8c1e3c |= 1;
            g_8c1e2c = g_7a0be0;
            g_8c1e30 = g_7a0be0;
            g_8c1e34 = g_7a0be0;
            g_8c1e38 = 1.0f;
        }
        p = &g_8c1e2c;
    } else {
        Vector3* src = func_0050b200();
        v.x = src->x;
        v.y = src->y;
        v.z = src->z;
        one = 1.0f;
        p = &v;
    }

    void** vtbl = *(void***)adorn;
    void* arg1;
    func_00555c00();
    void (*fn1)(void*, void*) = (void (*)(void*, void*))vtbl[0x28/4];
    fn1(adorn, arg1);

    Vector3* src2 = func_0050b190();
    v.x = src2->x;
    v.y = src2->y;
    v.z = src2->z;
    one = 1.0f;

    void** vtbl2 = *(void***)adorn;
    void* arg2;
    func_00555c00();
    void (*fn2)(void*, void*) = (void (*)(void*, void*))vtbl2[0x24/4];
    fn2(adorn, arg2);

    Vector3* src3 = func_0050b190();
    v.x = src3->x;
    v.y = src3->y;
    v.z = src3->z;
    one = 1.0f;

    void* r = func_00736ed0(2);
    func_00555600();
}
