// roc 2008-06 007a1bf0  unit: CXTButtonThemeOfficeXP  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1bf0
//
// 007a1bf0  56                   push esi
// 007a1bf1  57                   push edi
// 007a1bf2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a1bf6  8bf1                 mov esi, ecx
// 007a1bf8  8b06                 mov eax, dword ptr [esi]
// 007a1bfa  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a1bfd  57                   push edi
// 007a1bfe  ffd2                 call edx
// 007a1c00  85c0                 test eax, eax
// 007a1c02  7412                 je 0x7a1c16
// 007a1c04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a1c08  57                   push edi
// 007a1c09  50                   push eax
// 007a1c0a  8bce                 mov ecx, esi
// 007a1c0c  e8effcffff           call 0x7a1900
// 007a1c11  5f                   pop edi
// 007a1c12  5e                   pop esi
// 007a1c13  c20800               ret 8
// 007a1c16  8a44240c             mov al, byte ptr [esp + 0xc]
// 007a1c1a  a804                 test al, 4
// 007a1c1c  7413                 je 0x7a1c31
// 007a1c1e  e81de1f3ff           call 0x6dfd40
// 007a1c23  6a11                 push 0x11
// 007a1c25  8bc8                 mov ecx, eax
// 007a1c27  e8f4d8f3ff           call 0x6df520
// 007a1c2c  5f                   pop edi
// 007a1c2d  5e                   pop esi
// 007a1c2e  c20800               ret 8
// 007a1c31  a801                 test al, 1
// 007a1c33  7416                 je 0x7a1c4b
// 007a1c35  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 007a1c3b  83f8ff               cmp eax, -1
// 007a1c3e  7540                 jne 0x7a1c80
// 007a1c40  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007a1c46  5f                   pop edi
// 007a1c47  5e                   pop esi
// 007a1c48  c20800               ret 8
// 007a1c4b  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007a1c52  750b                 jne 0x7a1c5f
// 007a1c54  ff15ac2d8000         call dword ptr [0x802dac]
// 007a1c5a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 007a1c5d  7516                 jne 0x7a1c75
// 007a1c5f  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 007a1c65  83f8ff               cmp eax, -1
// 007a1c68  7516                 jne 0x7a1c80
// 007a1c6a  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 007a1c70  5f                   pop edi
// 007a1c71  5e                   pop esi
// 007a1c72  c20800               ret 8
// 007a1c75  8b4634               mov eax, dword ptr [esi + 0x34]
// 007a1c78  83f8ff               cmp eax, -1
// 007a1c7b  7503                 jne 0x7a1c80
// 007a1c7d  8b4630               mov eax, dword ptr [esi + 0x30]
// 007a1c80  5f                   pop edi
// 007a1c81  5e                   pop esi
// 007a1c82  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
