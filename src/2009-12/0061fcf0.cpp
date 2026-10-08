// roc 2009-12 0061fcf0  unit: seg_00610000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061fcf0
//
// 0061fcf0  56                   push esi
// 0061fcf1  8b742408             mov esi, dword ptr [esp + 8]
// 0061fcf5  8b4604               mov eax, dword ptr [esi + 4]
// 0061fcf8  8b08                 mov ecx, dword ptr [eax]
// 0061fcfa  57                   push edi
// 0061fcfb  6a54                 push 0x54
// 0061fcfd  6a01                 push 1
// 0061fcff  56                   push esi
// 0061fd00  ffd1                 call ecx
// 0061fd02  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0061fd08  c700d0f96100         mov dword ptr [eax], 0x61f9d0
// 0061fd0e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0061fd14  33ff                 xor edi, edi
// 0061fd16  83c40c               add esp, 0xc
// 0061fd19  397e24               cmp dword ptr [esi + 0x24], edi
// 0061fd1c  7e3e                 jle 0x61fd5c
// 0061fd1e  53                   push ebx
// 0061fd1f  55                   push ebp
// 0061fd20  8d6950               lea ebp, [ecx + 0x50]
// 0061fd23  8d582c               lea ebx, [eax + 0x2c]
// 0061fd26  8b5604               mov edx, dword ptr [esi + 4]
// 0061fd29  8b02                 mov eax, dword ptr [edx]
// 0061fd2b  6800010000           push 0x100
// 0061fd30  6a01                 push 1
// 0061fd32  56                   push esi
// 0061fd33  ffd0                 call eax
// 0061fd35  6800010000           push 0x100
// 0061fd3a  6a00                 push 0
// 0061fd3c  50                   push eax
// 0061fd3d  894500               mov dword ptr [ebp], eax
// 0061fd40  e85f4d1d00           call 0x7f4aa4
// 0061fd45  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 0061fd4b  47                   inc edi
// 0061fd4c  83c418               add esp, 0x18
// 0061fd4f  83c304               add ebx, 4
// 0061fd52  83c554               add ebp, 0x54
// 0061fd55  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 0061fd58  7ccc                 jl 0x61fd26
// 0061fd5a  5d                   pop ebp
// 0061fd5b  5b                   pop ebx
// 0061fd5c  5f                   pop edi
// 0061fd5d  5e                   pop esi
// 0061fd5e  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
