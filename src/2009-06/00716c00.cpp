// from server: 100% by auto
// roc 2009-06 00716c00  unit: seg_00710000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00716c00
//
// 00716c00  b801000000           mov eax, 1
// 00716c05  84058415a500         test byte ptr [0xa51584], al
// 00716c0b  751d                 jne 0x716c2a
// 00716c0d  09058415a500         or dword ptr [0xa51584], eax
// 00716c13  b92815a500           mov ecx, 0xa51528
// 00716c18  e873f3ffff           call 0x715f90
// 00716c1d  6820d38900           push 0x89d320
// 00716c22  e8d42e0000           call 0x719afb
// 00716c27  83c404               add esp, 4
// 00716c2a  b82815a500           mov eax, 0xa51528
// 00716c2f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
