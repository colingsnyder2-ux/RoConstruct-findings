// roc 2010-06 0054e160  unit: G3D::Shader  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054e160
//
// 0054e160  83ec08               sub esp, 8
// 0054e163  e838fdffff           call 0x54dea0
// 0054e168  8d0424               lea eax, [esp]
// 0054e16b  50                   push eax
// 0054e16c  ff15a0a29e00         call dword ptr [0x9ea2a0]
// 0054e172  8b0c24               mov ecx, dword ptr [esp]
// 0054e175  2b0d4096c000         sub ecx, dword ptr [0xc09640]
// 0054e17b  8b542404             mov edx, dword ptr [esp + 4]
// 0054e17f  1b154496c000         sbb edx, dword ptr [0xc09644]
// 0054e185  890c24               mov dword ptr [esp], ecx
// 0054e188  89542404             mov dword ptr [esp + 4], edx
// 0054e18c  df2c24               fild qword ptr [esp]
// 0054e18f  df2d3092c000         fild qword ptr [0xc09230]
// 0054e195  def9                 fdivp st(1)
// 0054e197  83c408               add esp, 8
// 0054e19a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getTick@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
