// roc 2008-06 006ae910  unit: CXTPPaintManager  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae910
//
// 006ae910  83ec10               sub esp, 0x10
// 006ae913  56                   push esi
// 006ae914  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006ae918  8bce                 mov ecx, esi
// 006ae91a  e871c6ffff           call 0x6aaf90
// 006ae91f  83f804               cmp eax, 4
// 006ae922  751d                 jne 0x6ae941
// 006ae924  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ae92a  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 006ae931  740e                 je 0x6ae941
// 006ae933  6a01                 push 1
// 006ae935  8d442408             lea eax, [esp + 8]
// 006ae939  50                   push eax
// 006ae93a  e8e1520100           call 0x6c3c20
// 006ae93f  eb11                 jmp 0x6ae952
// 006ae941  8b16                 mov edx, dword ptr [esi]
// 006ae943  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 006ae949  8d44240c             lea eax, [esp + 0xc]
// 006ae94d  50                   push eax
// 006ae94e  8bce                 mov ecx, esi
// 006ae950  ffd2                 call edx
// 006ae952  8b10                 mov edx, dword ptr [eax]
// 006ae954  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ae958  8b4004               mov eax, dword ptr [eax + 4]
// 006ae95b  894104               mov dword ptr [ecx + 4], eax
// 006ae95e  8911                 mov dword ptr [ecx], edx
// 006ae960  8bc1                 mov eax, ecx
// 006ae962  5e                   pop esi
// 006ae963  83c410               add esp, 0x10
// 006ae966  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?GetIconSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
