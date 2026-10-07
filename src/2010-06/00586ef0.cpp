// roc 2010-06 00586ef0  unit: seg_00580000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586ef0
//
// 00586ef0  56                   push esi
// 00586ef1  57                   push edi
// 00586ef2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00586ef6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00586ef9  8b08                 mov ecx, dword ptr [eax]
// 00586efb  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00586f01  894e10               mov dword ptr [esi + 0x10], ecx
// 00586f04  8b5718               mov edx, dword ptr [edi + 0x18]
// 00586f07  8b4204               mov eax, dword ptr [edx + 4]
// 00586f0a  894614               mov dword ptr [esi + 0x14], eax
// 00586f0d  8bc6                 mov eax, esi
// 00586f0f  e81cf8ffff           call 0x586730
// 00586f14  6a07                 push 7
// 00586f16  6a7f                 push 0x7f
// 00586f18  e8a3f6ffff           call 0x5865c0
// 00586f1d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00586f20  33c0                 xor eax, eax
// 00586f22  894618               mov dword ptr [esi + 0x18], eax
// 00586f25  89461c               mov dword ptr [esi + 0x1c], eax
// 00586f28  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00586f2b  8911                 mov dword ptr [ecx], edx
// 00586f2d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00586f30  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00586f33  83c408               add esp, 8
// 00586f36  5f                   pop edi
// 00586f37  894804               mov dword ptr [eax + 4], ecx
// 00586f3a  5e                   pop esi
// 00586f3b  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
