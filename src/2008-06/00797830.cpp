// from server: 100% by auto
// roc 2008-06 00797830  unit: CXTPRibbonGroupPopupToolBar  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797830
//
// 00797830  56                   push esi
// 00797831  57                   push edi
// 00797832  8bf1                 mov esi, ecx
// 00797834  e8d7d5f1ff           call 0x6b4e10
// 00797839  8bc8                 mov ecx, eax
// 0079783b  e8a0cdf0ff           call 0x6a45e0
// 00797840  8bf8                 mov edi, eax
// 00797842  837f0400             cmp dword ptr [edi + 4], 0
// 00797846  7f41                 jg 0x797889
// 00797848  8b4620               mov eax, dword ptr [esi + 0x20]
// 0079784b  50                   push eax
// 0079784c  e83f56f8ff           call 0x71ce90
// 00797851  83c404               add esp, 4
// 00797854  85c0                 test eax, eax
// 00797856  7431                 je 0x797889
// 00797858  56                   push esi
// 00797859  8bcf                 mov ecx, edi
// 0079785b  e8b057f8ff           call 0x71d010
// 00797860  85c0                 test eax, eax
// 00797862  7525                 jne 0x797889
// 00797864  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 0079786b  751c                 jne 0x797889
// 0079786d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00797873  e848a8f8ff           call 0x7220c0
// 00797878  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 0079787f  7408                 je 0x797889
// 00797881  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00797887  eb02                 jmp 0x79788b
// 00797889  33c0                 xor eax, eax
// 0079788b  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 00797891  7420                 je 0x7978b3
// 00797893  50                   push eax
// 00797894  8d8e5c020000         lea ecx, [esi + 0x25c]
// 0079789a  e8d1f9ffff           call 0x797270
// 0079789f  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 007978a6  740b                 je 0x7978b3
// 007978a8  8b4620               mov eax, dword ptr [esi + 0x20]
// 007978ab  50                   push eax
// 007978ac  8bcf                 mov ecx, edi
// 007978ae  e80d57f8ff           call 0x71cfc0
// 007978b3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007978b7  8b542410             mov edx, dword ptr [esp + 0x10]
// 007978bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007978bf  51                   push ecx
// 007978c0  52                   push edx
// 007978c1  50                   push eax
// 007978c2  8bce                 mov ecx, esi
// 007978c4  e8a78ef5ff           call 0x6f0770
// 007978c9  5f                   pop edi
// 007978ca  5e                   pop esi
// 007978cb  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonGroupPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
