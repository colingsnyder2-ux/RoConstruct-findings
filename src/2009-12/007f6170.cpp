// roc 2009-12 007f6170  unit: CRobloxControlColorSelector  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6170
//
// 007f6170  51                   push ecx
// 007f6171  56                   push esi
// 007f6172  8bf1                 mov esi, ecx
// 007f6174  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f617a  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007f6181  7476                 je 0x7f61f9
// 007f6183  8b16                 mov edx, dword ptr [esi]
// 007f6185  8b5258               mov edx, dword ptr [edx + 0x58]
// 007f6188  53                   push ebx
// 007f6189  8d442408             lea eax, [esp + 8]
// 007f618d  50                   push eax
// 007f618e  ffd2                 call edx
// 007f6190  8bc8                 mov ecx, eax
// 007f6192  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f6198  8d4c2408             lea ecx, [esp + 8]
// 007f619c  8ad8                 mov bl, al
// 007f619e  ff15c0de9800         call dword ptr [0x98dec0]
// 007f61a4  84db                 test bl, bl
// 007f61a6  5b                   pop ebx
// 007f61a7  7405                 je 0x7f61ae
// 007f61a9  33c0                 xor eax, eax
// 007f61ab  5e                   pop esi
// 007f61ac  59                   pop ecx
// 007f61ad  c3                   ret 
// 007f61ae  8bce                 mov ecx, esi
// 007f61b0  e8dbfaffff           call 0x7f5c90
// 007f61b5  83f801               cmp eax, 1
// 007f61b8  743f                 je 0x7f61f9
// 007f61ba  83f803               cmp eax, 3
// 007f61bd  743a                 je 0x7f61f9
// 007f61bf  83f804               cmp eax, 4
// 007f61c2  7435                 je 0x7f61f9
// 007f61c4  83f802               cmp eax, 2
// 007f61c7  74e0                 je 0x7f61a9
// 007f61c9  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007f61cf  48                   dec eax
// 007f61d0  83f80a               cmp eax, 0xa
// 007f61d3  77d4                 ja 0x7f61a9
// 007f61d5  0fb68010627f00       movzx eax, byte ptr [eax + 0x7f6210]
// 007f61dc  ff248504627f00       jmp dword ptr [eax*4 + 0x7f6204]
// 007f61e3  8b16                 mov edx, dword ptr [esi]
// 007f61e5  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 007f61eb  6a00                 push 0
// 007f61ed  8bce                 mov ecx, esi
// 007f61ef  ffd0                 call eax
// 007f61f1  f7d8                 neg eax
// 007f61f3  1bc0                 sbb eax, eax
// 007f61f5  40                   inc eax
// 007f61f6  5e                   pop esi
// 007f61f7  59                   pop ecx
// 007f61f8  c3                   ret 
// 007f61f9  b801000000           mov eax, 1
// 007f61fe  5e                   pop esi
// 007f61ff  59                   pop ecx
// 007f6200  c3                   ret 
// 007f6201  8d4900               lea ecx, [ecx]
// 007f6204  e361                 jecxz 0x7f6267
// 007f6206  7f00                 jg 0x7f6208
// 007f6208  f9                   stc 
// 007f6209  61                   popal 
// 007f620a  7f00                 jg 0x7f620c
// 007f620c  a9617f0000           test eax, 0x7f61
// 007f6211  0100                 add dword ptr [eax], eax
// 007f6213  0002                 add byte ptr [edx], al
// 007f6215  0202                 add al, byte ptr [edx]
// 007f6217  0101                 add dword ptr [ecx], eax
// 007f6219  0201                 add al, byte ptr [ecx]
// copied from an identical function in another client (function ?IsCaptionVisible@CXTPControl@@UBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp