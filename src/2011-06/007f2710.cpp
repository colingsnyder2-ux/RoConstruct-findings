// from server: 100% by auto
// roc 2011-06 007f2710  unit: RBX::AdvLuaDragTool  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2710
//
// 007f2710  8b4618               mov eax, dword ptr [esi + 0x18]
// 007f2713  57                   push edi
// 007f2714  8b3e                 mov edi, dword ptr [esi]
// 007f2716  50                   push eax
// 007f2717  68ff000000           push 0xff
// 007f271c  50                   push eax
// 007f271d  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f2720  56                   push esi
// 007f2721  e86afaffff           call 0x7f2190
// 007f2726  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007f2729  8d472c               lea eax, [edi + 0x2c]
// 007f272c  41                   inc ecx
// 007f272d  83c410               add esp, 0x10
// 007f2730  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 007f2737  3b08                 cmp ecx, dword ptr [eax]
// 007f2739  7e20                 jle 0x7f275b
// 007f273b  8b570c               mov edx, dword ptr [edi + 0xc]
// 007f273e  6874f2ab00           push 0xabf274
// 007f2743  68fdffff7f           push 0x7ffffffd
// 007f2748  6a04                 push 4
// 007f274a  50                   push eax
// 007f274b  8b4610               mov eax, dword ptr [esi + 0x10]
// 007f274e  52                   push edx
// 007f274f  50                   push eax
// 007f2750  e83b87feff           call 0x7dae90
// 007f2755  83c418               add esp, 0x18
// 007f2758  89470c               mov dword ptr [edi + 0xc], eax
// 007f275b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007f275e  8b442408             mov eax, dword ptr [esp + 8]
// 007f2762  8b570c               mov edx, dword ptr [edi + 0xc]
// 007f2765  89048a               mov dword ptr [edx + ecx*4], eax
// 007f2768  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007f276b  8d4730               lea eax, [edi + 0x30]
// 007f276e  41                   inc ecx
// 007f276f  3b08                 cmp ecx, dword ptr [eax]
// 007f2771  7e20                 jle 0x7f2793
// 007f2773  8b5714               mov edx, dword ptr [edi + 0x14]
// 007f2776  6874f2ab00           push 0xabf274
// 007f277b  68fdffff7f           push 0x7ffffffd
// 007f2780  6a04                 push 4
// 007f2782  50                   push eax
// 007f2783  8b4610               mov eax, dword ptr [esi + 0x10]
// 007f2786  52                   push edx
// 007f2787  50                   push eax
// 007f2788  e80387feff           call 0x7dae90
// 007f278d  83c418               add esp, 0x18
// 007f2790  894714               mov dword ptr [edi + 0x14], eax
// 007f2793  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007f2796  8b5714               mov edx, dword ptr [edi + 0x14]
// 007f2799  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f279d  89048a               mov dword ptr [edx + ecx*4], eax
// 007f27a0  8b4618               mov eax, dword ptr [esi + 0x18]
// 007f27a3  8d4801               lea ecx, [eax + 1]
// 007f27a6  894e18               mov dword ptr [esi + 0x18], ecx
// 007f27a9  5f                   pop edi
// 007f27aa  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_code)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
