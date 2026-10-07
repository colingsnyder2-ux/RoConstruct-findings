// roc 2008-06 00508410  unit: G3D::Shader  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508410
//
// 00508410  83ec08               sub esp, 8
// 00508413  e8f8fcffff           call 0x508110
// 00508418  8d0424               lea eax, [esp]
// 0050841b  50                   push eax
// 0050841c  ff1550228000         call dword ptr [0x802250]
// 00508422  8b0c24               mov ecx, dword ptr [esp]
// 00508425  2b0df82c9700         sub ecx, dword ptr [0x972cf8]
// 0050842b  8b542404             mov edx, dword ptr [esp + 4]
// 0050842f  1b15fc2c9700         sbb edx, dword ptr [0x972cfc]
// 00508435  890c24               mov dword ptr [esp], ecx
// 00508438  89542404             mov dword ptr [esp + 4], edx
// 0050843c  df2c24               fild qword ptr [esp]
// 0050843f  df2de8289700         fild qword ptr [0x9728e8]
// 00508445  def9                 fdivp st(1)
// 00508447  dc05f02c9700         fadd qword ptr [0x972cf0]
// 0050844d  83c408               add esp, 8
// 00508450  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getLocalTime@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
