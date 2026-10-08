// roc 2007-03 004e87e0  unit: seg_004e0000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e87e0
//
// 004e87e0  56                   push esi
// 004e87e1  57                   push edi
// 004e87e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e87e6  8b4704               mov eax, dword ptr [edi + 4]
// 004e87e9  85c0                 test eax, eax
// 004e87eb  8bf1                 mov esi, ecx
// 004e87ed  c7460400000000       mov dword ptr [esi + 4], 0
// 004e87f4  c7460800000000       mov dword ptr [esi + 8], 0
// 004e87fb  c70600000000         mov dword ptr [esi], 0
// 004e8801  7e0a                 jle 0x4e880d
// 004e8803  6a01                 push 1
// 004e8805  50                   push eax
// 004e8806  e81528f9ff           call 0x47b020
// 004e880b  eb06                 jmp 0x4e8813
// 004e880d  c70600000000         mov dword ptr [esi], 0
// 004e8813  33c0                 xor eax, eax
// 004e8815  394604               cmp dword ptr [esi + 4], eax
// 004e8818  7e18                 jle 0x4e8832
// 004e881a  8d9b00000000         lea ebx, [ebx]
// 004e8820  8b0f                 mov ecx, dword ptr [edi]
// 004e8822  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004e8825  8b16                 mov edx, dword ptr [esi]
// 004e8827  890c82               mov dword ptr [edx + eax*4], ecx
// 004e882a  83c001               add eax, 1
// 004e882d  3b4604               cmp eax, dword ptr [esi + 4]
// 004e8830  7cee                 jl 0x4e8820
// 004e8832  5f                   pop edi
// 004e8833  5e                   pop esi
// 004e8834  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ?_copy@?$Array@H@G3D@@AAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
