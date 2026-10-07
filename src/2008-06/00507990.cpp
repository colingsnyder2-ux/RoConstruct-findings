// roc 2008-06 00507990  unit: G3D::Shader  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507990
//
// 00507990  83ec14               sub esp, 0x14
// 00507993  68e8289700           push 0x9728e8
// 00507998  ff155c228000         call dword ptr [0x80225c]
// 0050799e  85c0                 test eax, eax
// 005079a0  740b                 je 0x5079ad
// 005079a2  68f82c9700           push 0x972cf8
// 005079a7  ff1550228000         call dword ptr [0x802250]
// 005079ad  8d442404             lea eax, [esp + 4]
// 005079b1  50                   push eax
// 005079b2  ff15a4278000         call dword ptr [0x8027a4]
// 005079b8  df6c2408             fild qword ptr [esp + 8]
// 005079bc  0fbf442412           movsx eax, word ptr [esp + 0x12]
// 005079c1  0fbf542414           movsx edx, word ptr [esp + 0x14]
// 005079c6  8bc8                 mov ecx, eax
// 005079c8  c1e104               shl ecx, 4
// 005079cb  2bc8                 sub ecx, eax
// 005079cd  03c9                 add ecx, ecx
// 005079cf  03c9                 add ecx, ecx
// 005079d1  f7da                 neg edx
// 005079d3  894c2404             mov dword ptr [esp + 4], ecx
// 005079d7  1bd2                 sbb edx, edx
// 005079d9  81e2100e0000         and edx, 0xe10
// 005079df  db442404             fild dword ptr [esp + 4]
// 005079e3  89542404             mov dword ptr [esp + 4], edx
// 005079e7  dee9                 fsubp st(1)
// 005079e9  db442404             fild dword ptr [esp + 4]
// 005079ed  dec1                 faddp st(1)
// 005079ef  dd1df02c9700         fstp qword ptr [0x972cf0]
// 005079f5  83c418               add esp, 0x18
// 005079f8  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?initTime@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
