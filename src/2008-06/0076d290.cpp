// roc 2008-06 0076d290  unit: PAVCXTPDockingPaneBase::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076d290
//
// 0076d290  53                   push ebx
// 0076d291  8bd9                 mov ebx, ecx
// 0076d293  57                   push edi
// 0076d294  8b7b08               mov edi, dword ptr [ebx + 8]
// 0076d297  85ff                 test edi, edi
// 0076d299  743a                 je 0x76d2d5
// 0076d29b  55                   push ebp
// 0076d29c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0076d2a0  56                   push esi
// 0076d2a1  8bc7                 mov eax, edi
// 0076d2a3  8b7008               mov esi, dword ptr [eax + 8]
// 0076d2a6  8b4668               mov eax, dword ptr [esi + 0x68]
// 0076d2a9  8b3f                 mov edi, dword ptr [edi]
// 0076d2ab  3be8                 cmp ebp, eax
// 0076d2ad  7520                 jne 0x76d2cf
// 0076d2af  8d4e54               lea ecx, [esi + 0x54]
// 0076d2b2  85c0                 test eax, eax
// 0076d2b4  7403                 je 0x76d2b9
// 0076d2b6  8b4020               mov eax, dword ptr [eax + 0x20]
// 0076d2b9  51                   push ecx
// 0076d2ba  50                   push eax
// 0076d2bb  e880f4faff           call 0x71c740
// 0076d2c0  8bc8                 mov ecx, eax
// 0076d2c2  e8f9f8faff           call 0x71cbc0
// 0076d2c7  56                   push esi
// 0076d2c8  8bcb                 mov ecx, ebx
// 0076d2ca  e861feffff           call 0x76d130
// 0076d2cf  85ff                 test edi, edi
// 0076d2d1  75ce                 jne 0x76d2a1
// 0076d2d3  5e                   pop esi
// 0076d2d4  5d                   pop ebp
// 0076d2d5  5f                   pop edi
// 0076d2d6  5b                   pop ebx
// 0076d2d7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?RemoveShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
