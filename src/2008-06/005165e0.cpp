// from server: 100% by auto
// roc 2008-06 005165e0  unit: G3D::BinaryInput  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005165e0
//
// 005165e0  56                   push esi
// 005165e1  57                   push edi
// 005165e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005165e6  57                   push edi
// 005165e7  8bf1                 mov esi, ecx
// 005165e9  ff155c248000         call dword ptr [0x80245c]
// 005165ef  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005165f2  89461c               mov dword ptr [esi + 0x1c], eax
// 005165f5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 005165f8  894e20               mov dword ptr [esi + 0x20], ecx
// 005165fb  8b5724               mov edx, dword ptr [edi + 0x24]
// 005165fe  895624               mov dword ptr [esi + 0x24], edx
// 00516601  8b4728               mov eax, dword ptr [edi + 0x28]
// 00516604  894628               mov dword ptr [esi + 0x28], eax
// 00516607  5f                   pop edi
// 00516608  8bc6                 mov eax, esi
// 0051660a  5e                   pop esi
// 0051660b  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Token@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
