// roc 2009-12 007f5d30  unit: CRobloxControlColorSelector  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5d30
//
// 007f5d30  56                   push esi
// 007f5d31  8b742408             mov esi, dword ptr [esp + 8]
// 007f5d35  57                   push edi
// 007f5d36  8bf9                 mov edi, ecx
// 007f5d38  85f6                 test esi, esi
// 007f5d3a  0f849e000000         je 0x7f5dde
// 007f5d40  803e00               cmp byte ptr [esi], 0
// 007f5d43  0f8495000000         je 0x7f5dde
// 007f5d49  53                   push ebx
// 007f5d4a  55                   push ebp
// 007f5d4b  6a0a                 push 0xa
// 007f5d4d  56                   push esi
// 007f5d4e  ff1504ba9800         call dword ptr [0x98ba04]
// 007f5d54  83c408               add esp, 8
// 007f5d57  8d9fe8000000         lea ebx, [edi + 0xe8]
// 007f5d5d  85c0                 test eax, eax
// 007f5d5f  741e                 je 0x7f5d7f
// 007f5d61  6a0a                 push 0xa
// 007f5d63  6a01                 push 1
// 007f5d65  56                   push esi
// 007f5d66  53                   push ebx
// 007f5d67  e8b2061300           call 0x92641e
// 007f5d6c  6a0a                 push 0xa
// 007f5d6e  6a00                 push 0
// 007f5d70  56                   push esi
// 007f5d71  8d87ec000000         lea eax, [edi + 0xec]
// 007f5d77  50                   push eax
// 007f5d78  e8a1061300           call 0x92641e
// 007f5d7d  eb16                 jmp 0x7f5d95
// 007f5d7f  56                   push esi
// 007f5d80  8bcb                 mov ecx, ebx
// 007f5d82  ff155cde9800         call dword ptr [0x98de5c]
// 007f5d88  50                   push eax
// 007f5d89  8d8fec000000         lea ecx, [edi + 0xec]
// 007f5d8f  ff1538d59800         call dword ptr [0x98d538]
// 007f5d95  8dafd8000000         lea ebp, [edi + 0xd8]
// 007f5d9b  8bcd                 mov ecx, ebp
// 007f5d9d  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f5da3  84c0                 test al, al
// 007f5da5  7418                 je 0x7f5dbf
// 007f5da7  6a0a                 push 0xa
// 007f5da9  6a02                 push 2
// 007f5dab  56                   push esi
// 007f5dac  55                   push ebp
// 007f5dad  e86c061300           call 0x92641e
// 007f5db2  85c0                 test eax, eax
// 007f5db4  7509                 jne 0x7f5dbf
// 007f5db6  53                   push ebx
// 007f5db7  8bcd                 mov ecx, ebp
// 007f5db9  ff1538d59800         call dword ptr [0x98d538]
// 007f5dbf  81c7f4000000         add edi, 0xf4
// 007f5dc5  8bcf                 mov ecx, edi
// 007f5dc7  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f5dcd  5d                   pop ebp
// 007f5dce  5b                   pop ebx
// 007f5dcf  84c0                 test al, al
// 007f5dd1  740b                 je 0x7f5dde
// 007f5dd3  6a0a                 push 0xa
// 007f5dd5  6a03                 push 3
// 007f5dd7  56                   push esi
// 007f5dd8  57                   push edi
// 007f5dd9  e840061300           call 0x92641e
// 007f5dde  5f                   pop edi
// 007f5ddf  5e                   pop esi
// 007f5de0  c20400               ret 4
// copied from an identical function in another client (function ?SetPrompt@CXTPControl@@QAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp