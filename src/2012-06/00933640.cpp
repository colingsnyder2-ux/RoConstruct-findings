// roc 2012-06 00933640  unit: RBX::BallCellContact  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933640
//
// 00933640  53                   push ebx
// 00933641  8a5e38               mov bl, byte ptr [esi + 0x38]
// 00933644  55                   push ebp
// 00933645  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00933649  57                   push edi
// 0093364a  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0093364d  896e18               mov dword ptr [esi + 0x18], ebp
// 00933650  f6c308               test bl, 8
// 00933653  7419                 je 0x93366e
// 00933655  837e4000             cmp dword ptr [esi + 0x40], 0
// 00933659  7513                 jne 0x93366e
// 0093365b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0093365e  6aff                 push -1
// 00933660  6a03                 push 3
// 00933662  56                   push esi
// 00933663  894640               mov dword ptr [esi + 0x40], eax
// 00933666  e82511f2ff           call 0x854790
// 0093366b  83c40c               add esp, 0xc
// 0093366e  f6c304               test bl, 4
// 00933671  744d                 je 0x9336c0
// 00933673  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00933676  8b5104               mov edx, dword ptr [ecx + 4]
// 00933679  8b02                 mov eax, dword ptr [edx]
// 0093367b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0093367e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00933681  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00933684  8bc5                 mov eax, ebp
// 00933686  2bc2                 sub eax, edx
// 00933688  c1f802               sar eax, 2
// 0093368b  48                   dec eax
// 0093368c  85c9                 test ecx, ecx
// 0093368e  7405                 je 0x933695
// 00933690  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 00933693  eb02                 jmp 0x933697
// 00933695  33db                 xor ebx, ebx
// 00933697  85c0                 test eax, eax
// 00933699  7419                 je 0x9336b4
// 0093369b  3bef                 cmp ebp, edi
// 0093369d  7615                 jbe 0x9336b4
// 0093369f  85c9                 test ecx, ecx
// 009336a1  740b                 je 0x9336ae
// 009336a3  2bfa                 sub edi, edx
// 009336a5  c1ff02               sar edi, 2
// 009336a8  8b4cb9fc             mov ecx, dword ptr [ecx + edi*4 - 4]
// 009336ac  eb02                 jmp 0x9336b0
// 009336ae  33c9                 xor ecx, ecx
// 009336b0  3bd9                 cmp ebx, ecx
// 009336b2  740c                 je 0x9336c0
// 009336b4  53                   push ebx
// 009336b5  6a02                 push 2
// 009336b7  56                   push esi
// 009336b8  e8d310f2ff           call 0x854790
// 009336bd  83c40c               add esp, 0xc
// 009336c0  5f                   pop edi
// 009336c1  5d                   pop ebp
// 009336c2  5b                   pop ebx
// 009336c3  c3                   ret 
// library lua-5.1.4/lvm.c (function _traceexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
