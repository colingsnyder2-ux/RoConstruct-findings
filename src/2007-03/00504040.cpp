// roc 2007-03 00504040  unit: seg_00500000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00504040
//
// 00504040  8b1568067a00         mov edx, dword ptr [0x7a0668]
// 00504046  33c0                 xor eax, eax
// 00504048  8d4e0c               lea ecx, [esi + 0xc]
// 0050404b  eb03                 jmp 0x504050
// 0050404d  8d4900               lea ecx, [ecx]
// 00504050  3911                 cmp dword ptr [ecx], edx
// 00504052  740c                 je 0x504060
// 00504054  83c001               add eax, 1
// 00504057  83c104               add ecx, 4
// 0050405a  83f803               cmp eax, 3
// 0050405d  7cf1                 jl 0x504050
// 0050405f  c3                   ret 
// 00504060  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00504064  894c860c             mov dword ptr [esi + eax*4 + 0xc], ecx
// 00504068  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ?assignEdgeIndex@G3D@@YAXAAVFace@MeshAlg@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
