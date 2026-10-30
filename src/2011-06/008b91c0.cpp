// roc 2011-06 008b91c0  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b91c0
//
// 008b91c0  56                   push esi
// 008b91c1  8b742408             mov esi, dword ptr [esp + 8]
// 008b91c5  8b4618               mov eax, dword ptr [esi + 0x18]
// 008b91c8  57                   push edi
// 008b91c9  8bf9                 mov edi, ecx
// 008b91cb  83f803               cmp eax, 3
// 008b91ce  743b                 je 0x8b920b
// 008b91d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b91d3  85c9                 test ecx, ecx
// 008b91d5  0f849f000000         je 0x8b927a
// 008b91db  83f804               cmp eax, 4
// 008b91de  0f8496000000         je 0x8b927a
// 008b91e4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008b91e7  83f805               cmp eax, 5
// 008b91ea  7429                 je 0x8b9215
// 008b91ec  83f802               cmp eax, 2
// 008b91ef  750f                 jne 0x8b9200
// 008b91f1  8b01                 mov eax, dword ptr [ecx]
// 008b91f3  8b5724               mov edx, dword ptr [edi + 0x24]
// 008b91f6  8b4008               mov eax, dword ptr [eax + 8]
// 008b91f9  52                   push edx
// 008b91fa  ffd0                 call eax
// 008b91fc  85c0                 test eax, eax
// 008b91fe  7536                 jne 0x8b9236
// 008b9200  8b7610               mov esi, dword ptr [esi + 0x10]
// 008b9203  8b4618               mov eax, dword ptr [esi + 0x18]
// 008b9206  83f803               cmp eax, 3
// 008b9209  75c5                 jne 0x8b91d0
// 008b920b  5f                   pop edi
// 008b920c  b804000000           mov eax, 4
// 008b9211  5e                   pop esi
// 008b9212  c20400               ret 4
// 008b9215  8bf1                 mov esi, ecx
// 008b9217  85f6                 test esi, esi
// 008b9219  740e                 je 0x8b9229
// 008b921b  8d46ac               lea eax, [esi - 0x54]
// 008b921e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008b9224  5f                   pop edi
// 008b9225  5e                   pop esi
// 008b9226  c20400               ret 4
// 008b9229  33c0                 xor eax, eax
// 008b922b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008b9231  5f                   pop edi
// 008b9232  5e                   pop esi
// 008b9233  c20400               ret 4
// 008b9236  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b9239  85c9                 test ecx, ecx
// 008b923b  7405                 je 0x8b9242
// 008b923d  8d79e0               lea edi, [ecx - 0x20]
// 008b9240  eb02                 jmp 0x8b9244
// 008b9242  33ff                 xor edi, edi
// 008b9244  50                   push eax
// 008b9245  56                   push esi
// 008b9246  8bcf                 mov ecx, edi
// 008b9248  e8c3bd0000           call 0x8c5010
// 008b924d  85c0                 test eax, eax
// 008b924f  7415                 je 0x8b9266
// 008b9251  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 008b9257  f7d8                 neg eax
// 008b9259  1bc0                 sbb eax, eax
// 008b925b  83e0fe               and eax, 0xfffffffe
// 008b925e  5f                   pop edi
// 008b925f  83c002               add eax, 2
// 008b9262  5e                   pop esi
// 008b9263  c20400               ret 4
// 008b9266  33c0                 xor eax, eax
// 008b9268  398790000000         cmp dword ptr [edi + 0x90], eax
// 008b926e  5f                   pop edi
// 008b926f  0f94c0               sete al
// 008b9272  5e                   pop esi
// 008b9273  8d440001             lea eax, [eax + eax + 1]
// 008b9277  c20400               ret 4
// 008b927a  5f                   pop edi
// 008b927b  83c8ff               or eax, 0xffffffff
// 008b927e  5e                   pop esi
// 008b927f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
