// roc 2008-06 00518e20  unit: G3D::TextInput::WrongSymbol  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518e20
//
// 00518e20  b801000000           mov eax, 1
// 00518e25  8405a4289700         test byte ptr [0x9728a4], al
// 00518e2b  751c                 jne 0x518e49
// 00518e2d  d9ee                 fldz 
// 00518e2f  0905a4289700         or dword ptr [0x9728a4], eax
// 00518e35  d91598289700         fst dword ptr [0x972898]
// 00518e3b  d9e8                 fld1 
// 00518e3d  d91d9c289700         fstp dword ptr [0x97289c]
// 00518e43  d91da0289700         fstp dword ptr [0x9728a0]
// 00518e49  d90598289700         fld dword ptr [0x972898]
// 00518e4f  83ec0c               sub esp, 0xc
// 00518e52  8bc4                 mov eax, esp
// 00518e54  d918                 fstp dword ptr [eax]
// 00518e56  d9059c289700         fld dword ptr [0x97289c]
// 00518e5c  d95804               fstp dword ptr [eax + 4]
// 00518e5f  d905a0289700         fld dword ptr [0x9728a0]
// 00518e65  d95808               fstp dword ptr [eax + 8]
// 00518e68  8b442410             mov eax, dword ptr [esp + 0x10]
// 00518e6c  50                   push eax
// 00518e6d  e81efdffff           call 0x518b90
// 00518e72  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
