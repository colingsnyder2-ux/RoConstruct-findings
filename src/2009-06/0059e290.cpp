// roc 2009-06 0059e290  unit: seg_00590000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e290
//
// 0059e290  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059e294  53                   push ebx
// 0059e295  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0059e299  55                   push ebp
// 0059e29a  33ed                 xor ebp, ebp
// 0059e29c  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 0059e2a2  57                   push edi
// 0059e2a3  8b38                 mov edi, dword ptr [eax]
// 0059e2a5  7e37                 jle 0x59e2de
// 0059e2a7  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059e2ab  2bd7                 sub edx, edi
// 0059e2ad  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059e2b1  56                   push esi
// 0059e2b2  8b07                 mov eax, dword ptr [edi]
// 0059e2b4  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 0059e2b7  8b343a               mov esi, dword ptr [edx + edi]
// 0059e2ba  03c8                 add ecx, eax
// 0059e2bc  3bc1                 cmp eax, ecx
// 0059e2be  7311                 jae 0x59e2d1
// 0059e2c0  8a16                 mov dl, byte ptr [esi]
// 0059e2c2  8810                 mov byte ptr [eax], dl
// 0059e2c4  40                   inc eax
// 0059e2c5  8810                 mov byte ptr [eax], dl
// 0059e2c7  40                   inc eax
// 0059e2c8  46                   inc esi
// 0059e2c9  3bc1                 cmp eax, ecx
// 0059e2cb  72f3                 jb 0x59e2c0
// 0059e2cd  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059e2d1  45                   inc ebp
// 0059e2d2  83c704               add edi, 4
// 0059e2d5  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 0059e2db  7cd5                 jl 0x59e2b2
// 0059e2dd  5e                   pop esi
// 0059e2de  5f                   pop edi
// 0059e2df  5d                   pop ebp
// 0059e2e0  5b                   pop ebx
// 0059e2e1  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
