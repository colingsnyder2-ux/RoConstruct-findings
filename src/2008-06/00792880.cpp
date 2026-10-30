// from server: 100% by auto
// roc 2008-06 00792880  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792880
//
// 00792880  56                   push esi
// 00792881  57                   push edi
// 00792882  8bf1                 mov esi, ecx
// 00792884  e881970200           call 0x7bc00a
// 00792889  8bf8                 mov edi, eax
// 0079288b  81e700000010         and edi, 0x10000000
// 00792891  7410                 je 0x7928a3
// 00792893  6a00                 push 0
// 00792895  6a00                 push 0
// 00792897  6800000010           push 0x10000000
// 0079289c  8bce                 mov ecx, esi
// 0079289e  e86fe5f0ff           call 0x6a0e12
// 007928a3  8bce                 mov ecx, esi
// 007928a5  e8bee3f0ff           call 0x6a0c68
// 007928aa  85ff                 test edi, edi
// 007928ac  7410                 je 0x7928be
// 007928ae  6a00                 push 0
// 007928b0  6800000010           push 0x10000000
// 007928b5  6a00                 push 0
// 007928b7  8bce                 mov ecx, esi
// 007928b9  e854e5f0ff           call 0x6a0e12
// 007928be  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007928c1  33c0                 xor eax, eax
// 007928c3  3944240c             cmp dword ptr [esp + 0xc], eax
// 007928c7  6a00                 push 0
// 007928c9  0f95c0               setne al
// 007928cc  6a00                 push 0
// 007928ce  51                   push ecx
// 007928cf  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 007928d5  ff15182e8000         call dword ptr [0x802e18]
// 007928db  5f                   pop edi
// 007928dc  33c0                 xor eax, eax
// 007928de  5e                   pop esi
// 007928df  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
