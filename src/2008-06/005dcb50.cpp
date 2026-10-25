// from server: 100% by colin
// roc 2008-06 005dcb50  unit: RBX::VHumanoid::?$SignalDesc  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcb50
//
// 005dcb50  83ec48               sub esp, 0x48
// 005dcb53  56                   push esi
// 005dcb54  8b742450             mov esi, dword ptr [esp + 0x50]
// 005dcb58  8b06                 mov eax, dword ptr [esi]
// 005dcb5a  8b5010               mov edx, dword ptr [eax + 0x10]
// 005dcb5d  57                   push edi
// 005dcb5e  8bf9                 mov edi, ecx
// 005dcb60  8d4c2420             lea ecx, [esp + 0x20]
// 005dcb64  51                   push ecx
// 005dcb65  8bce                 mov ecx, esi
// 005dcb67  ffd2                 call edx
// 005dcb69  d9442420             fld dword ptr [esp + 0x20]
// 005dcb6d  d9542410             fst dword ptr [esp + 0x10]
// 005dcb71  8d442418             lea eax, [esp + 0x18]
// 005dcb75  d9442424             fld dword ptr [esp + 0x24]
// 005dcb79  50                   push eax
// 005dcb7a  d9542418             fst dword ptr [esp + 0x18]
// 005dcb7e  8d4c2414             lea ecx, [esp + 0x14]
// 005dcb82  d944242c             fld dword ptr [esp + 0x2c]
// 005dcb86  51                   push ecx
// 005dcb87  d9542420             fst dword ptr [esp + 0x20]
// 005dcb8b  8d542448             lea edx, [esp + 0x48]
// 005dcb8f  d9442434             fld dword ptr [esp + 0x34]
// 005dcb93  52                   push edx
// 005dcb94  d9542428             fst dword ptr [esp + 0x28]
// 005dcb98  d9c9                 fxch st(1)
// 005dcb9a  dec3                 faddp st(3)
// 005dcb9c  dec1                 faddp st(1)
// 005dcb9e  d905ac9b8100         fld dword ptr [0x819bac]
// 005dcba4  dcca                 fmul st(2), st(0)
// 005dcba6  d9ca                 fxch st(2)
// 005dcba8  d95c2414             fstp dword ptr [esp + 0x14]
// 005dcbac  d8c9                 fmul st(1)
// 005dcbae  d95c2418             fstp dword ptr [esp + 0x18]
// 005dcbb2  d954243c             fst dword ptr [esp + 0x3c]
// 005dcbb6  d9542440             fst dword ptr [esp + 0x40]
// 005dcbba  d9542444             fst dword ptr [esp + 0x44]
// 005dcbbe  d95c2448             fstp dword ptr [esp + 0x48]
// 005dcbc2  e8096af1ff           call 0x4f35d0
// 005dcbc7  8b06                 mov eax, dword ptr [esi]
// 005dcbc9  8b402c               mov eax, dword ptr [eax + 0x2c]
// 005dcbcc  83c40c               add esp, 0xc
// 005dcbcf  8d4c2430             lea ecx, [esp + 0x30]
// 005dcbd3  51                   push ecx
// 005dcbd4  8d542444             lea edx, [esp + 0x44]
// 005dcbd8  52                   push edx
// 005dcbd9  8bce                 mov ecx, esi
// 005dcbdb  ffd0                 call eax
// 005dcbdd  e80e7ef3ff           call 0x5149f0
// 005dcbe2  d900                 fld dword ptr [eax]
// 005dcbe4  d95c2430             fstp dword ptr [esp + 0x30]
// 005dcbe8  d94004               fld dword ptr [eax + 4]
// 005dcbeb  d95c2434             fstp dword ptr [esp + 0x34]
// 005dcbef  d94008               fld dword ptr [eax + 8]
// 005dcbf2  d95c2438             fstp dword ptr [esp + 0x38]
// 005dcbf6  d9e8                 fld1 
// 005dcbf8  d95c243c             fstp dword ptr [esp + 0x3c]
// 005dcbfc  e85f7ef3ff           call 0x514a60
// 005dcc01  d900                 fld dword ptr [eax]
// 005dcc03  8b16                 mov edx, dword ptr [esi]
// 005dcc05  d95c2440             fstp dword ptr [esp + 0x40]
// 005dcc09  d94004               fld dword ptr [eax + 4]
// 005dcc0c  6a00                 push 0
// 005dcc0e  d95c2448             fstp dword ptr [esp + 0x48]
// 005dcc12  6a02                 push 2
// 005dcc14  d94008               fld dword ptr [eax + 8]
// 005dcc17  6a02                 push 2
// 005dcc19  d95c2454             fstp dword ptr [esp + 0x54]
// 005dcc1d  8d44243c             lea eax, [esp + 0x3c]
// 005dcc21  d9e8                 fld1 
// 005dcc23  50                   push eax
// 005dcc24  8d4c2450             lea ecx, [esp + 0x50]
// 005dcc28  d95c245c             fstp dword ptr [esp + 0x5c]
// 005dcc2c  dd0540d98300         fld qword ptr [0x83d940]
// 005dcc32  51                   push ecx
// 005dcc33  83ec08               sub esp, 8
// 005dcc36  dd1c24               fstp qword ptr [esp]
// 005dcc39  8d442424             lea eax, [esp + 0x24]
// 005dcc3d  50                   push eax
// 005dcc3e  81c740010000         add edi, 0x140
// 005dcc44  57                   push edi
// 005dcc45  8d4c2434             lea ecx, [esp + 0x34]
// 005dcc49  8b5234               mov edx, dword ptr [edx + 0x34]
// 005dcc4c  51                   push ecx
// 005dcc4d  8bce                 mov ecx, esi
// 005dcc4f  ffd2                 call edx
// 005dcc51  5f                   pop edi
// 005dcc52  5e                   pop esi
// 005dcc53  83c448               add esp, 0x48
// 005dcc56  c20400               ret 4

// from server: 98% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct Vec2 {
    float x, y;
};

struct Vec3 {
    float x, y, z;
};

struct V2 {
    float x, y;
    V2(float _x, float _y) : x(_x), y(_y) {}
    V2 operator+(const V2& v) const { return V2(x + v.x, y + v.y); }
    V2 operator*(float s) const { return V2(s * x, s * y); }
};

struct Color {
    float r, g, b, a;
};

struct Rect {
    Vec2 low, high;
};

extern const float halfValue;
extern const double textSize;

extern "C" void __cdecl makeRect(Rect*, const Vec2*, const Vec2*);
extern "C" const Vec3& __cdecl zeroVector();
extern "C" const Vec3& __cdecl oneVector();

struct Renderer {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual Rect bounds() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual void slot7() = 0;
    virtual void slot8() = 0;
    virtual void slot9() = 0;
    virtual void slot10() = 0;
    virtual void fillRect(const Rect&, const Color&) = 0;
    virtual void slot12() = 0;
    virtual void drawText(const Rect&, const void*, const V2&,
                          double, const Color&, const Color&,
                          int, int, int) = 0;
};

union Work {
    struct {
        Color background;
        Rect rectangle;
    } fill;
    struct {
        Color outline;
        Color foreground;
    } text;
};

struct S {
    char storage[0x140];
    void render(Renderer*);
};

void S::render(Renderer* renderer)
{
    Rect bounds = renderer->bounds();
    Rect area;
    area.low.x = bounds.low.x;
    area.low.y = bounds.low.y;
    area.high.x = bounds.high.x;
    area.high.y = bounds.high.y;

    V2 c = (V2(area.low.x, area.low.y) + V2(area.high.x, area.high.y)) * halfValue;

    Work work;
    work.fill.background.r = halfValue;
    work.fill.background.g = halfValue;
    work.fill.background.b = halfValue;
    work.fill.background.a = halfValue;

    makeRect(&work.fill.rectangle, &area.low, &area.high);
    renderer->fillRect(work.fill.rectangle, work.fill.background);

    const Vec3& zero = zeroVector();
    work.text.outline.r = zero.x;
    work.text.outline.g = zero.y;
    work.text.outline.b = zero.z;
    work.text.outline.a = 1.0f;

    const Vec3& one = oneVector();
    work.text.foreground.r = one.x;
    work.text.foreground.g = one.y;
    work.text.foreground.b = one.z;
    work.text.foreground.a = 1.0f;

    renderer->drawText(area, storage + 0x140, c, textSize,
                       work.text.foreground, work.text.outline, 2, 2, 0);
}
