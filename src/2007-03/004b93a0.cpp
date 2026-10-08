// roc 2007-03 004b93a0  unit: seg_004b0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b93a0
//
// 004b93a0  8b442404             mov eax, dword ptr [esp + 4]
// 004b93a4  53                   push ebx
// 004b93a5  56                   push esi
// 004b93a6  57                   push edi
// 004b93a7  50                   push eax
// 004b93a8  8bf1                 mov esi, ecx
// 004b93aa  e821feffff           call 0x4b91d0
// 004b93af  8b0e                 mov ecx, dword ptr [esi]
// 004b93b1  0fb6f8               movzx edi, al
// 004b93b4  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 004b93b7  8b13                 mov edx, dword ptr [ebx]
// 004b93b9  52                   push edx
// 004b93ba  e8314d1600           call 0x61e0f0
// 004b93bf  53                   push ebx
// 004b93c0  e82b4d1600           call 0x61e0f0
// 004b93c5  8b06                 mov eax, dword ptr [esi]
// 004b93c7  83c408               add esp, 8
// 004b93ca  c704b800000000       mov dword ptr [eax + edi*4], 0
// 004b93d1  5f                   pop edi
// 004b93d2  5e                   pop esi
// 004b93d3  5b                   pop ebx
// 004b93d4  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?RemoveNode@RPCMap@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
