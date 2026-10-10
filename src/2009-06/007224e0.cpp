// from server: 100% by tester
// roc 2008-06 006addd0  unit: CRobloxControlColorSelector  size: 517 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006addd0
//
// 006addd0  53                   push ebx
// 006addd1  56                   push esi
// 006addd2  57                   push edi
// 006addd3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006addd7  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 006adddd  8bf1                 mov esi, ecx
// 006adddf  8b16                 mov edx, dword ptr [esi]
// 006adde1  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 006adde7  898684000000         mov dword ptr [esi + 0x84], eax
// 006added  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 006addf3  50                   push eax
// 006addf4  ffd2                 call edx
// 006addf6  8b477c               mov eax, dword ptr [edi + 0x7c]
// 006addf9  89467c               mov dword ptr [esi + 0x7c], eax
// 006addfc  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 006ade02  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 006ade08  8b97fc000000         mov edx, dword ptr [edi + 0xfc]
// 006ade0e  8d87d8000000         lea eax, [edi + 0xd8]
// 006ade14  50                   push eax
// 006ade15  8d8ed8000000         lea ecx, [esi + 0xd8]
// 006ade1b  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 006ade21  ff1544318000         call dword ptr [0x803144]
// 006ade27  8d8fe0000000         lea ecx, [edi + 0xe0]
// 006ade2d  51                   push ecx
// 006ade2e  8d8ee0000000         lea ecx, [esi + 0xe0]
// 006ade34  ff1544318000         call dword ptr [0x803144]
// 006ade3a  8d97e4000000         lea edx, [edi + 0xe4]
// 006ade40  52                   push edx
// 006ade41  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006ade47  ff1544318000         call dword ptr [0x803144]
// 006ade4d  8d87e8000000         lea eax, [edi + 0xe8]
// 006ade53  50                   push eax
// 006ade54  8d8ee8000000         lea ecx, [esi + 0xe8]
// 006ade5a  ff1544318000         call dword ptr [0x803144]
// 006ade60  8d8fec000000         lea ecx, [edi + 0xec]
// 006ade66  51                   push ecx
// 006ade67  8d8eec000000         lea ecx, [esi + 0xec]
// 006ade6d  ff1544318000         call dword ptr [0x803144]
// 006ade73  8d97f0000000         lea edx, [edi + 0xf0]
// 006ade79  52                   push edx
// 006ade7a  8d8ef0000000         lea ecx, [esi + 0xf0]
// 006ade80  ff1544318000         call dword ptr [0x803144]
// 006ade86  8d87f4000000         lea eax, [edi + 0xf4]
// 006ade8c  50                   push eax
// 006ade8d  8d8ef4000000         lea ecx, [esi + 0xf4]
// 006ade93  ff1544318000         call dword ptr [0x803144]
// 006ade99  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 006ade9f  898e90000000         mov dword ptr [esi + 0x90], ecx
// 006adea5  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 006adeab  899688000000         mov dword ptr [esi + 0x88], edx
// 006adeb1  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 006adeb7  89868c000000         mov dword ptr [esi + 0x8c], eax
// 006adebd  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 006adec3  8d97dc000000         lea edx, [edi + 0xdc]
// 006adec9  898eac000000         mov dword ptr [esi + 0xac], ecx
// 006adecf  52                   push edx
// 006aded0  8d8edc000000         lea ecx, [esi + 0xdc]
// 006aded6  ff1544318000         call dword ptr [0x803144]
// 006adedc  8d8708010000         lea eax, [edi + 0x108]
// 006adee2  50                   push eax
// 006adee3  8d8e08010000         lea ecx, [esi + 0x108]
// 006adee9  ff1544318000         call dword ptr [0x803144]
// 006adeef  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 006adef5  898ed0000000         mov dword ptr [esi + 0xd0], ecx
// 006adefb  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 006adf01  89960c010000         mov dword ptr [esi + 0x10c], edx
// 006adf07  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 006adf0d  89869c000000         mov dword ptr [esi + 0x9c], eax
// 006adf13  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 006adf19  898ea0000000         mov dword ptr [esi + 0xa0], ecx
// 006adf1f  8b974c010000         mov edx, dword ptr [edi + 0x14c]
// 006adf25  89964c010000         mov dword ptr [esi + 0x14c], edx
// 006adf2b  8b8748010000         mov eax, dword ptr [edi + 0x148]
// 006adf31  8b16                 mov edx, dword ptr [esi]
// 006adf33  898648010000         mov dword ptr [esi + 0x148], eax
// 006adf39  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 006adf3f  8b9f60010000         mov ebx, dword ptr [edi + 0x160]
// 006adf45  8bce                 mov ecx, esi
// 006adf47  ffd0                 call eax
// 006adf49  3bc3                 cmp eax, ebx
// 006adf4b  7e0e                 jle 0x6adf5b
// 006adf4d  8b16                 mov edx, dword ptr [esi]
// 006adf4f  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 006adf55  8bce                 mov ecx, esi
// 006adf57  ffd0                 call eax
// 006adf59  eb02                 jmp 0x6adf5d
// 006adf5b  8bc3                 mov eax, ebx
// 006adf5d  898660010000         mov dword ptr [esi + 0x160], eax
// 006adf63  8b8f64010000         mov ecx, dword ptr [edi + 0x164]
// 006adf69  898e64010000         mov dword ptr [esi + 0x164], ecx
// 006adf6f  8b976c010000         mov edx, dword ptr [edi + 0x16c]
// 006adf75  89966c010000         mov dword ptr [esi + 0x16c], edx
// 006adf7b  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 006adf81  898670010000         mov dword ptr [esi + 0x170], eax
// 006adf87  8b8f98000000         mov ecx, dword ptr [edi + 0x98]
// 006adf8d  898e98000000         mov dword ptr [esi + 0x98], ecx
// 006adf93  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 006adf99  8d8f10010000         lea ecx, [edi + 0x110]
// 006adf9f  899654010000         mov dword ptr [esi + 0x154], edx
// 006adfa5  8b8768010000         mov eax, dword ptr [edi + 0x168]
// 006adfab  51                   push ecx
// 006adfac  8d8e10010000         lea ecx, [esi + 0x110]
// 006adfb2  898668010000         mov dword ptr [esi + 0x168], eax
// 006adfb8  e8b3fdffff           call 0x6add70
// 006adfbd  81c72c010000         add edi, 0x12c
// 006adfc3  57                   push edi
// 006adfc4  8d8e2c010000         lea ecx, [esi + 0x12c]
// 006adfca  e8a1fdffff           call 0x6add70
// 006adfcf  5f                   pop edi
// 006adfd0  5e                   pop esi
// 006adfd1  5b                   pop ebx
// 006adfd2  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?Copy@CXTPControl@@MAEXPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
