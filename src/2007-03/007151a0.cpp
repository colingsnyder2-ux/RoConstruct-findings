// roc 2007-03 007151a0  unit: seg_00710000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007151a0
//
// 007151a0  53                   push ebx
// 007151a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007151a5  3bd9                 cmp ebx, ecx
// 007151a7  7509                 jne 0x7151b2
// 007151a9  b801000000           mov eax, 1
// 007151ae  5b                   pop ebx
// 007151af  c20400               ret 4
// 007151b2  56                   push esi
// 007151b3  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 007151b6  85f6                 test esi, esi
// 007151b8  57                   push edi
// 007151b9  741e                 je 0x7151d9
// 007151bb  eb03                 jmp 0x7151c0
// 007151bd  8d4900               lea ecx, [ecx]
// 007151c0  8bc6                 mov eax, esi
// 007151c2  8b4808               mov ecx, dword ptr [eax + 8]
// 007151c5  8b01                 mov eax, dword ptr [ecx]
// 007151c7  8b5008               mov edx, dword ptr [eax + 8]
// 007151ca  8bfe                 mov edi, esi
// 007151cc  8b36                 mov esi, dword ptr [esi]
// 007151ce  53                   push ebx
// 007151cf  ffd2                 call edx
// 007151d1  85c0                 test eax, eax
// 007151d3  750c                 jne 0x7151e1
// 007151d5  85f6                 test esi, esi
// 007151d7  75e7                 jne 0x7151c0
// 007151d9  5f                   pop edi
// 007151da  5e                   pop esi
// 007151db  33c0                 xor eax, eax
// 007151dd  5b                   pop ebx
// 007151de  c20400               ret 4
// 007151e1  8bc7                 mov eax, edi
// 007151e3  5f                   pop edi
// 007151e4  5e                   pop esi
// 007151e5  5b                   pop ebx
// 007151e6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?ContainPane@CXTPDockingPaneBaseContainer@@UBEPAU__POSITION@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
