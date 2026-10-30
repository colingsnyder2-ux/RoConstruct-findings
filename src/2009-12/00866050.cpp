// roc 2009-12 00866050  unit: CXTPPropertyGridItem  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866050
//
// 00866050  83ec10               sub esp, 0x10
// 00866053  53                   push ebx
// 00866054  56                   push esi
// 00866055  8bf1                 mov esi, ecx
// 00866057  8b06                 mov eax, dword ptr [esi]
// 00866059  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086605c  57                   push edi
// 0086605d  ffd2                 call edx
// 0086605f  85c0                 test eax, eax
// 00866061  0f8591000000         jne 0x8660f8
// 00866067  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0086606b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00866071  57                   push edi
// 00866072  6a05                 push 5
// 00866074  e897180000           call 0x867910
// 00866079  83f801               cmp eax, 1
// 0086607c  747a                 je 0x8660f8
// 0086607e  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 00866082  7574                 jne 0x8660f8
// 00866084  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0086608a  83782800             cmp dword ptr [eax + 0x28], 0
// 0086608e  7468                 je 0x8660f8
// 00866090  8b16                 mov edx, dword ptr [esi]
// 00866092  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 00866098  8bce                 mov ecx, esi
// 0086609a  ffd0                 call eax
// 0086609c  85c0                 test eax, eax
// 0086609e  7458                 je 0x8660f8
// 008660a0  8b16                 mov edx, dword ptr [esi]
// 008660a2  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 008660a8  8bce                 mov ecx, esi
// 008660aa  ffd0                 call eax
// 008660ac  8bd8                 mov ebx, eax
// 008660ae  8b3b                 mov edi, dword ptr [ebx]
// 008660b0  8d4c240c             lea ecx, [esp + 0xc]
// 008660b4  51                   push ecx
// 008660b5  8bce                 mov ecx, esi
// 008660b7  81c760010000         add edi, 0x160
// 008660bd  e82ef3ffff           call 0x8653f0
// 008660c2  8b10                 mov edx, dword ptr [eax]
// 008660c4  83ec10               sub esp, 0x10
// 008660c7  8bcc                 mov ecx, esp
// 008660c9  8911                 mov dword ptr [ecx], edx
// 008660cb  8b5004               mov edx, dword ptr [eax + 4]
// 008660ce  895104               mov dword ptr [ecx + 4], edx
// 008660d1  8b5008               mov edx, dword ptr [eax + 8]
// 008660d4  8b400c               mov eax, dword ptr [eax + 0xc]
// 008660d7  895108               mov dword ptr [ecx + 8], edx
// 008660da  8b17                 mov edx, dword ptr [edi]
// 008660dc  89410c               mov dword ptr [ecx + 0xc], eax
// 008660df  56                   push esi
// 008660e0  8bcb                 mov ecx, ebx
// 008660e2  ffd2                 call edx
// 008660e4  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 008660ea  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008660ed  6a00                 push 0
// 008660ef  6a00                 push 0
// 008660f1  51                   push ecx
// 008660f2  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008660f8  5f                   pop edi
// 008660f9  5e                   pop esi
// 008660fa  5b                   pop ebx
// 008660fb  83c410               add esp, 0x10
// 008660fe  c20400               ret 4
// copied from an identical function in another client (function ?OnInplaceButtonDown@CXTPPropertyGridItem@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp