// roc 2009-12 005ea230  unit: G3D::Shader  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ea230
//
// 005ea230  83ec14               sub esp, 0x14
// 005ea233  686831b800           push 0xb83168
// 005ea238  ff15dcb29800         call dword ptr [0x98b2dc]
// 005ea23e  85c0                 test eax, eax
// 005ea240  740b                 je 0x5ea24d
// 005ea242  687835b800           push 0xb83578
// 005ea247  ff15ccb29800         call dword ptr [0x98b2cc]
// 005ea24d  8d442404             lea eax, [esp + 4]
// 005ea251  50                   push eax
// 005ea252  ff15b4b89800         call dword ptr [0x98b8b4]
// 005ea258  df6c2408             fild qword ptr [esp + 8]
// 005ea25c  0fbf442412           movsx eax, word ptr [esp + 0x12]
// 005ea261  0fbf542414           movsx edx, word ptr [esp + 0x14]
// 005ea266  8bc8                 mov ecx, eax
// 005ea268  c1e104               shl ecx, 4
// 005ea26b  2bc8                 sub ecx, eax
// 005ea26d  03c9                 add ecx, ecx
// 005ea26f  03c9                 add ecx, ecx
// 005ea271  f7da                 neg edx
// 005ea273  894c2404             mov dword ptr [esp + 4], ecx
// 005ea277  1bd2                 sbb edx, edx
// 005ea279  81e2100e0000         and edx, 0xe10
// 005ea27f  db442404             fild dword ptr [esp + 4]
// 005ea283  89542404             mov dword ptr [esp + 4], edx
// 005ea287  dee9                 fsubp st(1)
// 005ea289  db442404             fild dword ptr [esp + 4]
// 005ea28d  dec1                 faddp st(1)
// 005ea28f  dd1d7035b800         fstp qword ptr [0xb83570]
// 005ea295  83c418               add esp, 0x18
// 005ea298  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?initTime@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
