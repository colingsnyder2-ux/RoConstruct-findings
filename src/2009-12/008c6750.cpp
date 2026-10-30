// roc 2009-12 008c6750  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6750
//
// 008c6750  56                   push esi
// 008c6751  8bf1                 mov esi, ecx
// 008c6753  8b4634               mov eax, dword ptr [esi + 0x34]
// 008c6756  57                   push edi
// 008c6757  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c675b  89472c               mov dword ptr [edi + 0x2c], eax
// 008c675e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008c6761  8b91bc000000         mov edx, dword ptr [ecx + 0xbc]
// 008c6767  8d4e20               lea ecx, [esi + 0x20]
// 008c676a  895728               mov dword ptr [edi + 0x28], edx
// 008c676d  8b4108               mov eax, dword ptr [ecx + 8]
// 008c6770  57                   push edi
// 008c6771  50                   push eax
// 008c6772  e8f944faff           call 0x86ac70
// 008c6777  8bce                 mov ecx, esi
// 008c6779  e862ffffff           call 0x8c66e0
// 008c677e  8bc7                 mov eax, edi
// 008c6780  5f                   pop edi
// 008c6781  5e                   pop esi
// 008c6782  c20400               ret 4
// copied from an identical function in another client (function ?AddButton@CXTPPropertyGridInplaceButtons@@QAEPAVCXTPPropertyGridInplaceButton@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp