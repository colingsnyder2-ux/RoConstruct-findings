// roc 2008-06 004d3ee0  unit: seg_004d0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3ee0
//
// 004d3ee0  8b442404             mov eax, dword ptr [esp + 4]
// 004d3ee4  53                   push ebx
// 004d3ee5  56                   push esi
// 004d3ee6  57                   push edi
// 004d3ee7  50                   push eax
// 004d3ee8  8bf1                 mov esi, ecx
// 004d3eea  e841feffff           call 0x4d3d30
// 004d3eef  8b0e                 mov ecx, dword ptr [esi]
// 004d3ef1  0fb6f8               movzx edi, al
// 004d3ef4  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 004d3ef7  8b13                 mov edx, dword ptr [ebx]
// 004d3ef9  52                   push edx
// 004d3efa  e87bc71c00           call 0x6a067a
// 004d3eff  53                   push ebx
// 004d3f00  e875c71c00           call 0x6a067a
// 004d3f05  8b06                 mov eax, dword ptr [esi]
// 004d3f07  83c408               add esp, 8
// 004d3f0a  c704b800000000       mov dword ptr [eax + edi*4], 0
// 004d3f11  5f                   pop edi
// 004d3f12  5e                   pop esi
// 004d3f13  5b                   pop ebx
// 004d3f14  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?RemoveNode@RPCMap@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
