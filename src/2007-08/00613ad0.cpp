// from server: 100% by auto
// roc 2007-08 00613ad0  unit: seg_00610000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613ad0
//
// 00613ad0  8b06                 mov eax, dword ptr [esi]
// 00613ad2  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00613ad5  85c0                 test eax, eax
// 00613ad7  51                   push ecx
// 00613ad8  52                   push edx
// 00613ad9  7521                 jne 0x613afc
// 00613adb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00613ade  68a8337c00           push 0x7c33a8
// 00613ae3  51                   push ecx
// 00613ae4  e8a7b3ffff           call 0x60ee90
// 00613ae9  83c410               add esp, 0x10
// 00613aec  6a00                 push 0
// 00613aee  50                   push eax
// 00613aef  8b460c               mov eax, dword ptr [esi + 0xc]
// 00613af2  50                   push eax
// 00613af3  e8283a0000           call 0x617520
// 00613af8  83c40c               add esp, 0xc
// 00613afb  c3                   ret 
// 00613afc  8b5610               mov edx, dword ptr [esi + 0x10]
// 00613aff  50                   push eax
// 00613b00  6880337c00           push 0x7c3380
// 00613b05  52                   push edx
// 00613b06  e885b3ffff           call 0x60ee90
// 00613b0b  83c414               add esp, 0x14
// 00613b0e  6a00                 push 0
// 00613b10  50                   push eax
// 00613b11  8b460c               mov eax, dword ptr [esi + 0xc]
// 00613b14  50                   push eax
// 00613b15  e8063a0000           call 0x617520
// 00613b1a  83c40c               add esp, 0xc
// 00613b1d  c3                   ret 
// library lua-5.1.4/lparser.c (function _errorlimit)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
