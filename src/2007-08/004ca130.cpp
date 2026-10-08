// roc 2007-08 004ca130  unit: seg_004c0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca130
//
// 004ca130  8b442404             mov eax, dword ptr [esp + 4]
// 004ca134  53                   push ebx
// 004ca135  56                   push esi
// 004ca136  57                   push edi
// 004ca137  50                   push eax
// 004ca138  8bf1                 mov esi, ecx
// 004ca13a  e821feffff           call 0x4c9f60
// 004ca13f  8b0e                 mov ecx, dword ptr [esi]
// 004ca141  0fb6f8               movzx edi, al
// 004ca144  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 004ca147  8b13                 mov edx, dword ptr [ebx]
// 004ca149  52                   push edx
// 004ca14a  e8135b1600           call 0x62fc62
// 004ca14f  53                   push ebx
// 004ca150  e80d5b1600           call 0x62fc62
// 004ca155  8b06                 mov eax, dword ptr [esi]
// 004ca157  83c408               add esp, 8
// 004ca15a  c704b800000000       mov dword ptr [eax + edi*4], 0
// 004ca161  5f                   pop edi
// 004ca162  5e                   pop esi
// 004ca163  5b                   pop ebx
// 004ca164  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?RemoveNode@RPCMap@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
