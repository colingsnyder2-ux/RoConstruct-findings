// roc 2012-06 00a316b0  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a316b0
//
// 00a316b0  56                   push esi
// 00a316b1  8b742408             mov esi, dword ptr [esp + 8]
// 00a316b5  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a316b8  57                   push edi
// 00a316b9  8bf9                 mov edi, ecx
// 00a316bb  83f803               cmp eax, 3
// 00a316be  743b                 je 0xa316fb
// 00a316c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a316c3  85c9                 test ecx, ecx
// 00a316c5  0f849f000000         je 0xa3176a
// 00a316cb  83f804               cmp eax, 4
// 00a316ce  0f8496000000         je 0xa3176a
// 00a316d4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00a316d7  83f805               cmp eax, 5
// 00a316da  7429                 je 0xa31705
// 00a316dc  83f802               cmp eax, 2
// 00a316df  750f                 jne 0xa316f0
// 00a316e1  8b01                 mov eax, dword ptr [ecx]
// 00a316e3  8b5724               mov edx, dword ptr [edi + 0x24]
// 00a316e6  8b4008               mov eax, dword ptr [eax + 8]
// 00a316e9  52                   push edx
// 00a316ea  ffd0                 call eax
// 00a316ec  85c0                 test eax, eax
// 00a316ee  7536                 jne 0xa31726
// 00a316f0  8b7610               mov esi, dword ptr [esi + 0x10]
// 00a316f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a316f6  83f803               cmp eax, 3
// 00a316f9  75c5                 jne 0xa316c0
// 00a316fb  5f                   pop edi
// 00a316fc  b804000000           mov eax, 4
// 00a31701  5e                   pop esi
// 00a31702  c20400               ret 4
// 00a31705  8bf1                 mov esi, ecx
// 00a31707  85f6                 test esi, esi
// 00a31709  740e                 je 0xa31719
// 00a3170b  8d46ac               lea eax, [esi - 0x54]
// 00a3170e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 00a31714  5f                   pop edi
// 00a31715  5e                   pop esi
// 00a31716  c20400               ret 4
// 00a31719  33c0                 xor eax, eax
// 00a3171b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 00a31721  5f                   pop edi
// 00a31722  5e                   pop esi
// 00a31723  c20400               ret 4
// 00a31726  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a31729  85c9                 test ecx, ecx
// 00a3172b  7405                 je 0xa31732
// 00a3172d  8d79e0               lea edi, [ecx - 0x20]
// 00a31730  eb02                 jmp 0xa31734
// 00a31732  33ff                 xor edi, edi
// 00a31734  50                   push eax
// 00a31735  56                   push esi
// 00a31736  8bcf                 mov ecx, edi
// 00a31738  e803bd0000           call 0xa3d440
// 00a3173d  85c0                 test eax, eax
// 00a3173f  7415                 je 0xa31756
// 00a31741  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00a31747  f7d8                 neg eax
// 00a31749  1bc0                 sbb eax, eax
// 00a3174b  83e0fe               and eax, 0xfffffffe
// 00a3174e  5f                   pop edi
// 00a3174f  83c002               add eax, 2
// 00a31752  5e                   pop esi
// 00a31753  c20400               ret 4
// 00a31756  33c0                 xor eax, eax
// 00a31758  398790000000         cmp dword ptr [edi + 0x90], eax
// 00a3175e  5f                   pop edi
// 00a3175f  0f94c0               sete al
// 00a31762  5e                   pop esi
// 00a31763  8d440001             lea eax, [eax + eax + 1]
// 00a31767  c20400               ret 4
// 00a3176a  5f                   pop edi
// 00a3176b  83c8ff               or eax, 0xffffffff
// 00a3176e  5e                   pop esi
// 00a3176f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
