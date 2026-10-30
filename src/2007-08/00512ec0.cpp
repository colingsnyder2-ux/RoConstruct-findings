// from server: 100% by auto
// roc 2007-08 00512ec0  unit: G3D::_internal::DialogTemplate  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00512ec0
//
// 00512ec0  83ec24               sub esp, 0x24
// 00512ec3  a188518b00           mov eax, dword ptr [0x8b5188]
// 00512ec8  33c4                 xor eax, esp
// 00512eca  89442420             mov dword ptr [esp + 0x20], eax
// 00512ece  8b442428             mov eax, dword ptr [esp + 0x28]
// 00512ed2  53                   push ebx
// 00512ed3  55                   push ebp
// 00512ed4  57                   push edi
// 00512ed5  8b7818               mov edi, dword ptr [eax + 0x18]
// 00512ed8  8b6f04               mov ebp, dword ptr [edi + 4]
// 00512edb  85ed                 test ebp, ebp
// 00512edd  8b1f                 mov ebx, dword ptr [edi]
// 00512edf  89442410             mov dword ptr [esp + 0x10], eax
// 00512ee3  897c2418             mov dword ptr [esp + 0x18], edi
// 00512ee7  7524                 jne 0x512f0d
// 00512ee9  50                   push eax
// 00512eea  8b470c               mov eax, dword ptr [edi + 0xc]
// 00512eed  ffd0                 call eax
// 00512eef  83c404               add esp, 4
// 00512ef2  84c0                 test al, al
// 00512ef4  7512                 jne 0x512f08
// 00512ef6  5f                   pop edi
// 00512ef7  5d                   pop ebp
// 00512ef8  5b                   pop ebx
// 00512ef9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00512efd  33cc                 xor ecx, esp
// 00512eff  e81adb1100           call 0x630a1e
// 00512f04  83c424               add esp, 0x24
// 00512f07  c3                   ret 
// 00512f08  8b1f                 mov ebx, dword ptr [edi]
// 00512f0a  8b6f04               mov ebp, dword ptr [edi + 4]
// 00512f0d  33c9                 xor ecx, ecx
// 00512f0f  8a2b                 mov ch, byte ptr [ebx]
// 00512f11  83ed01               sub ebp, 1
// 00512f14  83c301               add ebx, 1
// 00512f17  85ed                 test ebp, ebp
// 00512f19  56                   push esi
// 00512f1a  8bf1                 mov esi, ecx
// 00512f1c  751a                 jne 0x512f38
// 00512f1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00512f22  8b470c               mov eax, dword ptr [edi + 0xc]
// 00512f25  52                   push edx
// 00512f26  ffd0                 call eax
// 00512f28  83c404               add esp, 4
// 00512f2b  84c0                 test al, al
// 00512f2d  0f84b5000000         je 0x512fe8
// 00512f33  8b1f                 mov ebx, dword ptr [edi]
// 00512f35  8b6f04               mov ebp, dword ptr [edi + 4]
// 00512f38  0fb60b               movzx ecx, byte ptr [ebx]
// 00512f3b  03f1                 add esi, ecx
// 00512f3d  83ee02               sub esi, 2
// 00512f40  83ed01               sub ebp, 1
// 00512f43  83c301               add ebx, 1
// 00512f46  83fe0e               cmp esi, 0xe
// 00512f49  7c0b                 jl 0x512f56
// 00512f4b  b80e000000           mov eax, 0xe
// 00512f50  89442418             mov dword ptr [esp + 0x18], eax
// 00512f54  eb12                 jmp 0x512f68
// 00512f56  33d2                 xor edx, edx
// 00512f58  85f6                 test esi, esi
// 00512f5a  0f9ec2               setle dl
// 00512f5d  83ea01               sub edx, 1
// 00512f60  23d6                 and edx, esi
// 00512f62  89542418             mov dword ptr [esp + 0x18], edx
// 00512f66  8bc2                 mov eax, edx
// 00512f68  33c9                 xor ecx, ecx
// 00512f6a  85c0                 test eax, eax
// 00512f6c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00512f70  7639                 jbe 0x512fab
// 00512f72  85ed                 test ebp, ebp
// 00512f74  751e                 jne 0x512f94
// 00512f76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00512f7a  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00512f7d  50                   push eax
// 00512f7e  ffd1                 call ecx
// 00512f80  83c404               add esp, 4
// 00512f83  84c0                 test al, al
// 00512f85  7461                 je 0x512fe8
// 00512f87  8b1f                 mov ebx, dword ptr [edi]
// 00512f89  8b6f04               mov ebp, dword ptr [edi + 4]
// 00512f8c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00512f90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00512f94  8a13                 mov dl, byte ptr [ebx]
// 00512f96  88540c20             mov byte ptr [esp + ecx + 0x20], dl
// 00512f9a  83c101               add ecx, 1
// 00512f9d  83ed01               sub ebp, 1
// 00512fa0  83c301               add ebx, 1
// 00512fa3  3bc8                 cmp ecx, eax
// 00512fa5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00512fa9  72c7                 jb 0x512f72
// 00512fab  8b542414             mov edx, dword ptr [esp + 0x14]
// 00512faf  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 00512fb5  2bf0                 sub esi, eax
// 00512fb7  81e9e0000000         sub ecx, 0xe0
// 00512fbd  89742410             mov dword ptr [esp + 0x10], esi
// 00512fc1  744d                 je 0x513010
// 00512fc3  83e90e               sub ecx, 0xe
// 00512fc6  7435                 je 0x512ffd
// 00512fc8  8b02                 mov eax, dword ptr [edx]
// 00512fca  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 00512fd1  8b0a                 mov ecx, dword ptr [edx]
// 00512fd3  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00512fd9  894118               mov dword ptr [ecx + 0x18], eax
// 00512fdc  8b0a                 mov ecx, dword ptr [edx]
// 00512fde  52                   push edx
// 00512fdf  8b11                 mov edx, dword ptr [ecx]
// 00512fe1  ffd2                 call edx
// 00512fe3  83c404               add esp, 4
// 00512fe6  eb3d                 jmp 0x513025
// 00512fe8  5e                   pop esi
// 00512fe9  5f                   pop edi
// 00512fea  5d                   pop ebp
// 00512feb  32c0                 xor al, al
// 00512fed  5b                   pop ebx
// 00512fee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00512ff2  33cc                 xor ecx, esp
// 00512ff4  e825da1100           call 0x630a1e
// 00512ff9  83c424               add esp, 0x24
// 00512ffc  c3                   ret 
// 00512ffd  56                   push esi
// 00512ffe  8bc8                 mov ecx, eax
// 00513000  8d442424             lea eax, [esp + 0x24]
// 00513004  8bf2                 mov esi, edx
// 00513006  e805feffff           call 0x512e10
// 0051300b  83c404               add esp, 4
// 0051300e  eb11                 jmp 0x513021
// 00513010  8bce                 mov ecx, esi
// 00513012  8d7c2420             lea edi, [esp + 0x20]
// 00513016  8bf2                 mov esi, edx
// 00513018  e893fbffff           call 0x512bb0
// 0051301d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00513021  8b742410             mov esi, dword ptr [esp + 0x10]
// 00513025  85f6                 test esi, esi
// 00513027  891f                 mov dword ptr [edi], ebx
// 00513029  896f04               mov dword ptr [edi + 4], ebp
// 0051302c  7e11                 jle 0x51303f
// 0051302e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00513032  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00513035  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00513038  56                   push esi
// 00513039  50                   push eax
// 0051303a  ffd2                 call edx
// 0051303c  83c408               add esp, 8
// 0051303f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00513043  5e                   pop esi
// 00513044  5f                   pop edi
// 00513045  5d                   pop ebp
// 00513046  5b                   pop ebx
// 00513047  33cc                 xor ecx, esp
// 00513049  b001                 mov al, 1
// 0051304b  e8ced91100           call 0x630a1e
// 00513050  83c424               add esp, 0x24
// 00513053  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdmarker.c
