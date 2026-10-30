// roc 2007-08 006ebe30  unit: CXTPDockingPaneContextAlphaWnd  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebe30
//
// 006ebe30  6aff                 push -1
// 006ebe32  6898847600           push 0x768498
// 006ebe37  64a100000000         mov eax, dword ptr fs:[0]
// 006ebe3d  50                   push eax
// 006ebe3e  83ec68               sub esp, 0x68
// 006ebe41  a188518b00           mov eax, dword ptr [0x8b5188]
// 006ebe46  33c4                 xor eax, esp
// 006ebe48  89442464             mov dword ptr [esp + 0x64], eax
// 006ebe4c  56                   push esi
// 006ebe4d  a188518b00           mov eax, dword ptr [0x8b5188]
// 006ebe52  33c4                 xor eax, esp
// 006ebe54  50                   push eax
// 006ebe55  8d442470             lea eax, [esp + 0x70]
// 006ebe59  64a300000000         mov dword ptr fs:[0], eax
// 006ebe5f  8bf1                 mov esi, ecx
// 006ebe61  56                   push esi
// 006ebe62  8d4c241c             lea ecx, [esp + 0x1c]
// 006ebe66  e82546f4ff           call 0x630490
// 006ebe6b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006ebe6e  8d442408             lea eax, [esp + 8]
// 006ebe72  50                   push eax
// 006ebe73  51                   push ecx
// 006ebe74  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 006ebe7f  ff15f4ed7700         call dword ptr [0x77edf4]
// 006ebe85  6a0d                 push 0xd
// 006ebe87  ff1558ee7700         call dword ptr [0x77ee58]
// 006ebe8d  50                   push eax
// 006ebe8e  8d54240c             lea edx, [esp + 0xc]
// 006ebe92  52                   push edx
// 006ebe93  8d4c2420             lea ecx, [esp + 0x20]
// 006ebe97  e8144af4ff           call 0x6308b0
// 006ebe9c  8d4c2418             lea ecx, [esp + 0x18]
// 006ebea0  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 006ebea8  e8dd45f4ff           call 0x63048a
// 006ebead  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006ebeb1  64890d00000000       mov dword ptr fs:[0], ecx
// 006ebeb8  59                   pop ecx
// 006ebeb9  5e                   pop esi
// 006ebeba  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006ebebe  33cc                 xor ecx, esp
// 006ebec0  e8594bf4ff           call 0x630a1e
// 006ebec5  83c474               add esp, 0x74
// 006ebec8  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp