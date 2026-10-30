// roc 2009-12 008afac0  unit: CXTPDockingPaneMiniWnd  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008afac0
//
// 008afac0  6aff                 push -1
// 008afac2  6818309600           push 0x963018
// 008afac7  64a100000000         mov eax, dword ptr fs:[0]
// 008afacd  50                   push eax
// 008aface  83ec1c               sub esp, 0x1c
// 008afad1  56                   push esi
// 008afad2  a10052b600           mov eax, dword ptr [0xb65200]
// 008afad7  33c4                 xor eax, esp
// 008afad9  50                   push eax
// 008afada  8d442424             lea eax, [esp + 0x24]
// 008afade  64a300000000         mov dword ptr fs:[0], eax
// 008afae4  8bf1                 mov esi, ecx
// 008afae6  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 008afaed  7443                 je 0x8afb32
// 008afaef  6a0a                 push 0xa
// 008afaf1  8d4c240c             lea ecx, [esp + 0xc]
// 008afaf5  e8c69bf8ff           call 0x8396c0
// 008afafa  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008afb00  8b400c               mov eax, dword ptr [eax + 0xc]
// 008afb03  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008afb09  8d542408             lea edx, [esp + 8]
// 008afb0d  52                   push edx
// 008afb0e  6a01                 push 1
// 008afb10  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008afb18  ffd0                 call eax
// 008afb1a  837c241401           cmp dword ptr [esp + 0x14], 1
// 008afb1f  7424                 je 0x8afb45
// 008afb21  8d4c2408             lea ecx, [esp + 8]
// 008afb25  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008afb2d  e8be9bf8ff           call 0x8396f0
// 008afb32  33c0                 xor eax, eax
// 008afb34  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008afb38  64890d00000000       mov dword ptr fs:[0], ecx
// 008afb3f  59                   pop ecx
// 008afb40  5e                   pop esi
// 008afb41  83c428               add esp, 0x28
// 008afb44  c3                   ret 
// 008afb45  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008afb49  33c9                 xor ecx, ecx
// 008afb4b  85c0                 test eax, eax
// 008afb4d  0f95c1               setne cl
// 008afb50  85c9                 test ecx, ecx
// 008afb52  7505                 jne 0x8afb59
// 008afb54  e8b33ff4ff           call 0x7f3b0c
// 008afb59  8b4008               mov eax, dword ptr [eax + 8]
// 008afb5c  85c0                 test eax, eax
// 008afb5e  7405                 je 0x8afb65
// 008afb60  83c0ac               add eax, -0x54
// 008afb63  eb02                 jmp 0x8afb67
// 008afb65  33c0                 xor eax, eax
// 008afb67  8bb0a4010000         mov esi, dword ptr [eax + 0x1a4]
// 008afb6d  8d4c2408             lea ecx, [esp + 8]
// 008afb71  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008afb79  e8729bf8ff           call 0x8396f0
// 008afb7e  8bc6                 mov eax, esi
// 008afb80  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008afb84  64890d00000000       mov dword ptr fs:[0], ecx
// 008afb8b  59                   pop ecx
// 008afb8c  5e                   pop esi
// 008afb8d  83c428               add esp, 0x28
// 008afb90  c3                   ret 
// copied from an identical function in another client (function ?GetSelectedPane@CXTPDockingPaneMiniWnd@@IBEPAVCXTPDockingPane@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp