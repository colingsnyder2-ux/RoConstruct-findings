// roc 2012-06 006688b0  unit: seg_00660000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006688b0
//
// 006688b0  56                   push esi
// 006688b1  57                   push edi
// 006688b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006688b6  8b4718               mov eax, dword ptr [edi + 0x18]
// 006688b9  8b08                 mov ecx, dword ptr [eax]
// 006688bb  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 006688c1  894e10               mov dword ptr [esi + 0x10], ecx
// 006688c4  8b5718               mov edx, dword ptr [edi + 0x18]
// 006688c7  8b4204               mov eax, dword ptr [edx + 4]
// 006688ca  894614               mov dword ptr [esi + 0x14], eax
// 006688cd  8bc6                 mov eax, esi
// 006688cf  e81cf8ffff           call 0x6680f0
// 006688d4  6a07                 push 7
// 006688d6  6a7f                 push 0x7f
// 006688d8  e8a3f6ffff           call 0x667f80
// 006688dd  8b5610               mov edx, dword ptr [esi + 0x10]
// 006688e0  33c0                 xor eax, eax
// 006688e2  894618               mov dword ptr [esi + 0x18], eax
// 006688e5  89461c               mov dword ptr [esi + 0x1c], eax
// 006688e8  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006688eb  8911                 mov dword ptr [ecx], edx
// 006688ed  8b4718               mov eax, dword ptr [edi + 0x18]
// 006688f0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006688f3  83c408               add esp, 8
// 006688f6  5f                   pop edi
// 006688f7  894804               mov dword ptr [eax + 4], ecx
// 006688fa  5e                   pop esi
// 006688fb  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
