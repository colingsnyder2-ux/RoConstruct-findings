// roc 2010-06 0085c000  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085c000
//
// 0085c000  56                   push esi
// 0085c001  8b742408             mov esi, dword ptr [esp + 8]
// 0085c005  8b4618               mov eax, dword ptr [esi + 0x18]
// 0085c008  57                   push edi
// 0085c009  8bf9                 mov edi, ecx
// 0085c00b  83f803               cmp eax, 3
// 0085c00e  743b                 je 0x85c04b
// 0085c010  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0085c013  85c9                 test ecx, ecx
// 0085c015  0f849f000000         je 0x85c0ba
// 0085c01b  83f804               cmp eax, 4
// 0085c01e  0f8496000000         je 0x85c0ba
// 0085c024  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0085c027  83f805               cmp eax, 5
// 0085c02a  7429                 je 0x85c055
// 0085c02c  83f802               cmp eax, 2
// 0085c02f  750f                 jne 0x85c040
// 0085c031  8b01                 mov eax, dword ptr [ecx]
// 0085c033  8b5724               mov edx, dword ptr [edi + 0x24]
// 0085c036  8b4008               mov eax, dword ptr [eax + 8]
// 0085c039  52                   push edx
// 0085c03a  ffd0                 call eax
// 0085c03c  85c0                 test eax, eax
// 0085c03e  7536                 jne 0x85c076
// 0085c040  8b7610               mov esi, dword ptr [esi + 0x10]
// 0085c043  8b4618               mov eax, dword ptr [esi + 0x18]
// 0085c046  83f803               cmp eax, 3
// 0085c049  75c5                 jne 0x85c010
// 0085c04b  5f                   pop edi
// 0085c04c  b804000000           mov eax, 4
// 0085c051  5e                   pop esi
// 0085c052  c20400               ret 4
// 0085c055  8bf1                 mov esi, ecx
// 0085c057  85f6                 test esi, esi
// 0085c059  740e                 je 0x85c069
// 0085c05b  8d46ac               lea eax, [esi - 0x54]
// 0085c05e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 0085c064  5f                   pop edi
// 0085c065  5e                   pop esi
// 0085c066  c20400               ret 4
// 0085c069  33c0                 xor eax, eax
// 0085c06b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 0085c071  5f                   pop edi
// 0085c072  5e                   pop esi
// 0085c073  c20400               ret 4
// 0085c076  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0085c079  85c9                 test ecx, ecx
// 0085c07b  7405                 je 0x85c082
// 0085c07d  8d79e0               lea edi, [ecx - 0x20]
// 0085c080  eb02                 jmp 0x85c084
// 0085c082  33ff                 xor edi, edi
// 0085c084  50                   push eax
// 0085c085  56                   push esi
// 0085c086  8bcf                 mov ecx, edi
// 0085c088  e833bb0000           call 0x867bc0
// 0085c08d  85c0                 test eax, eax
// 0085c08f  7415                 je 0x85c0a6
// 0085c091  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0085c097  f7d8                 neg eax
// 0085c099  1bc0                 sbb eax, eax
// 0085c09b  83e0fe               and eax, 0xfffffffe
// 0085c09e  5f                   pop edi
// 0085c09f  83c002               add eax, 2
// 0085c0a2  5e                   pop esi
// 0085c0a3  c20400               ret 4
// 0085c0a6  33c0                 xor eax, eax
// 0085c0a8  398790000000         cmp dword ptr [edi + 0x90], eax
// 0085c0ae  5f                   pop edi
// 0085c0af  0f94c0               sete al
// 0085c0b2  5e                   pop esi
// 0085c0b3  8d440001             lea eax, [eax + eax + 1]
// 0085c0b7  c20400               ret 4
// 0085c0ba  5f                   pop edi
// 0085c0bb  83c8ff               or eax, 0xffffffff
// 0085c0be  5e                   pop esi
// 0085c0bf  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
