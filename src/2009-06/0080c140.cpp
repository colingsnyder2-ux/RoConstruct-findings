// roc 2009-06 0080c140  unit: CXTCaptionPopupWnd  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080c140
//
// 0080c140  6aff                 push -1
// 0080c142  68bd208800           push 0x8820bd
// 0080c147  64a100000000         mov eax, dword ptr fs:[0]
// 0080c14d  50                   push eax
// 0080c14e  51                   push ecx
// 0080c14f  56                   push esi
// 0080c150  57                   push edi
// 0080c151  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080c156  33c4                 xor eax, esp
// 0080c158  50                   push eax
// 0080c159  8d442410             lea eax, [esp + 0x10]
// 0080c15d  64a300000000         mov dword ptr fs:[0], eax
// 0080c163  8bf1                 mov esi, ecx
// 0080c165  8974240c             mov dword ptr [esp + 0xc], esi
// 0080c169  e8b2d1f0ff           call 0x719320
// 0080c16e  33ff                 xor edi, edi
// 0080c170  8d4e60               lea ecx, [esi + 0x60]
// 0080c173  897c2418             mov dword ptr [esp + 0x18], edi
// 0080c177  c70654c59000         mov dword ptr [esi], 0x90c554
// 0080c17d  e8ce53f8ff           call 0x791550
// 0080c182  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0080c188  c644241801           mov byte ptr [esp + 0x18], 1
// 0080c18d  e89e4ff8ff           call 0x791130
// 0080c192  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 0080c198  c644241802           mov byte ptr [esp + 0x18], 2
// 0080c19d  e8beea0000           call 0x81ac60
// 0080c1a2  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 0080c1a8  c644241803           mov byte ptr [esp + 0x18], 3
// 0080c1ad  e8aeea0000           call 0x81ac60
// 0080c1b2  8bce                 mov ecx, esi
// 0080c1b4  c644241804           mov byte ptr [esp + 0x18], 4
// 0080c1b9  897e58               mov dword ptr [esi + 0x58], edi
// 0080c1bc  897e5c               mov dword ptr [esi + 0x5c], edi
// 0080c1bf  897e54               mov dword ptr [esi + 0x54], edi
// 0080c1c2  e889f9ffff           call 0x80bb50
// 0080c1c7  8bc6                 mov eax, esi
// 0080c1c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080c1cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0080c1d4  59                   pop ecx
// 0080c1d5  5f                   pop edi
// 0080c1d6  5e                   pop esi
// 0080c1d7  83c410               add esp, 0x10
// 0080c1da  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp