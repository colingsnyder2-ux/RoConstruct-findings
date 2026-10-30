// roc 2009-12 008c9600  unit: CXTPPropertyGridPaintManager  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9600
//
// 008c9600  56                   push esi
// 008c9601  8b742408             mov esi, dword ptr [esp + 8]
// 008c9605  57                   push edi
// 008c9606  8bf9                 mov edi, ecx
// 008c9608  85f6                 test esi, esi
// 008c960a  7454                 je 0x8c9660
// 008c960c  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c9610  6a00                 push 0
// 008c9612  50                   push eax
// 008c9613  8bce                 mov ecx, esi
// 008c9615  e826b9f9ff           call 0x864f40
// 008c961a  85c0                 test eax, eax
// 008c961c  741c                 je 0x8c963a
// 008c961e  837860ff             cmp dword ptr [eax + 0x60], -1
// 008c9622  7506                 jne 0x8c962a
// 008c9624  83785cff             cmp dword ptr [eax + 0x5c], -1
// 008c9628  7410                 je 0x8c963a
// 008c962a  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008c962d  83f9ff               cmp ecx, -1
// 008c9630  7544                 jne 0x8c9676
// 008c9632  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008c9635  5f                   pop edi
// 008c9636  5e                   pop esi
// 008c9637  c20800               ret 8
// 008c963a  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008c9641  7408                 je 0x8c964b
// 008c9643  8b4774               mov eax, dword ptr [edi + 0x74]
// 008c9646  83c064               add eax, 0x64
// 008c9649  eb1b                 jmp 0x8c9666
// 008c964b  8b16                 mov edx, dword ptr [esi]
// 008c964d  8b4258               mov eax, dword ptr [edx + 0x58]
// 008c9650  8bce                 mov ecx, esi
// 008c9652  ffd0                 call eax
// 008c9654  85c0                 test eax, eax
// 008c9656  7408                 je 0x8c9660
// 008c9658  8b4774               mov eax, dword ptr [edi + 0x74]
// 008c965b  83c07c               add eax, 0x7c
// 008c965e  eb06                 jmp 0x8c9666
// 008c9660  8b4774               mov eax, dword ptr [edi + 0x74]
// 008c9663  83c058               add eax, 0x58
// 008c9666  8b4808               mov ecx, dword ptr [eax + 8]
// 008c9669  83f9ff               cmp ecx, -1
// 008c966c  7508                 jne 0x8c9676
// 008c966e  8b4004               mov eax, dword ptr [eax + 4]
// 008c9671  5f                   pop edi
// 008c9672  5e                   pop esi
// 008c9673  c20800               ret 8
// 008c9676  5f                   pop edi
// 008c9677  8bc1                 mov eax, ecx
// 008c9679  5e                   pop esi
// 008c967a  c20800               ret 8
// copied from an identical function in another client (function ?GetItemTextColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp