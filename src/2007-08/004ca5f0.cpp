// roc 2007-08 004ca5f0  unit: seg_004c0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca5f0
//
// 004ca5f0  a1c8f98b00           mov eax, dword ptr [0x8bf9c8]
// 004ca5f5  83c001               add eax, 1
// 004ca5f8  83f801               cmp eax, 1
// 004ca5fb  a3c8f98b00           mov dword ptr [0x8bf9c8], eax
// 004ca600  7525                 jne 0x4ca627
// 004ca602  6a0c                 push 0xc
// 004ca604  e8ed581600           call 0x62fef6
// 004ca609  33c9                 xor ecx, ecx
// 004ca60b  83c404               add esp, 4
// 004ca60e  3bc1                 cmp eax, ecx
// 004ca610  740e                 je 0x4ca620
// 004ca612  894808               mov dword ptr [eax + 8], ecx
// 004ca615  8908                 mov dword ptr [eax], ecx
// 004ca617  894804               mov dword ptr [eax + 4], ecx
// 004ca61a  a3c4f98b00           mov dword ptr [0x8bf9c4], eax
// 004ca61f  c3                   ret 
// 004ca620  33c0                 xor eax, eax
// 004ca622  a3c4f98b00           mov dword ptr [0x8bf9c4], eax
// 004ca627  c3                   ret 
// library rbx2016-raknet/StringTable.cpp (function ?AddReference@StringTable@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringTable.cpp
