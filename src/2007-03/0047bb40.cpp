// roc 2007-03 0047bb40  unit: seg_00470000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047bb40
//
// 0047bb40  56                   push esi
// 0047bb41  57                   push edi
// 0047bb42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047bb46  8b4704               mov eax, dword ptr [edi + 4]
// 0047bb49  6a01                 push 1
// 0047bb4b  50                   push eax
// 0047bb4c  8bf1                 mov esi, ecx
// 0047bb4e  e84dfaffff           call 0x47b5a0
// 0047bb53  33c0                 xor eax, eax
// 0047bb55  394604               cmp dword ptr [esi + 4], eax
// 0047bb58  7e18                 jle 0x47bb72
// 0047bb5a  8d9b00000000         lea ebx, [ebx]
// 0047bb60  8b0f                 mov ecx, dword ptr [edi]
// 0047bb62  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0047bb65  8b16                 mov edx, dword ptr [esi]
// 0047bb67  890c82               mov dword ptr [edx + eax*4], ecx
// 0047bb6a  83c001               add eax, 1
// 0047bb6d  3b4604               cmp eax, dword ptr [esi + 4]
// 0047bb70  7cee                 jl 0x47bb60
// 0047bb72  5f                   pop edi
// 0047bb73  8bc6                 mov eax, esi
// 0047bb75  5e                   pop esi
// 0047bb76  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ??4?$Array@H@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
