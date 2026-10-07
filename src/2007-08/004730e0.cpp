// roc 2007-08 004730e0  unit: G3D::VARArea  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004730e0
//
// 004730e0  8b542404             mov edx, dword ptr [esp + 4]
// 004730e4  d94124               fld dword ptr [ecx + 0x24]
// 004730e7  d94224               fld dword ptr [edx + 0x24]
// 004730ea  dae9                 fucompp 
// 004730ec  dfe0                 fnstsw ax
// 004730ee  f6c444               test ah, 0x44
// 004730f1  7a39                 jp 0x47312c
// 004730f3  d94128               fld dword ptr [ecx + 0x28]
// 004730f6  d94228               fld dword ptr [edx + 0x28]
// 004730f9  dae9                 fucompp 
// 004730fb  dfe0                 fnstsw ax
// 004730fd  f6c444               test ah, 0x44
// 00473100  7a2a                 jp 0x47312c
// 00473102  d9412c               fld dword ptr [ecx + 0x2c]
// 00473105  d9422c               fld dword ptr [edx + 0x2c]
// 00473108  dae9                 fucompp 
// 0047310a  dfe0                 fnstsw ax
// 0047310c  f6c444               test ah, 0x44
// 0047310f  7a1b                 jp 0x47312c
// 00473111  52                   push edx
// 00473112  e869650900           call 0x509680
// 00473117  84c0                 test al, al
// 00473119  7411                 je 0x47312c
// 0047311b  b801000000           mov eax, 1
// 00473120  33c9                 xor ecx, ecx
// 00473122  84c0                 test al, al
// 00473124  0f94c1               sete cl
// 00473127  8ac1                 mov al, cl
// 00473129  c20400               ret 4
// 0047312c  33c0                 xor eax, eax
// 0047312e  33c9                 xor ecx, ecx
// 00473130  84c0                 test al, al
// 00473132  0f94c1               sete cl
// 00473135  8ac1                 mov al, cl
// 00473137  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9CoordinateFrame@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
