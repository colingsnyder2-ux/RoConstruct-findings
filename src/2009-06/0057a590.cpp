// roc 2009-06 0057a590  unit: G3D::LineSegment  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a590
//
// 0057a590  56                   push esi
// 0057a591  57                   push edi
// 0057a592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057a596  57                   push edi
// 0057a597  8bf1                 mov esi, ecx
// 0057a599  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057a59f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0057a5a2  89461c               mov dword ptr [esi + 0x1c], eax
// 0057a5a5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0057a5a8  894e20               mov dword ptr [esi + 0x20], ecx
// 0057a5ab  8b5724               mov edx, dword ptr [edi + 0x24]
// 0057a5ae  895624               mov dword ptr [esi + 0x24], edx
// 0057a5b1  8b4728               mov eax, dword ptr [edi + 0x28]
// 0057a5b4  894628               mov dword ptr [esi + 0x28], eax
// 0057a5b7  5f                   pop edi
// 0057a5b8  8bc6                 mov eax, esi
// 0057a5ba  5e                   pop esi
// 0057a5bb  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Token@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
