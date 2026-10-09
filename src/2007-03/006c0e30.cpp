// roc 2007-03 006c0e30  unit: seg_006c0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c0e30
//
// 006c0e30  56                   push esi
// 006c0e31  8b742408             mov esi, dword ptr [esp + 8]
// 006c0e35  8b4618               mov eax, dword ptr [esi + 0x18]
// 006c0e38  83f803               cmp eax, 3
// 006c0e3b  57                   push edi
// 006c0e3c  8bf9                 mov edi, ecx
// 006c0e3e  743b                 je 0x6c0e7b
// 006c0e40  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c0e43  85c9                 test ecx, ecx
// 006c0e45  0f849f000000         je 0x6c0eea
// 006c0e4b  83f804               cmp eax, 4
// 006c0e4e  0f8496000000         je 0x6c0eea
// 006c0e54  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006c0e57  83f805               cmp eax, 5
// 006c0e5a  7429                 je 0x6c0e85
// 006c0e5c  83f802               cmp eax, 2
// 006c0e5f  750f                 jne 0x6c0e70
// 006c0e61  8b01                 mov eax, dword ptr [ecx]
// 006c0e63  8b5724               mov edx, dword ptr [edi + 0x24]
// 006c0e66  8b4008               mov eax, dword ptr [eax + 8]
// 006c0e69  52                   push edx
// 006c0e6a  ffd0                 call eax
// 006c0e6c  85c0                 test eax, eax
// 006c0e6e  7536                 jne 0x6c0ea6
// 006c0e70  8b7610               mov esi, dword ptr [esi + 0x10]
// 006c0e73  8b4618               mov eax, dword ptr [esi + 0x18]
// 006c0e76  83f803               cmp eax, 3
// 006c0e79  75c5                 jne 0x6c0e40
// 006c0e7b  5f                   pop edi
// 006c0e7c  b804000000           mov eax, 4
// 006c0e81  5e                   pop esi
// 006c0e82  c20400               ret 4
// 006c0e85  8bf1                 mov esi, ecx
// 006c0e87  85f6                 test esi, esi
// 006c0e89  740e                 je 0x6c0e99
// 006c0e8b  8d46ac               lea eax, [esi - 0x54]
// 006c0e8e  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 006c0e94  5f                   pop edi
// 006c0e95  5e                   pop esi
// 006c0e96  c20400               ret 4
// 006c0e99  33c0                 xor eax, eax
// 006c0e9b  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 006c0ea1  5f                   pop edi
// 006c0ea2  5e                   pop esi
// 006c0ea3  c20400               ret 4
// 006c0ea6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c0ea9  85c9                 test ecx, ecx
// 006c0eab  7405                 je 0x6c0eb2
// 006c0ead  8d79e0               lea edi, [ecx - 0x20]
// 006c0eb0  eb02                 jmp 0x6c0eb4
// 006c0eb2  33ff                 xor edi, edi
// 006c0eb4  50                   push eax
// 006c0eb5  56                   push esi
// 006c0eb6  8bcf                 mov ecx, edi
// 006c0eb8  e8f3b60000           call 0x6cc5b0
// 006c0ebd  85c0                 test eax, eax
// 006c0ebf  7415                 je 0x6c0ed6
// 006c0ec1  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 006c0ec7  f7d8                 neg eax
// 006c0ec9  1bc0                 sbb eax, eax
// 006c0ecb  83e0fe               and eax, 0xfffffffe
// 006c0ece  5f                   pop edi
// 006c0ecf  83c002               add eax, 2
// 006c0ed2  5e                   pop esi
// 006c0ed3  c20400               ret 4
// 006c0ed6  33c0                 xor eax, eax
// 006c0ed8  398790000000         cmp dword ptr [edi + 0x90], eax
// 006c0ede  5f                   pop edi
// 006c0edf  0f94c0               sete al
// 006c0ee2  5e                   pop esi
// 006c0ee3  8d440001             lea eax, [eax + eax + 1]
// 006c0ee7  c20400               ret 4
// 006c0eea  5f                   pop edi
// 006c0eeb  83c8ff               or eax, 0xffffffff
// 006c0eee  5e                   pop esi
// 006c0eef  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?_GetPaneDirection@CXTPDockingPaneLayout@@ABE?AW4XTPDockingPaneDirection@@PBVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
