// roc 2008-06 006e93d0  unit: CXTPControlColorSelector  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e93d0
//
// 006e93d0  56                   push esi
// 006e93d1  8bf1                 mov esi, ecx
// 006e93d3  8b06                 mov eax, dword ptr [esi]
// 006e93d5  8b5074               mov edx, dword ptr [eax + 0x74]
// 006e93d8  ffd2                 call edx
// 006e93da  85c0                 test eax, eax
// 006e93dc  0f84d7000000         je 0x6e94b9
// 006e93e2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e93e8  8d442408             lea eax, [esp + 8]
// 006e93ec  50                   push eax
// 006e93ed  51                   push ecx
// 006e93ee  e8cdf50000           call 0x6f89c0
// 006e93f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e93f7  83c0dd               add eax, -0x23
// 006e93fa  83c408               add esp, 8
// 006e93fd  83f805               cmp eax, 5
// 006e9400  0f87b3000000         ja 0x6e94b9
// 006e9406  ff2485c0946e00       jmp dword ptr [eax*4 + 0x6e94c0]
// 006e940d  6a00                 push 0
// 006e940f  8bce                 mov ecx, esi
// 006e9411  e86affffff           call 0x6e9380
// 006e9416  b801000000           mov eax, 1
// 006e941b  5e                   pop esi
// 006e941c  c20800               ret 8
// 006e941f  8bce                 mov ecx, esi
// 006e9421  e89affffff           call 0x6e93c0
// 006e9426  48                   dec eax
// 006e9427  50                   push eax
// 006e9428  e853ffffff           call 0x6e9380
// 006e942d  b801000000           mov eax, 1
// 006e9432  5e                   pop esi
// 006e9433  c20800               ret 8
// 006e9436  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 006e943c  85c0                 test eax, eax
// 006e943e  7e79                 jle 0x6e94b9
// 006e9440  48                   dec eax
// 006e9441  50                   push eax
// 006e9442  8bce                 mov ecx, esi
// 006e9444  e837ffffff           call 0x6e9380
// 006e9449  b801000000           mov eax, 1
// 006e944e  5e                   pop esi
// 006e944f  c20800               ret 8
// 006e9452  8b9674010000         mov edx, dword ptr [esi + 0x174]
// 006e9458  8bce                 mov ecx, esi
// 006e945a  e861ffffff           call 0x6e93c0
// 006e945f  48                   dec eax
// 006e9460  3bd0                 cmp edx, eax
// 006e9462  7d55                 jge 0x6e94b9
// 006e9464  42                   inc edx
// 006e9465  52                   push edx
// 006e9466  e815ffffff           call 0x6e9380
// 006e946b  b801000000           mov eax, 1
// 006e9470  5e                   pop esi
// 006e9471  c20800               ret 8
// 006e9474  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 006e947a  83f808               cmp eax, 8
// 006e947d  7c3a                 jl 0x6e94b9
// 006e947f  83c0f8               add eax, -8
// 006e9482  50                   push eax
// 006e9483  8bce                 mov ecx, esi
// 006e9485  e8f6feffff           call 0x6e9380
// 006e948a  b801000000           mov eax, 1
// 006e948f  5e                   pop esi
// 006e9490  c20800               ret 8
// 006e9493  8b9674010000         mov edx, dword ptr [esi + 0x174]
// 006e9499  8bce                 mov ecx, esi
// 006e949b  e820ffffff           call 0x6e93c0
// 006e94a0  83e808               sub eax, 8
// 006e94a3  3bd0                 cmp edx, eax
// 006e94a5  7d12                 jge 0x6e94b9
// 006e94a7  83c208               add edx, 8
// 006e94aa  52                   push edx
// 006e94ab  e8d0feffff           call 0x6e9380
// 006e94b0  b801000000           mov eax, 1
// 006e94b5  5e                   pop esi
// 006e94b6  c20800               ret 8
// 006e94b9  33c0                 xor eax, eax
// 006e94bb  5e                   pop esi
// 006e94bc  c20800               ret 8
// 006e94bf  90                   nop 
// 006e94c0  1f                   pop ds
// 006e94c1  94                   xchg esp, eax
// 006e94c2  6e                   outsb dx, byte ptr [esi]
// 006e94c3  000d946e0036         add byte ptr [0x36006e94], cl
// 006e94c9  94                   xchg esp, eax
// 006e94ca  6e                   outsb dx, byte ptr [esi]
// 006e94cb  0074946e             add byte ptr [esp + edx*4 + 0x6e], dh
// 006e94cf  005294               add byte ptr [edx - 0x6c], dl
// 006e94d2  6e                   outsb dx, byte ptr [esi]
// library xtp-11.2.2-lib-strlen/Source\CommandBars\XTPControlPopupColor.cpp (function ?OnHookKeyDown@CXTPControlColorSelector@@EAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/CommandBars/XTPControlPopupColor.cpp
