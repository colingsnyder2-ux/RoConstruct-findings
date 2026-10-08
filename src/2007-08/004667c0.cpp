// from server: 80% by colin
// roc 2007-08 004667c0  unit: CWebToolbox  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004667c0
//
// 004667c0  56                   push esi
// 004667c1  8bf1                 mov esi, ecx
// 004667c3  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 004667c9  85c9                 test ecx, ecx
// 004667cb  7405                 je 0x4667d2
// 004667cd  e832981c00           call 0x630004
// 004667d2  6a00                 push 0
// 004667d4  8bce                 mov ecx, esi
// 004667d6  e849991c00           call 0x630124
// 004667db  5e                   pop esi
// 004667dc  c20400               ret 4

struct CWebToolbox
{
    char pad[0xf4];
    void* field_f4;
    void method_004667c0(int);
};

extern void __stdcall sub_00630004(void*);
extern void __stdcall sub_00630124(void*, int);

void CWebToolbox::method_004667c0(int arg)
{
    if (field_f4 != 0)
        sub_00630004(field_f4);
    sub_00630124(this, 0);
}
