// roc 2007-03 005035b0  unit: seg_00500000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005035b0
//
// 005035b0  56                   push esi
// 005035b1  57                   push edi
// 005035b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005035b6  57                   push edi
// 005035b7  8bf1                 mov esi, ecx
// 005035b9  e852f8ffff           call 0x502e10
// 005035be  c7067c057a00         mov dword ptr [esi], 0x7a057c
// 005035c4  8b4744               mov eax, dword ptr [edi + 0x44]
// 005035c7  894644               mov dword ptr [esi + 0x44], eax
// 005035ca  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005035cd  5f                   pop edi
// 005035ce  894e48               mov dword ptr [esi + 0x48], ecx
// 005035d1  8bc6                 mov eax, esi
// 005035d3  5e                   pop esi
// 005035d4  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
