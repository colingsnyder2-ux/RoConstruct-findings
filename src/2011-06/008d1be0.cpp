// roc 2011-06 008d1be0  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1be0
//
// 008d1be0  53                   push ebx
// 008d1be1  8bd9                 mov ebx, ecx
// 008d1be3  57                   push edi
// 008d1be4  8b7b08               mov edi, dword ptr [ebx + 8]
// 008d1be7  85ff                 test edi, edi
// 008d1be9  743a                 je 0x8d1c25
// 008d1beb  55                   push ebp
// 008d1bec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008d1bf0  56                   push esi
// 008d1bf1  8bc7                 mov eax, edi
// 008d1bf3  8b7008               mov esi, dword ptr [eax + 8]
// 008d1bf6  8b4668               mov eax, dword ptr [esi + 0x68]
// 008d1bf9  8b3f                 mov edi, dword ptr [edi]
// 008d1bfb  3be8                 cmp ebp, eax
// 008d1bfd  7520                 jne 0x8d1c1f
// 008d1bff  8d4e54               lea ecx, [esi + 0x54]
// 008d1c02  85c0                 test eax, eax
// 008d1c04  7403                 je 0x8d1c09
// 008d1c06  8b4020               mov eax, dword ptr [eax + 0x20]
// 008d1c09  51                   push ecx
// 008d1c0a  50                   push eax
// 008d1c0b  e840c1fcff           call 0x89dd50
// 008d1c10  8bc8                 mov ecx, eax
// 008d1c12  e8b9c5fcff           call 0x89e1d0
// 008d1c17  56                   push esi
// 008d1c18  8bcb                 mov ecx, ebx
// 008d1c1a  e8e1feffff           call 0x8d1b00
// 008d1c1f  85ff                 test edi, edi
// 008d1c21  75ce                 jne 0x8d1bf1
// 008d1c23  5e                   pop esi
// 008d1c24  5d                   pop ebp
// 008d1c25  5f                   pop edi
// 008d1c26  5b                   pop ebx
// 008d1c27  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?RemoveShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
