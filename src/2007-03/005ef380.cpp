// roc 2007-03 005ef380  unit: seg_005e0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ef380
//
// 005ef380  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ef383  8b01                 mov eax, dword ptr [ecx]
// 005ef385  8b5004               mov edx, dword ptr [eax + 4]
// 005ef388  56                   push esi
// 005ef389  ffd2                 call edx
// 005ef38b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef38f  8bf0                 mov esi, eax
// 005ef391  8b01                 mov eax, dword ptr [ecx]
// 005ef393  8b5004               mov edx, dword ptr [eax + 4]
// 005ef396  ffd2                 call edx
// 005ef398  33c9                 xor ecx, ecx
// 005ef39a  3bf0                 cmp esi, eax
// 005ef39c  0f9fc1               setg cl
// 005ef39f  8ac1                 mov al, cl
// 005ef3a1  5e                   pop esi
// 005ef3a2  c20400               ret 4
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?downstreamOfStage@IPipelined@RBX@@QBE_NPAVIStage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
