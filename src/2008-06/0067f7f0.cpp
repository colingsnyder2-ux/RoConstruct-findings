// from server: 100% by king_originala
// roc 2008-06 0067f7f0  unit: Ogre::RbxEntity  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067f7f0
//
// 0067f7f0  83ec10               sub esp, 0x10
// 0067f7f3  53                   push ebx
// 0067f7f4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0067f7f8  56                   push esi
// 0067f7f9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0067f7fd  d9460c               fld dword ptr [esi + 0xc]
// 0067f800  57                   push edi
// 0067f801  d95c240c             fstp dword ptr [esp + 0xc]
// 0067f805  8d44240c             lea eax, [esp + 0xc]
// 0067f809  d94610               fld dword ptr [esi + 0x10]
// 0067f80c  8bf9                 mov edi, ecx
// 0067f80e  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0067f811  d95c2410             fstp dword ptr [esp + 0x10]
// 0067f815  d94614               fld dword ptr [esi + 0x14]
// 0067f818  50                   push eax
// 0067f819  d95c2418             fstp dword ptr [esp + 0x18]
// 0067f81d  d9e8                 fld1 
// 0067f81f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0067f823  ff1500448000         call dword ptr [0x804400]
// 0067f829  80bfb800000000       cmp byte ptr [edi + 0xb8], 0
// 0067f830  7412                 je 0x67f844
// 0067f832  56                   push esi
// 0067f833  53                   push ebx
// 0067f834  8bcf                 mov ecx, edi
// 0067f836  e8f5f9ffff           call 0x67f230
// 0067f83b  56                   push esi
// 0067f83c  53                   push ebx
// 0067f83d  8bcf                 mov ecx, edi
// 0067f83f  e80cfdffff           call 0x67f550
// 0067f844  5f                   pop edi
// 0067f845  5e                   pop esi
// 0067f846  5b                   pop ebx
// 0067f847  83c410               add esp, 0x10
// 0067f84a  c20800               ret 8

struct ColourValue {
    float r, g, b, a;
};

struct Viewport;

typedef void (__thiscall *SetBackgroundColour)(
    Viewport *, const ColourValue &);

extern SetBackgroundColour setBackgroundColour;

struct Context {
    char padding[16];
    Viewport *viewport;
};

struct Input {
    char padding[12];
    float r, g, b;
};

struct S {
    char padding[184];
    unsigned char enabled;

    void f(Context *, Input *);
    void first(Context *, Input *);
    void second(Context *, Input *);
};

void S::f(Context *context, Input *input)
{
    ColourValue colour = { input->r, input->g, input->b, 1.0f };
    setBackgroundColour(context->viewport, colour);

    if (enabled) {
        first(context, input);
        second(context, input);
    }
}
