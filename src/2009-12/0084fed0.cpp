// roc 2009-12 0084fed0  unit: CXTPPropertyGrid  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fed0
//
// 0084fed0  6aff                 push -1
// 0084fed2  681cd89500           push 0x95d81c
// 0084fed7  64a100000000         mov eax, dword ptr fs:[0]
// 0084fedd  50                   push eax
// 0084fede  51                   push ecx
// 0084fedf  56                   push esi
// 0084fee0  57                   push edi
// 0084fee1  a10052b600           mov eax, dword ptr [0xb65200]
// 0084fee6  33c4                 xor eax, esp
// 0084fee8  50                   push eax
// 0084fee9  8d442410             lea eax, [esp + 0x10]
// 0084feed  64a300000000         mov dword ptr fs:[0], eax
// 0084fef3  8bf1                 mov esi, ecx
// 0084fef5  8974240c             mov dword ptr [esp + 0xc], esi
// 0084fef9  8d7e08               lea edi, [esi + 8]
// 0084fefc  8bcf                 mov ecx, edi
// 0084fefe  c70644c39f00         mov dword ptr [esi], 0x9fc344
// 0084ff04  ff1574de9800         call dword ptr [0x98de74]
// 0084ff0a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084ff0e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084ff12  51                   push ecx
// 0084ff13  8bcf                 mov ecx, edi
// 0084ff15  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0084ff1d  894604               mov dword ptr [esi + 4], eax
// 0084ff20  ff155cde9800         call dword ptr [0x98de5c]
// 0084ff26  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0084ff2d  8bc6                 mov eax, esi
// 0084ff2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084ff33  64890d00000000       mov dword ptr fs:[0], ecx
// 0084ff3a  59                   pop ecx
// 0084ff3b  5f                   pop edi
// 0084ff3c  5e                   pop esi
// 0084ff3d  83c410               add esp, 0x10
// 0084ff40  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPPropExchangeEnumerator@@QAE@PAVCXTPPropExchange@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp