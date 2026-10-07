// roc 2007-08 00508550  unit: G3D::GCamera  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508550
//
// 00508550  56                   push esi
// 00508551  8bf1                 mov esi, ecx
// 00508553  33c0                 xor eax, eax
// 00508555  894650               mov dword ptr [esi + 0x50], eax
// 00508558  894654               mov dword ptr [esi + 0x54], eax
// 0050855b  e860fcffff           call 0x5081c0
// 00508560  8bce                 mov ecx, esi
// 00508562  e869fdffff           call 0x5082d0
// 00508567  8b4628               mov eax, dword ptr [esi + 0x28]
// 0050856a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0050856d  894650               mov dword ptr [esi + 0x50], eax
// 00508570  894e54               mov dword ptr [esi + 0x54], ecx
// 00508573  5e                   pop esi
// 00508574  c3                   ret 
// library g3d-6.09/G3Dcpp\Stopwatch.cpp (function ?computeOverhead@Stopwatch@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Stopwatch.cpp
