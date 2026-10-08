// from server: 100% by auto
// roc 2008-06 0075cfb0  unit: CXTPDockingPaneMiniWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075cfb0
//
// 0075cfb0  83ec10               sub esp, 0x10
// 0075cfb3  56                   push esi
// 0075cfb4  8bf1                 mov esi, ecx
// 0075cfb6  837e2000             cmp dword ptr [esi + 0x20], 0
// 0075cfba  0f84bd000000         je 0x75d07d
// 0075cfc0  57                   push edi
// 0075cfc1  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 0075cfc7  8bc7                 mov eax, edi
// 0075cfc9  f7d8                 neg eax
// 0075cfcb  1bc0                 sbb eax, eax
// 0075cfcd  83e0f6               and eax, 0xfffffff6
// 0075cfd0  83c012               add eax, 0x12
// 0075cfd3  50                   push eax
// 0075cfd4  e887f6ffff           call 0x75c660
// 0075cfd9  85c0                 test eax, eax
// 0075cfdb  0f859b000000         jne 0x75d07c
// 0075cfe1  398648010000         cmp dword ptr [esi + 0x148], eax
// 0075cfe7  750b                 jne 0x75cff4
// 0075cfe9  6a01                 push 1
// 0075cfeb  8bce                 mov ecx, esi
// 0075cfed  e8aefdffff           call 0x75cda0
// 0075cff2  eb63                 jmp 0x75d057
// 0075cff4  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0075cffa  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 0075d000  7429                 je 0x75d02b
// 0075d002  56                   push esi
// 0075d003  8d4c240c             lea ecx, [esp + 0xc]
// 0075d007  e8c4aaf9ff           call 0x6f7ad0
// 0075d00c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075d010  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 0075d016  2b442408             sub eax, dword ptr [esp + 8]
// 0075d01a  6a06                 push 6
// 0075d01c  52                   push edx
// 0075d01d  50                   push eax
// 0075d01e  6a00                 push 0
// 0075d020  6a00                 push 0
// 0075d022  6a00                 push 0
// 0075d024  8bce                 mov ecx, esi
// 0075d026  e81b3af4ff           call 0x6a0a46
// 0075d02b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075d02e  53                   push ebx
// 0075d02f  8b1d1c2e8000         mov ebx, dword ptr [0x802e1c]
// 0075d035  6a01                 push 1
// 0075d037  51                   push ecx
// 0075d038  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 0075d042  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 0075d04c  ffd3                 call ebx
// 0075d04e  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075d051  6a03                 push 3
// 0075d053  52                   push edx
// 0075d054  ffd3                 call ebx
// 0075d056  5b                   pop ebx
// 0075d057  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075d05a  6a00                 push 0
// 0075d05c  6a00                 push 0
// 0075d05e  6885000000           push 0x85
// 0075d063  50                   push eax
// 0075d064  ff15142e8000         call dword ptr [0x802e14]
// 0075d06a  f7df                 neg edi
// 0075d06c  1bff                 sbb edi, edi
// 0075d06e  83e7f6               and edi, 0xfffffff6
// 0075d071  83c713               add edi, 0x13
// 0075d074  57                   push edi
// 0075d075  8bce                 mov ecx, esi
// 0075d077  e8e4f5ffff           call 0x75c660
// 0075d07c  5f                   pop edi
// 0075d07d  5e                   pop esi
// 0075d07e  83c410               add esp, 0x10
// 0075d081  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnPinButtonClick@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
