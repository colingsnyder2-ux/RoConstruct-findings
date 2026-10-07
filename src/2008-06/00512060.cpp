// roc 2008-06 00512060  unit: G3D::GCamera  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512060
//
// 00512060  dd05e0cd8100         fld qword ptr [0x81cde0]
// 00512066  56                   push esi
// 00512067  8bf1                 mov esi, ecx
// 00512069  dd5e18               fstp qword ptr [esi + 0x18]
// 0051206c  33c0                 xor eax, eax
// 0051206e  d9ee                 fldz 
// 00512070  8806                 mov byte ptr [esi], al
// 00512072  dd5620               fst qword ptr [esi + 0x20]
// 00512075  894628               mov dword ptr [esi + 0x28], eax
// 00512078  dd5630               fst qword ptr [esi + 0x30]
// 0051207b  89462c               mov dword ptr [esi + 0x2c], eax
// 0051207e  dd5638               fst qword ptr [esi + 0x38]
// 00512081  894650               mov dword ptr [esi + 0x50], eax
// 00512084  dd5640               fst qword ptr [esi + 0x40]
// 00512087  894654               mov dword ptr [esi + 0x54], eax
// 0051208a  dd5e48               fstp qword ptr [esi + 0x48]
// 0051208d  e85efcffff           call 0x511cf0
// 00512092  8bce                 mov ecx, esi
// 00512094  e857fdffff           call 0x511df0
// 00512099  8b4628               mov eax, dword ptr [esi + 0x28]
// 0051209c  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0051209f  894650               mov dword ptr [esi + 0x50], eax
// 005120a2  894e54               mov dword ptr [esi + 0x54], ecx
// 005120a5  8bc6                 mov eax, esi
// 005120a7  5e                   pop esi
// 005120a8  c3                   ret 
// library g3d-6.09/G3Dcpp\Stopwatch.cpp (function ??0Stopwatch@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Stopwatch.cpp
