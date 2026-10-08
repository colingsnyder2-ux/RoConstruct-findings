// roc 2007-03 004f3a60  unit: seg_004f0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3a60
//
// 004f3a60  83ec08               sub esp, 8
// 004f3a63  e838fdffff           call 0x4f37a0
// 004f3a68  8d0424               lea eax, [esp]
// 004f3a6b  50                   push eax
// 004f3a6c  ff15ecd17700         call dword ptr [0x77d1ec]
// 004f3a72  8b0c24               mov ecx, dword ptr [esp]
// 004f3a75  2b0d60a58b00         sub ecx, dword ptr [0x8ba560]
// 004f3a7b  8b542404             mov edx, dword ptr [esp + 4]
// 004f3a7f  1b1564a58b00         sbb edx, dword ptr [0x8ba564]
// 004f3a85  890c24               mov dword ptr [esp], ecx
// 004f3a88  89542404             mov dword ptr [esp + 4], edx
// 004f3a8c  df2c24               fild qword ptr [esp]
// 004f3a8f  df2d50a18b00         fild qword ptr [0x8ba150]
// 004f3a95  def9                 fdivp st(1)
// 004f3a97  83c408               add esp, 8
// 004f3a9a  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?getTick@System@G3D@@SANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
