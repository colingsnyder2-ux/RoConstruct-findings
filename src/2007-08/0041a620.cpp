// from server: 67% by colin
// roc 2007-08 0041a620  unit: VDHTMLWindow::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041a620
//
// 0041a620  8b442404             mov eax, dword ptr [esp + 4]
// 0041a624  83ec0c               sub esp, 0xc
// 0041a627  56                   push esi
// 0041a628  6a00                 push 0
// 0041a62a  68c02b8800           push 0x882bc0
// 0041a62f  689c208800           push 0x88209c
// 0041a634  6a00                 push 0
// 0041a636  50                   push eax
// 0041a637  8bf1                 mov esi, ecx
// 0041a639  e8f8662100           call 0x630d36
// 0041a63e  83c414               add esp, 0x14
// 0041a641  85c0                 test eax, eax
// 0041a643  751e                 jne 0x41a663
// 0041a645  68046e7800           push 0x786e04
// 0041a64a  8d4c2408             lea ecx, [esp + 8]
// 0041a64e  ff1510e77700         call dword ptr [0x77e710]
// 0041a654  680c1e8400           push 0x841e0c
// 0041a659  8d4c2408             lea ecx, [esp + 8]
// 0041a65d  51                   push ecx
// 0041a65e  e83b652100           call 0x630b9e
// 0041a663  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0041a666  8b5628               mov edx, dword ptr [esi + 0x28]
// 0041a669  03c8                 add ecx, eax
// 0041a66b  ffd2                 call edx
// 0041a66d  5e                   pop esi
// 0041a66e  83c40c               add esp, 0xc
// 0041a671  c20800               ret 8

struct VDHTMLWindow_BoundFuncDesc
{
    void func_0041a620(int, int);
};

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" void __cdecl func_00630b9e(int, int);
extern "C" void __stdcall func_0077e710(int);
extern "C" void __stdcall func_00786e04();
extern "C" void __stdcall func_00841e0c();

void VDHTMLWindow_BoundFuncDesc::func_0041a620(int a, int b)
{
    int result = func_00630d36(a, 0, 0x88209c, 0x882bc0, 0);
    if (result == 0)
    {
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, 0x786e04);
    }
    int (*fn)(void) = *(int (**)(void))((char*)this + 0x28);
    int offset = *(int*)((char*)this + 0x2c);
    fn();
}
