// from server: 100% by auto
// roc 2008-06 0052ae10  unit: seg_00520000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ae10
//
// 0052ae10  53                   push ebx
// 0052ae11  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052ae15  c1e307               shl ebx, 7
// 0052ae18  33d2                 xor edx, edx
// 0052ae1a  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0052ae1f  f7f3                 div ebx
// 0052ae21  55                   push ebp
// 0052ae22  56                   push esi
// 0052ae23  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052ae27  8b6e04               mov ebp, dword ptr [esi + 4]
// 0052ae2a  57                   push edi
// 0052ae2b  8bf8                 mov edi, eax
// 0052ae2d  85ff                 test edi, edi
// 0052ae2f  7f13                 jg 0x52ae44
// 0052ae31  8b06                 mov eax, dword ptr [esi]
// 0052ae33  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 0052ae3a  8b0e                 mov ecx, dword ptr [esi]
// 0052ae3c  8b11                 mov edx, dword ptr [ecx]
// 0052ae3e  56                   push esi
// 0052ae3f  ffd2                 call edx
// 0052ae41  83c404               add esp, 4
// 0052ae44  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052ae48  3bf8                 cmp edi, eax
// 0052ae4a  7c02                 jl 0x52ae4e
// 0052ae4c  8bf8                 mov edi, eax
// 0052ae4e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052ae52  03c0                 add eax, eax
// 0052ae54  03c0                 add eax, eax
// 0052ae56  50                   push eax
// 0052ae57  51                   push ecx
// 0052ae58  56                   push esi
// 0052ae59  897d50               mov dword ptr [ebp + 0x50], edi
// 0052ae5c  e8effcffff           call 0x52ab50
// 0052ae61  33f6                 xor esi, esi
// 0052ae63  83c40c               add esp, 0xc
// 0052ae66  8be8                 mov ebp, eax
// 0052ae68  39742420             cmp dword ptr [esp + 0x20], esi
// 0052ae6c  7644                 jbe 0x52aeb2
// 0052ae6e  8bff                 mov edi, edi
// 0052ae70  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052ae74  2bc6                 sub eax, esi
// 0052ae76  3bf8                 cmp edi, eax
// 0052ae78  7202                 jb 0x52ae7c
// 0052ae7a  8bf8                 mov edi, eax
// 0052ae7c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052ae80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052ae84  8bd7                 mov edx, edi
// 0052ae86  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0052ae8b  c1e207               shl edx, 7
// 0052ae8e  52                   push edx
// 0052ae8f  50                   push eax
// 0052ae90  51                   push ecx
// 0052ae91  e80afeffff           call 0x52aca0
// 0052ae96  83c40c               add esp, 0xc
// 0052ae99  8bcf                 mov ecx, edi
// 0052ae9b  85ff                 test edi, edi
// 0052ae9d  760d                 jbe 0x52aeac
// 0052ae9f  90                   nop 
// 0052aea0  8944b500             mov dword ptr [ebp + esi*4], eax
// 0052aea4  46                   inc esi
// 0052aea5  03c3                 add eax, ebx
// 0052aea7  83e901               sub ecx, 1
// 0052aeaa  75f4                 jne 0x52aea0
// 0052aeac  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0052aeb0  72be                 jb 0x52ae70
// 0052aeb2  5f                   pop edi
// 0052aeb3  5e                   pop esi
// 0052aeb4  8bc5                 mov eax, ebp
// 0052aeb6  5d                   pop ebp
// 0052aeb7  5b                   pop ebx
// 0052aeb8  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
