// from server: 72% by colin
// roc 2007-08 006a7a70  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7a70
//
// 006a7a70  83ec14               sub esp, 0x14
// 006a7a73  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a7a77  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 006a7a7d  8d1424               lea edx, [esp]
// 006a7a80  52                   push edx
// 006a7a81  68d8fdffff           push 0xfffffdd8
// 006a7a86  89442418             mov dword ptr [esp + 0x18], eax
// 006a7a8a  e8514af9ff           call 0x63c4e0
// 006a7a8f  83c414               add esp, 0x14
// 006a7a92  c20400               ret 4

struct CXTPRibbonBar
{
    void m(int);
};

extern "C" void __stdcall sub_0063C4E0(int, int, void*);

void CXTPRibbonBar::m(int a)
{
    int local[5];
    local[4] = a;
    sub_0063C4E0(*(int*)((char*)this + 0x264), 0xfffffdd8, local);
}
