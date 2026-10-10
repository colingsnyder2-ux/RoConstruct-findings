// roc 2008-06 007767a0  unit: CXTPPropertyGridPaintManager  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007767a0
//
// 007767a0  53                   push ebx
// 007767a1  56                   push esi
// 007767a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007767a6  8bd9                 mov ebx, ecx
// 007767a8  85f6                 test esi, esi
// 007767aa  750b                 jne 0x7767b7
// 007767ac  8b4374               mov eax, dword ptr [ebx + 0x74]
// 007767af  5e                   pop esi
// 007767b0  83c020               add eax, 0x20
// 007767b3  5b                   pop ebx
// 007767b4  c20800               ret 8
// 007767b7  57                   push edi
// 007767b8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007767bc  6a00                 push 0
// 007767be  57                   push edi
// 007767bf  8bce                 mov ecx, esi
// 007767c1  e87aaff9ff           call 0x711740
// 007767c6  85c0                 test eax, eax
// 007767c8  740b                 je 0x7767d5
// 007767ca  83c020               add eax, 0x20
// 007767cd  7406                 je 0x7767d5
// 007767cf  83780400             cmp dword ptr [eax + 4], 0
// 007767d3  7538                 jne 0x77680d
// 007767d5  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 007767dc  751d                 jne 0x7767fb
// 007767de  85ff                 test edi, edi
// 007767e0  7425                 je 0x776807
// 007767e2  8b4360               mov eax, dword ptr [ebx + 0x60]
// 007767e5  83b85001000000       cmp dword ptr [eax + 0x150], 0
// 007767ec  7419                 je 0x776807
// 007767ee  8b16                 mov edx, dword ptr [esi]
// 007767f0  8b4278               mov eax, dword ptr [edx + 0x78]
// 007767f3  8bce                 mov ecx, esi
// 007767f5  ffd0                 call eax
// 007767f7  85c0                 test eax, eax
// 007767f9  740c                 je 0x776807
// 007767fb  8b4374               mov eax, dword ptr [ebx + 0x74]
// 007767fe  5f                   pop edi
// 007767ff  5e                   pop esi
// 00776800  83c028               add eax, 0x28
// 00776803  5b                   pop ebx
// 00776804  c20800               ret 8
// 00776807  8b4374               mov eax, dword ptr [ebx + 0x74]
// 0077680a  83c020               add eax, 0x20
// 0077680d  5f                   pop edi
// 0077680e  5e                   pop esi
// 0077680f  5b                   pop ebx
// 00776810  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemFont@CXTPPropertyGridPaintManager@@UAEPAVCFont@@PAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
