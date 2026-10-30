// from server: 100% by auto
// roc 2008-06 006dd120  unit: CRobloxTreeCtrl  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd120
//
// 006dd120  837c240800           cmp dword ptr [esp + 8], 0
// 006dd125  56                   push esi
// 006dd126  57                   push edi
// 006dd127  8bf1                 mov esi, ecx
// 006dd129  0f8491000000         je 0x6dd1c0
// 006dd12f  53                   push ebx
// 006dd130  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006dd134  f6c304               test bl, 4
// 006dd137  744a                 je 0x6dd183
// 006dd139  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006dd13d  7519                 jne 0x6dd158
// 006dd13f  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd142  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dd145  6a00                 push 0
// 006dd147  6a09                 push 9
// 006dd149  680a110000           push 0x110a
// 006dd14e  50                   push eax
// 006dd14f  ff15142e8000         call dword ptr [0x802e14]
// 006dd155  89460c               mov dword ptr [esi + 0xc], eax
// 006dd158  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006dd15c  6a01                 push 1
// 006dd15e  6a01                 push 1
// 006dd160  57                   push edi
// 006dd161  8bce                 mov ecx, esi
// 006dd163  e898f8ffff           call 0x6dca00
// 006dd168  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006dd16b  c1eb03               shr ebx, 3
// 006dd16e  f7d3                 not ebx
// 006dd170  83e301               and ebx, 1
// 006dd173  53                   push ebx
// 006dd174  57                   push edi
// 006dd175  51                   push ecx
// 006dd176  8bce                 mov ecx, esi
// 006dd178  e853feffff           call 0x6dcfd0
// 006dd17d  5b                   pop ebx
// 006dd17e  5f                   pop edi
// 006dd17f  5e                   pop esi
// 006dd180  c20c00               ret 0xc
// 006dd183  f6c308               test bl, 8
// 006dd186  752b                 jne 0x6dd1b3
// 006dd188  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006dd18c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd18f  6a02                 push 2
// 006dd191  57                   push edi
// 006dd192  e885f10d00           call 0x7bc31c
// 006dd197  a802                 test al, 2
// 006dd199  750c                 jne 0x6dd1a7
// 006dd19b  8b16                 mov edx, dword ptr [esi]
// 006dd19d  8b4250               mov eax, dword ptr [edx + 0x50]
// 006dd1a0  57                   push edi
// 006dd1a1  6a00                 push 0
// 006dd1a3  8bce                 mov ecx, esi
// 006dd1a5  ffd0                 call eax
// 006dd1a7  6a03                 push 3
// 006dd1a9  6a03                 push 3
// 006dd1ab  57                   push edi
// 006dd1ac  8bce                 mov ecx, esi
// 006dd1ae  e84df8ffff           call 0x6dca00
// 006dd1b3  5b                   pop ebx
// 006dd1b4  5f                   pop edi
// 006dd1b5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006dd1bc  5e                   pop esi
// 006dd1bd  c20c00               ret 0xc
// 006dd1c0  8a442414             mov al, byte ptr [esp + 0x14]
// 006dd1c4  a80c                 test al, 0xc
// 006dd1c6  7410                 je 0x6dd1d8
// 006dd1c8  a804                 test al, 4
// 006dd1ca  75b2                 jne 0x6dd17e
// 006dd1cc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dd1d0  5f                   pop edi
// 006dd1d1  894e0c               mov dword ptr [esi + 0xc], ecx
// 006dd1d4  5e                   pop esi
// 006dd1d5  c20c00               ret 0xc
// 006dd1d8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006dd1dc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd1df  6a02                 push 2
// 006dd1e1  57                   push edi
// 006dd1e2  e835f10d00           call 0x7bc31c
// 006dd1e7  a802                 test al, 2
// 006dd1e9  750c                 jne 0x6dd1f7
// 006dd1eb  8b16                 mov edx, dword ptr [esi]
// 006dd1ed  8b4250               mov eax, dword ptr [edx + 0x50]
// 006dd1f0  57                   push edi
// 006dd1f1  6a00                 push 0
// 006dd1f3  8bce                 mov ecx, esi
// 006dd1f5  ffd0                 call eax
// 006dd1f7  6a03                 push 3
// 006dd1f9  6a03                 push 3
// 006dd1fb  57                   push edi
// 006dd1fc  8bce                 mov ecx, esi
// 006dd1fe  e8fdf7ffff           call 0x6dca00
// 006dd203  5f                   pop edi
// 006dd204  5e                   pop esi
// 006dd205  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoPreSelection@CXTTreeBase@@MAEXPAU_TREEITEM@@HI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
