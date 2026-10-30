// roc 2011-06 00856740  unit: CXTPPopupBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856740
//
// 00856740  56                   push esi
// 00856741  8bf1                 mov esi, ecx
// 00856743  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 0085674a  57                   push edi
// 0085674b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085674f  743b                 je 0x85678c
// 00856751  83ff28               cmp edi, 0x28
// 00856754  7536                 jne 0x85678c
// 00856756  6a11                 push 0x11
// 00856758  ff15601aa400         call dword ptr [0xa41a60]
// 0085675e  6685c0               test ax, ax
// 00856761  7c22                 jl 0x856785
// 00856763  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00856769  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0085676f  6a01                 push 1
// 00856771  6a00                 push 0
// 00856773  6a01                 push 1
// 00856775  6a01                 push 1
// 00856777  50                   push eax
// 00856778  e833070000           call 0x856eb0
// 0085677d  3b86cc000000         cmp eax, dword ptr [esi + 0xcc]
// 00856783  7f07                 jg 0x85678c
// 00856785  8bce                 mov ecx, esi
// 00856787  e844f7ffff           call 0x855ed0
// 0085678c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856790  51                   push ecx
// 00856791  57                   push edi
// 00856792  8bce                 mov ecx, esi
// 00856794  e8f77efcff           call 0x81e690
// 00856799  5f                   pop edi
// 0085679a  5e                   pop esi
// 0085679b  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPPopupBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp