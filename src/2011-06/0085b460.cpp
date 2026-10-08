// roc 2011-06 0085b460  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085b460
//
// 0085b460  8b542404             mov edx, dword ptr [esp + 4]
// 0085b464  56                   push esi
// 0085b465  8bf1                 mov esi, ecx
// 0085b467  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0085b46d  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0085b473  3bd0                 cmp edx, eax
// 0085b475  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085b479  750b                 jne 0x85b486
// 0085b47b  3bc1                 cmp eax, ecx
// 0085b47d  7507                 jne 0x85b486
// 0085b47f  837c241000           cmp dword ptr [esp + 0x10], 0
// 0085b484  7421                 je 0x85b4a7
// 0085b486  6a01                 push 1
// 0085b488  8bce                 mov ecx, esi
// 0085b48a  899684010000         mov dword ptr [esi + 0x184], edx
// 0085b490  898688010000         mov dword ptr [esi + 0x188], eax
// 0085b496  e8f518fbff           call 0x80cd90
// 0085b49b  6806100000           push 0x1006
// 0085b4a0  8bce                 mov ecx, esi
// 0085b4a2  e8a937fbff           call 0x80ec50
// 0085b4a7  5e                   pop esi
// 0085b4a8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetItemsActive@CXTPControlSelector@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
