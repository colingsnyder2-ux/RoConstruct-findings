// from server: 48% by colin
// roc 2008-06 00641040  unit: RBX::AxisMoveTool  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641040
//
// 00641040  81ec90000000         sub esp, 0x90
// 00641046  56                   push esi
// 00641047  8bf1                 mov esi, ecx
// 00641049  e812f9ecff           call 0x510960
// 0064104e  d900                 fld dword ptr [eax]
// 00641050  d95c2404             fstp dword ptr [esp + 4]
// 00641054  d94004               fld dword ptr [eax + 4]
// 00641057  d95c2408             fstp dword ptr [esp + 8]
// 0064105b  d94008               fld dword ptr [eax + 8]
// 0064105e  d95c240c             fstp dword ptr [esp + 0xc]
// 00641062  e8f9f8ecff           call 0x510960
// 00641067  d900                 fld dword ptr [eax]
// 00641069  8d4efc               lea ecx, [esi - 4]
// 0064106c  d9e0                 fchs 
// 0064106e  d95c2410             fstp dword ptr [esp + 0x10]
// 00641072  d94004               fld dword ptr [eax + 4]
// 00641075  d9e0                 fchs 
// 00641077  d95c2414             fstp dword ptr [esp + 0x14]
// 0064107b  d94008               fld dword ptr [eax + 8]
// 0064107e  8d442404             lea eax, [esp + 4]
// 00641082  d9e0                 fchs 
// 00641084  50                   push eax
// 00641085  d95c241c             fstp dword ptr [esp + 0x1c]
// 00641089  e8b2faffff           call 0x640b40
// 0064108e  84c0                 test al, al
// 00641090  0f84bb000000         je 0x641151
// 00641096  d9442410             fld dword ptr [esp + 0x10]
// 0064109a  d8442404             fadd dword ptr [esp + 4]
// 0064109e  d9442414             fld dword ptr [esp + 0x14]
// 006410a2  d8442408             fadd dword ptr [esp + 8]
// 006410a6  d9442418             fld dword ptr [esp + 0x18]
// 006410aa  d844240c             fadd dword ptr [esp + 0xc]
// 006410ae  d905ac9b8100         fld dword ptr [0x819bac]
// 006410b4  dccb                 fmul st(3), st(0)
// 006410b6  d9cb                 fxch st(3)
// 006410b8  d95c241c             fstp dword ptr [esp + 0x1c]
// 006410bc  d9c9                 fxch st(1)
// 006410be  d8ca                 fmul st(2)
// 006410c0  d95c2420             fstp dword ptr [esp + 0x20]
// 006410c4  dec9                 fmulp st(1)
// 006410c6  d95c2424             fstp dword ptr [esp + 0x24]
// 006410ca  e8512dedff           call 0x513e20
// 006410cf  50                   push eax
// 006410d0  8d4c2438             lea ecx, [esp + 0x38]
// 006410d4  e84721edff           call 0x513220
// 006410d9  d944241c             fld dword ptr [esp + 0x1c]
// 006410dd  d95c2458             fstp dword ptr [esp + 0x58]
// 006410e1  8b7614               mov esi, dword ptr [esi + 0x14]
// 006410e4  d9442420             fld dword ptr [esp + 0x20]
// 006410e8  8d8e88020000         lea ecx, [esi + 0x288]
// 006410ee  d95c245c             fstp dword ptr [esp + 0x5c]
// 006410f2  8d542464             lea edx, [esp + 0x64]
// 006410f6  d9442424             fld dword ptr [esp + 0x24]
// 006410fa  52                   push edx
// 006410fb  d95c2464             fstp dword ptr [esp + 0x64]
// 006410ff  d9442414             fld dword ptr [esp + 0x14]
// 00641103  d8642408             fsub dword ptr [esp + 8]
// 00641107  d95c242c             fstp dword ptr [esp + 0x2c]
// 0064110b  d9442418             fld dword ptr [esp + 0x18]
// 0064110f  d864240c             fsub dword ptr [esp + 0xc]
// 00641113  d95c2430             fstp dword ptr [esp + 0x30]
// 00641117  d944241c             fld dword ptr [esp + 0x1c]
// 0064111b  d8642410             fsub dword ptr [esp + 0x10]
// 0064111f  d95c2434             fstp dword ptr [esp + 0x34]
// 00641123  8b01                 mov eax, dword ptr [ecx]
// 00641125  8b5008               mov edx, dword ptr [eax + 8]
// 00641128  ffd2                 call edx
// 0064112a  8bc8                 mov ecx, eax
// 0064112c  e87ff6ecff           call 0x5107b0
// 00641131  83c024               add eax, 0x24
// 00641134  50                   push eax
// 00641135  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0064113c  6a01                 push 1
// 0064113e  50                   push eax
// 0064113f  8d4c2440             lea ecx, [esp + 0x40]
// 00641143  51                   push ecx
// 00641144  8d542438             lea edx, [esp + 0x38]
// 00641148  52                   push edx
// 00641149  e852650300           call 0x6776a0
// 0064114e  83c414               add esp, 0x14
// 00641151  5e                   pop esi
// 00641152  81c490000000         add esp, 0x90
// 00641158  c20400               ret 4

struct Vec3 { float x, y, z; };
struct Mat3 { float m[9]; };
struct Frame { Mat3 rot; Vec3 pos; };

struct AxisMoveTool {
    char pad0[0x10];
    void* unk14;
    void func(void* arg);
};

struct Helper {
    void* sub_510960();
    char sub_640B40(Vec3* v);
    void sub_513220(void* src);
    void* sub_5107B0(void* out);
};

extern "C" void* __cdecl sub_513E20();
extern "C" void __cdecl sub_6776A0(void* a, void* b, void* c, int d, void* e);

extern float g_819bac;

void AxisMoveTool::func(void* arg)
{
    Vec3 a;
    Vec3 b;
    Vec3 c;
    Vec3 d;
    Frame f;

    Helper* h = (Helper*)this;

    void* p = h->sub_510960();
    a.x = *(float*)p;
    a.y = *(float*)((char*)p + 4);
    a.z = *(float*)((char*)p + 8);

    p = h->sub_510960();
    b.x = -*(float*)p;
    b.y = -*(float*)((char*)p + 4);
    b.z = -*(float*)((char*)p + 8);

    if (h->sub_640B40(&a)) {
        c.x = b.x + a.x;
        c.y = b.y + a.y;
        c.z = b.z + a.z;
        c.x *= g_819bac;
        c.y *= g_819bac;
        c.z *= g_819bac;

        void* q = sub_513E20();
        h->sub_513220(q);

        f.pos.x = c.x;
        f.pos.y = c.y;
        f.pos.z = c.z;

        void* unk = *(void**)((char*)this + 0x14);
        void* obj = *(void**)((char*)unk + 0x288);
        void* (*fn)(void*) = *(void* (**)(void*))((char*)obj + 8);
        void* r = fn(obj);
        void* r2 = h->sub_5107B0(&d);

        d.x = b.x - a.x;
        d.y = b.y - a.y;
        d.z = b.z - a.z;

        sub_6776A0(&f, &d, arg, 1, (char*)r2 + 0x24);
    }
}
