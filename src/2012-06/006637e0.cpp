// from server: 100% by auto
// roc 2012-06 006637e0  unit: seg_00660000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006637e0
//
// 006637e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006637e4  53                   push ebx
// 006637e5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006637e9  55                   push ebp
// 006637ea  33ed                 xor ebp, ebp
// 006637ec  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 006637f2  57                   push edi
// 006637f3  8b38                 mov edi, dword ptr [eax]
// 006637f5  7e37                 jle 0x66382e
// 006637f7  8b542418             mov edx, dword ptr [esp + 0x18]
// 006637fb  2bd7                 sub edx, edi
// 006637fd  8954241c             mov dword ptr [esp + 0x1c], edx
// 00663801  56                   push esi
// 00663802  8b07                 mov eax, dword ptr [edi]
// 00663804  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 00663807  8b343a               mov esi, dword ptr [edx + edi]
// 0066380a  03c8                 add ecx, eax
// 0066380c  3bc1                 cmp eax, ecx
// 0066380e  7311                 jae 0x663821
// 00663810  8a16                 mov dl, byte ptr [esi]
// 00663812  8810                 mov byte ptr [eax], dl
// 00663814  40                   inc eax
// 00663815  8810                 mov byte ptr [eax], dl
// 00663817  40                   inc eax
// 00663818  46                   inc esi
// 00663819  3bc1                 cmp eax, ecx
// 0066381b  72f3                 jb 0x663810
// 0066381d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00663821  45                   inc ebp
// 00663822  83c704               add edi, 4
// 00663825  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 0066382b  7cd5                 jl 0x663802
// 0066382d  5e                   pop esi
// 0066382e  5f                   pop edi
// 0066382f  5d                   pop ebp
// 00663830  5b                   pop ebx
// 00663831  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
