// roc 2009-12 00456220  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00456220
//
// 00456220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00456224  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00456228  8b542404             mov edx, dword ptr [esp + 4]
// 0045622c  50                   push eax
// 0045622d  51                   push ecx
// 0045622e  6820c29a00           push 0x9ac220
// 00456233  52                   push edx
// 00456234  e827f3faff           call 0x405560
// 00456239  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000009@@YGHHHH@Z)

namespace ns_ROCX000009 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
