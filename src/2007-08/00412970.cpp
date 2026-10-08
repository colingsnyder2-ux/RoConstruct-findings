// from server: 96% by colin
// roc 2007-08 00412970  unit: VCContent::?$CComAggObject  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412970
//
// 00412970  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00412974  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412978  8b542404             mov edx, dword ptr [esp + 4]
// 0041297c  50                   push eax
// 0041297d  51                   push ecx
// 0041297e  52                   push edx
// 0041297f  ff15a4e97700         call dword ptr [0x77e9a4]
// 00412985  50                   push eax
// 00412986  e855edfeff           call 0x4016e0
// 0041298b  83c410               add esp, 0x10
// 0041298e  c3                   ret 

extern "C" int (__stdcall *sub_77E9A4)(int, int, int);
extern "C" int __cdecl sub_4016E0(int);

int __cdecl sub_412970(int a, int b, int c)
{
    return sub_4016E0(sub_77E9A4(a, b, c));
}
