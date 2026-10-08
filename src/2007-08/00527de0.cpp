// from server: 100% by auto
// roc 2007-08 00527de0  unit: G3D::Line  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527de0
//
// 00527de0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527de4  53                   push ebx
// 00527de5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00527de9  55                   push ebp
// 00527dea  33ed                 xor ebp, ebp
// 00527dec  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 00527df2  57                   push edi
// 00527df3  8b38                 mov edi, dword ptr [eax]
// 00527df5  7e3f                 jle 0x527e36
// 00527df7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00527dfb  2bd7                 sub edx, edi
// 00527dfd  8954241c             mov dword ptr [esp + 0x1c], edx
// 00527e01  56                   push esi
// 00527e02  8b07                 mov eax, dword ptr [edi]
// 00527e04  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 00527e07  8b343a               mov esi, dword ptr [edx + edi]
// 00527e0a  03c8                 add ecx, eax
// 00527e0c  3bc1                 cmp eax, ecx
// 00527e0e  7317                 jae 0x527e27
// 00527e10  8a16                 mov dl, byte ptr [esi]
// 00527e12  8810                 mov byte ptr [eax], dl
// 00527e14  83c001               add eax, 1
// 00527e17  8810                 mov byte ptr [eax], dl
// 00527e19  83c001               add eax, 1
// 00527e1c  83c601               add esi, 1
// 00527e1f  3bc1                 cmp eax, ecx
// 00527e21  72ed                 jb 0x527e10
// 00527e23  8b542420             mov edx, dword ptr [esp + 0x20]
// 00527e27  83c501               add ebp, 1
// 00527e2a  83c704               add edi, 4
// 00527e2d  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 00527e33  7ccd                 jl 0x527e02
// 00527e35  5e                   pop esi
// 00527e36  5f                   pop edi
// 00527e37  5d                   pop ebp
// 00527e38  5b                   pop ebx
// 00527e39  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
