// from server: 100% by auto
// roc 2011-06 007daf20  unit: seg_007d0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007daf20
//
// 007daf20  8b06                 mov eax, dword ptr [esi]
// 007daf22  8b403c               mov eax, dword ptr [eax + 0x3c]
// 007daf25  51                   push ecx
// 007daf26  52                   push edx
// 007daf27  85c0                 test eax, eax
// 007daf29  7521                 jne 0x7daf4c
// 007daf2b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007daf2e  6864e1ab00           push 0xabe164
// 007daf33  51                   push ecx
// 007daf34  e8e71efaff           call 0x77ce20
// 007daf39  83c410               add esp, 0x10
// 007daf3c  6a00                 push 0
// 007daf3e  50                   push eax
// 007daf3f  8b460c               mov eax, dword ptr [esi + 0xc]
// 007daf42  50                   push eax
// 007daf43  e8883a0000           call 0x7de9d0
// 007daf48  83c40c               add esp, 0xc
// 007daf4b  c3                   ret 
// 007daf4c  8b5610               mov edx, dword ptr [esi + 0x10]
// 007daf4f  50                   push eax
// 007daf50  683ce1ab00           push 0xabe13c
// 007daf55  52                   push edx
// 007daf56  e8c51efaff           call 0x77ce20
// 007daf5b  83c414               add esp, 0x14
// 007daf5e  6a00                 push 0
// 007daf60  50                   push eax
// 007daf61  8b460c               mov eax, dword ptr [esi + 0xc]
// 007daf64  50                   push eax
// 007daf65  e8663a0000           call 0x7de9d0
// 007daf6a  83c40c               add esp, 0xc
// 007daf6d  c3                   ret 
// library lua-5.1.4/lparser.c (function _errorlimit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
