// roc 2009-12 008b6cc0  unit: CXTPDockingPanePaintManager  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6cc0
//
// 008b6cc0  6aff                 push -1
// 008b6cc2  6838339600           push 0x963338
// 008b6cc7  64a100000000         mov eax, dword ptr fs:[0]
// 008b6ccd  50                   push eax
// 008b6cce  83ec28               sub esp, 0x28
// 008b6cd1  53                   push ebx
// 008b6cd2  55                   push ebp
// 008b6cd3  56                   push esi
// 008b6cd4  57                   push edi
// 008b6cd5  a10052b600           mov eax, dword ptr [0xb65200]
// 008b6cda  33c4                 xor eax, esp
// 008b6cdc  50                   push eax
// 008b6cdd  8d44243c             lea eax, [esp + 0x3c]
// 008b6ce1  64a300000000         mov dword ptr fs:[0], eax
// 008b6ce7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008b6ceb  8b742450             mov esi, dword ptr [esp + 0x50]
// 008b6cef  8b01                 mov eax, dword ptr [ecx]
// 008b6cf1  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008b6cf5  8b5070               mov edx, dword ptr [eax + 0x70]
// 008b6cf8  8b1e                 mov ebx, dword ptr [esi]
// 008b6cfa  8b6e04               mov ebp, dword ptr [esi + 4]
// 008b6cfd  56                   push esi
// 008b6cfe  57                   push edi
// 008b6cff  ffd2                 call edx
// 008b6d01  8b07                 mov eax, dword ptr [edi]
// 008b6d03  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008b6d09  8bcf                 mov ecx, edi
// 008b6d0b  ffd2                 call edx
// 008b6d0d  85c0                 test eax, eax
// 008b6d0f  0f84b0000000         je 0x8b6dc5
// 008b6d15  837c245400           cmp dword ptr [esp + 0x54], 0
// 008b6d1a  0f848c000000         je 0x8b6dac
// 008b6d20  57                   push edi
// 008b6d21  8d4c242c             lea ecx, [esp + 0x2c]
// 008b6d25  e8acd9f3ff           call 0x7f46d6
// 008b6d2a  8b4e04               mov ecx, dword ptr [esi + 4]
// 008b6d2d  8b06                 mov eax, dword ptr [esi]
// 008b6d2f  8b5608               mov edx, dword ptr [esi + 8]
// 008b6d32  f7dd                 neg ebp
// 008b6d34  55                   push ebp
// 008b6d35  894c2420             mov dword ptr [esp + 0x20], ecx
// 008b6d39  f7db                 neg ebx
// 008b6d3b  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b6d3f  8b460c               mov eax, dword ptr [esi + 0xc]
// 008b6d42  53                   push ebx
// 008b6d43  8d4c2420             lea ecx, [esp + 0x20]
// 008b6d47  51                   push ecx
// 008b6d48  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008b6d50  8954242c             mov dword ptr [esp + 0x2c], edx
// 008b6d54  89442430             mov dword ptr [esp + 0x30], eax
// 008b6d58  ff156ccc9800         call dword ptr [0x98cc6c]
// 008b6d5e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b6d62  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 008b6d68  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b6d6c  8b19                 mov ebx, dword ptr [ecx]
// 008b6d6e  83ec10               sub esp, 0x10
// 008b6d71  8bc4                 mov eax, esp
// 008b6d73  8928                 mov dword ptr [eax], ebp
// 008b6d75  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008b6d79  896804               mov dword ptr [eax + 4], ebp
// 008b6d7c  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 008b6d80  896808               mov dword ptr [eax + 8], ebp
// 008b6d83  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008b6d87  89680c               mov dword ptr [eax + 0xc], ebp
// 008b6d8a  8d442438             lea eax, [esp + 0x38]
// 008b6d8e  8d97a8000000         lea edx, [edi + 0xa8]
// 008b6d94  50                   push eax
// 008b6d95  52                   push edx
// 008b6d96  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008b6d99  ffd2                 call edx
// 008b6d9b  8d4c2428             lea ecx, [esp + 0x28]
// 008b6d9f  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 008b6da7  e824d9f3ff           call 0x7f46d0
// 008b6dac  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b6db0  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 008b6db6  8b11                 mov edx, dword ptr [ecx]
// 008b6db8  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008b6dbb  81c7a8000000         add edi, 0xa8
// 008b6dc1  56                   push esi
// 008b6dc2  57                   push edi
// 008b6dc3  ffd0                 call eax
// 008b6dc5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008b6dc9  64890d00000000       mov dword ptr fs:[0], ecx
// 008b6dd0  59                   pop ecx
// 008b6dd1  5f                   pop edi
// 008b6dd2  5e                   pop esi
// 008b6dd3  5d                   pop ebp
// 008b6dd4  5b                   pop ebx
// 008b6dd5  83c434               add esp, 0x34
// 008b6dd8  c20c00               ret 0xc
// copied from an identical function in another client (function ?AdjustClientRect@CXTPDockingPanePaintManager@@UAEXPAVCXTPDockingPaneTabbedContainer@@AAVCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPanePaintManager.cpp