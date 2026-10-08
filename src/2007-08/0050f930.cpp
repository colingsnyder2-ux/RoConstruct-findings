// from server: 100% by auto
// roc 2007-08 0050f930  unit: G3D::TextInput::WrongSymbol  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f930
//
// 0050f930  8b15900e7a00         mov edx, dword ptr [0x7a0e90]
// 0050f936  33c0                 xor eax, eax
// 0050f938  8d4e0c               lea ecx, [esi + 0xc]
// 0050f93b  eb03                 jmp 0x50f940
// 0050f93d  8d4900               lea ecx, [ecx]
// 0050f940  3911                 cmp dword ptr [ecx], edx
// 0050f942  740c                 je 0x50f950
// 0050f944  83c001               add eax, 1
// 0050f947  83c104               add ecx, 4
// 0050f94a  83f803               cmp eax, 3
// 0050f94d  7cf1                 jl 0x50f940
// 0050f94f  c3                   ret 
// 0050f950  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050f954  894c860c             mov dword ptr [esi + eax*4 + 0xc], ecx
// 0050f958  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?assignEdgeIndex@G3D@@YAXAAVFace@MeshAlg@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
