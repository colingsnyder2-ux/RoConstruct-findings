// roc 2009-12 008e5d60  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5d60
//
// 008e5d60  56                   push esi
// 008e5d61  8bf1                 mov esi, ecx
// 008e5d63  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008e5d6a  7443                 je 0x8e5daf
// 008e5d6c  57                   push edi
// 008e5d6d  e800070400           call 0x926472
// 008e5d72  8bf8                 mov edi, eax
// 008e5d74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e5d78  6a00                 push 0
// 008e5d7a  83c80b               or eax, 0xb
// 008e5d7d  50                   push eax
// 008e5d7e  6a00                 push 0
// 008e5d80  8bce                 mov ecx, esi
// 008e5d82  e853e2f0ff           call 0x7f3fda
// 008e5d87  8bce                 mov ecx, esi
// 008e5d89  e8e4060400           call 0x926472
// 008e5d8e  3bf8                 cmp edi, eax
// 008e5d90  5f                   pop edi
// 008e5d91  7416                 je 0x8e5da9
// 008e5d93  66837c240c00         cmp word ptr [esp + 0xc], 0
// 008e5d99  740e                 je 0x8e5da9
// 008e5d9b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e5d9e  6a01                 push 1
// 008e5da0  6a00                 push 0
// 008e5da2  51                   push ecx
// 008e5da3  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e5da9  33c0                 xor eax, eax
// 008e5dab  5e                   pop esi
// 008e5dac  c20800               ret 8
// 008e5daf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e5db3  8b442408             mov eax, dword ptr [esp + 8]
// 008e5db7  52                   push edx
// 008e5db8  50                   push eax
// 008e5db9  e862fdffff           call 0x8e5b20
// 008e5dbe  5e                   pop esi
// 008e5dbf  c20800               ret 8
// copied from an identical function in another client (function ?OnSetStyle@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp