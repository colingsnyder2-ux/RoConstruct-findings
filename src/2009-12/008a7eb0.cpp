// roc 2009-12 008a7eb0  unit: CXTPDockingPaneBase  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7eb0
//
// 008a7eb0  56                   push esi
// 008a7eb1  8b742408             mov esi, dword ptr [esp + 8]
// 008a7eb5  8b4618               mov eax, dword ptr [esi + 0x18]
// 008a7eb8  57                   push edi
// 008a7eb9  8bf9                 mov edi, ecx
// 008a7ebb  83f803               cmp eax, 3
// 008a7ebe  743b                 je 0x8a7efb
// 008a7ec0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008a7ec3  85c9                 test ecx, ecx
// 008a7ec5  0f849f000000         je 0x8a7f6a
// 008a7ecb  83f804               cmp eax, 4
// 008a7ece  0f8496000000         je 0x8a7f6a
// 008a7ed4  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008a7ed7  83f805               cmp eax, 5
// 008a7eda  7429                 je 0x8a7f05
// 008a7edc  83f802               cmp eax, 2
// 008a7edf  750f                 jne 0x8a7ef0
// 008a7ee1  8b01                 mov eax, dword ptr [ecx]
// 008a7ee3  8b5724               mov edx, dword ptr [edi + 0x24]
// 008a7ee6  8b4008               mov eax, dword ptr [eax + 8]
// 008a7ee9  52                   push edx
// 008a7eea  ffd0                 call eax
// 008a7eec  85c0                 test eax, eax
// 008a7eee  7536                 jne 0x8a7f26
// 008a7ef0  8b7610               mov esi, dword ptr [esi + 0x10]
// 008a7ef3  8b4618               mov eax, dword ptr [esi + 0x18]
// 008a7ef6  83f803               cmp eax, 3
// 008a7ef9  75c5                 jne 0x8a7ec0
// 008a7efb  5f                   pop edi
// 008a7efc  b804000000           mov eax, 4
// 008a7f01  5e                   pop esi
// 008a7f02  c20400               ret 4
// 008a7f05  8bf1                 mov esi, ecx
// 008a7f07  85f6                 test esi, esi
// 008a7f09  740e                 je 0x8a7f19
// 008a7f0b  8d46ac               lea eax, [esi - 0x54]
// 008a7f0e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008a7f14  5f                   pop edi
// 008a7f15  5e                   pop esi
// 008a7f16  c20400               ret 4
// 008a7f19  33c0                 xor eax, eax
// 008a7f1b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 008a7f21  5f                   pop edi
// 008a7f22  5e                   pop esi
// 008a7f23  c20400               ret 4
// 008a7f26  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008a7f29  85c9                 test ecx, ecx
// 008a7f2b  7405                 je 0x8a7f32
// 008a7f2d  8d79e0               lea edi, [ecx - 0x20]
// 008a7f30  eb02                 jmp 0x8a7f34
// 008a7f32  33ff                 xor edi, edi
// 008a7f34  50                   push eax
// 008a7f35  56                   push esi
// 008a7f36  8bcf                 mov ecx, edi
// 008a7f38  e893bb0000           call 0x8b3ad0
// 008a7f3d  85c0                 test eax, eax
// 008a7f3f  7415                 je 0x8a7f56
// 008a7f41  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 008a7f47  f7d8                 neg eax
// 008a7f49  1bc0                 sbb eax, eax
// 008a7f4b  83e0fe               and eax, 0xfffffffe
// 008a7f4e  5f                   pop edi
// 008a7f4f  83c002               add eax, 2
// 008a7f52  5e                   pop esi
// 008a7f53  c20400               ret 4
// 008a7f56  33c0                 xor eax, eax
// 008a7f58  398790000000         cmp dword ptr [edi + 0x90], eax
// 008a7f5e  5f                   pop edi
// 008a7f5f  0f94c0               sete al
// 008a7f62  5e                   pop esi
// 008a7f63  8d440001             lea eax, [eax + eax + 1]
// 008a7f67  c20400               ret 4
// 008a7f6a  5f                   pop edi
// 008a7f6b  83c8ff               or eax, 0xffffffff
// 008a7f6e  5e                   pop esi
// 008a7f6f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
