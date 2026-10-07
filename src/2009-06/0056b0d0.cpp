// roc 2009-06 0056b0d0  unit: G3D::Shader  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056b0d0
//
// 0056b0d0  83ec14               sub esp, 0x14
// 0056b0d3  68f81ca400           push 0xa41cf8
// 0056b0d8  ff15b0e28900         call dword ptr [0x89e2b0]
// 0056b0de  85c0                 test eax, eax
// 0056b0e0  740b                 je 0x56b0ed
// 0056b0e2  680821a400           push 0xa42108
// 0056b0e7  ff15a8e28900         call dword ptr [0x89e2a8]
// 0056b0ed  8d442404             lea eax, [esp + 4]
// 0056b0f1  50                   push eax
// 0056b0f2  ff156ce88900         call dword ptr [0x89e86c]
// 0056b0f8  df6c2408             fild qword ptr [esp + 8]
// 0056b0fc  0fbf442412           movsx eax, word ptr [esp + 0x12]
// 0056b101  0fbf542414           movsx edx, word ptr [esp + 0x14]
// 0056b106  8bc8                 mov ecx, eax
// 0056b108  c1e104               shl ecx, 4
// 0056b10b  2bc8                 sub ecx, eax
// 0056b10d  03c9                 add ecx, ecx
// 0056b10f  03c9                 add ecx, ecx
// 0056b111  f7da                 neg edx
// 0056b113  894c2404             mov dword ptr [esp + 4], ecx
// 0056b117  1bd2                 sbb edx, edx
// 0056b119  81e2100e0000         and edx, 0xe10
// 0056b11f  db442404             fild dword ptr [esp + 4]
// 0056b123  89542404             mov dword ptr [esp + 4], edx
// 0056b127  dee9                 fsubp st(1)
// 0056b129  db442404             fild dword ptr [esp + 4]
// 0056b12d  dec1                 faddp st(1)
// 0056b12f  dd1d0021a400         fstp qword ptr [0xa42100]
// 0056b135  83c418               add esp, 0x18
// 0056b138  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?initTime@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
