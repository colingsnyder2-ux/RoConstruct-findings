// roc 2007-08 00715a30  unit: CXTCaptionButton  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715a30
//
// 00715a30  6aff                 push -1
// 00715a32  683dac7600           push 0x76ac3d
// 00715a37  64a100000000         mov eax, dword ptr fs:[0]
// 00715a3d  50                   push eax
// 00715a3e  51                   push ecx
// 00715a3f  56                   push esi
// 00715a40  a188518b00           mov eax, dword ptr [0x8b5188]
// 00715a45  33c4                 xor eax, esp
// 00715a47  50                   push eax
// 00715a48  8d44240c             lea eax, [esp + 0xc]
// 00715a4c  64a300000000         mov dword ptr fs:[0], eax
// 00715a52  8bf1                 mov esi, ecx
// 00715a54  89742408             mov dword ptr [esp + 8], esi
// 00715a58  c7066cf07d00         mov dword ptr [esi], 0x7df06c
// 00715a5e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715a61  50                   push eax
// 00715a62  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00715a6a  ff15bced7700         call dword ptr [0x77edbc]
// 00715a70  85c0                 test eax, eax
// 00715a72  7407                 je 0x715a7b
// 00715a74  8bce                 mov ecx, esi
// 00715a76  e871a2f1ff           call 0x62fcec
// 00715a7b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00715a81  c644241403           mov byte ptr [esp + 0x14], 3
// 00715a86  e8e5c80000           call 0x722370
// 00715a8b  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00715a91  c644241402           mov byte ptr [esp + 0x14], 2
// 00715a96  e8d5c80000           call 0x722370
// 00715a9b  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00715aa1  c644241401           mov byte ptr [esp + 0x14], 1
// 00715aa6  e8d5f3ffff           call 0x714e80
// 00715aab  8d4e60               lea ecx, [esi + 0x60]
// 00715aae  c644241400           mov byte ptr [esp + 0x14], 0
// 00715ab3  e83897f8ff           call 0x69f1f0
// 00715ab8  8bce                 mov ecx, esi
// 00715aba  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00715ac2  e819abf1ff           call 0x6305e0
// 00715ac7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00715acb  64890d00000000       mov dword ptr fs:[0], ecx
// 00715ad2  59                   pop ecx
// 00715ad3  5e                   pop esi
// 00715ad4  83c410               add esp, 0x10
// 00715ad7  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp