// from server: 100% by auto
// roc 2008-06 00443570  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443570
//
// 00443570  56                   push esi
// 00443571  8b31                 mov esi, dword ptr [ecx]
// 00443573  85f6                 test esi, esi
// 00443575  7410                 je 0x443587
// 00443577  8bce                 mov ecx, esi
// 00443579  e8f204fdff           call 0x413a70
// 0044357e  56                   push esi
// 0044357f  e8f6d02500           call 0x6a067a
// 00443584  83c404               add esp, 4
// 00443587  5e                   pop esi
// 00443588  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
