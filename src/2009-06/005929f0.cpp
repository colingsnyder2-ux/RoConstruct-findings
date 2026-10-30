// from server: 100% by auto
// roc 2009-06 005929f0  unit: seg_00590000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005929f0
//
// 005929f0  53                   push ebx
// 005929f1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005929f5  c1e307               shl ebx, 7
// 005929f8  33d2                 xor edx, edx
// 005929fa  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 005929ff  f7f3                 div ebx
// 00592a01  55                   push ebp
// 00592a02  56                   push esi
// 00592a03  8b742410             mov esi, dword ptr [esp + 0x10]
// 00592a07  8b6e04               mov ebp, dword ptr [esi + 4]
// 00592a0a  57                   push edi
// 00592a0b  8bf8                 mov edi, eax
// 00592a0d  85ff                 test edi, edi
// 00592a0f  7f13                 jg 0x592a24
// 00592a11  8b06                 mov eax, dword ptr [esi]
// 00592a13  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 00592a1a  8b0e                 mov ecx, dword ptr [esi]
// 00592a1c  8b11                 mov edx, dword ptr [ecx]
// 00592a1e  56                   push esi
// 00592a1f  ffd2                 call edx
// 00592a21  83c404               add esp, 4
// 00592a24  8b442420             mov eax, dword ptr [esp + 0x20]
// 00592a28  3bf8                 cmp edi, eax
// 00592a2a  7c02                 jl 0x592a2e
// 00592a2c  8bf8                 mov edi, eax
// 00592a2e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00592a32  03c0                 add eax, eax
// 00592a34  03c0                 add eax, eax
// 00592a36  50                   push eax
// 00592a37  51                   push ecx
// 00592a38  56                   push esi
// 00592a39  897d50               mov dword ptr [ebp + 0x50], edi
// 00592a3c  e8effcffff           call 0x592730
// 00592a41  33f6                 xor esi, esi
// 00592a43  83c40c               add esp, 0xc
// 00592a46  8be8                 mov ebp, eax
// 00592a48  39742420             cmp dword ptr [esp + 0x20], esi
// 00592a4c  7644                 jbe 0x592a92
// 00592a4e  8bff                 mov edi, edi
// 00592a50  8b442420             mov eax, dword ptr [esp + 0x20]
// 00592a54  2bc6                 sub eax, esi
// 00592a56  3bf8                 cmp edi, eax
// 00592a58  7202                 jb 0x592a5c
// 00592a5a  8bf8                 mov edi, eax
// 00592a5c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00592a60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00592a64  8bd7                 mov edx, edi
// 00592a66  0faf54241c           imul edx, dword ptr [esp + 0x1c]
// 00592a6b  c1e207               shl edx, 7
// 00592a6e  52                   push edx
// 00592a6f  50                   push eax
// 00592a70  51                   push ecx
// 00592a71  e80afeffff           call 0x592880
// 00592a76  83c40c               add esp, 0xc
// 00592a79  8bcf                 mov ecx, edi
// 00592a7b  85ff                 test edi, edi
// 00592a7d  760d                 jbe 0x592a8c
// 00592a7f  90                   nop 
// 00592a80  8944b500             mov dword ptr [ebp + esi*4], eax
// 00592a84  46                   inc esi
// 00592a85  03c3                 add eax, ebx
// 00592a87  83e901               sub ecx, 1
// 00592a8a  75f4                 jne 0x592a80
// 00592a8c  3b742420             cmp esi, dword ptr [esp + 0x20]
// 00592a90  72be                 jb 0x592a50
// 00592a92  5f                   pop edi
// 00592a93  5e                   pop esi
// 00592a94  8bc5                 mov eax, ebp
// 00592a96  5d                   pop ebp
// 00592a97  5b                   pop ebx
// 00592a98  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
