// from server: 70% by EspClaude
// roc 2008-06 00437a20  unit: G3D::VColor3::?$XItem  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437a20
//
// 00437a20  51                   push ecx
// 00437a21  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00437a25  0fb6d0               movzx edx, al
// 00437a28  8954240c             mov dword ptr [esp + 0xc], edx
// 00437a2c  c7042400000000       mov dword ptr [esp], 0
// 00437a33  8bd0                 mov edx, eax
// 00437a35  db44240c             fild dword ptr [esp + 0xc]
// 00437a39  c1ea08               shr edx, 8
// 00437a3c  d905d4358100         fld dword ptr [0x8135d4]
// 00437a42  56                   push esi
// 00437a43  83ec0c               sub esp, 0xc
// 00437a46  dcc9                 fmul st(1), st(0)
// 00437a48  8bcc                 mov ecx, esp
// 00437a4a  0fb6d2               movzx edx, dl
// 00437a4d  d9c9                 fxch st(1)
// 00437a4f  89642410             mov dword ptr [esp + 0x10], esp
// 00437a53  8954241c             mov dword ptr [esp + 0x1c], edx
// 00437a57  d919                 fstp dword ptr [ecx]
// 00437a59  c1e810               shr eax, 0x10
// 00437a5c  0fb6c0               movzx eax, al
// 00437a5f  db44241c             fild dword ptr [esp + 0x1c]
// 00437a63  8944241c             mov dword ptr [esp + 0x1c], eax
// 00437a67  d8c9                 fmul st(1)
// 00437a69  d95904               fstp dword ptr [ecx + 4]
// 00437a6c  da4c241c             fimul dword ptr [esp + 0x1c]
// 00437a70  d95908               fstp dword ptr [ecx + 8]
// 00437a73  8d4c2410             lea ecx, [esp + 0x10]
// 00437a77  51                   push ecx
// 00437a78  e863e81700           call 0x5b62e0
// 00437a7d  83c410               add esp, 0x10
// 00437a80  8d4c2404             lea ecx, [esp + 4]
// 00437a84  e827e71700           call 0x5b61b0
// 00437a89  8bc8                 mov ecx, eax
// 00437a8b  ff1564248000         call dword ptr [0x802464]
// 00437a91  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00437a95  50                   push eax
// 00437a96  8bce                 mov ecx, esi
// 00437a98  ff15103f8000         call dword ptr [0x803f10]
// 00437a9e  8bc6                 mov eax, esi
// 00437aa0  5e                   pop esi
// 00437aa1  59                   pop ecx
// 00437aa2  c3                   ret 

// from server: 60% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
extern const float colorScale;

struct Color3 {
    float r, g, b;
    Color3(unsigned int color);
    Color3(const Color3&);
    ~Color3();
};

inline Color3::Color3(unsigned int color)
{
    const float scale = colorScale;
    r = float((unsigned char)color) * scale;
    g = float((unsigned char)(color >> 8)) * scale;
    b = float((unsigned char)(color >> 16)) * scale;
}

struct String;
struct Result;

struct BrickColor {
    int value;
    String& name() const;
};

extern void __cdecl closest(BrickColor* result, Color3 color);
extern const char* (__thiscall *stringData)(const String*);
extern void (__thiscall *initializeResult)(Result*, const char*);

Result* __cdecl convertColor(Result* result, unsigned int color)
{
    BrickColor brick;
    closest(&brick, Color3(color));
    initializeResult(result, stringData(&brick.name()));
    return result;
}
