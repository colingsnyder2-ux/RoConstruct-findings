// from server: 100% by auto
// roc 2008-06 00533fb0  unit: seg_00530000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533fb0
//
// 00533fb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00533fb4  53                   push ebx
// 00533fb5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00533fb9  55                   push ebp
// 00533fba  33ed                 xor ebp, ebp
// 00533fbc  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 00533fc2  57                   push edi
// 00533fc3  8b38                 mov edi, dword ptr [eax]
// 00533fc5  7e37                 jle 0x533ffe
// 00533fc7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00533fcb  2bd7                 sub edx, edi
// 00533fcd  8954241c             mov dword ptr [esp + 0x1c], edx
// 00533fd1  56                   push esi
// 00533fd2  8b07                 mov eax, dword ptr [edi]
// 00533fd4  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 00533fd7  8b343a               mov esi, dword ptr [edx + edi]
// 00533fda  03c8                 add ecx, eax
// 00533fdc  3bc1                 cmp eax, ecx
// 00533fde  7311                 jae 0x533ff1
// 00533fe0  8a16                 mov dl, byte ptr [esi]
// 00533fe2  8810                 mov byte ptr [eax], dl
// 00533fe4  40                   inc eax
// 00533fe5  8810                 mov byte ptr [eax], dl
// 00533fe7  40                   inc eax
// 00533fe8  46                   inc esi
// 00533fe9  3bc1                 cmp eax, ecx
// 00533feb  72f3                 jb 0x533fe0
// 00533fed  8b542420             mov edx, dword ptr [esp + 0x20]
// 00533ff1  45                   inc ebp
// 00533ff2  83c704               add edi, 4
// 00533ff5  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 00533ffb  7cd5                 jl 0x533fd2
// 00533ffd  5e                   pop esi
// 00533ffe  5f                   pop edi
// 00533fff  5d                   pop ebp
// 00534000  5b                   pop ebx
// 00534001  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
