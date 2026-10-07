// roc 2011-06 00534d50  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00534d50
//
// 00534d50  56                   push esi
// 00534d51  8bf1                 mov esi, ecx
// 00534d53  8b06                 mov eax, dword ptr [esi]
// 00534d55  83f8ff               cmp eax, -1
// 00534d58  740d                 je 0x534d67
// 00534d5a  50                   push eax
// 00534d5b  ff157c03a400         call dword ptr [0xa4037c]
// 00534d61  c706ffffffff         mov dword ptr [esi], 0xffffffff
// 00534d67  5e                   pop esi
// 00534d68  c3                   ret 
// library rbx2016-raknet/SignaledEvent.cpp (function ?CloseEvent@SignaledEvent@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet SignaledEvent.cpp
