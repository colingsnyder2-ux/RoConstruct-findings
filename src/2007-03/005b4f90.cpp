// roc 2007-03 005b4f90  unit: seg_005b0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b4f90
//
// 005b4f90  83ec10               sub esp, 0x10
// 005b4f93  8d0424               lea eax, [esp]
// 005b4f96  50                   push eax
// 005b4f97  ff15ecd17700         call dword ptr [0x77d1ec]
// 005b4f9d  8d4c2408             lea ecx, [esp + 8]
// 005b4fa1  51                   push ecx
// 005b4fa2  ff15e8d17700         call dword ptr [0x77d1e8]
// 005b4fa8  df2c24               fild qword ptr [esp]
// 005b4fab  df6c2408             fild qword ptr [esp + 8]
// 005b4faf  def9                 fdivp st(1)
// 005b4fb1  83c410               add esp, 0x10
// 005b4fb4  c3                   ret 
// library openrbx-client/App\util\Timer.cpp (function ?getRealTime@RBX@@YANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Timer.cpp
