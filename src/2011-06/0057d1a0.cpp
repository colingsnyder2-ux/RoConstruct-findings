// roc 2011-06 0057d1a0  unit: seg_00570000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057d1a0
//
// 0057d1a0  56                   push esi
// 0057d1a1  57                   push edi
// 0057d1a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057d1a6  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057d1a9  8b08                 mov ecx, dword ptr [eax]
// 0057d1ab  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 0057d1b1  894e10               mov dword ptr [esi + 0x10], ecx
// 0057d1b4  8b5718               mov edx, dword ptr [edi + 0x18]
// 0057d1b7  8b4204               mov eax, dword ptr [edx + 4]
// 0057d1ba  894614               mov dword ptr [esi + 0x14], eax
// 0057d1bd  8bc6                 mov eax, esi
// 0057d1bf  e81cf8ffff           call 0x57c9e0
// 0057d1c4  6a07                 push 7
// 0057d1c6  6a7f                 push 0x7f
// 0057d1c8  e8a3f6ffff           call 0x57c870
// 0057d1cd  8b5610               mov edx, dword ptr [esi + 0x10]
// 0057d1d0  33c0                 xor eax, eax
// 0057d1d2  894618               mov dword ptr [esi + 0x18], eax
// 0057d1d5  89461c               mov dword ptr [esi + 0x1c], eax
// 0057d1d8  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0057d1db  8911                 mov dword ptr [ecx], edx
// 0057d1dd  8b4718               mov eax, dword ptr [edi + 0x18]
// 0057d1e0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057d1e3  83c408               add esp, 8
// 0057d1e6  5f                   pop edi
// 0057d1e7  894804               mov dword ptr [eax + 4], ecx
// 0057d1ea  5e                   pop esi
// 0057d1eb  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
