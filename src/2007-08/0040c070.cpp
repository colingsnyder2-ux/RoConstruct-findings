// from server: 18% by colin
// roc 2007-08 0040c070  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c070
//
// 0040c070  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040c074  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040c078  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040c07c  50                   push eax
// 0040c07d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040c081  51                   push ecx
// 0040c082  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040c086  52                   push edx
// 0040c087  50                   push eax
// 0040c088  51                   push ecx
// 0040c089  b99c1d8800           mov ecx, 0x881d9c
// 0040c08e  e88d9cffff           call 0x405d20
// 0040c093  c21800               ret 0x18

extern "C" int __stdcall sub_00405d20(int, int, int, int, int, int);

int __stdcall sub_0040c070(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return sub_00405d20(a1, a2, a3, a4, a5, a6);
}
