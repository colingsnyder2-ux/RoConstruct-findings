// from server: 100% by auto
// roc 2007-08 004ffef0  unit: G3D::Shader  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ffef0
//
// 004ffef0  83ec08               sub esp, 8
// 004ffef3  e838fdffff           call 0x4ffc30
// 004ffef8  8d0424               lea eax, [esp]
// 004ffefb  50                   push eax
// 004ffefc  ff1528d27700         call dword ptr [0x77d228]
// 004fff02  8b0c24               mov ecx, dword ptr [esp]
// 004fff05  2b0d90008c00         sub ecx, dword ptr [0x8c0090]
// 004fff0b  8b542404             mov edx, dword ptr [esp + 4]
// 004fff0f  1b1594008c00         sbb edx, dword ptr [0x8c0094]
// 004fff15  890c24               mov dword ptr [esp], ecx
// 004fff18  89542404             mov dword ptr [esp + 4], edx
// 004fff1c  df2c24               fild qword ptr [esp]
// 004fff1f  df2d80fc8b00         fild qword ptr [0x8bfc80]
// 004fff25  def9                 fdivp st(1)
// 004fff27  83c408               add esp, 8
// 004fff2a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getTick@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
