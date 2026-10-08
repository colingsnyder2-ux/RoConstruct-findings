// roc 2007-03 00522ab0  unit: seg_00520000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522ab0
//
// 00522ab0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00522ab4  53                   push ebx
// 00522ab5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00522ab9  55                   push ebp
// 00522aba  33ed                 xor ebp, ebp
// 00522abc  39ab14010000         cmp dword ptr [ebx + 0x114], ebp
// 00522ac2  57                   push edi
// 00522ac3  8b38                 mov edi, dword ptr [eax]
// 00522ac5  7e3f                 jle 0x522b06
// 00522ac7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00522acb  2bd7                 sub edx, edi
// 00522acd  8954241c             mov dword ptr [esp + 0x1c], edx
// 00522ad1  56                   push esi
// 00522ad2  8b07                 mov eax, dword ptr [edi]
// 00522ad4  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 00522ad7  8b343a               mov esi, dword ptr [edx + edi]
// 00522ada  03c8                 add ecx, eax
// 00522adc  3bc1                 cmp eax, ecx
// 00522ade  7317                 jae 0x522af7
// 00522ae0  8a16                 mov dl, byte ptr [esi]
// 00522ae2  8810                 mov byte ptr [eax], dl
// 00522ae4  83c001               add eax, 1
// 00522ae7  8810                 mov byte ptr [eax], dl
// 00522ae9  83c001               add eax, 1
// 00522aec  83c601               add esi, 1
// 00522aef  3bc1                 cmp eax, ecx
// 00522af1  72ed                 jb 0x522ae0
// 00522af3  8b542420             mov edx, dword ptr [esp + 0x20]
// 00522af7  83c501               add ebp, 1
// 00522afa  83c704               add edi, 4
// 00522afd  3bab14010000         cmp ebp, dword ptr [ebx + 0x114]
// 00522b03  7ccd                 jl 0x522ad2
// 00522b05  5e                   pop esi
// 00522b06  5f                   pop edi
// 00522b07  5d                   pop ebp
// 00522b08  5b                   pop ebx
// 00522b09  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v1_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
