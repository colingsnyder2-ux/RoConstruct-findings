// roc 2009-06 00510810  unit: CSHA1  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510810
//
// 00510810  8b442408             mov eax, dword ptr [esp + 8]
// 00510814  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00510818  68b0659f00           push 0x9f65b0
// 0051081d  680009a400           push 0xa40900
// 00510822  680809a400           push 0xa40908
// 00510827  50                   push eax
// 00510828  51                   push ecx
// 00510829  e8f2feffff           call 0x510720
// 0051082e  83c414               add esp, 0x14
// 00510831  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?fillBufferMT@@YAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
