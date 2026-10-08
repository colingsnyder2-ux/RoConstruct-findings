// from server: 100% by auto
// roc 2012-06 00663210  unit: seg_00660000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663210
//
// 00663210  56                   push esi
// 00663211  8b742408             mov esi, dword ptr [esp + 8]
// 00663215  8b4604               mov eax, dword ptr [esi + 4]
// 00663218  8b08                 mov ecx, dword ptr [eax]
// 0066321a  57                   push edi
// 0066321b  6a54                 push 0x54
// 0066321d  6a01                 push 1
// 0066321f  56                   push esi
// 00663220  ffd1                 call ecx
// 00663222  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00663228  c700f02e6600         mov dword ptr [eax], 0x662ef0
// 0066322e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00663234  33ff                 xor edi, edi
// 00663236  83c40c               add esp, 0xc
// 00663239  397e24               cmp dword ptr [esi + 0x24], edi
// 0066323c  7e3e                 jle 0x66327c
// 0066323e  53                   push ebx
// 0066323f  55                   push ebp
// 00663240  8d6950               lea ebp, [ecx + 0x50]
// 00663243  8d582c               lea ebx, [eax + 0x2c]
// 00663246  8b5604               mov edx, dword ptr [esi + 4]
// 00663249  8b02                 mov eax, dword ptr [edx]
// 0066324b  6800010000           push 0x100
// 00663250  6a01                 push 1
// 00663252  56                   push esi
// 00663253  ffd0                 call eax
// 00663255  6800010000           push 0x100
// 0066325a  6a00                 push 0
// 0066325c  50                   push eax
// 0066325d  894500               mov dword ptr [ebp], eax
// 00663260  e80f013200           call 0x983374
// 00663265  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 0066326b  47                   inc edi
// 0066326c  83c418               add esp, 0x18
// 0066326f  83c304               add ebx, 4
// 00663272  83c554               add ebp, 0x54
// 00663275  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 00663278  7ccc                 jl 0x663246
// 0066327a  5d                   pop ebp
// 0066327b  5b                   pop ebx
// 0066327c  5f                   pop edi
// 0066327d  5e                   pop esi
// 0066327e  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
