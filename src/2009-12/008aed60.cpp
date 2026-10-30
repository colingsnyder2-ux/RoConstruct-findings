// roc 2009-12 008aed60  unit: CXTPDockingPaneMiniWnd  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aed60
//
// 008aed60  6aff                 push -1
// 008aed62  6878ad9500           push 0x95ad78
// 008aed67  64a100000000         mov eax, dword ptr fs:[0]
// 008aed6d  50                   push eax
// 008aed6e  83ec24               sub esp, 0x24
// 008aed71  56                   push esi
// 008aed72  57                   push edi
// 008aed73  a10052b600           mov eax, dword ptr [0xb65200]
// 008aed78  33c4                 xor eax, esp
// 008aed7a  50                   push eax
// 008aed7b  8d442430             lea eax, [esp + 0x30]
// 008aed7f  64a300000000         mov dword ptr fs:[0], eax
// 008aed85  8bf1                 mov esi, ecx
// 008aed87  e874f9ffff           call 0x8ae700
// 008aed8c  85c0                 test eax, eax
// 008aed8e  0f8492000000         je 0x8aee26
// 008aed94  56                   push esi
// 008aed95  8d4c2410             lea ecx, [esp + 0x10]
// 008aed99  e8d2c4f9ff           call 0x84b270
// 008aed9e  8b442410             mov eax, dword ptr [esp + 0x10]
// 008aeda2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008aeda6  f7d8                 neg eax
// 008aeda8  50                   push eax
// 008aeda9  f7d9                 neg ecx
// 008aedab  51                   push ecx
// 008aedac  8d442414             lea eax, [esp + 0x14]
// 008aedb0  50                   push eax
// 008aedb1  ff156ccc9800         call dword ptr [0x98cc6c]
// 008aedb7  56                   push esi
// 008aedb8  8d4c2420             lea ecx, [esp + 0x20]
// 008aedbc  e8c9760700           call 0x92648a
// 008aedc1  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008aedc7  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008aedcf  e87c1a0000           call 0x8b0850
// 008aedd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008aedd8  8b38                 mov edi, dword ptr [eax]
// 008aedda  83ec10               sub esp, 0x10
// 008aeddd  8bd4                 mov edx, esp
// 008aeddf  890a                 mov dword ptr [edx], ecx
// 008aede1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008aede5  894a04               mov dword ptr [edx + 4], ecx
// 008aede8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008aedec  894a08               mov dword ptr [edx + 8], ecx
// 008aedef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008aedf3  894a0c               mov dword ptr [edx + 0xc], ecx
// 008aedf6  56                   push esi
// 008aedf7  8d542430             lea edx, [esp + 0x30]
// 008aedfb  8bc8                 mov ecx, eax
// 008aedfd  8b4778               mov eax, dword ptr [edi + 0x78]
// 008aee00  52                   push edx
// 008aee01  ffd0                 call eax
// 008aee03  8d4c241c             lea ecx, [esp + 0x1c]
// 008aee07  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 008aee0f  e870760700           call 0x926484
// 008aee14  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008aee18  64890d00000000       mov dword ptr fs:[0], ecx
// 008aee1f  59                   pop ecx
// 008aee20  5f                   pop edi
// 008aee21  5e                   pop esi
// 008aee22  83c430               add esp, 0x30
// 008aee25  c3                   ret 
// 008aee26  8bce                 mov ecx, esi
// 008aee28  e80350f4ff           call 0x7f3e30
// 008aee2d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008aee31  64890d00000000       mov dword ptr fs:[0], ecx
// 008aee38  59                   pop ecx
// 008aee39  5f                   pop edi
// 008aee3a  5e                   pop esi
// 008aee3b  83c430               add esp, 0x30
// 008aee3e  c3                   ret 
// copied from an identical function in another client (function ?OnNcPaint@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp