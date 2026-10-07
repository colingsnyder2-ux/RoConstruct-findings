// roc 2010-06 0054d810  unit: G3D::Shader  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d810
//
// 0054d810  83ec14               sub esp, 0x14
// 0054d813  683092c000           push 0xc09230
// 0054d818  ff1598a29e00         call dword ptr [0x9ea298]
// 0054d81e  85c0                 test eax, eax
// 0054d820  740b                 je 0x54d82d
// 0054d822  684096c000           push 0xc09640
// 0054d827  ff15a0a29e00         call dword ptr [0x9ea2a0]
// 0054d82d  8d442404             lea eax, [esp + 4]
// 0054d831  50                   push eax
// 0054d832  ff15c0a79e00         call dword ptr [0x9ea7c0]
// 0054d838  df6c2408             fild qword ptr [esp + 8]
// 0054d83c  0fbf442412           movsx eax, word ptr [esp + 0x12]
// 0054d841  0fbf542414           movsx edx, word ptr [esp + 0x14]
// 0054d846  8bc8                 mov ecx, eax
// 0054d848  c1e104               shl ecx, 4
// 0054d84b  2bc8                 sub ecx, eax
// 0054d84d  03c9                 add ecx, ecx
// 0054d84f  03c9                 add ecx, ecx
// 0054d851  f7da                 neg edx
// 0054d853  894c2404             mov dword ptr [esp + 4], ecx
// 0054d857  1bd2                 sbb edx, edx
// 0054d859  81e2100e0000         and edx, 0xe10
// 0054d85f  db442404             fild dword ptr [esp + 4]
// 0054d863  89542404             mov dword ptr [esp + 4], edx
// 0054d867  dee9                 fsubp st(1)
// 0054d869  db442404             fild dword ptr [esp + 4]
// 0054d86d  dec1                 faddp st(1)
// 0054d86f  dd1d3896c000         fstp qword ptr [0xc09638]
// 0054d875  83c418               add esp, 0x18
// 0054d878  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?initTime@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
