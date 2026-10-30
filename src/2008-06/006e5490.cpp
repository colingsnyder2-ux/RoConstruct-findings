// from server: 100% by auto
// roc 2008-06 006e5490  unit: CXTPDockingPaneManager  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5490
//
// 006e5490  6aff                 push -1
// 006e5492  686c287e00           push 0x7e286c
// 006e5497  64a100000000         mov eax, dword ptr fs:[0]
// 006e549d  50                   push eax
// 006e549e  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006e54a3  33c4                 xor eax, esp
// 006e54a5  50                   push eax
// 006e54a6  8d442404             lea eax, [esp + 4]
// 006e54aa  64a300000000         mov dword ptr fs:[0], eax
// 006e54b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e54b4  33c0                 xor eax, eax
// 006e54b6  83f905               cmp ecx, 5
// 006e54b9  0f879c010000         ja 0x6e565b
// 006e54bf  ff248d70566e00       jmp dword ptr [ecx*4 + 0x6e5670]
// 006e54c6  68e8000000           push 0xe8
// 006e54cb  e850b4fbff           call 0x6a0920
// 006e54d0  83c404               add esp, 4
// 006e54d3  89442414             mov dword ptr [esp + 0x14], eax
// 006e54d7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006e54df  85c0                 test eax, eax
// 006e54e1  0f8472010000         je 0x6e5659
// 006e54e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e54eb  51                   push ecx
// 006e54ec  8bc8                 mov ecx, eax
// 006e54ee  e86d230200           call 0x707860
// 006e54f3  85c0                 test eax, eax
// 006e54f5  0f845e010000         je 0x6e5659
// 006e54fb  83c020               add eax, 0x20
// 006e54fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e5502  64890d00000000       mov dword ptr fs:[0], ecx
// 006e5509  59                   pop ecx
// 006e550a  83c40c               add esp, 0xc
// 006e550d  c20800               ret 8
// 006e5510  6898000000           push 0x98
// 006e5515  e806b4fbff           call 0x6a0920
// 006e551a  83c404               add esp, 4
// 006e551d  89442414             mov dword ptr [esp + 0x14], eax
// 006e5521  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006e5529  85c0                 test eax, eax
// 006e552b  0f8428010000         je 0x6e5659
// 006e5531  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e5535  52                   push edx
// 006e5536  8bc8                 mov ecx, eax
// 006e5538  e8c3c00700           call 0x761600
// 006e553d  85c0                 test eax, eax
// 006e553f  0f8414010000         je 0x6e5659
// 006e5545  83c020               add eax, 0x20
// 006e5548  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e554c  64890d00000000       mov dword ptr fs:[0], ecx
// 006e5553  59                   pop ecx
// 006e5554  83c40c               add esp, 0xc
// 006e5557  c20800               ret 8
// 006e555a  68c8010000           push 0x1c8
// 006e555f  e8bcb3fbff           call 0x6a0920
// 006e5564  83c404               add esp, 4
// 006e5567  89442414             mov dword ptr [esp + 0x14], eax
// 006e556b  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 006e5573  85c0                 test eax, eax
// 006e5575  0f84de000000         je 0x6e5659
// 006e557b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e557f  51                   push ecx
// 006e5580  8bc8                 mov ecx, eax
// 006e5582  e8c9a40700           call 0x75fa50
// 006e5587  e9b4000000           jmp 0x6e5640
// 006e558c  6a58                 push 0x58
// 006e558e  e88db3fbff           call 0x6a0920
// 006e5593  83c404               add esp, 4
// 006e5596  89442414             mov dword ptr [esp + 0x14], eax
// 006e559a  c744240c03000000     mov dword ptr [esp + 0xc], 3
// 006e55a2  85c0                 test eax, eax
// 006e55a4  0f84af000000         je 0x6e5659
// 006e55aa  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e55ae  52                   push edx
// 006e55af  8bc8                 mov ecx, eax
// 006e55b1  e86a810700           call 0x75d720
// 006e55b6  85c0                 test eax, eax
// 006e55b8  0f849b000000         je 0x6e5659
// 006e55be  83c020               add eax, 0x20
// 006e55c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e55c5  64890d00000000       mov dword ptr fs:[0], ecx
// 006e55cc  59                   pop ecx
// 006e55cd  83c40c               add esp, 0xc
// 006e55d0  c20800               ret 8
// 006e55d3  6858010000           push 0x158
// 006e55d8  e843b3fbff           call 0x6a0920
// 006e55dd  83c404               add esp, 4
// 006e55e0  89442414             mov dword ptr [esp + 0x14], eax
// 006e55e4  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 006e55ec  85c0                 test eax, eax
// 006e55ee  7469                 je 0x6e5659
// 006e55f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e55f4  51                   push ecx
// 006e55f5  8bc8                 mov ecx, eax
// 006e55f7  e844750700           call 0x75cb40
// 006e55fc  85c0                 test eax, eax
// 006e55fe  7459                 je 0x6e5659
// 006e5600  05f8000000           add eax, 0xf8
// 006e5605  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e5609  64890d00000000       mov dword ptr fs:[0], ecx
// 006e5610  59                   pop ecx
// 006e5611  83c40c               add esp, 0xc
// 006e5614  c20800               ret 8
// 006e5617  68c8000000           push 0xc8
// 006e561c  e8ffb2fbff           call 0x6a0920
// 006e5621  83c404               add esp, 4
// 006e5624  89442414             mov dword ptr [esp + 0x14], eax
// 006e5628  c744240c05000000     mov dword ptr [esp + 0xc], 5
// 006e5630  85c0                 test eax, eax
// 006e5632  7425                 je 0x6e5659
// 006e5634  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e5638  52                   push edx
// 006e5639  8bc8                 mov ecx, eax
// 006e563b  e880370700           call 0x758dc0
// 006e5640  85c0                 test eax, eax
// 006e5642  7415                 je 0x6e5659
// 006e5644  83c054               add eax, 0x54
// 006e5647  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e564b  64890d00000000       mov dword ptr fs:[0], ecx
// 006e5652  59                   pop ecx
// 006e5653  83c40c               add esp, 0xc
// 006e5656  c20800               ret 8
// 006e5659  33c0                 xor eax, eax
// 006e565b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e565f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e5666  59                   pop ecx
// 006e5667  83c40c               add esp, 0xc
// 006e566a  c20800               ret 8
// 006e566d  8d4900               lea ecx, [ecx]
// library xtp-11.2.2-lib-strlen/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnCreatePane@CXTPDockingPaneManager@@MAEPAVCXTPDockingPaneBase@@W4XTPDockingPaneType@@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneManager.cpp
