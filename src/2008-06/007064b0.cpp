// from server: 100% by auto
// roc 2008-06 007064b0  unit: CXTColorDialog  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007064b0
//
// 007064b0  53                   push ebx
// 007064b1  56                   push esi
// 007064b2  57                   push edi
// 007064b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007064b7  57                   push edi
// 007064b8  e82b5f0b00           call 0x7bc3e8
// 007064bd  e87e950100           call 0x71fa40
// 007064c2  8bd8                 mov ebx, eax
// 007064c4  8b33                 mov esi, dword ptr [ebx]
// 007064c6  8bcf                 mov ecx, edi
// 007064c8  83c61c               add esi, 0x1c
// 007064cb  e8125f0b00           call 0x7bc3e2
// 007064d0  8b400c               mov eax, dword ptr [eax + 0xc]
// 007064d3  8b16                 mov edx, dword ptr [esi]
// 007064d5  50                   push eax
// 007064d6  8bcb                 mov ecx, ebx
// 007064d8  ffd2                 call edx
// 007064da  8bf0                 mov esi, eax
// 007064dc  85f6                 test esi, esi
// 007064de  7417                 je 0x7064f7
// 007064e0  8bcf                 mov ecx, edi
// 007064e2  e8fb5e0b00           call 0x7bc3e2
// 007064e7  8bcf                 mov ecx, edi
// 007064e9  89700c               mov dword ptr [eax + 0xc], esi
// 007064ec  e8f15e0b00           call 0x7bc3e2
// 007064f1  83c004               add eax, 4
// 007064f4  830801               or dword ptr [eax], 1
// 007064f7  5f                   pop edi
// 007064f8  5e                   pop esi
// 007064f9  5b                   pop ebx
// 007064fa  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorDialog.cpp (function ?AddPage@CXTColorDialog@@IAEXPAVCPropertyPage@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorDialog.cpp
