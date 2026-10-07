// roc 2012-06 00938430  unit: seg_00930000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938430
//
// 00938430  8b06                 mov eax, dword ptr [esi]
// 00938432  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00938435  51                   push ecx
// 00938436  52                   push edx
// 00938437  85c0                 test eax, eax
// 00938439  7521                 jne 0x93845c
// 0093843b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0093843e  6864fbbf00           push 0xbffb64
// 00938443  51                   push ecx
// 00938444  e8f77cf1ff           call 0x850140
// 00938449  83c410               add esp, 0x10
// 0093844c  6a00                 push 0
// 0093844e  50                   push eax
// 0093844f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00938452  50                   push eax
// 00938453  e818edffff           call 0x937170
// 00938458  83c40c               add esp, 0xc
// 0093845b  c3                   ret 
// 0093845c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0093845f  50                   push eax
// 00938460  683cfbbf00           push 0xbffb3c
// 00938465  52                   push edx
// 00938466  e8d57cf1ff           call 0x850140
// 0093846b  83c414               add esp, 0x14
// 0093846e  6a00                 push 0
// 00938470  50                   push eax
// 00938471  8b460c               mov eax, dword ptr [esi + 0xc]
// 00938474  50                   push eax
// 00938475  e8f6ecffff           call 0x937170
// 0093847a  83c40c               add esp, 0xc
// 0093847d  c3                   ret 
// library lua-5.1.4/lparser.c (function _errorlimit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
