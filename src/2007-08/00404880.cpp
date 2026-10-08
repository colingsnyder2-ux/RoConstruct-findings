// from server: 100% by colin
// roc 2007-08 00404880  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404880
//
// 00404880  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00404884  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00404888  8b542404             mov edx, dword ptr [esp + 4]
// 0040488c  50                   push eax
// 0040488d  51                   push ecx
// 0040488e  68684f7800           push 0x784f68
// 00404893  52                   push edx
// 00404894  e807daffff           call 0x4022a0
// 00404899  c20c00               ret 0xc

extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
