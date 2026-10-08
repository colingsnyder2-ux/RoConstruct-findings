// roc 2007-03 004c3be0  unit: seg_004c0000  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3be0
//
// 004c3be0  6aff                 push -1
// 004c3be2  6804d07400           push 0x74d004
// 004c3be7  64a100000000         mov eax, dword ptr fs:[0]
// 004c3bed  50                   push eax
// 004c3bee  64892500000000       mov dword ptr fs:[0], esp
// 004c3bf5  83ec0c               sub esp, 0xc
// 004c3bf8  53                   push ebx
// 004c3bf9  56                   push esi
// 004c3bfa  57                   push edi
// 004c3bfb  8bf9                 mov edi, ecx
// 004c3bfd  897c240c             mov dword ptr [esp + 0xc], edi
// 004c3c01  8b4720               mov eax, dword ptr [edi + 0x20]
// 004c3c04  8b08                 mov ecx, dword ptr [eax]
// 004c3c06  8d771c               lea esi, [edi + 0x1c]
// 004c3c09  50                   push eax
// 004c3c0a  56                   push esi
// 004c3c0b  51                   push ecx
// 004c3c0c  56                   push esi
// 004c3c0d  8d442420             lea eax, [esp + 0x20]
// 004c3c11  50                   push eax
// 004c3c12  8bce                 mov ecx, esi
// 004c3c14  c744243404000000     mov dword ptr [esp + 0x34], 4
// 004c3c1c  e88ffaffff           call 0x4c36b0
// 004c3c21  8b4604               mov eax, dword ptr [esi + 4]
// 004c3c24  50                   push eax
// 004c3c25  e8c6a41500           call 0x61e0f0
// 004c3c2a  33db                 xor ebx, ebx
// 004c3c2c  895e04               mov dword ptr [esi + 4], ebx
// 004c3c2f  895e08               mov dword ptr [esi + 8], ebx
// 004c3c32  8b4714               mov eax, dword ptr [edi + 0x14]
// 004c3c35  8b08                 mov ecx, dword ptr [eax]
// 004c3c37  83c404               add esp, 4
// 004c3c3a  8d7710               lea esi, [edi + 0x10]
// 004c3c3d  50                   push eax
// 004c3c3e  56                   push esi
// 004c3c3f  51                   push ecx
// 004c3c40  56                   push esi
// 004c3c41  8d4c2420             lea ecx, [esp + 0x20]
// 004c3c45  51                   push ecx
// 004c3c46  8bce                 mov ecx, esi
// 004c3c48  c644243403           mov byte ptr [esp + 0x34], 3
// 004c3c4d  e85efaffff           call 0x4c36b0
// 004c3c52  8b4604               mov eax, dword ptr [esi + 4]
// 004c3c55  50                   push eax
// 004c3c56  e895a41500           call 0x61e0f0
// 004c3c5b  895e04               mov dword ptr [esi + 4], ebx
// 004c3c5e  895e08               mov dword ptr [esi + 8], ebx
// 004c3c61  8b470c               mov eax, dword ptr [edi + 0xc]
// 004c3c64  8b35a8d27700         mov esi, dword ptr [0x77d2a8]
// 004c3c6a  83c404               add esp, 4
// 004c3c6d  3bc3                 cmp eax, ebx
// 004c3c6f  c644242002           mov byte ptr [esp + 0x20], 2
// 004c3c74  7424                 je 0x4c3c9a
// 004c3c76  83c004               add eax, 4
// 004c3c79  50                   push eax
// 004c3c7a  ffd6                 call esi
// 004c3c7c  85c0                 test eax, eax
// 004c3c7e  7517                 jne 0x4c3c97
// 004c3c80  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004c3c83  e838f7f9ff           call 0x4633c0
// 004c3c88  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004c3c8b  3bcb                 cmp ecx, ebx
// 004c3c8d  7408                 je 0x4c3c97
// 004c3c8f  8b11                 mov edx, dword ptr [ecx]
// 004c3c91  8b02                 mov eax, dword ptr [edx]
// 004c3c93  6a01                 push 1
// 004c3c95  ffd0                 call eax
// 004c3c97  895f0c               mov dword ptr [edi + 0xc], ebx
// 004c3c9a  8b4708               mov eax, dword ptr [edi + 8]
// 004c3c9d  3bc3                 cmp eax, ebx
// 004c3c9f  c644242001           mov byte ptr [esp + 0x20], 1
// 004c3ca4  7424                 je 0x4c3cca
// 004c3ca6  83c004               add eax, 4
// 004c3ca9  50                   push eax
// 004c3caa  ffd6                 call esi
// 004c3cac  85c0                 test eax, eax
// 004c3cae  7517                 jne 0x4c3cc7
// 004c3cb0  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c3cb3  e808f7f9ff           call 0x4633c0
// 004c3cb8  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c3cbb  3bcb                 cmp ecx, ebx
// 004c3cbd  7408                 je 0x4c3cc7
// 004c3cbf  8b11                 mov edx, dword ptr [ecx]
// 004c3cc1  8b02                 mov eax, dword ptr [edx]
// 004c3cc3  6a01                 push 1
// 004c3cc5  ffd0                 call eax
// 004c3cc7  895f08               mov dword ptr [edi + 8], ebx
// 004c3cca  8b4704               mov eax, dword ptr [edi + 4]
// 004c3ccd  3bc3                 cmp eax, ebx
// 004c3ccf  885c2420             mov byte ptr [esp + 0x20], bl
// 004c3cd3  7424                 je 0x4c3cf9
// 004c3cd5  83c004               add eax, 4
// 004c3cd8  50                   push eax
// 004c3cd9  ffd6                 call esi
// 004c3cdb  85c0                 test eax, eax
// 004c3cdd  7517                 jne 0x4c3cf6
// 004c3cdf  8b4f04               mov ecx, dword ptr [edi + 4]
// 004c3ce2  e8d9f6f9ff           call 0x4633c0
// 004c3ce7  8b4f04               mov ecx, dword ptr [edi + 4]
// 004c3cea  3bcb                 cmp ecx, ebx
// 004c3cec  7408                 je 0x4c3cf6
// 004c3cee  8b11                 mov edx, dword ptr [ecx]
// 004c3cf0  8b02                 mov eax, dword ptr [edx]
// 004c3cf2  6a01                 push 1
// 004c3cf4  ffd0                 call eax
// 004c3cf6  895f04               mov dword ptr [edi + 4], ebx
// 004c3cf9  8b07                 mov eax, dword ptr [edi]
// 004c3cfb  3bc3                 cmp eax, ebx
// 004c3cfd  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004c3d05  7421                 je 0x4c3d28
// 004c3d07  83c004               add eax, 4
// 004c3d0a  50                   push eax
// 004c3d0b  ffd6                 call esi
// 004c3d0d  85c0                 test eax, eax
// 004c3d0f  7515                 jne 0x4c3d26
// 004c3d11  8b0f                 mov ecx, dword ptr [edi]
// 004c3d13  e8a8f6f9ff           call 0x4633c0
// 004c3d18  8b0f                 mov ecx, dword ptr [edi]
// 004c3d1a  3bcb                 cmp ecx, ebx
// 004c3d1c  7408                 je 0x4c3d26
// 004c3d1e  8b11                 mov edx, dword ptr [ecx]
// 004c3d20  8b02                 mov eax, dword ptr [edx]
// 004c3d22  6a01                 push 1
// 004c3d24  ffd0                 call eax
// 004c3d26  891f                 mov dword ptr [edi], ebx
// 004c3d28  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c3d2c  5f                   pop edi
// 004c3d2d  5e                   pop esi
// 004c3d2e  5b                   pop ebx
// 004c3d2f  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3d36  83c418               add esp, 0x18
// 004c3d39  c3                   ret 
// library rbxgs-view/View.cpp (function ??1MaterialFactory@View@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
