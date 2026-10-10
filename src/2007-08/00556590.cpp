// from server: 59% by colin
struct GuiItem {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
};

struct UnifiedWidget : GuiItem {
    char pad0[0xc0];
    void* m_ptr_c0;
    void f(float* out);
};

extern float g_79f2fc;
extern float g_8c1e68;

extern "C" float __cdecl sub_630d60(float x);

void UnifiedWidget::f(float* out)
{
    float v[3];
    ((void (__thiscall*)(UnifiedWidget*, float*))*(void**)(*(int*)this + 0x4c))(this, out);
    ((void (__thiscall*)(UnifiedWidget*, float*))*(void**)(*(int*)this + 0x60))(this, v);
    out[0] = v[0] + g_79f2fc + out[0];
    float a = sub_630d60(v[1]);
    int edi = (int)a + 4;
    float b = sub_630d60(g_8c1e68);
    int ebp = (int)((int)b - 0x78) / edi;
    float c = sub_630d60(out[1]);
    int ecx = (int)((int)c - 0x14) / edi;
    int eax;
    void* p = m_ptr_c0;
    if (p != 0 && *(int*)((char*)p + 4) != 0) {
        eax = (*(int*)((char*)p + 8) - *(int*)((char*)p + 4)) >> 3;
    } else {
        eax = 0;
    }
    eax = (eax - ((eax >> 31) & 1)) >> 1;
    ebp -= eax;
    int t = (eax < ecx) ? eax : ecx;
    int u = (t < ebp) ? t : ebp;
    out[1] = (float)((u - eax) * edi + 0x14);
}
