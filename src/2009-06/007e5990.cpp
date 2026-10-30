// roc 2009-06 007e5990  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e5990
//
// 007e5990  53                   push ebx
// 007e5991  8bd9                 mov ebx, ecx
// 007e5993  57                   push edi
// 007e5994  8b7b08               mov edi, dword ptr [ebx + 8]
// 007e5997  85ff                 test edi, edi
// 007e5999  743a                 je 0x7e59d5
// 007e599b  55                   push ebp
// 007e599c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007e59a0  56                   push esi
// 007e59a1  8bc7                 mov eax, edi
// 007e59a3  8b7008               mov esi, dword ptr [eax + 8]
// 007e59a6  8b4668               mov eax, dword ptr [esi + 0x68]
// 007e59a9  8b3f                 mov edi, dword ptr [edi]
// 007e59ab  3be8                 cmp ebp, eax
// 007e59ad  7520                 jne 0x7e59cf
// 007e59af  8d4e54               lea ecx, [esi + 0x54]
// 007e59b2  85c0                 test eax, eax
// 007e59b4  7403                 je 0x7e59b9
// 007e59b6  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e59b9  51                   push ecx
// 007e59ba  50                   push eax
// 007e59bb  e8b0dbfaff           call 0x793570
// 007e59c0  8bc8                 mov ecx, eax
// 007e59c2  e829e0faff           call 0x7939f0
// 007e59c7  56                   push esi
// 007e59c8  8bcb                 mov ecx, ebx
// 007e59ca  e8b1feffff           call 0x7e5880
// 007e59cf  85ff                 test edi, edi
// 007e59d1  75ce                 jne 0x7e59a1
// 007e59d3  5e                   pop esi
// 007e59d4  5d                   pop ebp
// 007e59d5  5f                   pop edi
// 007e59d6  5b                   pop ebx
// 007e59d7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?RemoveShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
