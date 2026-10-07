// roc 2007-08 004b7f70  unit: Exposer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7f70
//
// 004b7f70  e8cbfeffff           call 0x4b7e40
// 004b7f75  6a00                 push 0
// 004b7f77  68e8030000           push 0x3e8
// 004b7f7c  52                   push edx
// 004b7f7d  50                   push eax
// 004b7f7e  e82d921700           call 0x6311b0
// 004b7f83  c3                   ret 
// library rbx2016-raknet/GetTime.cpp (function ?GetTime@RakNet@@YA_KXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet GetTime.cpp
