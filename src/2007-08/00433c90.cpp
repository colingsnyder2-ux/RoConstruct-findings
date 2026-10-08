// from server: 77% by colin
// roc 2007-08 00433c90  unit: CMultiPlayerPane  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433c90
//
// 00433c90  837c240401           cmp dword ptr [esp + 4], 1
// 00433c95  56                   push esi
// 00433c96  8bf1                 mov esi, ecx
// 00433c98  741c                 je 0x433cb6
// 00433c9a  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00433c9d  85c9                 test ecx, ecx
// 00433c9f  7415                 je 0x433cb6
// 00433ca1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00433ca5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00433ca9  6a01                 push 1
// 00433cab  50                   push eax
// 00433cac  52                   push edx
// 00433cad  6a00                 push 0
// 00433caf  6a00                 push 0
// 00433cb1  e87ec31f00           call 0x630034
// 00433cb6  8bce                 mov ecx, esi
// 00433cb8  e881c51f00           call 0x63023e
// 00433cbd  5e                   pop esi
// 00433cbe  c20c00               ret 0xc

struct CMultiPlayerPane {
    char pad[0x54];
    void* field_54;
    void func_00433c90(int, int, int);
};

extern "C" void __stdcall sub_00630034(void*, void*, int, int, int);
extern "C" void __stdcall sub_0063023e(void*);

void CMultiPlayerPane::func_00433c90(int a, int b, int c)
{
    if (a != 1 && field_54 != 0) {
        sub_00630034(field_54, 0, b, c, 1);
    }
    sub_0063023e(this);
}
