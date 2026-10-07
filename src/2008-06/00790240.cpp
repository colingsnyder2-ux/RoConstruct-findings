// roc 2008-06 00790240  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00790240
//
// 00790240  83ec30               sub esp, 0x30
// 00790243  53                   push ebx
// 00790244  8bd9                 mov ebx, ecx
// 00790246  53                   push ebx
// 00790247  8d4c2408             lea ecx, [esp + 8]
// 0079024b  e88078f6ff           call 0x6f7ad0
// 00790250  8d442438             lea eax, [esp + 0x38]
// 00790254  50                   push eax
// 00790255  8d4c2408             lea ecx, [esp + 8]
// 00790259  51                   push ecx
// 0079025a  8d54241c             lea edx, [esp + 0x1c]
// 0079025e  52                   push edx
// 0079025f  ff155c2b8000         call dword ptr [0x802b5c]
// 00790265  85c0                 test eax, eax
// 00790267  7473                 je 0x7902dc
// 00790269  56                   push esi
// 0079026a  57                   push edi
// 0079026b  53                   push ebx
// 0079026c  8d4c2430             lea ecx, [esp + 0x30]
// 00790270  e8bb78f6ff           call 0x6f7b30
// 00790275  8b3d0c218000         mov edi, dword ptr [0x80210c]
// 0079027b  8d44242c             lea eax, [esp + 0x2c]
// 0079027f  50                   push eax
// 00790280  ffd7                 call edi
// 00790282  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00790286  8bf0                 mov esi, eax
// 00790288  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079028c  f7d9                 neg ecx
// 0079028e  51                   push ecx
// 0079028f  f7d8                 neg eax
// 00790291  50                   push eax
// 00790292  8d4c2424             lea ecx, [esp + 0x24]
// 00790296  51                   push ecx
// 00790297  ff15682d8000         call dword ptr [0x802d68]
// 0079029d  8d54241c             lea edx, [esp + 0x1c]
// 007902a1  52                   push edx
// 007902a2  ffd7                 call edi
// 007902a4  6a04                 push 4
// 007902a6  8bf8                 mov edi, eax
// 007902a8  57                   push edi
// 007902a9  56                   push esi
// 007902aa  56                   push esi
// 007902ab  ff15f4208000         call dword ptr [0x8020f4]
// 007902b1  57                   push edi
// 007902b2  8b3d50218000         mov edi, dword ptr [0x802150]
// 007902b8  ffd7                 call edi
// 007902ba  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007902bd  6a00                 push 0
// 007902bf  56                   push esi
// 007902c0  50                   push eax
// 007902c1  ff15d42b8000         call dword ptr [0x802bd4]
// 007902c7  85c0                 test eax, eax
// 007902c9  7503                 jne 0x7902ce
// 007902cb  56                   push esi
// 007902cc  ffd7                 call edi
// 007902ce  5f                   pop edi
// 007902cf  5e                   pop esi
// 007902d0  b801000000           mov eax, 1
// 007902d5  5b                   pop ebx
// 007902d6  83c430               add esp, 0x30
// 007902d9  c21000               ret 0x10
// 007902dc  b801000000           mov eax, 1
// 007902e1  5b                   pop ebx
// 007902e2  83c430               add esp, 0x30
// 007902e5  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
