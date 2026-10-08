// from server: 100% by auto
// roc 2007-08 004ff470  unit: G3D::Shader  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff470
//
// 004ff470  83ec14               sub esp, 0x14
// 004ff473  6880fc8b00           push 0x8bfc80
// 004ff478  ff1524d27700         call dword ptr [0x77d224]
// 004ff47e  85c0                 test eax, eax
// 004ff480  740b                 je 0x4ff48d
// 004ff482  6890008c00           push 0x8c0090
// 004ff487  ff1528d27700         call dword ptr [0x77d228]
// 004ff48d  8d442404             lea eax, [esp + 4]
// 004ff491  50                   push eax
// 004ff492  ff15e0e87700         call dword ptr [0x77e8e0]
// 004ff498  df6c2408             fild qword ptr [esp + 8]
// 004ff49c  0fbf442412           movsx eax, word ptr [esp + 0x12]
// 004ff4a1  668b542414           mov dx, word ptr [esp + 0x14]
// 004ff4a6  8bc8                 mov ecx, eax
// 004ff4a8  c1e104               shl ecx, 4
// 004ff4ab  2bc8                 sub ecx, eax
// 004ff4ad  03c9                 add ecx, ecx
// 004ff4af  03c9                 add ecx, ecx
// 004ff4b1  66f7da               neg dx
// 004ff4b4  894c2404             mov dword ptr [esp + 4], ecx
// 004ff4b8  db442404             fild dword ptr [esp + 4]
// 004ff4bc  dee9                 fsubp st(1)
// 004ff4be  1bd2                 sbb edx, edx
// 004ff4c0  81e2100e0000         and edx, 0xe10
// 004ff4c6  89542404             mov dword ptr [esp + 4], edx
// 004ff4ca  db442404             fild dword ptr [esp + 4]
// 004ff4ce  dec1                 faddp st(1)
// 004ff4d0  dd1d88008c00         fstp qword ptr [0x8c0088]
// 004ff4d6  83c418               add esp, 0x18
// 004ff4d9  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?initTime@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
