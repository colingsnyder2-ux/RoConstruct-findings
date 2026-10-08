// roc 2007-08 004f4870  unit: boost::bad_lexical_cast  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4870
//
// 004f4870  8b442404             mov eax, dword ptr [esp + 4]
// 004f4874  85c0                 test eax, eax
// 004f4876  7435                 je 0x4f48ad
// 004f4878  83781000             cmp dword ptr [eax + 0x10], 0
// 004f487c  7e2f                 jle 0x4f48ad
// 004f487e  53                   push ebx
// 004f487f  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f4883  56                   push esi
// 004f4884  8b7018               mov esi, dword ptr [eax + 0x18]
// 004f4887  57                   push edi
// 004f4888  8b7810               mov edi, dword ptr [eax + 0x10]
// 004f488b  8b400c               mov eax, dword ptr [eax + 0xc]
// 004f488e  50                   push eax
// 004f488f  57                   push edi
// 004f4890  6a04                 push 4
// 004f4892  56                   push esi
// 004f4893  8bcb                 mov ecx, ebx
// 004f4895  e8e635f8ff           call 0x477e80
// 004f489a  8bcb                 mov ecx, ebx
// 004f489c  e88f21f8ff           call 0x476a30
// 004f48a1  57                   push edi
// 004f48a2  56                   push esi
// 004f48a3  8bcb                 mov ecx, ebx
// 004f48a5  e88603f8ff           call 0x474c30
// 004f48aa  5f                   pop edi
// 004f48ab  5e                   pop esi
// 004f48ac  5b                   pop ebx
// 004f48ad  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?sendGeometry@Mesh@Render@RBX@@SAXPBVLevel@123@PAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
