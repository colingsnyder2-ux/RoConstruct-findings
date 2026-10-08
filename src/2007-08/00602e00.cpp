// roc 2007-08 00602e00  unit: RBX::FallingDown  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602e00
//
// 00602e00  8b4904               mov ecx, dword ptr [ecx + 4]
// 00602e03  8b01                 mov eax, dword ptr [ecx]
// 00602e05  8b5004               mov edx, dword ptr [eax + 4]
// 00602e08  56                   push esi
// 00602e09  ffd2                 call edx
// 00602e0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00602e0f  8bf0                 mov esi, eax
// 00602e11  8b01                 mov eax, dword ptr [ecx]
// 00602e13  8b5004               mov edx, dword ptr [eax + 4]
// 00602e16  ffd2                 call edx
// 00602e18  33c9                 xor ecx, ecx
// 00602e1a  3bf0                 cmp esi, eax
// 00602e1c  0f9fc1               setg cl
// 00602e1f  8ac1                 mov al, cl
// 00602e21  5e                   pop esi
// 00602e22  c20400               ret 4
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?downstreamOfStage@IPipelined@RBX@@QBE_NPAVIStage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
