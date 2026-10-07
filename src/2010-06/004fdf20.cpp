// roc 2010-06 004fdf20  unit: RBX::Network::IdSerializer  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fdf20
//
// 004fdf20  833d8468c00000       cmp dword ptr [0xc06884], 0
// 004fdf27  7e2f                 jle 0x4fdf58
// 004fdf29  832d8468c00001       sub dword ptr [0xc06884], 1
// 004fdf30  7526                 jne 0x4fdf58
// 004fdf32  8b0d8068c000         mov ecx, dword ptr [0xc06880]
// 004fdf38  56                   push esi
// 004fdf39  8bf1                 mov esi, ecx
// 004fdf3b  85c9                 test ecx, ecx
// 004fdf3d  740e                 je 0x4fdf4d
// 004fdf3f  e8fcfeffff           call 0x4fde40
// 004fdf44  56                   push esi
// 004fdf45  e8509a2a00           call 0x7a799a
// 004fdf4a  83c404               add esp, 4
// 004fdf4d  c7058068c00000000000 mov dword ptr [0xc06880], 0
// 004fdf57  5e                   pop esi
// 004fdf58  c3                   ret 
// library rbx2016-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringCompressor.cpp
