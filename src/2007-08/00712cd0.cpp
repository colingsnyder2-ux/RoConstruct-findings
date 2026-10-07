// roc 2007-08 00712cd0  unit: PAVCXTShadowWnd::?$CList  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712cd0
//
// 00712cd0  56                   push esi
// 00712cd1  8bf1                 mov esi, ecx
// 00712cd3  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00712cd7  7505                 jne 0x712cde
// 00712cd9  e8f2fbffff           call 0x7128d0
// 00712cde  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00712ce2  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00712ce5  8b5008               mov edx, dword ptr [eax + 8]
// 00712ce8  8b767c               mov esi, dword ptr [esi + 0x7c]
// 00712ceb  2b4804               sub ecx, dword ptr [eax + 4]
// 00712cee  2b10                 sub edx, dword ptr [eax]
// 00712cf0  85f6                 test esi, esi
// 00712cf2  7403                 je 0x712cf7
// 00712cf4  8b7604               mov esi, dword ptr [esi + 4]
// 00712cf7  8b442408             mov eax, dword ptr [esp + 8]
// 00712cfb  682000cc00           push 0xcc0020
// 00712d00  6a00                 push 0
// 00712d02  6a00                 push 0
// 00712d04  56                   push esi
// 00712d05  51                   push ecx
// 00712d06  8b4804               mov ecx, dword ptr [eax + 4]
// 00712d09  52                   push edx
// 00712d0a  6a00                 push 0
// 00712d0c  6a00                 push 0
// 00712d0e  51                   push ecx
// 00712d0f  ff153cd17700         call dword ptr [0x77d13c]
// 00712d15  5e                   pop esi
// 00712d16  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?DrawPseudoShadow@CXTShadowWnd@@IAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
