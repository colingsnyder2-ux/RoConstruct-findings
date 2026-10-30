// roc 2010-06 0089a080  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089a080
//
// 0089a080  56                   push esi
// 0089a081  8bf1                 mov esi, ecx
// 0089a083  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0089a08a  7443                 je 0x89a0cf
// 0089a08c  57                   push edi
// 0089a08d  e84c2d0e00           call 0x97cdde
// 0089a092  8bf8                 mov edi, eax
// 0089a094  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089a098  6a00                 push 0
// 0089a09a  83c80b               or eax, 0xb
// 0089a09d  50                   push eax
// 0089a09e  6a00                 push 0
// 0089a0a0  8bce                 mov ecx, esi
// 0089a0a2  e873e0f0ff           call 0x7a811a
// 0089a0a7  8bce                 mov ecx, esi
// 0089a0a9  e8302d0e00           call 0x97cdde
// 0089a0ae  3bf8                 cmp edi, eax
// 0089a0b0  5f                   pop edi
// 0089a0b1  7416                 je 0x89a0c9
// 0089a0b3  66837c240c00         cmp word ptr [esp + 0xc], 0
// 0089a0b9  740e                 je 0x89a0c9
// 0089a0bb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0089a0be  6a01                 push 1
// 0089a0c0  6a00                 push 0
// 0089a0c2  51                   push ecx
// 0089a0c3  ff1578ba9e00         call dword ptr [0x9eba78]
// 0089a0c9  33c0                 xor eax, eax
// 0089a0cb  5e                   pop esi
// 0089a0cc  c20800               ret 8
// 0089a0cf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0089a0d3  8b442408             mov eax, dword ptr [esp + 8]
// 0089a0d7  52                   push edx
// 0089a0d8  50                   push eax
// 0089a0d9  e862fdffff           call 0x899e40
// 0089a0de  5e                   pop esi
// 0089a0df  c20800               ret 8
// copied from an identical function in another client (function ?OnSetStyle@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp