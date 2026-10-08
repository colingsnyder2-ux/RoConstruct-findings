// from server: 100% by auto
// roc 2008-06 00508530  unit: G3D::Shader  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508530
//
// 00508530  803d1935970000       cmp byte ptr [0x973519], 0
// 00508537  7528                 jne 0x508561
// 00508539  683c280400           push 0x4283c
// 0050853e  e8dd831900           call 0x6a0920
// 00508543  83c404               add esp, 4
// 00508546  85c0                 test eax, eax
// 00508548  7409                 je 0x508553
// 0050854a  8bc8                 mov ecx, eax
// 0050854c  e80fffffff           call 0x508460
// 00508551  eb02                 jmp 0x508555
// 00508553  33c0                 xor eax, eax
// 00508555  a314359700           mov dword ptr [0x973514], eax
// 0050855a  c6051935970001       mov byte ptr [0x973519], 1
// 00508561  8b442404             mov eax, dword ptr [esp + 4]
// 00508565  8b0d14359700         mov ecx, dword ptr [0x973514]
// 0050856b  50                   push eax
// 0050856c  e82ff5ffff           call 0x507aa0
// 00508571  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?malloc@System@G3D@@SAPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
