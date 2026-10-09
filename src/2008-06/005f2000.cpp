// roc 2008-06 005f2000  unit: RBX::FaceInstance  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2000
//
// 005f2000  83ec10               sub esp, 0x10
// 005f2003  8d0424               lea eax, [esp]
// 005f2006  50                   push eax
// 005f2007  ff1550228000         call dword ptr [0x802250]
// 005f200d  8d4c2408             lea ecx, [esp + 8]
// 005f2011  51                   push ecx
// 005f2012  ff155c228000         call dword ptr [0x80225c]
// 005f2018  df2c24               fild qword ptr [esp]
// 005f201b  df6c2408             fild qword ptr [esp + 8]
// 005f201f  def9                 fdivp st(1)
// 005f2021  83c410               add esp, 0x10
// 005f2024  c3                   ret 
// library openrbx-client/App\util\Timer.cpp (function ?getRealTime@RBX@@YANXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Timer.cpp
