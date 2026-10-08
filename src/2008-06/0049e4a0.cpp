// roc 2008-06 0049e4a0  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e4a0
//
// 0049e4a0  83ec68               sub esp, 0x68
// 0049e4a3  68a42c8200           push 0x822ca4
// 0049e4a8  ff15cc218000         call dword ptr [0x8021cc]
// 0049e4ae  85c0                 test eax, eax
// 0049e4b0  7506                 jne 0x49e4b8
// 0049e4b2  33c0                 xor eax, eax
// 0049e4b4  83c468               add esp, 0x68
// 0049e4b7  c3                   ret 
// 0049e4b8  68882c8200           push 0x822c88
// 0049e4bd  50                   push eax
// 0049e4be  ff15c0218000         call dword ptr [0x8021c0]
// 0049e4c4  85c0                 test eax, eax
// 0049e4c6  74ea                 je 0x49e4b2
// 0049e4c8  b910235f00           mov ecx, 0x5f2310
// 0049e4cd  2bc8                 sub ecx, eax
// 0049e4cf  83e905               sub ecx, 5
// 0049e4d2  8d1424               lea edx, [esp]
// 0049e4d5  52                   push edx
// 0049e4d6  894c2409             mov dword ptr [esp + 9], ecx
// 0049e4da  6a05                 push 5
// 0049e4dc  8d4c240c             lea ecx, [esp + 0xc]
// 0049e4e0  51                   push ecx
// 0049e4e1  50                   push eax
// 0049e4e2  c6442414e9           mov byte ptr [esp + 0x14], 0xe9
// 0049e4e7  ff15e4218000         call dword ptr [0x8021e4]
// 0049e4ed  50                   push eax
// 0049e4ee  ff1540228000         call dword ptr [0x802240]
// 0049e4f4  83c468               add esp, 0x68
// 0049e4f7  c3                   ret 
// library rbxgs-net/CrashReporter.cpp (function ?PreventSetUnhandledExceptionFilter@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net CrashReporter.cpp
