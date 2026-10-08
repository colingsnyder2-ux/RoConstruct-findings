// from server: 100% by auto
// roc 2008-06 0050ab30  unit: G3D::Log  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ab30
//
// 0050ab30  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0050ab33  8b5134               mov edx, dword ptr [ecx + 0x34]
// 0050ab36  56                   push esi
// 0050ab37  8b742408             mov esi, dword ptr [esp + 8]
// 0050ab3b  03c6                 add eax, esi
// 0050ab3d  3bd0                 cmp edx, eax
// 0050ab3f  7c02                 jl 0x50ab43
// 0050ab41  8bc2                 mov eax, edx
// 0050ab43  3b4138               cmp eax, dword ptr [ecx + 0x38]
// 0050ab46  894134               mov dword ptr [ecx + 0x34], eax
// 0050ab49  7e07                 jle 0x50ab52
// 0050ab4b  52                   push edx
// 0050ab4c  56                   push esi
// 0050ab4d  e8deec0000           call 0x519830
// 0050ab52  5e                   pop esi
// 0050ab53  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?reserveBytes@BinaryOutput@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
