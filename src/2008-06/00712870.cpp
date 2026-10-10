// roc 2008-06 00712870  unit: CXTPPropertyGridItem  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712870
//
// 00712870  83ec10               sub esp, 0x10
// 00712873  53                   push ebx
// 00712874  56                   push esi
// 00712875  8bf1                 mov esi, ecx
// 00712877  8b06                 mov eax, dword ptr [esi]
// 00712879  8b5058               mov edx, dword ptr [eax + 0x58]
// 0071287c  57                   push edi
// 0071287d  ffd2                 call edx
// 0071287f  85c0                 test eax, eax
// 00712881  0f8591000000         jne 0x712918
// 00712887  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0071288b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00712891  57                   push edi
// 00712892  6a05                 push 5
// 00712894  e867180000           call 0x714100
// 00712899  83f801               cmp eax, 1
// 0071289c  747a                 je 0x712918
// 0071289e  837f3065             cmp dword ptr [edi + 0x30], 0x65
// 007128a2  7574                 jne 0x712918
// 007128a4  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 007128aa  83782800             cmp dword ptr [eax + 0x28], 0
// 007128ae  7468                 je 0x712918
// 007128b0  8b16                 mov edx, dword ptr [esi]
// 007128b2  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 007128b8  8bce                 mov ecx, esi
// 007128ba  ffd0                 call eax
// 007128bc  85c0                 test eax, eax
// 007128be  7458                 je 0x712918
// 007128c0  8b16                 mov edx, dword ptr [esi]
// 007128c2  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 007128c8  8bce                 mov ecx, esi
// 007128ca  ffd0                 call eax
// 007128cc  8bd8                 mov ebx, eax
// 007128ce  8b3b                 mov edi, dword ptr [ebx]
// 007128d0  8d4c240c             lea ecx, [esp + 0xc]
// 007128d4  51                   push ecx
// 007128d5  8bce                 mov ecx, esi
// 007128d7  81c760010000         add edi, 0x160
// 007128dd  e80ef3ffff           call 0x711bf0
// 007128e2  8b10                 mov edx, dword ptr [eax]
// 007128e4  83ec10               sub esp, 0x10
// 007128e7  8bcc                 mov ecx, esp
// 007128e9  8911                 mov dword ptr [ecx], edx
// 007128eb  8b5004               mov edx, dword ptr [eax + 4]
// 007128ee  895104               mov dword ptr [ecx + 4], edx
// 007128f1  8b5008               mov edx, dword ptr [eax + 8]
// 007128f4  8b400c               mov eax, dword ptr [eax + 0xc]
// 007128f7  895108               mov dword ptr [ecx + 8], edx
// 007128fa  8b17                 mov edx, dword ptr [edi]
// 007128fc  89410c               mov dword ptr [ecx + 0xc], eax
// 007128ff  56                   push esi
// 00712900  8bcb                 mov ecx, ebx
// 00712902  ffd2                 call edx
// 00712904  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0071290a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0071290d  6a00                 push 0
// 0071290f  6a00                 push 0
// 00712911  51                   push ecx
// 00712912  ff15182e8000         call dword ptr [0x802e18]
// 00712918  5f                   pop edi
// 00712919  5e                   pop esi
// 0071291a  5b                   pop ebx
// 0071291b  83c410               add esp, 0x10
// 0071291e  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnInplaceButtonDown@CXTPPropertyGridItem@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
