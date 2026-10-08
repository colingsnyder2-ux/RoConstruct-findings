// roc 2007-03 00470fd0  unit: seg_00470000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470fd0
//
// 00470fd0  56                   push esi
// 00470fd1  57                   push edi
// 00470fd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00470fd6  8b4704               mov eax, dword ptr [edi + 4]
// 00470fd9  85c0                 test eax, eax
// 00470fdb  8bf1                 mov esi, ecx
// 00470fdd  c7460400000000       mov dword ptr [esi + 4], 0
// 00470fe4  c7460800000000       mov dword ptr [esi + 8], 0
// 00470feb  c70600000000         mov dword ptr [esi], 0
// 00470ff1  7e0a                 jle 0x470ffd
// 00470ff3  6a01                 push 1
// 00470ff5  50                   push eax
// 00470ff6  e8e5f8ffff           call 0x4708e0
// 00470ffb  eb06                 jmp 0x471003
// 00470ffd  c70600000000         mov dword ptr [esi], 0
// 00471003  33c0                 xor eax, eax
// 00471005  394604               cmp dword ptr [esi + 4], eax
// 00471008  7e18                 jle 0x471022
// 0047100a  8d9b00000000         lea ebx, [ebx]
// 00471010  8b0f                 mov ecx, dword ptr [edi]
// 00471012  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00471015  8b16                 mov edx, dword ptr [esi]
// 00471017  890c82               mov dword ptr [edx + eax*4], ecx
// 0047101a  83c001               add eax, 1
// 0047101d  3b4604               cmp eax, dword ptr [esi + 4]
// 00471020  7cee                 jl 0x471010
// 00471022  5f                   pop edi
// 00471023  5e                   pop esi
// 00471024  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ?_copy@?$Array@H@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
