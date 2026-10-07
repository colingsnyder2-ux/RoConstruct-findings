// roc 2011-06 00534cf0  unit: seg_00530000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534cf0
//
// 00534cf0  8b442408             mov eax, dword ptr [esp + 8]
// 00534cf4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534cf8  68d8fac200           push 0xc2fad8
// 00534cfd  688896cb00           push 0xcb9688
// 00534d02  689096cb00           push 0xcb9690
// 00534d07  50                   push eax
// 00534d08  51                   push ecx
// 00534d09  e8f2feffff           call 0x534c00
// 00534d0e  83c414               add esp, 0x14
// 00534d11  c3                   ret 
// library rbx2016-raknet/Rand.cpp (function ?fillBufferMT@@YAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet Rand.cpp
