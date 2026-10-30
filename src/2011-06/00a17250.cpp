// roc 2011-06 00a17250  unit: seg_00a10000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a17250
//
// 00a17250  b95c8cc100           mov ecx, 0xc18c5c
// 00a17255  ff15b42da400         call dword ptr [0xa42db4]
// 00a1725b  b9608cc100           mov ecx, 0xc18c60
// 00a17260  ff15b42da400         call dword ptr [0xa42db4]
// 00a17266  33c0                 xor eax, eax
// 00a17268  68d01da300           push 0xa31dd0
// 00a1726d  a3648cc100           mov dword ptr [0xc18c64], eax
// 00a17272  c705688cc10001000000 mov dword ptr [0xc18c68], 1
// 00a1727c  a36c8cc100           mov dword ptr [0xc18c6c], eax
// 00a17281  a3708cc100           mov dword ptr [0xc18c70], eax
// 00a17286  e8d23edfff           call 0x80b15d
// 00a1728b  59                   pop ecx
// 00a1728c  c3                   ret 
// copied from an identical function in another client (function ??__E_scintillaEditState@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp