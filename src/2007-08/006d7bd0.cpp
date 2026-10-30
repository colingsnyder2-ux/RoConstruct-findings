// from server: 100% by auto
// roc 2007-08 006d7bd0  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7bd0
//
// 006d7bd0  56                   push esi
// 006d7bd1  8b742408             mov esi, dword ptr [esp + 8]
// 006d7bd5  8b4618               mov eax, dword ptr [esi + 0x18]
// 006d7bd8  83f803               cmp eax, 3
// 006d7bdb  57                   push edi
// 006d7bdc  8bf9                 mov edi, ecx
// 006d7bde  743b                 je 0x6d7c1b
// 006d7be0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006d7be3  85c9                 test ecx, ecx
// 006d7be5  0f849f000000         je 0x6d7c8a
// 006d7beb  83f804               cmp eax, 4
// 006d7bee  0f8496000000         je 0x6d7c8a
// 006d7bf4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006d7bf7  83f805               cmp eax, 5
// 006d7bfa  7429                 je 0x6d7c25
// 006d7bfc  83f802               cmp eax, 2
// 006d7bff  750f                 jne 0x6d7c10
// 006d7c01  8b01                 mov eax, dword ptr [ecx]
// 006d7c03  8b5724               mov edx, dword ptr [edi + 0x24]
// 006d7c06  8b4008               mov eax, dword ptr [eax + 8]
// 006d7c09  52                   push edx
// 006d7c0a  ffd0                 call eax
// 006d7c0c  85c0                 test eax, eax
// 006d7c0e  7536                 jne 0x6d7c46
// 006d7c10  8b7610               mov esi, dword ptr [esi + 0x10]
// 006d7c13  8b4618               mov eax, dword ptr [esi + 0x18]
// 006d7c16  83f803               cmp eax, 3
// 006d7c19  75c5                 jne 0x6d7be0
// 006d7c1b  5f                   pop edi
// 006d7c1c  b804000000           mov eax, 4
// 006d7c21  5e                   pop esi
// 006d7c22  c20400               ret 4
// 006d7c25  8bf1                 mov esi, ecx
// 006d7c27  85f6                 test esi, esi
// 006d7c29  740e                 je 0x6d7c39
// 006d7c2b  8d46ac               lea eax, [esi - 0x54]
// 006d7c2e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 006d7c34  5f                   pop edi
// 006d7c35  5e                   pop esi
// 006d7c36  c20400               ret 4
// 006d7c39  33c0                 xor eax, eax
// 006d7c3b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 006d7c41  5f                   pop edi
// 006d7c42  5e                   pop esi
// 006d7c43  c20400               ret 4
// 006d7c46  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006d7c49  85c9                 test ecx, ecx
// 006d7c4b  7405                 je 0x6d7c52
// 006d7c4d  8d79e0               lea edi, [ecx - 0x20]
// 006d7c50  eb02                 jmp 0x6d7c54
// 006d7c52  33ff                 xor edi, edi
// 006d7c54  50                   push eax
// 006d7c55  56                   push esi
// 006d7c56  8bcf                 mov ecx, edi
// 006d7c58  e813ba0000           call 0x6e3670
// 006d7c5d  85c0                 test eax, eax
// 006d7c5f  7415                 je 0x6d7c76
// 006d7c61  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 006d7c67  f7d8                 neg eax
// 006d7c69  1bc0                 sbb eax, eax
// 006d7c6b  83e0fe               and eax, 0xfffffffe
// 006d7c6e  5f                   pop edi
// 006d7c6f  83c002               add eax, 2
// 006d7c72  5e                   pop esi
// 006d7c73  c20400               ret 4
// 006d7c76  33c0                 xor eax, eax
// 006d7c78  398790000000         cmp dword ptr [edi + 0x90], eax
// 006d7c7e  5f                   pop edi
// 006d7c7f  0f94c0               sete al
// 006d7c82  5e                   pop esi
// 006d7c83  8d440001             lea eax, [eax + eax + 1]
// 006d7c87  c20400               ret 4
// 006d7c8a  5f                   pop edi
// 006d7c8b  83c8ff               or eax, 0xffffffff
// 006d7c8e  5e                   pop esi
// 006d7c8f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
