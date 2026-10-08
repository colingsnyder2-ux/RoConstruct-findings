// roc 2009-12 00625390  unit: seg_00620000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00625390
//
// 00625390  56                   push esi
// 00625391  57                   push edi
// 00625392  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00625396  8b4718               mov eax, dword ptr [edi + 0x18]
// 00625399  8b08                 mov ecx, dword ptr [eax]
// 0062539b  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 006253a1  894e10               mov dword ptr [esi + 0x10], ecx
// 006253a4  8b5718               mov edx, dword ptr [edi + 0x18]
// 006253a7  8b4204               mov eax, dword ptr [edx + 4]
// 006253aa  894614               mov dword ptr [esi + 0x14], eax
// 006253ad  8bc6                 mov eax, esi
// 006253af  e81cf8ffff           call 0x624bd0
// 006253b4  6a07                 push 7
// 006253b6  6a7f                 push 0x7f
// 006253b8  e8a3f6ffff           call 0x624a60
// 006253bd  8b5610               mov edx, dword ptr [esi + 0x10]
// 006253c0  33c0                 xor eax, eax
// 006253c2  894618               mov dword ptr [esi + 0x18], eax
// 006253c5  89461c               mov dword ptr [esi + 0x1c], eax
// 006253c8  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006253cb  8911                 mov dword ptr [ecx], edx
// 006253cd  8b4718               mov eax, dword ptr [edi + 0x18]
// 006253d0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006253d3  83c408               add esp, 8
// 006253d6  5f                   pop edi
// 006253d7  894804               mov dword ptr [eax + 4], ecx
// 006253da  5e                   pop esi
// 006253db  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
