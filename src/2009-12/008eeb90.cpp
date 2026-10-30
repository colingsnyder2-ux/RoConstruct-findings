// roc 2009-12 008eeb90  unit: CXTPRibbonTabPopupToolBar  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eeb90
//
// 008eeb90  53                   push ebx
// 008eeb91  56                   push esi
// 008eeb92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008eeb96  8b4660               mov eax, dword ptr [esi + 0x60]
// 008eeb99  57                   push edi
// 008eeb9a  50                   push eax
// 008eeb9b  8bd9                 mov ebx, ecx
// 008eeb9d  e8fe72f0ff           call 0x7f5ea0
// 008eeba2  50                   push eax
// 008eeba3  e89650f0ff           call 0x7f3c3e
// 008eeba8  8bf8                 mov edi, eax
// 008eebaa  83c408               add esp, 8
// 008eebad  85ff                 test edi, edi
// 008eebaf  0f84b7000000         je 0x8eec6c
// 008eebb5  837e7000             cmp dword ptr [esi + 0x70], 0
// 008eebb9  0f858f000000         jne 0x8eec4e
// 008eebbf  83bfd000000002       cmp dword ptr [edi + 0xd0], 2
// 008eebc6  0f8582000000         jne 0x8eec4e
// 008eebcc  8bb758010000         mov esi, dword ptr [edi + 0x158]
// 008eebd2  85f6                 test esi, esi
// 008eebd4  0f8492000000         je 0x8eec6c
// 008eebda  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008eebdd  85c0                 test eax, eax
// 008eebdf  0f8487000000         je 0x8eec6c
// 008eebe5  8b13                 mov edx, dword ptr [ebx]
// 008eebe7  50                   push eax
// 008eebe8  8b82b4010000         mov eax, dword ptr [edx + 0x1b4]
// 008eebee  8bcb                 mov ecx, ebx
// 008eebf0  ffd0                 call eax
// 008eebf2  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008eebf5  8b11                 mov edx, dword ptr [ecx]
// 008eebf7  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008eebfd  ffd0                 call eax
// 008eebff  57                   push edi
// 008eec00  8bce                 mov ecx, esi
// 008eec02  e8d9b0ffff           call 0x8e9ce0
// 008eec07  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008eec0a  8b11                 mov edx, dword ptr [ecx]
// 008eec0c  8bf8                 mov edi, eax
// 008eec0e  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008eec14  ffd0                 call eax
// 008eec16  8bf0                 mov esi, eax
// 008eec18  85f6                 test esi, esi
// 008eec1a  7450                 je 0x8eec6c
// 008eec1c  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 008eec23  7447                 je 0x8eec6c
// 008eec25  85ff                 test edi, edi
// 008eec27  7c43                 jl 0x8eec6c
// 008eec29  8bce                 mov ecx, esi
// 008eec2b  e82066f1ff           call 0x805250
// 008eec30  3bf8                 cmp edi, eax
// 008eec32  7d38                 jge 0x8eec6c
// 008eec34  57                   push edi
// 008eec35  8bce                 mov ecx, esi
// 008eec37  e82466f1ff           call 0x805260
// 008eec3c  8b10                 mov edx, dword ptr [eax]
// 008eec3e  8bc8                 mov ecx, eax
// 008eec40  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008eec46  ffd0                 call eax
// 008eec48  5f                   pop edi
// 008eec49  5e                   pop esi
// 008eec4a  5b                   pop ebx
// 008eec4b  c20400               ret 4
// 008eec4e  8b17                 mov edx, dword ptr [edi]
// 008eec50  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008eec56  6a00                 push 0
// 008eec58  8bcf                 mov ecx, edi
// 008eec5a  ffd0                 call eax
// 008eec5c  85c0                 test eax, eax
// 008eec5e  740c                 je 0x8eec6c
// 008eec60  8b17                 mov edx, dword ptr [edi]
// 008eec62  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 008eec68  8bcf                 mov ecx, edi
// 008eec6a  ffd0                 call eax
// 008eec6c  5f                   pop edi
// 008eec6d  5e                   pop esi
// 008eec6e  5b                   pop ebx
// 008eec6f  c20400               ret 4
// copied from an identical function in another client (function ?OnKeyboardTip@CXTPRibbonTabPopupToolBar@@UAEXPAVCXTPCommandBarKeyboardTip@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp