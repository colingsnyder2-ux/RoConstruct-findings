// from server: 100% by auto
// roc 2008-06 007939d0  unit: CXTCaptionPopupWnd  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007939d0
//
// 007939d0  56                   push esi
// 007939d1  8bf1                 mov esi, ecx
// 007939d3  ff15102e8000         call dword ptr [0x802e10]
// 007939d9  8d4e60               lea ecx, [esi + 0x60]
// 007939dc  85c9                 test ecx, ecx
// 007939de  7403                 je 0x7939e3
// 007939e0  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007939e3  3bc1                 cmp eax, ecx
// 007939e5  7460                 je 0x793a47
// 007939e7  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 007939ed  85c9                 test ecx, ecx
// 007939ef  7403                 je 0x7939f4
// 007939f1  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 007939f4  3bc1                 cmp eax, ecx
// 007939f6  744f                 je 0x793a47
// 007939f8  85f6                 test esi, esi
// 007939fa  7504                 jne 0x793a00
// 007939fc  33c9                 xor ecx, ecx
// 007939fe  eb03                 jmp 0x793a03
// 00793a00  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00793a03  3bc1                 cmp eax, ecx
// 00793a05  7440                 je 0x793a47
// 00793a07  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00793a0a  85c9                 test ecx, ecx
// 00793a0c  7403                 je 0x793a11
// 00793a0e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00793a11  3bc1                 cmp eax, ecx
// 00793a13  7432                 je 0x793a47
// 00793a15  8b4654               mov eax, dword ptr [esi + 0x54]
// 00793a18  85c0                 test eax, eax
// 00793a1a  7403                 je 0x793a1f
// 00793a1c  8b4020               mov eax, dword ptr [eax + 0x20]
// 00793a1f  50                   push eax
// 00793a20  ff15502d8000         call dword ptr [0x802d50]
// 00793a26  85c0                 test eax, eax
// 00793a28  741d                 je 0x793a47
// 00793a2a  8b4654               mov eax, dword ptr [esi + 0x54]
// 00793a2d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00793a30  6a00                 push 0
// 00793a32  6a00                 push 0
// 00793a34  683f270000           push 0x273f
// 00793a39  51                   push ecx
// 00793a3a  ff15142e8000         call dword ptr [0x802e14]
// 00793a40  b801000000           mov eax, 1
// 00793a45  5e                   pop esi
// 00793a46  c3                   ret 
// 00793a47  33c0                 xor eax, eax
// 00793a49  5e                   pop esi
// 00793a4a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionPopupWnd.cpp (function ?SendCancelMessage@CXTCaptionPopupWnd@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionPopupWnd.cpp
