// from server: 100% by auto
// roc 2008-06 00539080  unit: seg_00530000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00539080
//
// 00539080  56                   push esi
// 00539081  57                   push edi
// 00539082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00539086  8b4718               mov eax, dword ptr [edi + 0x18]
// 00539089  8b08                 mov ecx, dword ptr [eax]
// 0053908b  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00539091  894e10               mov dword ptr [esi + 0x10], ecx
// 00539094  8b5718               mov edx, dword ptr [edi + 0x18]
// 00539097  8b4204               mov eax, dword ptr [edx + 4]
// 0053909a  894614               mov dword ptr [esi + 0x14], eax
// 0053909d  8bc6                 mov eax, esi
// 0053909f  e81cf8ffff           call 0x5388c0
// 005390a4  6a07                 push 7
// 005390a6  6a7f                 push 0x7f
// 005390a8  e8a3f6ffff           call 0x538750
// 005390ad  8b5610               mov edx, dword ptr [esi + 0x10]
// 005390b0  33c0                 xor eax, eax
// 005390b2  894618               mov dword ptr [esi + 0x18], eax
// 005390b5  89461c               mov dword ptr [esi + 0x1c], eax
// 005390b8  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005390bb  8911                 mov dword ptr [ecx], edx
// 005390bd  8b4718               mov eax, dword ptr [edi + 0x18]
// 005390c0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005390c3  83c408               add esp, 8
// 005390c6  5f                   pop edi
// 005390c7  894804               mov dword ptr [eax + 4], ecx
// 005390ca  5e                   pop esi
// 005390cb  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
