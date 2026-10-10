// roc 2008-06 00707230  unit: CXTPDockingPane  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707230
//
// 00707230  56                   push esi
// 00707231  8b742408             mov esi, dword ptr [esp + 8]
// 00707235  57                   push edi
// 00707236  8bf9                 mov edi, ecx
// 00707238  85f6                 test esi, esi
// 0070723a  7417                 je 0x707253
// 0070723c  8d4f20               lea ecx, [edi + 0x20]
// 0070723f  e85c620500           call 0x75d4a0
// 00707244  8b10                 mov edx, dword ptr [eax]
// 00707246  57                   push edi
// 00707247  8bc8                 mov ecx, eax
// 00707249  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0070724f  6a01                 push 1
// 00707251  ffd0                 call eax
// 00707253  8bbfb4000000         mov edi, dword ptr [edi + 0xb4]
// 00707259  85ff                 test edi, edi
// 0070725b  740f                 je 0x70726c
// 0070725d  f7de                 neg esi
// 0070725f  1bf6                 sbb esi, esi
// 00707261  83e605               and esi, 5
// 00707264  56                   push esi
// 00707265  57                   push edi
// 00707266  ff15bc2c8000         call dword ptr [0x802cbc]
// 0070726c  5f                   pop edi
// 0070726d  5e                   pop esi
// 0070726e  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPane.cpp (function ?ShowWindow@CXTPDockingPane@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp
