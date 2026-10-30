// roc 2009-12 008ef900  unit: CXTPRibbonTabPopupToolBar  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef900
//
// 008ef900  6aff                 push -1
// 008ef902  68a8689600           push 0x9668a8
// 008ef907  64a100000000         mov eax, dword ptr fs:[0]
// 008ef90d  50                   push eax
// 008ef90e  51                   push ecx
// 008ef90f  53                   push ebx
// 008ef910  56                   push esi
// 008ef911  57                   push edi
// 008ef912  a10052b600           mov eax, dword ptr [0xb65200]
// 008ef917  33c4                 xor eax, esp
// 008ef919  50                   push eax
// 008ef91a  8d442414             lea eax, [esp + 0x14]
// 008ef91e  64a300000000         mov dword ptr fs:[0], eax
// 008ef924  8bf1                 mov esi, ecx
// 008ef926  89742410             mov dword ptr [esp + 0x10], esi
// 008ef92a  e80156f5ff           call 0x844f30
// 008ef92f  8d965c020000         lea edx, [esi + 0x25c]
// 008ef935  33db                 xor ebx, ebx
// 008ef937  8bca                 mov ecx, edx
// 008ef939  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008ef93d  e8def0ffff           call 0x8eea20
// 008ef942  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ef946  c7069ce0a000         mov dword ptr [esi], 0xa0e09c
// 008ef94c  c746548ce0a000       mov dword ptr [esi + 0x54], 0xa0e08c
// 008ef953  c7465c2ce0a000       mov dword ptr [esi + 0x5c], 0xa0e02c
// 008ef95a  c70218e0a000         mov dword ptr [edx], 0xa0e018
// 008ef960  3bfb                 cmp edi, ebx
// 008ef962  7517                 jne 0x8ef97b
// 008ef964  899e78020000         mov dword ptr [esi + 0x278], ebx
// 008ef96a  899e74020000         mov dword ptr [esi + 0x274], ebx
// 008ef970  899e7c020000         mov dword ptr [esi + 0x27c], ebx
// 008ef976  e9a3000000           jmp 0x8efa1e
// 008ef97b  89b664020000         mov dword ptr [esi + 0x264], esi
// 008ef981  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008ef984  898678020000         mov dword ptr [esi + 0x278], eax
// 008ef98a  8b17                 mov edx, dword ptr [edi]
// 008ef98c  8b02                 mov eax, dword ptr [edx]
// 008ef98e  8bcf                 mov ecx, edi
// 008ef990  ffd0                 call eax
// 008ef992  8bc8                 mov ecx, eax
// 008ef994  e8c948f0ff           call 0x7f4262
// 008ef999  898674020000         mov dword ptr [esi + 0x274], eax
// 008ef99f  897058               mov dword ptr [eax + 0x58], esi
// 008ef9a2  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008ef9a8  8b9678020000         mov edx, dword ptr [esi + 0x278]
// 008ef9ae  89515c               mov dword ptr [ecx + 0x5c], edx
// 008ef9b1  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008ef9b7  89be7c020000         mov dword ptr [esi + 0x27c], edi
// 008ef9bd  8b01                 mov eax, dword ptr [ecx]
// 008ef9bf  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008ef9c2  ffd2                 call edx
// 008ef9c4  8b8e74020000         mov ecx, dword ptr [esi + 0x274]
// 008ef9ca  8b01                 mov eax, dword ptr [ecx]
// 008ef9cc  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008ef9cf  57                   push edi
// 008ef9d0  ffd2                 call edx
// 008ef9d2  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008ef9d8  e89352faff           call 0x894c70
// 008ef9dd  8b8060060000         mov eax, dword ptr [eax + 0x660]
// 008ef9e3  40                   inc eax
// 008ef9e4  50                   push eax
// 008ef9e5  6a03                 push 3
// 008ef9e7  6a02                 push 2
// 008ef9e9  6a02                 push 2
// 008ef9eb  8d8e00020000         lea ecx, [esi + 0x200]
// 008ef9f1  51                   push ecx
// 008ef9f2  ff1538ca9800         call dword ptr [0x98ca38]
// 008ef9f8  53                   push ebx
// 008ef9f9  6800002000           push 0x200000
// 008ef9fe  8bce                 mov ecx, esi
// 008efa00  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 008efa06  e8454df1ff           call 0x804750
// 008efa0b  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008efa11  e84a49f1ff           call 0x804360
// 008efa16  50                   push eax
// 008efa17  8bce                 mov ecx, esi
// 008efa19  e82249f1ff           call 0x804340
// 008efa1e  8bc6                 mov eax, esi
// 008efa20  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008efa24  64890d00000000       mov dword ptr fs:[0], ecx
// 008efa2b  59                   pop ecx
// 008efa2c  5f                   pop edi
// 008efa2d  5e                   pop esi
// 008efa2e  5b                   pop ebx
// 008efa2f  83c410               add esp, 0x10
// 008efa32  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPRibbonGroupPopupToolBar@@QAE@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonPopups.cpp