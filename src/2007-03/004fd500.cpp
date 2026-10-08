// roc 2007-03 004fd500  unit: seg_004f0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd500
//
// 004fd500  56                   push esi
// 004fd501  8bf1                 mov esi, ecx
// 004fd503  33c0                 xor eax, eax
// 004fd505  894650               mov dword ptr [esi + 0x50], eax
// 004fd508  894654               mov dword ptr [esi + 0x54], eax
// 004fd50b  e860fcffff           call 0x4fd170
// 004fd510  8bce                 mov ecx, esi
// 004fd512  e869fdffff           call 0x4fd280
// 004fd517  8b4628               mov eax, dword ptr [esi + 0x28]
// 004fd51a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 004fd51d  894650               mov dword ptr [esi + 0x50], eax
// 004fd520  894e54               mov dword ptr [esi + 0x54], ecx
// 004fd523  5e                   pop esi
// 004fd524  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Stopwatch.cpp (function ?computeOverhead@Stopwatch@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Stopwatch.cpp
