// roc 2007-03 00522b10  unit: seg_00520000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522b10
//
// 00522b10  8b442410             mov eax, dword ptr [esp + 0x10]
// 00522b14  53                   push ebx
// 00522b15  8b18                 mov ebx, dword ptr [eax]
// 00522b17  55                   push ebp
// 00522b18  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00522b1c  56                   push esi
// 00522b1d  33f6                 xor esi, esi
// 00522b1f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00522b25  7e54                 jle 0x522b7b
// 00522b27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00522b2b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00522b2f  57                   push edi
// 00522b30  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00522b33  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00522b36  8b542420             mov edx, dword ptr [esp + 0x20]
// 00522b3a  8b3a                 mov edi, dword ptr [edx]
// 00522b3c  03c8                 add ecx, eax
// 00522b3e  3bc1                 cmp eax, ecx
// 00522b40  7313                 jae 0x522b55
// 00522b42  8a17                 mov dl, byte ptr [edi]
// 00522b44  8810                 mov byte ptr [eax], dl
// 00522b46  83c001               add eax, 1
// 00522b49  8810                 mov byte ptr [eax], dl
// 00522b4b  83c001               add eax, 1
// 00522b4e  83c701               add edi, 1
// 00522b51  3bc1                 cmp eax, ecx
// 00522b53  72ed                 jb 0x522b42
// 00522b55  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00522b58  50                   push eax
// 00522b59  6a01                 push 1
// 00522b5b  8d4e01               lea ecx, [esi + 1]
// 00522b5e  51                   push ecx
// 00522b5f  53                   push ebx
// 00522b60  56                   push esi
// 00522b61  53                   push ebx
// 00522b62  e8d91affff           call 0x514640
// 00522b67  8344243804           add dword ptr [esp + 0x38], 4
// 00522b6c  83c602               add esi, 2
// 00522b6f  83c418               add esp, 0x18
// 00522b72  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 00522b78  7cb6                 jl 0x522b30
// 00522b7a  5f                   pop edi
// 00522b7b  5e                   pop esi
// 00522b7c  5d                   pop ebp
// 00522b7d  5b                   pop ebx
// 00522b7e  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
