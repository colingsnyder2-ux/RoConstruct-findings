// roc 2007-08 005bf130  unit: boost::detail::H::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf130
//
// 005bf130  8b442408             mov eax, dword ptr [esp + 8]
// 005bf134  8b4804               mov ecx, dword ptr [eax + 4]
// 005bf137  85c9                 test ecx, ecx
// 005bf139  7503                 jne 0x5bf13e
// 005bf13b  33c0                 xor eax, eax
// 005bf13d  c3                   ret 
// 005bf13e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bf142  890a                 mov dword ptr [edx], ecx
// 005bf144  c7400400000000       mov dword ptr [eax + 4], 0
// 005bf14b  8b00                 mov eax, dword ptr [eax]
// 005bf14d  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _getS)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
