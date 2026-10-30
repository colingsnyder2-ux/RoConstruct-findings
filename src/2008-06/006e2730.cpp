// from server: 100% by auto
// roc 2008-06 006e2730  unit: CXTPToolBar  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e2730
//
// 006e2730  56                   push esi
// 006e2731  8b742408             mov esi, dword ptr [esp + 8]
// 006e2735  57                   push edi
// 006e2736  56                   push esi
// 006e2737  8bf9                 mov edi, ecx
// 006e2739  e812feffff           call 0x6e2550
// 006e273e  6a01                 push 1
// 006e2740  8d8788010000         lea eax, [edi + 0x188]
// 006e2746  50                   push eax
// 006e2747  6850668500           push 0x856650
// 006e274c  56                   push esi
// 006e274d  e84eac0100           call 0x6fd3a0
// 006e2752  6a00                 push 0
// 006e2754  8d8f8c010000         lea ecx, [edi + 0x18c]
// 006e275a  51                   push ecx
// 006e275b  6848668500           push 0x856648
// 006e2760  56                   push esi
// 006e2761  e83aac0100           call 0x6fd3a0
// 006e2766  83c420               add esp, 0x20
// 006e2769  837e2c06             cmp dword ptr [esi + 0x2c], 6
// 006e276d  7617                 jbe 0x6e2786
// 006e276f  6a01                 push 1
// 006e2771  8d9734010000         lea edx, [edi + 0x134]
// 006e2777  52                   push edx
// 006e2778  683c668500           push 0x85663c
// 006e277d  56                   push esi
// 006e277e  e81dac0100           call 0x6fd3a0
// 006e2783  83c410               add esp, 0x10
// 006e2786  837e2c07             cmp dword ptr [esi + 0x2c], 7
// 006e278a  7617                 jbe 0x6e27a3
// 006e278c  6a01                 push 1
// 006e278e  8d87a0010000         lea eax, [edi + 0x1a0]
// 006e2794  50                   push eax
// 006e2795  6828668500           push 0x856628
// 006e279a  56                   push esi
// 006e279b  e800ac0100           call 0x6fd3a0
// 006e27a0  83c410               add esp, 0x10
// 006e27a3  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 006e27a7  761d                 jbe 0x6e27c6
// 006e27a9  6a01                 push 1
// 006e27ab  8d8f58010000         lea ecx, [edi + 0x158]
// 006e27b1  51                   push ecx
// 006e27b2  6810668500           push 0x856610
// 006e27b7  56                   push esi
// 006e27b8  e8e3ab0100           call 0x6fd3a0
// 006e27bd  83c410               add esp, 0x10
// 006e27c0  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 006e27c4  7719                 ja 0x6e27df
// 006e27c6  837e2800             cmp dword ptr [esi + 0x28], 0
// 006e27ca  7413                 je 0x6e27df
// 006e27cc  83bff800000000       cmp dword ptr [edi + 0xf8], 0
// 006e27d3  750a                 jne 0x6e27df
// 006e27d5  c7873401000000000000 mov dword ptr [edi + 0x134], 0
// 006e27df  5f                   pop edi
// 006e27e0  5e                   pop esi
// 006e27e1  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPToolBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
