// roc 2012-06 00a6bd70  unit: CXTCaptionPopupWnd  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bd70
//
// 00a6bd70  56                   push esi
// 00a6bd71  8bf1                 mov esi, ecx
// 00a6bd73  ff15e83bb200         call dword ptr [0xb23be8]
// 00a6bd79  8d4e60               lea ecx, [esi + 0x60]
// 00a6bd7c  85c9                 test ecx, ecx
// 00a6bd7e  7403                 je 0xa6bd83
// 00a6bd80  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00a6bd83  3bc1                 cmp eax, ecx
// 00a6bd85  7460                 je 0xa6bde7
// 00a6bd87  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00a6bd8d  85c9                 test ecx, ecx
// 00a6bd8f  7403                 je 0xa6bd94
// 00a6bd91  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00a6bd94  3bc1                 cmp eax, ecx
// 00a6bd96  744f                 je 0xa6bde7
// 00a6bd98  85f6                 test esi, esi
// 00a6bd9a  7504                 jne 0xa6bda0
// 00a6bd9c  33c9                 xor ecx, ecx
// 00a6bd9e  eb03                 jmp 0xa6bda3
// 00a6bda0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6bda3  3bc1                 cmp eax, ecx
// 00a6bda5  7440                 je 0xa6bde7
// 00a6bda7  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a6bdaa  85c9                 test ecx, ecx
// 00a6bdac  7403                 je 0xa6bdb1
// 00a6bdae  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00a6bdb1  3bc1                 cmp eax, ecx
// 00a6bdb3  7432                 je 0xa6bde7
// 00a6bdb5  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a6bdb8  85c0                 test eax, eax
// 00a6bdba  7403                 je 0xa6bdbf
// 00a6bdbc  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a6bdbf  50                   push eax
// 00a6bdc0  ff15143bb200         call dword ptr [0xb23b14]
// 00a6bdc6  85c0                 test eax, eax
// 00a6bdc8  741d                 je 0xa6bde7
// 00a6bdca  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a6bdcd  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a6bdd0  6a00                 push 0
// 00a6bdd2  6a00                 push 0
// 00a6bdd4  683f270000           push 0x273f
// 00a6bdd9  51                   push ecx
// 00a6bdda  ff15043cb200         call dword ptr [0xb23c04]
// 00a6bde0  b801000000           mov eax, 1
// 00a6bde5  5e                   pop esi
// 00a6bde6  c3                   ret 
// 00a6bde7  33c0                 xor eax, eax
// 00a6bde9  5e                   pop esi
// 00a6bdea  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTCaptionPopupWnd.cpp (function ?SendCancelMessage@CXTCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionPopupWnd.cpp
