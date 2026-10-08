// from server: 100% by auto
// roc 2008-06 0070da30  unit: CXTThemeManagerStyle  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070da30
//
// 0070da30  56                   push esi
// 0070da31  8b742408             mov esi, dword ptr [esp + 8]
// 0070da35  85f6                 test esi, esi
// 0070da37  7506                 jne 0x70da3f
// 0070da39  33c0                 xor eax, eax
// 0070da3b  5e                   pop esi
// 0070da3c  c20400               ret 4
// 0070da3f  57                   push edi
// 0070da40  8d44240c             lea eax, [esp + 0xc]
// 0070da44  8d7904               lea edi, [ecx + 4]
// 0070da47  50                   push eax
// 0070da48  56                   push esi
// 0070da49  8bcf                 mov ecx, edi
// 0070da4b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0070da53  e8b0ed0a00           call 0x7bc808
// 0070da58  85c0                 test eax, eax
// 0070da5a  7519                 jne 0x70da75
// 0070da5c  53                   push ebx
// 0070da5d  8bce                 mov ecx, esi
// 0070da5f  e85e35f9ff           call 0x6a0fc2
// 0070da64  56                   push esi
// 0070da65  8bcf                 mov ecx, edi
// 0070da67  89442414             mov dword ptr [esp + 0x14], eax
// 0070da6b  8bd8                 mov ebx, eax
// 0070da6d  e8c8eb0a00           call 0x7bc63a
// 0070da72  8918                 mov dword ptr [eax], ebx
// 0070da74  5b                   pop ebx
// 0070da75  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070da79  5f                   pop edi
// 0070da7a  5e                   pop esi
// 0070da7b  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ?GetDefaultThemeFactory@CXTThemeManager@@QAEPAVCXTThemeManagerStyleFactory@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
