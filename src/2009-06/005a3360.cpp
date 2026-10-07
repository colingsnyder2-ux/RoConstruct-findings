// roc 2009-06 005a3360  unit: seg_005a0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a3360
//
// 005a3360  56                   push esi
// 005a3361  57                   push edi
// 005a3362  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a3366  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a3369  8b08                 mov ecx, dword ptr [eax]
// 005a336b  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 005a3371  894e10               mov dword ptr [esi + 0x10], ecx
// 005a3374  8b5718               mov edx, dword ptr [edi + 0x18]
// 005a3377  8b4204               mov eax, dword ptr [edx + 4]
// 005a337a  894614               mov dword ptr [esi + 0x14], eax
// 005a337d  8bc6                 mov eax, esi
// 005a337f  e81cf8ffff           call 0x5a2ba0
// 005a3384  6a07                 push 7
// 005a3386  6a7f                 push 0x7f
// 005a3388  e8a3f6ffff           call 0x5a2a30
// 005a338d  8b5610               mov edx, dword ptr [esi + 0x10]
// 005a3390  33c0                 xor eax, eax
// 005a3392  894618               mov dword ptr [esi + 0x18], eax
// 005a3395  89461c               mov dword ptr [esi + 0x1c], eax
// 005a3398  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005a339b  8911                 mov dword ptr [ecx], edx
// 005a339d  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a33a0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a33a3  83c408               add esp, 8
// 005a33a6  5f                   pop edi
// 005a33a7  894804               mov dword ptr [eax + 4], ecx
// 005a33aa  5e                   pop esi
// 005a33ab  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
