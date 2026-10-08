// roc 2009-12 005eab80  unit: G3D::Shader  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eab80
//
// 005eab80  83ec08               sub esp, 8
// 005eab83  e838fdffff           call 0x5ea8c0
// 005eab88  8d0424               lea eax, [esp]
// 005eab8b  50                   push eax
// 005eab8c  ff15ccb29800         call dword ptr [0x98b2cc]
// 005eab92  8b0c24               mov ecx, dword ptr [esp]
// 005eab95  2b0d7835b800         sub ecx, dword ptr [0xb83578]
// 005eab9b  8b542404             mov edx, dword ptr [esp + 4]
// 005eab9f  1b157c35b800         sbb edx, dword ptr [0xb8357c]
// 005eaba5  890c24               mov dword ptr [esp], ecx
// 005eaba8  89542404             mov dword ptr [esp + 4], edx
// 005eabac  df2c24               fild qword ptr [esp]
// 005eabaf  df2d6831b800         fild qword ptr [0xb83168]
// 005eabb5  def9                 fdivp st(1)
// 005eabb7  83c408               add esp, 8
// 005eabba  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getTick@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
