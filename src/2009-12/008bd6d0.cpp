// roc 2009-12 008bd6d0  unit: CXTPDockingPaneContext  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd6d0
//
// 008bd6d0  83ec0c               sub esp, 0xc
// 008bd6d3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008bd6d7  2b442418             sub eax, dword ptr [esp + 0x18]
// 008bd6db  53                   push ebx
// 008bd6dc  56                   push esi
// 008bd6dd  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008bd6e1  2b742424             sub esi, dword ptr [esp + 0x24]
// 008bd6e5  6a00                 push 0
// 008bd6e7  6a00                 push 0
// 008bd6e9  6a00                 push 0
// 008bd6eb  6a00                 push 0
// 008bd6ed  894c2418             mov dword ptr [esp + 0x18], ecx
// 008bd6f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008bd6f5  89742420             mov dword ptr [esp + 0x20], esi
// 008bd6f9  ff150cb19800         call dword ptr [0x98b10c]
// 008bd6ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bd703  50                   push eax
// 008bd704  e82167f3ff           call 0x7f3e2a
// 008bd709  33db                 xor ebx, ebx
// 008bd70b  85f6                 test esi, esi
// 008bd70d  7e73                 jle 0x8bd782
// 008bd70f  55                   push ebp
// 008bd710  57                   push edi
// 008bd711  33ed                 xor ebp, ebp
// 008bd713  33f6                 xor esi, esi
// 008bd715  39742414             cmp dword ptr [esp + 0x14], esi
// 008bd719  8d7d01               lea edi, [ebp + 1]
// 008bd71c  7e5b                 jle 0x8bd779
// 008bd71e  8bff                 mov edi, edi
// 008bd720  8b442424             mov eax, dword ptr [esp + 0x24]
// 008bd724  8b4804               mov ecx, dword ptr [eax + 4]
// 008bd727  53                   push ebx
// 008bd728  56                   push esi
// 008bd729  51                   push ecx
// 008bd72a  ff1518b19800         call dword ptr [0x98b118]
// 008bd730  f7d8                 neg eax
// 008bd732  1bc0                 sbb eax, eax
// 008bd734  40                   inc eax
// 008bd735  85ff                 test edi, edi
// 008bd737  740a                 je 0x8bd743
// 008bd739  85c0                 test eax, eax
// 008bd73b  7520                 jne 0x8bd75d
// 008bd73d  8bee                 mov ebp, esi
// 008bd73f  33ff                 xor edi, edi
// 008bd741  eb1a                 jmp 0x8bd75d
// 008bd743  85c0                 test eax, eax
// 008bd745  7416                 je 0x8bd75d
// 008bd747  8b542420             mov edx, dword ptr [esp + 0x20]
// 008bd74b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008bd74f  56                   push esi
// 008bd750  53                   push ebx
// 008bd751  55                   push ebp
// 008bd752  52                   push edx
// 008bd753  e8c8feffff           call 0x8bd620
// 008bd758  bf01000000           mov edi, 1
// 008bd75d  46                   inc esi
// 008bd75e  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008bd762  7cbc                 jl 0x8bd720
// 008bd764  85ff                 test edi, edi
// 008bd766  7511                 jne 0x8bd779
// 008bd768  8b442420             mov eax, dword ptr [esp + 0x20]
// 008bd76c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008bd770  56                   push esi
// 008bd771  53                   push ebx
// 008bd772  55                   push ebp
// 008bd773  50                   push eax
// 008bd774  e8a7feffff           call 0x8bd620
// 008bd779  43                   inc ebx
// 008bd77a  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 008bd77e  7c91                 jl 0x8bd711
// 008bd780  5f                   pop edi
// 008bd781  5d                   pop ebp
// 008bd782  5e                   pop esi
// 008bd783  5b                   pop ebx
// 008bd784  83c40c               add esp, 0xc
// 008bd787  c21800               ret 0x18
// copied from an identical function in another client (function ?RegionFromBitmap@CXTPDockingPaneContext@@IAEXPAVCRgn@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp