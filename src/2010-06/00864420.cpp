// roc 2010-06 00864420  unit: CXTPDockingPaneMiniWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864420
//
// 00864420  83ec10               sub esp, 0x10
// 00864423  56                   push esi
// 00864424  8bf1                 mov esi, ecx
// 00864426  837e2000             cmp dword ptr [esi + 0x20], 0
// 0086442a  0f84bd000000         je 0x8644ed
// 00864430  57                   push edi
// 00864431  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 00864437  8bc7                 mov eax, edi
// 00864439  f7d8                 neg eax
// 0086443b  1bc0                 sbb eax, eax
// 0086443d  83e0f6               and eax, 0xfffffff6
// 00864440  83c012               add eax, 0x12
// 00864443  50                   push eax
// 00864444  e887f6ffff           call 0x863ad0
// 00864449  85c0                 test eax, eax
// 0086444b  0f859b000000         jne 0x8644ec
// 00864451  398648010000         cmp dword ptr [esi + 0x148], eax
// 00864457  750b                 jne 0x864464
// 00864459  6a01                 push 1
// 0086445b  8bce                 mov ecx, esi
// 0086445d  e8aefdffff           call 0x864210
// 00864462  eb63                 jmp 0x8644c7
// 00864464  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0086446a  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00864470  7429                 je 0x86449b
// 00864472  56                   push esi
// 00864473  8d4c240c             lea ecx, [esp + 0xc]
// 00864477  e834aef9ff           call 0x7ff2b0
// 0086447c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00864480  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 00864486  2b442408             sub eax, dword ptr [esp + 8]
// 0086448a  6a06                 push 6
// 0086448c  52                   push edx
// 0086448d  50                   push eax
// 0086448e  6a00                 push 0
// 00864490  6a00                 push 0
// 00864492  6a00                 push 0
// 00864494  8bce                 mov ecx, esi
// 00864496  e8d138f4ff           call 0x7a7d6c
// 0086449b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086449e  53                   push ebx
// 0086449f  8b1d60ba9e00         mov ebx, dword ptr [0x9eba60]
// 008644a5  6a01                 push 1
// 008644a7  51                   push ecx
// 008644a8  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 008644b2  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008644bc  ffd3                 call ebx
// 008644be  8b5620               mov edx, dword ptr [esi + 0x20]
// 008644c1  6a03                 push 3
// 008644c3  52                   push edx
// 008644c4  ffd3                 call ebx
// 008644c6  5b                   pop ebx
// 008644c7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008644ca  6a00                 push 0
// 008644cc  6a00                 push 0
// 008644ce  6885000000           push 0x85
// 008644d3  50                   push eax
// 008644d4  ff1554ba9e00         call dword ptr [0x9eba54]
// 008644da  f7df                 neg edi
// 008644dc  1bff                 sbb edi, edi
// 008644de  83e7f6               and edi, 0xfffffff6
// 008644e1  83c713               add edi, 0x13
// 008644e4  57                   push edi
// 008644e5  8bce                 mov ecx, esi
// 008644e7  e8e4f5ffff           call 0x863ad0
// 008644ec  5f                   pop edi
// 008644ed  5e                   pop esi
// 008644ee  83c410               add esp, 0x10
// 008644f1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnPinButtonClick@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
