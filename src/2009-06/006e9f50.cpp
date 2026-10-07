// roc 2009-06 006e9f50  unit: RBX::PartDropTool  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9f50
//
// 006e9f50  53                   push ebx
// 006e9f51  8a5e38               mov bl, byte ptr [esi + 0x38]
// 006e9f54  55                   push ebp
// 006e9f55  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006e9f59  57                   push edi
// 006e9f5a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006e9f5d  896e18               mov dword ptr [esi + 0x18], ebp
// 006e9f60  f6c308               test bl, 8
// 006e9f63  7419                 je 0x6e9f7e
// 006e9f65  837e4000             cmp dword ptr [esi + 0x40], 0
// 006e9f69  7513                 jne 0x6e9f7e
// 006e9f6b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006e9f6e  6aff                 push -1
// 006e9f70  6a03                 push 3
// 006e9f72  56                   push esi
// 006e9f73  894640               mov dword ptr [esi + 0x40], eax
// 006e9f76  e8758efdff           call 0x6c2df0
// 006e9f7b  83c40c               add esp, 0xc
// 006e9f7e  f6c304               test bl, 4
// 006e9f81  744d                 je 0x6e9fd0
// 006e9f83  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006e9f86  8b5104               mov edx, dword ptr [ecx + 4]
// 006e9f89  8b02                 mov eax, dword ptr [edx]
// 006e9f8b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006e9f8e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006e9f91  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 006e9f94  8bc5                 mov eax, ebp
// 006e9f96  2bc2                 sub eax, edx
// 006e9f98  c1f802               sar eax, 2
// 006e9f9b  48                   dec eax
// 006e9f9c  85c9                 test ecx, ecx
// 006e9f9e  7405                 je 0x6e9fa5
// 006e9fa0  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 006e9fa3  eb02                 jmp 0x6e9fa7
// 006e9fa5  33db                 xor ebx, ebx
// 006e9fa7  85c0                 test eax, eax
// 006e9fa9  7419                 je 0x6e9fc4
// 006e9fab  3bef                 cmp ebp, edi
// 006e9fad  7615                 jbe 0x6e9fc4
// 006e9faf  85c9                 test ecx, ecx
// 006e9fb1  740b                 je 0x6e9fbe
// 006e9fb3  2bfa                 sub edi, edx
// 006e9fb5  c1ff02               sar edi, 2
// 006e9fb8  8b4cb9fc             mov ecx, dword ptr [ecx + edi*4 - 4]
// 006e9fbc  eb02                 jmp 0x6e9fc0
// 006e9fbe  33c9                 xor ecx, ecx
// 006e9fc0  3bd9                 cmp ebx, ecx
// 006e9fc2  740c                 je 0x6e9fd0
// 006e9fc4  53                   push ebx
// 006e9fc5  6a02                 push 2
// 006e9fc7  56                   push esi
// 006e9fc8  e8238efdff           call 0x6c2df0
// 006e9fcd  83c40c               add esp, 0xc
// 006e9fd0  5f                   pop edi
// 006e9fd1  5d                   pop ebp
// 006e9fd2  5b                   pop ebx
// 006e9fd3  c3                   ret 
// library lua-5.1.4/lvm.c (function _traceexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
