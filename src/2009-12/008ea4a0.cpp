// roc 2009-12 008ea4a0  unit: CXTPRibbonTab  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea4a0
//
// 008ea4a0  56                   push esi
// 008ea4a1  57                   push edi
// 008ea4a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ea4a6  8bf1                 mov esi, ecx
// 008ea4a8  8d4754               lea eax, [edi + 0x54]
// 008ea4ab  50                   push eax
// 008ea4ac  8d4e54               lea ecx, [esi + 0x54]
// 008ea4af  ff1538d59800         call dword ptr [0x98d538]
// 008ea4b5  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 008ea4bb  8d9798000000         lea edx, [edi + 0x98]
// 008ea4c1  898e94000000         mov dword ptr [esi + 0x94], ecx
// 008ea4c7  52                   push edx
// 008ea4c8  8d8e98000000         lea ecx, [esi + 0x98]
// 008ea4ce  ff1538d59800         call dword ptr [0x98d538]
// 008ea4d4  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 008ea4da  898690000000         mov dword ptr [esi + 0x90], eax
// 008ea4e0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008ea4e3  8d5758               lea edx, [edi + 0x58]
// 008ea4e6  894e34               mov dword ptr [esi + 0x34], ecx
// 008ea4e9  52                   push edx
// 008ea4ea  8d4e58               lea ecx, [esi + 0x58]
// 008ea4ed  ff1538d59800         call dword ptr [0x98d538]
// 008ea4f3  837e6000             cmp dword ptr [esi + 0x60], 0
// 008ea4f7  740f                 je 0x8ea508
// 008ea4f9  8b4760               mov eax, dword ptr [edi + 0x60]
// 008ea4fc  397804               cmp dword ptr [eax + 4], edi
// 008ea4ff  7507                 jne 0x8ea508
// 008ea501  8bce                 mov ecx, esi
// 008ea503  e8083bfeff           call 0x8ce010
// 008ea508  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 008ea50e  51                   push ecx
// 008ea50f  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008ea515  e8f6370000           call 0x8edd10
// 008ea51a  5f                   pop edi
// 008ea51b  5e                   pop esi
// 008ea51c  c20400               ret 4
// copied from an identical function in another client (function ?Copy@CXTPRibbonTab@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp