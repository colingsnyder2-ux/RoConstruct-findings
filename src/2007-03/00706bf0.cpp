// roc 2007-03 00706bf0  unit: seg_00700000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00706bf0
//
// 00706bf0  6aff                 push -1
// 00706bf2  68cdb47600           push 0x76b4cd
// 00706bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00706bfd  50                   push eax
// 00706bfe  51                   push ecx
// 00706bff  56                   push esi
// 00706c00  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00706c05  33c4                 xor eax, esp
// 00706c07  50                   push eax
// 00706c08  8d44240c             lea eax, [esp + 0xc]
// 00706c0c  64a300000000         mov dword ptr fs:[0], eax
// 00706c12  8bf1                 mov esi, ecx
// 00706c14  89742408             mov dword ptr [esp + 8], esi
// 00706c18  c70694dc7d00         mov dword ptr [esi], 0x7ddc94
// 00706c1e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00706c21  50                   push eax
// 00706c22  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00706c2a  ff1574ed7700         call dword ptr [0x77ed74]
// 00706c30  85c0                 test eax, eax
// 00706c32  7407                 je 0x706c3b
// 00706c34  8bce                 mov ecx, esi
// 00706c36  e84575f1ff           call 0x61e180
// 00706c3b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00706c41  c644241403           mov byte ptr [esp + 0x14], 3
// 00706c46  e8e5c90100           call 0x723630
// 00706c4b  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00706c51  c644241402           mov byte ptr [esp + 0x14], 2
// 00706c56  e8d5c90100           call 0x723630
// 00706c5b  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00706c61  c644241401           mov byte ptr [esp + 0x14], 1
// 00706c66  e835f4ffff           call 0x7060a0
// 00706c6b  8d4e60               lea ecx, [esi + 0x60]
// 00706c6e  c644241400           mov byte ptr [esp + 0x14], 0
// 00706c73  e83847f8ff           call 0x68b3b0
// 00706c78  8bce                 mov ecx, esi
// 00706c7a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00706c82  e8ed7df1ff           call 0x61ea74
// 00706c87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00706c8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00706c92  59                   pop ecx
// 00706c93  5e                   pop esi
// 00706c94  83c410               add esp, 0x10
// 00706c97  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp