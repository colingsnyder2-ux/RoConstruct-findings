// roc 2010-06 00862640  unit: CXTPDockingPaneMiniWnd  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00862640
//
// 00862640  8b542408             mov edx, dword ptr [esp + 8]
// 00862644  53                   push ebx
// 00862645  56                   push esi
// 00862646  57                   push edi
// 00862647  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0086264b  8b8730010000         mov eax, dword ptr [edi + 0x130]
// 00862651  8bf1                 mov esi, ecx
// 00862653  8d4820               lea ecx, [eax + 0x20]
// 00862656  8b01                 mov eax, dword ptr [ecx]
// 00862658  8b4044               mov eax, dword ptr [eax + 0x44]
// 0086265b  6a00                 push 0
// 0086265d  52                   push edx
// 0086265e  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 00862664  52                   push edx
// 00862665  ffd0                 call eax
// 00862667  85c0                 test eax, eax
// 00862669  7405                 je 0x862670
// 0086266b  83c0e0               add eax, -0x20
// 0086266e  eb02                 jmp 0x862672
// 00862670  33c0                 xor eax, eax
// 00862672  898630010000         mov dword ptr [esi + 0x130], eax
// 00862678  8d9ef8000000         lea ebx, [esi + 0xf8]
// 0086267e  895830               mov dword ptr [eax + 0x30], ebx
// 00862681  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00862687  897134               mov dword ptr [ecx + 0x34], esi
// 0086268a  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 00862690  899614010000         mov dword ptr [esi + 0x114], edx
// 00862696  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 0086269c  8d8614010000         lea eax, [esi + 0x114]
// 008626a2  894804               mov dword ptr [eax + 4], ecx
// 008626a5  8b971c010000         mov edx, dword ptr [edi + 0x11c]
// 008626ab  895008               mov dword ptr [eax + 8], edx
// 008626ae  8b8f20010000         mov ecx, dword ptr [edi + 0x120]
// 008626b4  89480c               mov dword ptr [eax + 0xc], ecx
// 008626b7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008626ba  85c9                 test ecx, ecx
// 008626bc  7408                 je 0x8626c6
// 008626be  50                   push eax
// 008626bf  51                   push ecx
// 008626c0  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 008626c6  8b9748010000         mov edx, dword ptr [edi + 0x148]
// 008626cc  899648010000         mov dword ptr [esi + 0x148], edx
// 008626d2  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 008626d8  898638010000         mov dword ptr [esi + 0x138], eax
// 008626de  85d2                 test edx, edx
// 008626e0  741a                 je 0x8626fc
// 008626e2  8bcb                 mov ecx, ebx
// 008626e4  e837220000           call 0x864920
// 008626e9  8b5078               mov edx, dword ptr [eax + 0x78]
// 008626ec  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 008626f2  8d441108             lea eax, [ecx + edx + 8]
// 008626f6  898620010000         mov dword ptr [esi + 0x120], eax
// 008626fc  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 00862702  83b98000000000       cmp dword ptr [ecx + 0x80], 0
// 00862709  754e                 jne 0x862759
// 0086270b  8b13                 mov edx, dword ptr [ebx]
// 0086270d  8b4258               mov eax, dword ptr [edx + 0x58]
// 00862710  8bcb                 mov ecx, ebx
// 00862712  ffd0                 call eax
// 00862714  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0086271a  85c0                 test eax, eax
// 0086271c  7405                 je 0x862723
// 0086271e  8d5020               lea edx, [eax + 0x20]
// 00862721  eb02                 jmp 0x862725
// 00862723  33d2                 xor edx, edx
// 00862725  8d4820               lea ecx, [eax + 0x20]
// 00862728  8b01                 mov eax, dword ptr [ecx]
// 0086272a  52                   push edx
// 0086272b  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0086272e  ffd2                 call edx
// 00862730  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 00862736  85f6                 test esi, esi
// 00862738  7413                 je 0x86274d
// 0086273a  8b13                 mov edx, dword ptr [ebx]
// 0086273c  8d4620               lea eax, [esi + 0x20]
// 0086273f  50                   push eax
// 00862740  8b4234               mov eax, dword ptr [edx + 0x34]
// 00862743  8bcb                 mov ecx, ebx
// 00862745  ffd0                 call eax
// 00862747  5f                   pop edi
// 00862748  5e                   pop esi
// 00862749  5b                   pop ebx
// 0086274a  c20800               ret 8
// 0086274d  8b13                 mov edx, dword ptr [ebx]
// 0086274f  33c0                 xor eax, eax
// 00862751  50                   push eax
// 00862752  8b4234               mov eax, dword ptr [edx + 0x34]
// 00862755  8bcb                 mov ecx, ebx
// 00862757  ffd0                 call eax
// 00862759  5f                   pop edi
// 0086275a  5e                   pop esi
// 0086275b  5b                   pop ebx
// 0086275c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Copy@CXTPDockingPaneMiniWnd@@MAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
