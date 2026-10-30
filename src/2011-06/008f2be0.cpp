// roc 2011-06 008f2be0  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2be0
//
// 008f2be0  56                   push esi
// 008f2be1  8bf1                 mov esi, ecx
// 008f2be3  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008f2bea  7443                 je 0x8f2c2f
// 008f2bec  57                   push edi
// 008f2bed  e8269a0d00           call 0x9cc618
// 008f2bf2  8bf8                 mov edi, eax
// 008f2bf4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f2bf8  6a00                 push 0
// 008f2bfa  83c80b               or eax, 0xb
// 008f2bfd  50                   push eax
// 008f2bfe  6a00                 push 0
// 008f2c00  8bce                 mov ecx, esi
// 008f2c02  e8d17bf1ff           call 0x80a7d8
// 008f2c07  8bce                 mov ecx, esi
// 008f2c09  e80a9a0d00           call 0x9cc618
// 008f2c0e  3bf8                 cmp edi, eax
// 008f2c10  5f                   pop edi
// 008f2c11  7416                 je 0x8f2c29
// 008f2c13  66837c240c00         cmp word ptr [esp + 0xc], 0
// 008f2c19  740e                 je 0x8f2c29
// 008f2c1b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f2c1e  6a01                 push 1
// 008f2c20  6a00                 push 0
// 008f2c22  51                   push ecx
// 008f2c23  ff15ec19a400         call dword ptr [0xa419ec]
// 008f2c29  33c0                 xor eax, eax
// 008f2c2b  5e                   pop esi
// 008f2c2c  c20800               ret 8
// 008f2c2f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f2c33  8b442408             mov eax, dword ptr [esp + 8]
// 008f2c37  52                   push edx
// 008f2c38  50                   push eax
// 008f2c39  e862fdffff           call 0x8f29a0
// 008f2c3e  5e                   pop esi
// 008f2c3f  c20800               ret 8
// copied from an identical function in another client (function ?OnSetStyle@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp