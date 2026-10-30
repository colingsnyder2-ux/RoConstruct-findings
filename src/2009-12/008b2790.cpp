// roc 2009-12 008b2790  unit: CXTPDockingPaneTabbedContainer  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2790
//
// 008b2790  6aff                 push -1
// 008b2792  68e82f9600           push 0x962fe8
// 008b2797  64a100000000         mov eax, dword ptr fs:[0]
// 008b279d  50                   push eax
// 008b279e  83ec1c               sub esp, 0x1c
// 008b27a1  56                   push esi
// 008b27a2  57                   push edi
// 008b27a3  a10052b600           mov eax, dword ptr [0xb65200]
// 008b27a8  33c4                 xor eax, esp
// 008b27aa  50                   push eax
// 008b27ab  8d442428             lea eax, [esp + 0x28]
// 008b27af  64a300000000         mov dword ptr fs:[0], eax
// 008b27b5  8bf9                 mov edi, ecx
// 008b27b7  837f6800             cmp dword ptr [edi + 0x68], 0
// 008b27bb  7479                 je 0x8b2836
// 008b27bd  8b7764               mov esi, dword ptr [edi + 0x64]
// 008b27c0  85f6                 test esi, esi
// 008b27c2  7472                 je 0x8b2836
// 008b27c4  6a0a                 push 0xa
// 008b27c6  8d4c2410             lea ecx, [esp + 0x10]
// 008b27ca  e8f16ef8ff           call 0x8396c0
// 008b27cf  8d44240c             lea eax, [esp + 0xc]
// 008b27d3  50                   push eax
// 008b27d4  8d4ee0               lea ecx, [esi - 0x20]
// 008b27d7  6a01                 push 1
// 008b27d9  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008b27e1  e8aa2a0000           call 0x8b5290
// 008b27e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b27ea  85c0                 test eax, eax
// 008b27ec  7425                 je 0x8b2813
// 008b27ee  8bff                 mov edi, edi
// 008b27f0  8bc8                 mov ecx, eax
// 008b27f2  8b4908               mov ecx, dword ptr [ecx + 8]
// 008b27f5  8b00                 mov eax, dword ptr [eax]
// 008b27f7  85c9                 test ecx, ecx
// 008b27f9  7405                 je 0x8b2800
// 008b27fb  83c1ac               add ecx, -0x54
// 008b27fe  eb02                 jmp 0x8b2802
// 008b2800  33c9                 xor ecx, ecx
// 008b2802  33d2                 xor edx, edx
// 008b2804  3bcf                 cmp ecx, edi
// 008b2806  0f94c2               sete dl
// 008b2809  8991c4010000         mov dword ptr [ecx + 0x1c4], edx
// 008b280f  85c0                 test eax, eax
// 008b2811  75dd                 jne 0x8b27f0
// 008b2813  8d4f54               lea ecx, [edi + 0x54]
// 008b2816  6a00                 push 0
// 008b2818  51                   push ecx
// 008b2819  e822e0ffff           call 0x8b0840
// 008b281e  8bc8                 mov ecx, eax
// 008b2820  e8ab6af8ff           call 0x8392d0
// 008b2825  8d4c240c             lea ecx, [esp + 0xc]
// 008b2829  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008b2831  e8ba6ef8ff           call 0x8396f0
// 008b2836  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b283a  64890d00000000       mov dword ptr fs:[0], ecx
// 008b2841  59                   pop ecx
// 008b2842  5f                   pop edi
// 008b2843  5e                   pop esi
// 008b2844  83c428               add esp, 0x28
// 008b2847  c3                   ret 
// copied from an identical function in another client (function ?Maximize@CXTPDockingPaneTabbedContainer@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp