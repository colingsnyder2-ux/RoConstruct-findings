// roc 2009-06 008099f0  unit: CXTCaptionThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008099f0
//
// 008099f0  6aff                 push -1
// 008099f2  68382a8800           push 0x882a38
// 008099f7  64a100000000         mov eax, dword ptr fs:[0]
// 008099fd  50                   push eax
// 008099fe  51                   push ecx
// 008099ff  56                   push esi
// 00809a00  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00809a05  33c4                 xor eax, esp
// 00809a07  50                   push eax
// 00809a08  8d44240c             lea eax, [esp + 0xc]
// 00809a0c  64a300000000         mov dword ptr fs:[0], eax
// 00809a12  8bf1                 mov esi, ecx
// 00809a14  89742408             mov dword ptr [esp + 8], esi
// 00809a18  e84354f7ff           call 0x77ee60
// 00809a1d  8d4e14               lea ecx, [esi + 0x14]
// 00809a20  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00809a28  c7067cbf9000         mov dword ptr [esi], 0x90bf7c
// 00809a2e  e87da5f4ff           call 0x753fb0
// 00809a33  8d4e20               lea ecx, [esi + 0x20]
// 00809a36  e875a5f4ff           call 0x753fb0
// 00809a3b  8bc6                 mov eax, esi
// 00809a3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00809a41  64890d00000000       mov dword ptr fs:[0], ecx
// 00809a48  59                   pop ecx
// 00809a49  5e                   pop esi
// 00809a4a  83c410               add esp, 0x10
// 00809a4d  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp