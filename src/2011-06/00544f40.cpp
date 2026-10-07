// roc 2011-06 00544f40  unit: G3D::BinaryInput  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00544f40
//
// 00544f40  dd442404             fld qword ptr [esp + 4]
// 00544f44  83ec08               sub esp, 8
// 00544f47  dd1c24               fstp qword ptr [esp]
// 00544f4a  ff156409a400         call dword ptr [0xa40964]
// 00544f50  83c408               add esp, 8
// 00544f53  e9d8652c00           jmp 0x80b530
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?iCeil@G3D@@YAHN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
