// from server: 100% by auto
// roc 2011-06 00577b00  unit: seg_00570000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577b00
//
// 00577b00  56                   push esi
// 00577b01  8b742408             mov esi, dword ptr [esp + 8]
// 00577b05  8b4604               mov eax, dword ptr [esi + 4]
// 00577b08  8b08                 mov ecx, dword ptr [eax]
// 00577b0a  57                   push edi
// 00577b0b  6a54                 push 0x54
// 00577b0d  6a01                 push 1
// 00577b0f  56                   push esi
// 00577b10  ffd1                 call ecx
// 00577b12  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00577b18  c700e0775700         mov dword ptr [eax], 0x5777e0
// 00577b1e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00577b24  33ff                 xor edi, edi
// 00577b26  83c40c               add esp, 0xc
// 00577b29  397e24               cmp dword ptr [esi + 0x24], edi
// 00577b2c  7e3e                 jle 0x577b6c
// 00577b2e  53                   push ebx
// 00577b2f  55                   push ebp
// 00577b30  8d6950               lea ebp, [ecx + 0x50]
// 00577b33  8d582c               lea ebx, [eax + 0x2c]
// 00577b36  8b5604               mov edx, dword ptr [esi + 4]
// 00577b39  8b02                 mov eax, dword ptr [edx]
// 00577b3b  6800010000           push 0x100
// 00577b40  6a01                 push 1
// 00577b42  56                   push esi
// 00577b43  ffd0                 call eax
// 00577b45  6800010000           push 0x100
// 00577b4a  6a00                 push 0
// 00577b4c  50                   push eax
// 00577b4d  894500               mov dword ptr [ebp], eax
// 00577b50  e88f372900           call 0x80b2e4
// 00577b55  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 00577b5b  47                   inc edi
// 00577b5c  83c418               add esp, 0x18
// 00577b5f  83c304               add ebx, 4
// 00577b62  83c554               add ebp, 0x54
// 00577b65  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 00577b68  7ccc                 jl 0x577b36
// 00577b6a  5d                   pop ebp
// 00577b6b  5b                   pop ebx
// 00577b6c  5f                   pop edi
// 00577b6d  5e                   pop esi
// 00577b6e  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
