// roc 2007-03 004e82d0  unit: seg_004e0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e82d0
//
// 004e82d0  8b442404             mov eax, dword ptr [esp + 4]
// 004e82d4  85c0                 test eax, eax
// 004e82d6  7435                 je 0x4e830d
// 004e82d8  83781000             cmp dword ptr [eax + 0x10], 0
// 004e82dc  7e2f                 jle 0x4e830d
// 004e82de  53                   push ebx
// 004e82df  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004e82e3  56                   push esi
// 004e82e4  8b7018               mov esi, dword ptr [eax + 0x18]
// 004e82e7  57                   push edi
// 004e82e8  8b7810               mov edi, dword ptr [eax + 0x10]
// 004e82eb  8b400c               mov eax, dword ptr [eax + 0xc]
// 004e82ee  50                   push eax
// 004e82ef  57                   push edi
// 004e82f0  6a04                 push 4
// 004e82f2  56                   push esi
// 004e82f3  8bcb                 mov ecx, ebx
// 004e82f5  e8e6fcf8ff           call 0x477fe0
// 004e82fa  8bcb                 mov ecx, ebx
// 004e82fc  e88fe8f8ff           call 0x476b90
// 004e8301  57                   push edi
// 004e8302  56                   push esi
// 004e8303  8bcb                 mov ecx, ebx
// 004e8305  e826caf8ff           call 0x474d30
// 004e830a  5f                   pop edi
// 004e830b  5e                   pop esi
// 004e830c  5b                   pop ebx
// 004e830d  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?sendGeometry@Mesh@Render@RBX@@SAXPBVLevel@123@PAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
