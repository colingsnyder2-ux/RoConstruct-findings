// roc 2012-06 009e8d60  unit: CXTColorDialog  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e8d60
//
// 009e8d60  53                   push ebx
// 009e8d61  56                   push esi
// 009e8d62  57                   push edi
// 009e8d63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009e8d67  57                   push edi
// 009e8d68  e8590e0b00           call 0xa99bc6
// 009e8d6d  e87ef70000           call 0x9f84f0
// 009e8d72  8bd8                 mov ebx, eax
// 009e8d74  8b33                 mov esi, dword ptr [ebx]
// 009e8d76  8bcf                 mov ecx, edi
// 009e8d78  83c61c               add esi, 0x1c
// 009e8d7b  e8400e0b00           call 0xa99bc0
// 009e8d80  8b400c               mov eax, dword ptr [eax + 0xc]
// 009e8d83  8b16                 mov edx, dword ptr [esi]
// 009e8d85  50                   push eax
// 009e8d86  8bcb                 mov ecx, ebx
// 009e8d88  ffd2                 call edx
// 009e8d8a  8bf0                 mov esi, eax
// 009e8d8c  85f6                 test esi, esi
// 009e8d8e  7417                 je 0x9e8da7
// 009e8d90  8bcf                 mov ecx, edi
// 009e8d92  e8290e0b00           call 0xa99bc0
// 009e8d97  8bcf                 mov ecx, edi
// 009e8d99  89700c               mov dword ptr [eax + 0xc], esi
// 009e8d9c  e81f0e0b00           call 0xa99bc0
// 009e8da1  83c004               add eax, 4
// 009e8da4  830801               or dword ptr [eax], 1
// 009e8da7  5f                   pop edi
// 009e8da8  5e                   pop esi
// 009e8da9  5b                   pop ebx
// 009e8daa  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorDialog.cpp (function ?AddPage@CXTPColorDialog@@IAEXPAVCPropertyPage@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorDialog.cpp
