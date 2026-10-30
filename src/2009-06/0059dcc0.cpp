// from server: 100% by auto
// roc 2009-06 0059dcc0  unit: seg_00590000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059dcc0
//
// 0059dcc0  56                   push esi
// 0059dcc1  8b742408             mov esi, dword ptr [esp + 8]
// 0059dcc5  8b4604               mov eax, dword ptr [esi + 4]
// 0059dcc8  8b08                 mov ecx, dword ptr [eax]
// 0059dcca  57                   push edi
// 0059dccb  6a54                 push 0x54
// 0059dccd  6a01                 push 1
// 0059dccf  56                   push esi
// 0059dcd0  ffd1                 call ecx
// 0059dcd2  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0059dcd8  c700a0d95900         mov dword ptr [eax], 0x59d9a0
// 0059dcde  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0059dce4  33ff                 xor edi, edi
// 0059dce6  83c40c               add esp, 0xc
// 0059dce9  397e24               cmp dword ptr [esi + 0x24], edi
// 0059dcec  7e3e                 jle 0x59dd2c
// 0059dcee  53                   push ebx
// 0059dcef  55                   push ebp
// 0059dcf0  8d6950               lea ebp, [ecx + 0x50]
// 0059dcf3  8d582c               lea ebx, [eax + 0x2c]
// 0059dcf6  8b5604               mov edx, dword ptr [esi + 4]
// 0059dcf9  8b02                 mov eax, dword ptr [edx]
// 0059dcfb  6800010000           push 0x100
// 0059dd00  6a01                 push 1
// 0059dd02  56                   push esi
// 0059dd03  ffd0                 call eax
// 0059dd05  6800010000           push 0x100
// 0059dd0a  6a00                 push 0
// 0059dd0c  50                   push eax
// 0059dd0d  894500               mov dword ptr [ebp], eax
// 0059dd10  e85fbf1700           call 0x719c74
// 0059dd15  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 0059dd1b  47                   inc edi
// 0059dd1c  83c418               add esp, 0x18
// 0059dd1f  83c304               add ebx, 4
// 0059dd22  83c554               add ebp, 0x54
// 0059dd25  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 0059dd28  7ccc                 jl 0x59dcf6
// 0059dd2a  5d                   pop ebp
// 0059dd2b  5b                   pop ebx
// 0059dd2c  5f                   pop edi
// 0059dd2d  5e                   pop esi
// 0059dd2e  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
