// roc 2007-08 00716080  unit: CXTCaptionPopupWnd  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716080
//
// 00716080  56                   push esi
// 00716081  8bf1                 mov esi, ecx
// 00716083  ff15d4ec7700         call dword ptr [0x77ecd4]
// 00716089  8d4e60               lea ecx, [esi + 0x60]
// 0071608c  85c9                 test ecx, ecx
// 0071608e  7403                 je 0x716093
// 00716090  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00716093  3bc1                 cmp eax, ecx
// 00716095  7460                 je 0x7160f7
// 00716097  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0071609d  85c9                 test ecx, ecx
// 0071609f  7403                 je 0x7160a4
// 007160a1  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007160a4  3bc1                 cmp eax, ecx
// 007160a6  744f                 je 0x7160f7
// 007160a8  85f6                 test esi, esi
// 007160aa  7504                 jne 0x7160b0
// 007160ac  33c9                 xor ecx, ecx
// 007160ae  eb03                 jmp 0x7160b3
// 007160b0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007160b3  3bc1                 cmp eax, ecx
// 007160b5  7440                 je 0x7160f7
// 007160b7  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007160ba  85c9                 test ecx, ecx
// 007160bc  7403                 je 0x7160c1
// 007160be  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007160c1  3bc1                 cmp eax, ecx
// 007160c3  7432                 je 0x7160f7
// 007160c5  8b4654               mov eax, dword ptr [esi + 0x54]
// 007160c8  85c0                 test eax, eax
// 007160ca  7403                 je 0x7160cf
// 007160cc  8b4020               mov eax, dword ptr [eax + 0x20]
// 007160cf  50                   push eax
// 007160d0  ff15bced7700         call dword ptr [0x77edbc]
// 007160d6  85c0                 test eax, eax
// 007160d8  741d                 je 0x7160f7
// 007160da  8b4654               mov eax, dword ptr [esi + 0x54]
// 007160dd  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007160e0  6a00                 push 0
// 007160e2  6a00                 push 0
// 007160e4  683f270000           push 0x273f
// 007160e9  51                   push ecx
// 007160ea  ff15d8ec7700         call dword ptr [0x77ecd8]
// 007160f0  b801000000           mov eax, 1
// 007160f5  5e                   pop esi
// 007160f6  c3                   ret 
// 007160f7  33c0                 xor eax, eax
// 007160f9  5e                   pop esi
// 007160fa  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?SendCancelMessage@CXTCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
