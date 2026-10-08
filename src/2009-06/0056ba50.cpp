// from server: 100% by auto
// roc 2009-06 0056ba50  unit: G3D::Shader  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056ba50
//
// 0056ba50  83ec08               sub esp, 8
// 0056ba53  e838fdffff           call 0x56b790
// 0056ba58  8d0424               lea eax, [esp]
// 0056ba5b  50                   push eax
// 0056ba5c  ff15a8e28900         call dword ptr [0x89e2a8]
// 0056ba62  8b0c24               mov ecx, dword ptr [esp]
// 0056ba65  2b0d0821a400         sub ecx, dword ptr [0xa42108]
// 0056ba6b  8b542404             mov edx, dword ptr [esp + 4]
// 0056ba6f  1b150c21a400         sbb edx, dword ptr [0xa4210c]
// 0056ba75  890c24               mov dword ptr [esp], ecx
// 0056ba78  89542404             mov dword ptr [esp + 4], edx
// 0056ba7c  df2c24               fild qword ptr [esp]
// 0056ba7f  df2df81ca400         fild qword ptr [0xa41cf8]
// 0056ba85  def9                 fdivp st(1)
// 0056ba87  83c408               add esp, 8
// 0056ba8a  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?getTick@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
