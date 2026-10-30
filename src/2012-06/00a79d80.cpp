// roc 2012-06 00a79d80  unit: CXTButtonThemeOfficeXP  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79d80
//
// 00a79d80  56                   push esi
// 00a79d81  57                   push edi
// 00a79d82  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a79d86  8bf1                 mov esi, ecx
// 00a79d88  8b06                 mov eax, dword ptr [esi]
// 00a79d8a  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a79d8d  57                   push edi
// 00a79d8e  ffd2                 call edx
// 00a79d90  85c0                 test eax, eax
// 00a79d92  7412                 je 0xa79da6
// 00a79d94  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a79d98  57                   push edi
// 00a79d99  50                   push eax
// 00a79d9a  8bce                 mov ecx, esi
// 00a79d9c  e8effcffff           call 0xa79a90
// 00a79da1  5f                   pop edi
// 00a79da2  5e                   pop esi
// 00a79da3  c20800               ret 8
// 00a79da6  8a44240c             mov al, byte ptr [esp + 0xc]
// 00a79daa  a804                 test al, 4
// 00a79dac  7413                 je 0xa79dc1
// 00a79dae  e8ad3af4ff           call 0x9bd860
// 00a79db3  6a11                 push 0x11
// 00a79db5  8bc8                 mov ecx, eax
// 00a79db7  e82432f4ff           call 0x9bcfe0
// 00a79dbc  5f                   pop edi
// 00a79dbd  5e                   pop esi
// 00a79dbe  c20800               ret 8
// 00a79dc1  a801                 test al, 1
// 00a79dc3  7416                 je 0xa79ddb
// 00a79dc5  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00a79dcb  83f8ff               cmp eax, -1
// 00a79dce  7540                 jne 0xa79e10
// 00a79dd0  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00a79dd6  5f                   pop edi
// 00a79dd7  5e                   pop esi
// 00a79dd8  c20800               ret 8
// 00a79ddb  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00a79de2  750b                 jne 0xa79def
// 00a79de4  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a79dea  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00a79ded  7516                 jne 0xa79e05
// 00a79def  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00a79df5  83f8ff               cmp eax, -1
// 00a79df8  7516                 jne 0xa79e10
// 00a79dfa  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00a79e00  5f                   pop edi
// 00a79e01  5e                   pop esi
// 00a79e02  c20800               ret 8
// 00a79e05  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a79e08  83f8ff               cmp eax, -1
// 00a79e0b  7503                 jne 0xa79e10
// 00a79e0d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a79e10  5f                   pop edi
// 00a79e11  5e                   pop esi
// 00a79e12  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
