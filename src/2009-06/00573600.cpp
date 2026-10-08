// from server: 100% by auto
// roc 2009-06 00573600  unit: G3D::GCamera  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573600
//
// 00573600  56                   push esi
// 00573601  8bf1                 mov esi, ecx
// 00573603  33c0                 xor eax, eax
// 00573605  394604               cmp dword ptr [esi + 4], eax
// 00573608  7e18                 jle 0x573622
// 0057360a  33c9                 xor ecx, ecx
// 0057360c  ba14b78c00           mov edx, 0x8cb714
// 00573611  53                   push ebx
// 00573612  8b1e                 mov ebx, dword ptr [esi]
// 00573614  89541910             mov dword ptr [ecx + ebx + 0x10], edx
// 00573618  40                   inc eax
// 00573619  83c124               add ecx, 0x24
// 0057361c  3b4604               cmp eax, dword ptr [esi + 4]
// 0057361f  7cf1                 jl 0x573612
// 00573621  5b                   pop ebx
// 00573622  8b06                 mov eax, dword ptr [esi]
// 00573624  50                   push eax
// 00573625  e8667cffff           call 0x56b290
// 0057362a  83c404               add esp, 4
// 0057362d  c70600000000         mov dword ptr [esi], 0
// 00573633  c7460400000000       mov dword ptr [esi + 4], 0
// 0057363a  c7460800000000       mov dword ptr [esi + 8], 0
// 00573641  5e                   pop esi
// 00573642  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
