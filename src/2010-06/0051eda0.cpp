// roc 2010-06 0051eda0  unit: CSHA1  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051eda0
//
// 0051eda0  8b442408             mov eax, dword ptr [esp + 8]
// 0051eda4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051eda8  685456b900           push 0xb95654
// 0051edad  68f07dc000           push 0xc07df0
// 0051edb2  68f87dc000           push 0xc07df8
// 0051edb7  50                   push eax
// 0051edb8  51                   push ecx
// 0051edb9  e8f2feffff           call 0x51ecb0
// 0051edbe  83c414               add esp, 0x14
// 0051edc1  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?fillBufferMT@@YAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
