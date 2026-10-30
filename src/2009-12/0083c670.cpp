// roc 2009-12 0083c670  unit: CXTPAccessible  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c670
//
// 0083c670  6aff                 push -1
// 0083c672  686cc79500           push 0x95c76c
// 0083c677  64a100000000         mov eax, dword ptr fs:[0]
// 0083c67d  50                   push eax
// 0083c67e  51                   push ecx
// 0083c67f  56                   push esi
// 0083c680  a10052b600           mov eax, dword ptr [0xb65200]
// 0083c685  33c4                 xor eax, esp
// 0083c687  50                   push eax
// 0083c688  8d44240c             lea eax, [esp + 0xc]
// 0083c68c  64a300000000         mov dword ptr fs:[0], eax
// 0083c692  8bf1                 mov esi, ecx
// 0083c694  89742408             mov dword ptr [esp + 8], esi
// 0083c698  8d4e04               lea ecx, [esi + 4]
// 0083c69b  c70650839f00         mov dword ptr [esi], 0x9f8350
// 0083c6a1  ff1574de9800         call dword ptr [0x98de74]
// 0083c6a7  33c0                 xor eax, eax
// 0083c6a9  894608               mov dword ptr [esi + 8], eax
// 0083c6ac  89460c               mov dword ptr [esi + 0xc], eax
// 0083c6af  894610               mov dword ptr [esi + 0x10], eax
// 0083c6b2  894614               mov dword ptr [esi + 0x14], eax
// 0083c6b5  894618               mov dword ptr [esi + 0x18], eax
// 0083c6b8  89461c               mov dword ptr [esi + 0x1c], eax
// 0083c6bb  89442414             mov dword ptr [esp + 0x14], eax
// 0083c6bf  894620               mov dword ptr [esi + 0x20], eax
// 0083c6c2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083c6c6  50                   push eax
// 0083c6c7  8bce                 mov ecx, esi
// 0083c6c9  e872feffff           call 0x83c540
// 0083c6ce  8bc6                 mov eax, esi
// 0083c6d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083c6d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0083c6db  59                   pop ecx
// 0083c6dc  5e                   pop esi
// 0083c6dd  83c410               add esp, 0x10
// 0083c6e0  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPModuleHandle@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp