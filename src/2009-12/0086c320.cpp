// roc 2009-12 0086c320  unit: CSelectionCaption  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c320
//
// 0086c320  8b442404             mov eax, dword ptr [esp + 4]
// 0086c324  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0086c328  57                   push edi
// 0086c329  8bf9                 mov edi, ecx
// 0086c32b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086c32f  894770               mov dword ptr [edi + 0x70], eax
// 0086c332  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 0086c338  50                   push eax
// 0086c339  c6878000000001       mov byte ptr [edi + 0x80], 1
// 0086c340  894f74               mov dword ptr [edi + 0x74], ecx
// 0086c343  895778               mov dword ptr [edi + 0x78], edx
// 0086c346  ff1584cc9800         call dword ptr [0x98cc84]
// 0086c34c  85c0                 test eax, eax
// 0086c34e  7441                 je 0x86c391
// 0086c350  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 0086c356  8b4774               mov eax, dword ptr [edi + 0x74]
// 0086c359  8b9274010000         mov edx, dword ptr [edx + 0x174]
// 0086c35f  56                   push esi
// 0086c360  8db7dc000000         lea esi, [edi + 0xdc]
// 0086c366  50                   push eax
// 0086c367  8bce                 mov ecx, esi
// 0086c369  ffd2                 call edx
// 0086c36b  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0086c36e  8b06                 mov eax, dword ptr [esi]
// 0086c370  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0086c376  51                   push ecx
// 0086c377  8bce                 mov ecx, esi
// 0086c379  ffd2                 call edx
// 0086c37b  8b3e                 mov edi, dword ptr [esi]
// 0086c37d  6a15                 push 0x15
// 0086c37f  ff15d8ca9800         call dword ptr [0x98cad8]
// 0086c385  50                   push eax
// 0086c386  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 0086c38c  8bce                 mov ecx, esi
// 0086c38e  ffd0                 call eax
// 0086c390  5e                   pop esi
// 0086c391  5f                   pop edi
// 0086c392  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetCaptionColors@CXTCaption@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp