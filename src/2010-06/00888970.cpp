// roc 2010-06 00888970  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00888970
//
// 00888970  8b442418             mov eax, dword ptr [esp + 0x18]
// 00888974  83f803               cmp eax, 3
// 00888977  0f87a8000000         ja 0x888a25
// 0088897d  ff2485288a8800       jmp dword ptr [eax*4 + 0x888a28]
// 00888984  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00888988  83f8ff               cmp eax, -1
// 0088898b  0f8494000000         je 0x888a25
// 00888991  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00888995  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00888999  50                   push eax
// 0088899a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0088899e  6a01                 push 1
// 008889a0  2bc8                 sub ecx, eax
// 008889a2  51                   push ecx
// 008889a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008889a7  52                   push edx
// 008889a8  50                   push eax
// 008889a9  e8dc430f00           call 0x97cd8a
// 008889ae  c3                   ret 
// 008889af  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008889b3  83f8ff               cmp eax, -1
// 008889b6  746d                 je 0x888a25
// 008889b8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008889bc  8b542408             mov edx, dword ptr [esp + 8]
// 008889c0  50                   push eax
// 008889c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008889c5  2bc8                 sub ecx, eax
// 008889c7  51                   push ecx
// 008889c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008889cc  6a01                 push 1
// 008889ce  50                   push eax
// 008889cf  52                   push edx
// 008889d0  e8b5430f00           call 0x97cd8a
// 008889d5  c3                   ret 
// 008889d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008889da  83f8ff               cmp eax, -1
// 008889dd  7446                 je 0x888a25
// 008889df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008889e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008889e7  50                   push eax
// 008889e8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008889ec  6a01                 push 1
// 008889ee  2bc8                 sub ecx, eax
// 008889f0  51                   push ecx
// 008889f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008889f5  4a                   dec edx
// 008889f6  52                   push edx
// 008889f7  50                   push eax
// 008889f8  e88d430f00           call 0x97cd8a
// 008889fd  c3                   ret 
// 008889fe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00888a02  83f8ff               cmp eax, -1
// 00888a05  741e                 je 0x888a25
// 00888a07  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00888a0b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00888a0f  50                   push eax
// 00888a10  8b442410             mov eax, dword ptr [esp + 0x10]
// 00888a14  2bc8                 sub ecx, eax
// 00888a16  51                   push ecx
// 00888a17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00888a1b  6a01                 push 1
// 00888a1d  4a                   dec edx
// 00888a1e  50                   push eax
// 00888a1f  52                   push edx
// 00888a20  e865430f00           call 0x97cd8a
// 00888a25  c3                   ret 
// 00888a26  8bff                 mov edi, edi
// 00888a28  84898800af89         test byte ptr [ecx - 0x7650ff78], cl
// 00888a2e  8800                 mov byte ptr [eax], al
// 00888a30  d6                   salc 
// 00888a31  898800fe8988         mov dword ptr [eax - 0x77760200], ecx
// copied from an identical function in another client (function ?DrawSingleLineBorder@CXTPTabPaintManagerAppearanceSet@@SAXPAVCDC@@VCRect@@W4XTPTabPosition@@KK@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp