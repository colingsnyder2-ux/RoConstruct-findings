// roc 2008-06 00793bd0  unit: CXTPRibbonTab  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793bd0
//
// 00793bd0  56                   push esi
// 00793bd1  57                   push edi
// 00793bd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00793bd6  8bf1                 mov esi, ecx
// 00793bd8  8d4754               lea eax, [edi + 0x54]
// 00793bdb  50                   push eax
// 00793bdc  8d4e54               lea ecx, [esi + 0x54]
// 00793bdf  ff1544318000         call dword ptr [0x803144]
// 00793be5  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00793beb  8d9798000000         lea edx, [edi + 0x98]
// 00793bf1  898e94000000         mov dword ptr [esi + 0x94], ecx
// 00793bf7  52                   push edx
// 00793bf8  8d8e98000000         lea ecx, [esi + 0x98]
// 00793bfe  ff1544318000         call dword ptr [0x803144]
// 00793c04  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00793c0a  898690000000         mov dword ptr [esi + 0x90], eax
// 00793c10  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00793c13  8d5758               lea edx, [edi + 0x58]
// 00793c16  894e34               mov dword ptr [esi + 0x34], ecx
// 00793c19  52                   push edx
// 00793c1a  8d4e58               lea ecx, [esi + 0x58]
// 00793c1d  ff1544318000         call dword ptr [0x803144]
// 00793c23  837e6000             cmp dword ptr [esi + 0x60], 0
// 00793c27  740f                 je 0x793c38
// 00793c29  8b4760               mov eax, dword ptr [edi + 0x60]
// 00793c2c  397804               cmp dword ptr [eax + 4], edi
// 00793c2f  7507                 jne 0x793c38
// 00793c31  8bce                 mov ecx, esi
// 00793c33  e8d870feff           call 0x77ad10
// 00793c38  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 00793c3e  51                   push ecx
// 00793c3f  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00793c45  e8f61b0000           call 0x795840
// 00793c4a  5f                   pop edi
// 00793c4b  5e                   pop esi
// 00793c4c  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTab.cpp (function ?Copy@CXTPRibbonTab@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTab.cpp
