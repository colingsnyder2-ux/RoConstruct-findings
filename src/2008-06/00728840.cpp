// from server: 100% by auto
// roc 2008-06 00728840  unit: RBX::KeyboardPrimaryController  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728840
//
// 00728840  53                   push ebx
// 00728841  56                   push esi
// 00728842  57                   push edi
// 00728843  8bf1                 mov esi, ecx
// 00728845  e8368a0500           call 0x781280
// 0072884a  8b1d102d8000         mov ebx, dword ptr [0x802d10]
// 00728850  6a00                 push 0
// 00728852  6a04                 push 4
// 00728854  6a02                 push 2
// 00728856  6a02                 push 2
// 00728858  8d7e04               lea edi, [esi + 4]
// 0072885b  57                   push edi
// 0072885c  c706a4188600         mov dword ptr [esi], 0x8618a4
// 00728862  ffd3                 call ebx
// 00728864  8b442410             mov eax, dword ptr [esp + 0x10]
// 00728868  6a00                 push 0
// 0072886a  6a00                 push 0
// 0072886c  6a01                 push 1
// 0072886e  6a00                 push 0
// 00728870  57                   push edi
// 00728871  c7462401000000       mov dword ptr [esi + 0x24], 1
// 00728878  c7462800000000       mov dword ptr [esi + 0x28], 0
// 0072887f  c706b41a8600         mov dword ptr [esi], 0x861ab4
// 00728885  89462c               mov dword ptr [esi + 0x2c], eax
// 00728888  ffd3                 call ebx
// 0072888a  5f                   pop edi
// 0072888b  8bc6                 mov eax, esi
// 0072888d  5e                   pop esi
// 0072888e  5b                   pop ebx
// 0072888f  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ??0CRibbonAppearanceSet@CXTPRibbonTheme@@QAE@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
