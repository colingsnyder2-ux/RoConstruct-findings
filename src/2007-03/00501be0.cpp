// roc 2007-03 00501be0  unit: seg_00500000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501be0
//
// 00501be0  56                   push esi
// 00501be1  57                   push edi
// 00501be2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00501be6  57                   push edi
// 00501be7  8bf1                 mov esi, ecx
// 00501be9  ff157ce77700         call dword ptr [0x77e77c]
// 00501bef  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00501bf2  89461c               mov dword ptr [esi + 0x1c], eax
// 00501bf5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00501bf8  894e20               mov dword ptr [esi + 0x20], ecx
// 00501bfb  8b5724               mov edx, dword ptr [edi + 0x24]
// 00501bfe  895624               mov dword ptr [esi + 0x24], edx
// 00501c01  8b4728               mov eax, dword ptr [edi + 0x28]
// 00501c04  894628               mov dword ptr [esi + 0x28], eax
// 00501c07  5f                   pop edi
// 00501c08  8bc6                 mov eax, esi
// 00501c0a  5e                   pop esi
// 00501c0b  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ??0Token@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
