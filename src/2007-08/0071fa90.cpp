// from server: 91% by colin
// roc 2007-08 0071fa90  unit: CXTPDockingPaneAutoHidePanel  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fa90
//
// 0071fa90  8b442408             mov eax, dword ptr [esp + 8]
// 0071fa94  56                   push esi
// 0071fa95  8bf1                 mov esi, ecx
// 0071fa97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071fa9b  50                   push eax
// 0071fa9c  51                   push ecx
// 0071fa9d  8bce                 mov ecx, esi
// 0071fa9f  e88c0cfcff           call 0x6e0730
// 0071faa4  6a0a                 push 0xa
// 0071faa6  8d4e38               lea ecx, [esi + 0x38]
// 0071faa9  c7061c217e00         mov dword ptr [esi], 0x7e211c
// 0071faaf  e85cf6f4ff           call 0x66f110
// 0071fab4  8bc6                 mov eax, esi
// 0071fab6  5e                   pop esi
// 0071fab7  c20800               ret 8

struct CXTPDockingPaneAutoHidePanel {
    void func_006e0730(int, int);
    void func_0066f110(int);
    void* func_0071fa90(int, int);
};

void* CXTPDockingPaneAutoHidePanel::func_0071fa90(int a, int b)
{
    func_006e0730(a, b);
    *(int*)this = 0x7e211c;
    func_0066f110(0xa);
    return this;
}
