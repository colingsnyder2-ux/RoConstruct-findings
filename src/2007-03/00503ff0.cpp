// roc 2007-03 00503ff0  unit: seg_00500000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503ff0
//
// 00503ff0  56                   push esi
// 00503ff1  57                   push edi
// 00503ff2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00503ff6  8b4704               mov eax, dword ptr [edi + 4]
// 00503ff9  6a01                 push 1
// 00503ffb  50                   push eax
// 00503ffc  8bf1                 mov esi, ecx
// 00503ffe  e81d70f7ff           call 0x47b020
// 00504003  33c0                 xor eax, eax
// 00504005  394604               cmp dword ptr [esi + 4], eax
// 00504008  7e18                 jle 0x504022
// 0050400a  8d9b00000000         lea ebx, [ebx]
// 00504010  8b0f                 mov ecx, dword ptr [edi]
// 00504012  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00504015  8b16                 mov edx, dword ptr [esi]
// 00504017  890c82               mov dword ptr [edx + eax*4], ecx
// 0050401a  83c001               add eax, 1
// 0050401d  3b4604               cmp eax, dword ptr [esi + 4]
// 00504020  7cee                 jl 0x504010
// 00504022  5f                   pop edi
// 00504023  8bc6                 mov eax, esi
// 00504025  5e                   pop esi
// 00504026  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
