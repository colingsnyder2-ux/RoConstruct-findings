// roc 2007-03 00527cb0  unit: seg_00520000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527cb0
//
// 00527cb0  56                   push esi
// 00527cb1  57                   push edi
// 00527cb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00527cb6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00527cb9  8b08                 mov ecx, dword ptr [eax]
// 00527cbb  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00527cc1  894e10               mov dword ptr [esi + 0x10], ecx
// 00527cc4  8b5718               mov edx, dword ptr [edi + 0x18]
// 00527cc7  8b4204               mov eax, dword ptr [edx + 4]
// 00527cca  894614               mov dword ptr [esi + 0x14], eax
// 00527ccd  8bc6                 mov eax, esi
// 00527ccf  e8ccf8ffff           call 0x5275a0
// 00527cd4  e847f8ffff           call 0x527520
// 00527cd9  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00527cdc  8b5610               mov edx, dword ptr [esi + 0x10]
// 00527cdf  8911                 mov dword ptr [ecx], edx
// 00527ce1  8b4718               mov eax, dword ptr [edi + 0x18]
// 00527ce4  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00527ce7  5f                   pop edi
// 00527ce8  894804               mov dword ptr [eax + 4], ecx
// 00527ceb  5e                   pop esi
// 00527cec  c3                   ret 
// library jpeg-6b/jcphuff.c (function _finish_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
