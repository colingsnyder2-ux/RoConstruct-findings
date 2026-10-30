// roc 2009-06 0080ba50  unit: CXTCaptionButton  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ba50
//
// 0080ba50  6aff                 push -1
// 0080ba52  68ed1f8800           push 0x881fed
// 0080ba57  64a100000000         mov eax, dword ptr fs:[0]
// 0080ba5d  50                   push eax
// 0080ba5e  51                   push ecx
// 0080ba5f  56                   push esi
// 0080ba60  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080ba65  33c4                 xor eax, esp
// 0080ba67  50                   push eax
// 0080ba68  8d44240c             lea eax, [esp + 0xc]
// 0080ba6c  64a300000000         mov dword ptr fs:[0], eax
// 0080ba72  8bf1                 mov esi, ecx
// 0080ba74  89742408             mov dword ptr [esp + 8], esi
// 0080ba78  c70654c59000         mov dword ptr [esi], 0x90c554
// 0080ba7e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080ba81  50                   push eax
// 0080ba82  c744241804000000     mov dword ptr [esp + 0x18], 4
// 0080ba8a  ff15e0ed8900         call dword ptr [0x89ede0]
// 0080ba90  85c0                 test eax, eax
// 0080ba92  7407                 je 0x80ba9b
// 0080ba94  8bce                 mov ecx, esi
// 0080ba96  e81bd0f0ff           call 0x718ab6
// 0080ba9b  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 0080baa1  c644241403           mov byte ptr [esp + 0x14], 3
// 0080baa6  e8c5f10000           call 0x81ac70
// 0080baab  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 0080bab1  c644241402           mov byte ptr [esp + 0x14], 2
// 0080bab6  e8b5f10000           call 0x81ac70
// 0080babb  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0080bac1  c644241401           mov byte ptr [esp + 0x14], 1
// 0080bac6  e895f3ffff           call 0x80ae60
// 0080bacb  8d4e60               lea ecx, [esi + 0x60]
// 0080bace  c644241400           mov byte ptr [esp + 0x14], 0
// 0080bad3  e8b856f8ff           call 0x791190
// 0080bad8  8bce                 mov ecx, esi
// 0080bada  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080bae2  e801daf0ff           call 0x7194e8
// 0080bae7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080baeb  64890d00000000       mov dword ptr fs:[0], ecx
// 0080baf2  59                   pop ecx
// 0080baf3  5e                   pop esi
// 0080baf4  83c410               add esp, 0x10
// 0080baf7  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaptionPopupWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp