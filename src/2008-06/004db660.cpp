// from server: 100% by king_originala
// roc 2008-06 004db660  unit: RBX::ViewNew::ViewRbxGfx  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db660
//
// 004db660  8b4908               mov ecx, dword ptr [ecx + 8]
// 004db663  d9442410             fld dword ptr [esp + 0x10]
// 004db667  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004db66b  8b01                 mov eax, dword ptr [ecx]
// 004db66d  8b4008               mov eax, dword ptr [eax + 8]
// 004db670  51                   push ecx
// 004db671  d91c24               fstp dword ptr [esp]
// 004db674  52                   push edx
// 004db675  d9442410             fld dword ptr [esp + 0x10]
// 004db679  83ec08               sub esp, 8
// 004db67c  d95c2404             fstp dword ptr [esp + 4]
// 004db680  d9442414             fld dword ptr [esp + 0x14]
// 004db684  d91c24               fstp dword ptr [esp]
// 004db687  ffd0                 call eax
// 004db689  c21000               ret 0x10

struct Renderer {
    virtual void slot0();
    virtual void slot1();
    virtual void render(float x, float y, int value, float scale);
};

struct View {
    unsigned char padding[8];
    Renderer* renderer;
    void render(float x, float y, int value, float scale);
};

void View::render(float x, float y, int value, float scale)
{
    renderer->render(x, y, value, scale);
}
