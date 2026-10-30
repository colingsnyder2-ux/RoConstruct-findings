// roc 2009-12 007f7bc0  unit: IIHH::?$CMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7bc0
//
// 007f7bc0  8b5164               mov edx, dword ptr [ecx + 0x64]
// 007f7bc3  33c0                 xor eax, eax
// 007f7bc5  85d2                 test edx, edx
// 007f7bc7  7e21                 jle 0x7f7bea
// 007f7bc9  56                   push esi
// 007f7bca  8b742408             mov esi, dword ptr [esp + 8]
// 007f7bce  83c15c               add ecx, 0x5c
// 007f7bd1  57                   push edi
// 007f7bd2  85c0                 test eax, eax
// 007f7bd4  7c38                 jl 0x7f7c0e
// 007f7bd6  3b4108               cmp eax, dword ptr [ecx + 8]
// 007f7bd9  7d33                 jge 0x7f7c0e
// 007f7bdb  8b7904               mov edi, dword ptr [ecx + 4]
// 007f7bde  393487               cmp dword ptr [edi + eax*4], esi
// 007f7be1  740a                 je 0x7f7bed
// 007f7be3  40                   inc eax
// 007f7be4  3bc2                 cmp eax, edx
// 007f7be6  7cea                 jl 0x7f7bd2
// 007f7be8  5f                   pop edi
// 007f7be9  5e                   pop esi
// 007f7bea  c20400               ret 4
// 007f7bed  6a01                 push 1
// 007f7bef  50                   push eax
// 007f7bf0  e88b560300           call 0x82d280
// 007f7bf5  5f                   pop edi
// 007f7bf6  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 007f7c00  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 007f7c0a  5e                   pop esi
// 007f7c0b  c20400               ret 4
// 007f7c0e  e8f9beffff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp