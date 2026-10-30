// roc 2009-12 008b2890  unit: CXTPDockingPaneTabbedContainer  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2890
//
// 008b2890  6aff                 push -1
// 008b2892  6818309600           push 0x963018
// 008b2897  64a100000000         mov eax, dword ptr fs:[0]
// 008b289d  50                   push eax
// 008b289e  83ec1c               sub esp, 0x1c
// 008b28a1  56                   push esi
// 008b28a2  a10052b600           mov eax, dword ptr [0xb65200]
// 008b28a7  33c4                 xor eax, esp
// 008b28a9  50                   push eax
// 008b28aa  8d442424             lea eax, [esp + 0x24]
// 008b28ae  64a300000000         mov dword ptr fs:[0], eax
// 008b28b4  8bf1                 mov esi, ecx
// 008b28b6  83bec401000000       cmp dword ptr [esi + 0x1c4], 0
// 008b28bd  0f8583000000         jne 0x8b2946
// 008b28c3  8b4664               mov eax, dword ptr [esi + 0x64]
// 008b28c6  85c0                 test eax, eax
// 008b28c8  747c                 je 0x8b2946
// 008b28ca  83781802             cmp dword ptr [eax + 0x18], 2
// 008b28ce  7576                 jne 0x8b2946
// 008b28d0  8d4e54               lea ecx, [esi + 0x54]
// 008b28d3  e868dfffff           call 0x8b0840
// 008b28d8  83b8f000000000       cmp dword ptr [eax + 0xf0], 0
// 008b28df  7465                 je 0x8b2946
// 008b28e1  6a0a                 push 0xa
// 008b28e3  8d4c240c             lea ecx, [esp + 0xc]
// 008b28e7  e8d46df8ff           call 0x8396c0
// 008b28ec  8b7664               mov esi, dword ptr [esi + 0x64]
// 008b28ef  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008b28f7  85f6                 test esi, esi
// 008b28f9  7405                 je 0x8b2900
// 008b28fb  8d4ee0               lea ecx, [esi - 0x20]
// 008b28fe  eb02                 jmp 0x8b2902
// 008b2900  33c9                 xor ecx, ecx
// 008b2902  8d442408             lea eax, [esp + 8]
// 008b2906  50                   push eax
// 008b2907  6a01                 push 1
// 008b2909  e882290000           call 0x8b5290
// 008b290e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b2912  85c0                 test eax, eax
// 008b2914  741f                 je 0x8b2935
// 008b2916  8bc8                 mov ecx, eax
// 008b2918  8b4908               mov ecx, dword ptr [ecx + 8]
// 008b291b  8b00                 mov eax, dword ptr [eax]
// 008b291d  85c9                 test ecx, ecx
// 008b291f  7405                 je 0x8b2926
// 008b2921  83c1ac               add ecx, -0x54
// 008b2924  eb02                 jmp 0x8b2928
// 008b2926  33c9                 xor ecx, ecx
// 008b2928  83b9c401000000       cmp dword ptr [ecx + 0x1c4], 0
// 008b292f  7528                 jne 0x8b2959
// 008b2931  85c0                 test eax, eax
// 008b2933  75e1                 jne 0x8b2916
// 008b2935  8d4c2408             lea ecx, [esp + 8]
// 008b2939  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008b2941  e8aa6df8ff           call 0x8396f0
// 008b2946  33c0                 xor eax, eax
// 008b2948  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b294c  64890d00000000       mov dword ptr fs:[0], ecx
// 008b2953  59                   pop ecx
// 008b2954  5e                   pop esi
// 008b2955  83c428               add esp, 0x28
// 008b2958  c3                   ret 
// 008b2959  8d4c2408             lea ecx, [esp + 8]
// 008b295d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008b2965  e8866df8ff           call 0x8396f0
// 008b296a  b801000000           mov eax, 1
// 008b296f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b2973  64890d00000000       mov dword ptr fs:[0], ecx
// 008b297a  59                   pop ecx
// 008b297b  5e                   pop esi
// 008b297c  83c428               add esp, 0x28
// 008b297f  c3                   ret 
// copied from an identical function in another client (function ?IsPaneMinimized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp