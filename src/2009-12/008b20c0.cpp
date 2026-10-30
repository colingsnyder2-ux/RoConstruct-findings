// roc 2009-12 008b20c0  unit: CXTPDockingPaneTabbedContainer  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b20c0
//
// 008b20c0  53                   push ebx
// 008b20c1  55                   push ebp
// 008b20c2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008b20c6  56                   push esi
// 008b20c7  57                   push edi
// 008b20c8  8bf1                 mov esi, ecx
// 008b20ca  85ed                 test ebp, ebp
// 008b20cc  740c                 je 0x8b20da
// 008b20ce  8d45e0               lea eax, [ebp - 0x20]
// 008b20d1  85c0                 test eax, eax
// 008b20d3  7405                 je 0x8b20da
// 008b20d5  83c020               add eax, 0x20
// 008b20d8  eb02                 jmp 0x8b20dc
// 008b20da  33c0                 xor eax, eax
// 008b20dc  6a00                 push 0
// 008b20de  8d7e38               lea edi, [esi + 0x38]
// 008b20e1  50                   push eax
// 008b20e2  8bcf                 mov ecx, edi
// 008b20e4  e887e10000           call 0x8c0270
// 008b20e9  50                   push eax
// 008b20ea  8bcf                 mov ecx, edi
// 008b20ec  e87f140300           call 0x8e3570
// 008b20f1  8b46ac               mov eax, dword ptr [esi - 0x54]
// 008b20f4  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 008b20fa  8d5eac               lea ebx, [esi - 0x54]
// 008b20fd  8bcb                 mov ecx, ebx
// 008b20ff  ffd2                 call edx
// 008b2101  8b4500               mov eax, dword ptr [ebp]
// 008b2104  8b5030               mov edx, dword ptr [eax + 0x30]
// 008b2107  6a00                 push 0
// 008b2109  8bcd                 mov ecx, ebp
// 008b210b  ffd2                 call edx
// 008b210d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b2110  8b11                 mov edx, dword ptr [ecx]
// 008b2112  8d7eac               lea edi, [esi - 0x54]
// 008b2115  8bc7                 mov eax, edi
// 008b2117  f7d8                 neg eax
// 008b2119  1bc0                 sbb eax, eax
// 008b211b  23c6                 and eax, esi
// 008b211d  50                   push eax
// 008b211e  8b4234               mov eax, dword ptr [edx + 0x34]
// 008b2121  ffd0                 call eax
// 008b2123  837e4400             cmp dword ptr [esi + 0x44], 0
// 008b2127  7538                 jne 0x8b2161
// 008b2129  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 008b2130  7426                 je 0x8b2158
// 008b2132  8bce                 mov ecx, esi
// 008b2134  c7864001000000000000 mov dword ptr [esi + 0x140], 0
// 008b213e  e8fde6ffff           call 0x8b0840
// 008b2143  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 008b2149  8b10                 mov edx, dword ptr [eax]
// 008b214b  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008b2151  51                   push ecx
// 008b2152  6a00                 push 0
// 008b2154  8bc8                 mov ecx, eax
// 008b2156  ffd2                 call edx
// 008b2158  8b03                 mov eax, dword ptr [ebx]
// 008b215a  8b5068               mov edx, dword ptr [eax + 0x68]
// 008b215d  8bcb                 mov ecx, ebx
// 008b215f  ffd2                 call edx
// 008b2161  f7df                 neg edi
// 008b2163  1bff                 sbb edi, edi
// 008b2165  6a01                 push 1
// 008b2167  23fe                 and edi, esi
// 008b2169  57                   push edi
// 008b216a  8bce                 mov ecx, esi
// 008b216c  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 008b2176  e8c5e6ffff           call 0x8b0840
// 008b217b  8bc8                 mov ecx, eax
// 008b217d  e84e71f8ff           call 0x8392d0
// 008b2182  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 008b2188  85c0                 test eax, eax
// 008b218a  7405                 je 0x8b2191
// 008b218c  83c020               add eax, 0x20
// 008b218f  eb02                 jmp 0x8b2193
// 008b2191  33c0                 xor eax, eax
// 008b2193  3be8                 cmp ebp, eax
// 008b2195  7523                 jne 0x8b21ba
// 008b2197  8bce                 mov ecx, esi
// 008b2199  e8a20d0400           call 0x8f2f40
// 008b219e  85c0                 test eax, eax
// 008b21a0  7405                 je 0x8b21a7
// 008b21a2  83c0e0               add eax, -0x20
// 008b21a5  eb02                 jmp 0x8b21a9
// 008b21a7  33c0                 xor eax, eax
// 008b21a9  8b13                 mov edx, dword ptr [ebx]
// 008b21ab  6a01                 push 1
// 008b21ad  6a01                 push 1
// 008b21af  50                   push eax
// 008b21b0  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 008b21b6  8bcb                 mov ecx, ebx
// 008b21b8  ffd0                 call eax
// 008b21ba  5f                   pop edi
// 008b21bb  5e                   pop esi
// 008b21bc  5d                   pop ebp
// 008b21bd  5b                   pop ebx
// 008b21be  c20400               ret 4
// copied from an identical function in another client (function ?RemovePane@CXTPDockingPaneTabbedContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp