// roc 2007-08 0051f5e0  unit: seg_00510000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f5e0
//
// 0051f5e0  53                   push ebx
// 0051f5e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051f5e5  c1e307               shl ebx, 7
// 0051f5e8  33d2                 xor edx, edx
// 0051f5ea  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0051f5ef  f7f3                 div ebx
// 0051f5f1  55                   push ebp
// 0051f5f2  56                   push esi
// 0051f5f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051f5f7  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051f5fa  57                   push edi
// 0051f5fb  8bf8                 mov edi, eax
// 0051f5fd  85ff                 test edi, edi
// 0051f5ff  7f13                 jg 0x51f614
// 0051f601  8b06                 mov eax, dword ptr [esi]
// 0051f603  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 0051f60a  8b0e                 mov ecx, dword ptr [esi]
// 0051f60c  8b11                 mov edx, dword ptr [ecx]
// 0051f60e  56                   push esi
// 0051f60f  ffd2                 call edx
// 0051f611  83c404               add esp, 4
// 0051f614  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051f618  3bf8                 cmp edi, eax
// 0051f61a  7c02                 jl 0x51f61e
// 0051f61c  8bf8                 mov edi, eax
// 0051f61e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051f622  03c0                 add eax, eax
// 0051f624  03c0                 add eax, eax
// 0051f626  50                   push eax
// 0051f627  51                   push ecx
// 0051f628  56                   push esi
// 0051f629  897d50               mov dword ptr [ebp + 0x50], edi
// 0051f62c  e82ffdffff           call 0x51f360
// 0051f631  33f6                 xor esi, esi
// 0051f633  83c40c               add esp, 0xc
// 0051f636  39742420             cmp dword ptr [esp + 0x20], esi
// 0051f63a  8be8                 mov ebp, eax
// 0051f63c  7646                 jbe 0x51f684
// 0051f63e  8bff                 mov edi, edi
// 0051f640  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051f644  2bc6                 sub eax, esi
// 0051f646  3bf8                 cmp edi, eax
// 0051f648  7202                 jb 0x51f64c
// 0051f64a  8bf8                 mov edi, eax
// 0051f64c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051f650  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051f654  8bd7                 mov edx, edi
// 0051f656  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 0051f65b  c1e207               shl edx, 7
// 0051f65e  52                   push edx
// 0051f65f  50                   push eax
// 0051f660  51                   push ecx
// 0051f661  e82afeffff           call 0x51f490
// 0051f666  83c40c               add esp, 0xc
// 0051f669  85ff                 test edi, edi
// 0051f66b  8bcf                 mov ecx, edi
// 0051f66d  760f                 jbe 0x51f67e
// 0051f66f  90                   nop 
// 0051f670  8944b500             mov dword ptr [ebp + esi*4], eax
// 0051f674  83c601               add esi, 1
// 0051f677  03c3                 add eax, ebx
// 0051f679  83e901               sub ecx, 1
// 0051f67c  75f2                 jne 0x51f670
// 0051f67e  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0051f682  72bc                 jb 0x51f640
// 0051f684  5f                   pop edi
// 0051f685  5e                   pop esi
// 0051f686  8bc5                 mov eax, ebp
// 0051f688  5d                   pop ebp
// 0051f689  5b                   pop ebx
// 0051f68a  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_barray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
