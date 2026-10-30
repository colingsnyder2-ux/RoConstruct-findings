// roc 2011-06 008cd7e0  unit: CXTPDockingPaneContextAlphaWnd  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cd7e0
//
// 008cd7e0  6aff                 push -1
// 008cd7e2  68a8cfa000           push 0xa0cfa8
// 008cd7e7  64a100000000         mov eax, dword ptr fs:[0]
// 008cd7ed  50                   push eax
// 008cd7ee  83ec68               sub esp, 0x68
// 008cd7f1  a12058c900           mov eax, dword ptr [0xc95820]
// 008cd7f6  33c4                 xor eax, esp
// 008cd7f8  89442464             mov dword ptr [esp + 0x64], eax
// 008cd7fc  56                   push esi
// 008cd7fd  a12058c900           mov eax, dword ptr [0xc95820]
// 008cd802  33c4                 xor eax, esp
// 008cd804  50                   push eax
// 008cd805  8d442470             lea eax, [esp + 0x70]
// 008cd809  64a300000000         mov dword ptr fs:[0], eax
// 008cd80f  8bf1                 mov esi, ecx
// 008cd811  56                   push esi
// 008cd812  8d4c241c             lea ecx, [esp + 0x1c]
// 008cd816  e8d3d1f3ff           call 0x80a9ee
// 008cd81b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008cd81e  8d442408             lea eax, [esp + 8]
// 008cd822  50                   push eax
// 008cd823  51                   push ecx
// 008cd824  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008cd82f  ff157c1ca400         call dword ptr [0xa41c7c]
// 008cd835  6a0d                 push 0xd
// 008cd837  ff15181ba400         call dword ptr [0xa41b18]
// 008cd83d  50                   push eax
// 008cd83e  8d54240c             lea edx, [esp + 0xc]
// 008cd842  52                   push edx
// 008cd843  8d4c2420             lea ecx, [esp + 0x20]
// 008cd847  e8d4d5f3ff           call 0x80ae20
// 008cd84c  8d4c2418             lea ecx, [esp + 0x18]
// 008cd850  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008cd858  e88bd1f3ff           call 0x80a9e8
// 008cd85d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008cd861  64890d00000000       mov dword ptr fs:[0], ecx
// 008cd868  59                   pop ecx
// 008cd869  5e                   pop esi
// 008cd86a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008cd86e  33cc                 xor ecx, esp
// 008cd870  e882e0f3ff           call 0x80b8f7
// 008cd875  83c474               add esp, 0x74
// 008cd878  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp