// roc 2010-06 004fdee0  unit: RBX::Network::IdSerializer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fdee0
//
// 004fdee0  a18468c000           mov eax, dword ptr [0xc06884]
// 004fdee5  40                   inc eax
// 004fdee6  a38468c000           mov dword ptr [0xc06884], eax
// 004fdeeb  83f801               cmp eax, 1
// 004fdeee  7525                 jne 0x4fdf15
// 004fdef0  6a0c                 push 0xc
// 004fdef2  e8a99a2a00           call 0x7a79a0
// 004fdef7  33c9                 xor ecx, ecx
// 004fdef9  83c404               add esp, 4
// 004fdefc  3bc1                 cmp eax, ecx
// 004fdefe  740e                 je 0x4fdf0e
// 004fdf00  894808               mov dword ptr [eax + 8], ecx
// 004fdf03  8908                 mov dword ptr [eax], ecx
// 004fdf05  894804               mov dword ptr [eax + 4], ecx
// 004fdf08  a38068c000           mov dword ptr [0xc06880], eax
// 004fdf0d  c3                   ret 
// 004fdf0e  33c0                 xor eax, eax
// 004fdf10  a38068c000           mov dword ptr [0xc06880], eax
// 004fdf15  c3                   ret 
// library rbx2016-raknet/StringTable.cpp (function ?AddReference@StringTable@RakNet@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet StringTable.cpp
