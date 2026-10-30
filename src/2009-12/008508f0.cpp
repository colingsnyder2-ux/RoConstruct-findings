// roc 2009-12 008508f0  unit: CXTPPropExchangeXMLNode  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008508f0
//
// 008508f0  6aff                 push -1
// 008508f2  68c2d89500           push 0x95d8c2
// 008508f7  64a100000000         mov eax, dword ptr fs:[0]
// 008508fd  50                   push eax
// 008508fe  51                   push ecx
// 008508ff  56                   push esi
// 00850900  a10052b600           mov eax, dword ptr [0xb65200]
// 00850905  33c4                 xor eax, esp
// 00850907  50                   push eax
// 00850908  8d44240c             lea eax, [esp + 0xc]
// 0085090c  64a300000000         mov dword ptr fs:[0], eax
// 00850912  c744240800000000     mov dword ptr [esp + 8], 0
// 0085091a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085091e  50                   push eax
// 0085091f  8d4c2424             lea ecx, [esp + 0x24]
// 00850923  e808e00100           call 0x86e930
// 00850928  8bc8                 mov ecx, eax
// 0085092a  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00850932  e839edcdff           call 0x52f670
// 00850937  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0085093b  50                   push eax
// 0085093c  8bce                 mov ecx, esi
// 0085093e  ff15b8de9800         call dword ptr [0x98deb8]
// 00850944  8d4c2420             lea ecx, [esp + 0x20]
// 00850948  c744240801000000     mov dword ptr [esp + 8], 1
// 00850950  c644241400           mov byte ptr [esp + 0x14], 0
// 00850955  e816d70100           call 0x86e070
// 0085095a  8bc6                 mov eax, esi
// 0085095c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00850960  64890d00000000       mov dword ptr fs:[0], ecx
// 00850967  59                   pop ecx
// 00850968  5e                   pop esi
// 00850969  83c410               add esp, 0x10
// 0085096c  c20800               ret 8
// copied from an identical function in another client (function ?BstrToString@CXTPPropExchangeXMLNode@@AAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp