// roc 2007-03 0072fa00  unit: seg_00720000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072fa00
//
// 0072fa00  56                   push esi
// 0072fa01  57                   push edi
// 0072fa02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0072fa06  8bf1                 mov esi, ecx
// 0072fa08  8d4704               lea eax, [edi + 4]
// 0072fa0b  50                   push eax
// 0072fa0c  8d4e04               lea ecx, [esi + 4]
// 0072fa0f  ff154ce77700         call dword ptr [0x77e74c]
// 0072fa15  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0072fa18  894e20               mov dword ptr [esi + 0x20], ecx
// 0072fa1b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0072fa1e  895624               mov dword ptr [esi + 0x24], edx
// 0072fa21  8b4728               mov eax, dword ptr [edi + 0x28]
// 0072fa24  894628               mov dword ptr [esi + 0x28], eax
// 0072fa27  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0072fa2a  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0072fa2d  dd4730               fld qword ptr [edi + 0x30]
// 0072fa30  5f                   pop edi
// 0072fa31  dd5e30               fstp qword ptr [esi + 0x30]
// 0072fa34  8bc6                 mov eax, esi
// 0072fa36  5e                   pop esi
// 0072fa37  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ??4TextureArgs@TextureManager@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
