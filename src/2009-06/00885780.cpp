// roc 2009-06 00885780  unit: seg_00880000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00885780
//
// 00885780  b9ac689e00           mov ecx, 0x9e68ac
// 00885785  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0088578b  b9b0689e00           mov ecx, 0x9e68b0
// 00885790  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00885796  33c0                 xor eax, eax
// 00885798  68804c8900           push 0x894c80
// 0088579d  a3b4689e00           mov dword ptr [0x9e68b4], eax
// 008857a2  c705b8689e0001000000 mov dword ptr [0x9e68b8], 1
// 008857ac  a3bc689e00           mov dword ptr [0x9e68bc], eax
// 008857b1  a3c0689e00           mov dword ptr [0x9e68c0], eax
// 008857b6  e84043e9ff           call 0x719afb
// 008857bb  59                   pop ecx
// 008857bc  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp