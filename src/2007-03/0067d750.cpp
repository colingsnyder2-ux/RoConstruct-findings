// roc 2007-03 0067d750  unit: seg_00670000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067d750
//
// 0067d750  8b442408             mov eax, dword ptr [esp + 8]
// 0067d754  85c0                 test eax, eax
// 0067d756  56                   push esi
// 0067d757  7443                 je 0x67d79c
// 0067d759  8b4804               mov ecx, dword ptr [eax + 4]
// 0067d75c  8b10                 mov edx, dword ptr [eax]
// 0067d75e  51                   push ecx
// 0067d75f  52                   push edx
// 0067d760  ff1560ef7700         call dword ptr [0x77ef60]
// 0067d766  8bf0                 mov esi, eax
// 0067d768  85f6                 test esi, esi
// 0067d76a  7432                 je 0x67d79e
// 0067d76c  6af0                 push -0x10
// 0067d76e  56                   push esi
// 0067d76f  ff1504ed7700         call dword ptr [0x77ed04]
// 0067d775  a900000040           test eax, 0x40000000
// 0067d77a  7422                 je 0x67d79e
// 0067d77c  6a00                 push 0
// 0067d77e  6a00                 push 0
// 0067d780  68482a0000           push 0x2a48
// 0067d785  56                   push esi
// 0067d786  ff1550ee7700         call dword ptr [0x77ee50]
// 0067d78c  83f801               cmp eax, 1
// 0067d78f  750d                 jne 0x67d79e
// 0067d791  56                   push esi
// 0067d792  ff15c8ec7700         call dword ptr [0x77ecc8]
// 0067d798  5e                   pop esi
// 0067d799  c20800               ret 8
// 0067d79c  33f6                 xor esi, esi
// 0067d79e  8bc6                 mov eax, esi
// 0067d7a0  5e                   pop esi
// 0067d7a1  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnWindowFromPoint@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
