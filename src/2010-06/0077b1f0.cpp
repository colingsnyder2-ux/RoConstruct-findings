// roc 2010-06 0077b1f0  unit: RBX::PartDropTool  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b1f0
//
// 0077b1f0  53                   push ebx
// 0077b1f1  8a5e38               mov bl, byte ptr [esi + 0x38]
// 0077b1f4  55                   push ebp
// 0077b1f5  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0077b1f9  57                   push edi
// 0077b1fa  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0077b1fd  896e18               mov dword ptr [esi + 0x18], ebp
// 0077b200  f6c308               test bl, 8
// 0077b203  7419                 je 0x77b21e
// 0077b205  837e4000             cmp dword ptr [esi + 0x40], 0
// 0077b209  7513                 jne 0x77b21e
// 0077b20b  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0077b20e  6aff                 push -1
// 0077b210  6a03                 push 3
// 0077b212  56                   push esi
// 0077b213  894640               mov dword ptr [esi + 0x40], eax
// 0077b216  e8a549fbff           call 0x72fbc0
// 0077b21b  83c40c               add esp, 0xc
// 0077b21e  f6c304               test bl, 4
// 0077b221  744d                 je 0x77b270
// 0077b223  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077b226  8b5104               mov edx, dword ptr [ecx + 4]
// 0077b229  8b02                 mov eax, dword ptr [edx]
// 0077b22b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0077b22e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0077b231  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0077b234  8bc5                 mov eax, ebp
// 0077b236  2bc2                 sub eax, edx
// 0077b238  c1f802               sar eax, 2
// 0077b23b  48                   dec eax
// 0077b23c  85c9                 test ecx, ecx
// 0077b23e  7405                 je 0x77b245
// 0077b240  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 0077b243  eb02                 jmp 0x77b247
// 0077b245  33db                 xor ebx, ebx
// 0077b247  85c0                 test eax, eax
// 0077b249  7419                 je 0x77b264
// 0077b24b  3bef                 cmp ebp, edi
// 0077b24d  7615                 jbe 0x77b264
// 0077b24f  85c9                 test ecx, ecx
// 0077b251  740b                 je 0x77b25e
// 0077b253  2bfa                 sub edi, edx
// 0077b255  c1ff02               sar edi, 2
// 0077b258  8b4cb9fc             mov ecx, dword ptr [ecx + edi*4 - 4]
// 0077b25c  eb02                 jmp 0x77b260
// 0077b25e  33c9                 xor ecx, ecx
// 0077b260  3bd9                 cmp ebx, ecx
// 0077b262  740c                 je 0x77b270
// 0077b264  53                   push ebx
// 0077b265  6a02                 push 2
// 0077b267  56                   push esi
// 0077b268  e85349fbff           call 0x72fbc0
// 0077b26d  83c40c               add esp, 0xc
// 0077b270  5f                   pop edi
// 0077b271  5d                   pop ebp
// 0077b272  5b                   pop ebx
// 0077b273  c3                   ret 
// library lua-5.1.4/lvm.c (function _traceexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
