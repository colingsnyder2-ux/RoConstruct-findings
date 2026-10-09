// roc 2010-06 0047cd00  unit: VCContent::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cd00
//
// 0047cd00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047cd04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047cd08  8b542404             mov edx, dword ptr [esp + 4]
// 0047cd0c  50                   push eax
// 0047cd0d  51                   push ecx
// 0047cd0e  68c02ca100           push 0xa12cc0
// 0047cd13  52                   push edx
// 0047cd14  e85782f8ff           call 0x404f70
// 0047cd19  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000005@@YGHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
