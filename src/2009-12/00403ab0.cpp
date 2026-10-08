// roc 2009-12 00403ab0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00403ab0
//
// 00403ab0  57                   push edi
// 00403ab1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00403ab5  83ef01               sub edi, 1
// 00403ab8  7824                 js 0x403ade
// 00403aba  53                   push ebx
// 00403abb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00403abf  55                   push ebp
// 00403ac0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00403ac4  56                   push esi
// 00403ac5  8b742414             mov esi, dword ptr [esp + 0x14]
// 00403ac9  8da42400000000       lea esp, [esp]
// 00403ad0  8bce                 mov ecx, esi
// 00403ad2  ffd3                 call ebx
// 00403ad4  03f5                 add esi, ebp
// 00403ad6  83ef01               sub edi, 1
// 00403ad9  79f5                 jns 0x403ad0
// 00403adb  5e                   pop esi
// 00403adc  5d                   pop ebp
// 00403add  5b                   pop ebx
// 00403ade  5f                   pop edi
// 00403adf  c21000               ret 0x10
// library rbxgs-appdraw/AdornG3D.cpp (function ??_H@YGXPAXIHP6EPAX0@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
