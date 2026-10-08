// roc 2007-08 004074c0  unit: boost::detail::sp_counted_base  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004074c0
//
// 004074c0  56                   push esi
// 004074c1  8b742408             mov esi, dword ptr [esp + 8]
// 004074c5  56                   push esi
// 004074c6  e865ad1300           call 0x542230
// 004074cb  83c404               add esp, 4
// 004074ce  85f6                 test esi, esi
// 004074d0  740a                 je 0x4074dc
// 004074d2  8b06                 mov eax, dword ptr [esi]
// 004074d4  8b10                 mov edx, dword ptr [eax]
// 004074d6  6a01                 push 1
// 004074d8  8bce                 mov ecx, esi
// 004074da  ffd2                 call edx
// 004074dc  5e                   pop esi
// 004074dd  c20400               ret 4
// library openrbx-client/App\script\Script.cpp (function ??RDeleter@?$Creatable@VInstance@RBX@@@RBX@@QAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
