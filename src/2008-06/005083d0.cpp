// roc 2008-06 005083d0  unit: G3D::Shader  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005083d0
//
// 005083d0  83ec08               sub esp, 8
// 005083d3  e838fdffff           call 0x508110
// 005083d8  8d0424               lea eax, [esp]
// 005083db  50                   push eax
// 005083dc  ff1550228000         call dword ptr [0x802250]
// 005083e2  8b0c24               mov ecx, dword ptr [esp]
// 005083e5  2b0df82c9700         sub ecx, dword ptr [0x972cf8]
// 005083eb  8b542404             mov edx, dword ptr [esp + 4]
// 005083ef  1b15fc2c9700         sbb edx, dword ptr [0x972cfc]
// 005083f5  890c24               mov dword ptr [esp], ecx
// 005083f8  89542404             mov dword ptr [esp + 4], edx
// 005083fc  df2c24               fild qword ptr [esp]
// 005083ff  df2de8289700         fild qword ptr [0x9728e8]
// 00508405  def9                 fdivp st(1)
// 00508407  83c408               add esp, 8
// 0050840a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getTick@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
