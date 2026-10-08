// roc 2007-03 0047bb80  unit: seg_00470000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047bb80
//
// 0047bb80  56                   push esi
// 0047bb81  57                   push edi
// 0047bb82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047bb86  8b4704               mov eax, dword ptr [edi + 4]
// 0047bb89  85c0                 test eax, eax
// 0047bb8b  8bf1                 mov esi, ecx
// 0047bb8d  c7460400000000       mov dword ptr [esi + 4], 0
// 0047bb94  c7460800000000       mov dword ptr [esi + 8], 0
// 0047bb9b  c70600000000         mov dword ptr [esi], 0
// 0047bba1  7e0a                 jle 0x47bbad
// 0047bba3  6a01                 push 1
// 0047bba5  50                   push eax
// 0047bba6  e8f5f9ffff           call 0x47b5a0
// 0047bbab  eb06                 jmp 0x47bbb3
// 0047bbad  c70600000000         mov dword ptr [esi], 0
// 0047bbb3  33c0                 xor eax, eax
// 0047bbb5  394604               cmp dword ptr [esi + 4], eax
// 0047bbb8  7e18                 jle 0x47bbd2
// 0047bbba  8d9b00000000         lea ebx, [ebx]
// 0047bbc0  8b0f                 mov ecx, dword ptr [edi]
// 0047bbc2  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0047bbc5  8b16                 mov edx, dword ptr [esi]
// 0047bbc7  890c82               mov dword ptr [edx + eax*4], ecx
// 0047bbca  83c001               add eax, 1
// 0047bbcd  3b4604               cmp eax, dword ptr [esi + 4]
// 0047bbd0  7cee                 jl 0x47bbc0
// 0047bbd2  5f                   pop edi
// 0047bbd3  5e                   pop esi
// 0047bbd4  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ?_copy@?$Array@H@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
