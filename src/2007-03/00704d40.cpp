// roc 2007-03 00704d40  unit: seg_00700000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704d40
//
// 00704d40  53                   push ebx
// 00704d41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00704d45  56                   push esi
// 00704d46  8b742410             mov esi, dword ptr [esp + 0x10]
// 00704d4a  8b5604               mov edx, dword ptr [esi + 4]
// 00704d4d  57                   push edi
// 00704d4e  83ec10               sub esp, 0x10
// 00704d51  8bc4                 mov eax, esp
// 00704d53  8bf9                 mov edi, ecx
// 00704d55  8b0e                 mov ecx, dword ptr [esi]
// 00704d57  8908                 mov dword ptr [eax], ecx
// 00704d59  8b4e08               mov ecx, dword ptr [esi + 8]
// 00704d5c  895004               mov dword ptr [eax + 4], edx
// 00704d5f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00704d62  894808               mov dword ptr [eax + 8], ecx
// 00704d65  53                   push ebx
// 00704d66  6a01                 push 1
// 00704d68  8bcf                 mov ecx, edi
// 00704d6a  89500c               mov dword ptr [eax + 0xc], edx
// 00704d6d  e80efeffff           call 0x704b80
// 00704d72  8b0e                 mov ecx, dword ptr [esi]
// 00704d74  8b5604               mov edx, dword ptr [esi + 4]
// 00704d77  83ec10               sub esp, 0x10
// 00704d7a  8bc4                 mov eax, esp
// 00704d7c  8908                 mov dword ptr [eax], ecx
// 00704d7e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00704d81  895004               mov dword ptr [eax + 4], edx
// 00704d84  8b560c               mov edx, dword ptr [esi + 0xc]
// 00704d87  894808               mov dword ptr [eax + 8], ecx
// 00704d8a  53                   push ebx
// 00704d8b  6a00                 push 0
// 00704d8d  8bcf                 mov ecx, edi
// 00704d8f  89500c               mov dword ptr [eax + 0xc], edx
// 00704d92  e8e9fdffff           call 0x704b80
// 00704d97  5f                   pop edi
// 00704d98  5e                   pop esi
// 00704d99  5b                   pop ebx
// 00704d9a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?SetShadow@CXTShadowsManager@@QAEXPAUHWND__@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
