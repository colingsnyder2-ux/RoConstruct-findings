// roc 2011-06 007d7530  unit: RBX::EquationDisplay  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d7530
//
// 007d7530  53                   push ebx
// 007d7531  8a5e38               mov bl, byte ptr [esi + 0x38]
// 007d7534  55                   push ebp
// 007d7535  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007d7539  57                   push edi
// 007d753a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 007d753d  896e18               mov dword ptr [esi + 0x18], ebp
// 007d7540  f6c308               test bl, 8
// 007d7543  7419                 je 0x7d755e
// 007d7545  837e4000             cmp dword ptr [esi + 0x40], 0
// 007d7549  7513                 jne 0x7d755e
// 007d754b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007d754e  6aff                 push -1
// 007d7550  6a03                 push 3
// 007d7552  56                   push esi
// 007d7553  894640               mov dword ptr [esi + 0x40], eax
// 007d7556  e8a56dfaff           call 0x77e300
// 007d755b  83c40c               add esp, 0xc
// 007d755e  f6c304               test bl, 4
// 007d7561  744d                 je 0x7d75b0
// 007d7563  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007d7566  8b5104               mov edx, dword ptr [ecx + 4]
// 007d7569  8b02                 mov eax, dword ptr [edx]
// 007d756b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007d756e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007d7571  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 007d7574  8bc5                 mov eax, ebp
// 007d7576  2bc2                 sub eax, edx
// 007d7578  c1f802               sar eax, 2
// 007d757b  48                   dec eax
// 007d757c  85c9                 test ecx, ecx
// 007d757e  7405                 je 0x7d7585
// 007d7580  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 007d7583  eb02                 jmp 0x7d7587
// 007d7585  33db                 xor ebx, ebx
// 007d7587  85c0                 test eax, eax
// 007d7589  7419                 je 0x7d75a4
// 007d758b  3bef                 cmp ebp, edi
// 007d758d  7615                 jbe 0x7d75a4
// 007d758f  85c9                 test ecx, ecx
// 007d7591  740b                 je 0x7d759e
// 007d7593  2bfa                 sub edi, edx
// 007d7595  c1ff02               sar edi, 2
// 007d7598  8b4cb9fc             mov ecx, dword ptr [ecx + edi*4 - 4]
// 007d759c  eb02                 jmp 0x7d75a0
// 007d759e  33c9                 xor ecx, ecx
// 007d75a0  3bd9                 cmp ebx, ecx
// 007d75a2  740c                 je 0x7d75b0
// 007d75a4  53                   push ebx
// 007d75a5  6a02                 push 2
// 007d75a7  56                   push esi
// 007d75a8  e8536dfaff           call 0x77e300
// 007d75ad  83c40c               add esp, 0xc
// 007d75b0  5f                   pop edi
// 007d75b1  5d                   pop ebp
// 007d75b2  5b                   pop ebx
// 007d75b3  c3                   ret 
// library lua-5.1.4/lvm.c (function _traceexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
