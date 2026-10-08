// from server: 87% by colin
// roc 2007-08 006a3020  unit: CXTPHookManager::CHookSink  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3020
//
// 006a3020  8b542404             mov edx, dword ptr [esp + 4]
// 006a3024  8d442404             lea eax, [esp + 4]
// 006a3028  50                   push eax
// 006a3029  52                   push edx
// 006a302a  e8311af9ff           call 0x634a60
// 006a302f  f7d8                 neg eax
// 006a3031  1bc0                 sbb eax, eax
// 006a3033  23442404             and eax, dword ptr [esp + 4]
// 006a3037  c20400               ret 4

extern "C" int __cdecl sub_00634a60(int, int*);

int __stdcall sub_006a3020(int a)
{
    int r = sub_00634a60(a, &a);
    return (r != 0) ? a : 0;
}
