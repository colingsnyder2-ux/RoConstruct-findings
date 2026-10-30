// roc 2009-06 0080b270  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b270
//
// 0080b270  56                   push esi
// 0080b271  8bf1                 mov esi, ecx
// 0080b273  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0080b27a  7443                 je 0x80b2bf
// 0080b27c  57                   push edi
// 0080b27d  e85a0c0400           call 0x84bedc
// 0080b282  8bf8                 mov edi, eax
// 0080b284  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080b288  6a00                 push 0
// 0080b28a  83c80b               or eax, 0xb
// 0080b28d  50                   push eax
// 0080b28e  6a00                 push 0
// 0080b290  8bce                 mov ecx, esi
// 0080b292  e81bdff0ff           call 0x7191b2
// 0080b297  8bce                 mov ecx, esi
// 0080b299  e83e0c0400           call 0x84bedc
// 0080b29e  3bf8                 cmp edi, eax
// 0080b2a0  5f                   pop edi
// 0080b2a1  7416                 je 0x80b2b9
// 0080b2a3  66837c240c00         cmp word ptr [esp + 0xc], 0
// 0080b2a9  740e                 je 0x80b2b9
// 0080b2ab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080b2ae  6a01                 push 1
// 0080b2b0  6a00                 push 0
// 0080b2b2  51                   push ecx
// 0080b2b3  ff157cee8900         call dword ptr [0x89ee7c]
// 0080b2b9  33c0                 xor eax, eax
// 0080b2bb  5e                   pop esi
// 0080b2bc  c20800               ret 8
// 0080b2bf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080b2c3  8b442408             mov eax, dword ptr [esp + 8]
// 0080b2c7  52                   push edx
// 0080b2c8  50                   push eax
// 0080b2c9  e862fdffff           call 0x80b030
// 0080b2ce  5e                   pop esi
// 0080b2cf  c20800               ret 8
// copied from an identical function in another client (function ?OnSetStyle@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp