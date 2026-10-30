// from server: 100% by auto
// roc 2007-08 0052ac90  unit: seg_00520000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ac90
//
// 0052ac90  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0052ac96  55                   push ebp
// 0052ac97  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 0052ac9a  57                   push edi
// 0052ac9b  33ff                 xor edi, edi
// 0052ac9d  397e64               cmp dword ptr [esi + 0x64], edi
// 0052aca0  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 0052aca4  7e27                 jle 0x52accd
// 0052aca6  53                   push ebx
// 0052aca7  8d5844               lea ebx, [eax + 0x44]
// 0052acaa  8d9b00000000         lea ebx, [ebx]
// 0052acb0  8b4604               mov eax, dword ptr [esi + 4]
// 0052acb3  8b4804               mov ecx, dword ptr [eax + 4]
// 0052acb6  55                   push ebp
// 0052acb7  6a01                 push 1
// 0052acb9  56                   push esi
// 0052acba  ffd1                 call ecx
// 0052acbc  8903                 mov dword ptr [ebx], eax
// 0052acbe  83c701               add edi, 1
// 0052acc1  83c40c               add esp, 0xc
// 0052acc4  83c304               add ebx, 4
// 0052acc7  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 0052acca  7ce4                 jl 0x52acb0
// 0052accc  5b                   pop ebx
// 0052accd  5f                   pop edi
// 0052acce  5d                   pop ebp
// 0052accf  c3                   ret 
// library jpeg-6b/jquant1.c (function _alloc_fs_workspace)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
