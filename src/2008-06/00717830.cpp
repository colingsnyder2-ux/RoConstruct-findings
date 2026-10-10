// roc 2008-06 00717830  unit: CXTPPropertyGridItemBool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717830
//
// 00717830  56                   push esi
// 00717831  8bf1                 mov esi, ecx
// 00717833  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0071783a  7439                 je 0x717875
// 0071783c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00717840  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00717844  50                   push eax
// 00717845  51                   push ecx
// 00717846  8bce                 mov ecx, esi
// 00717848  e8e3a4ffff           call 0x711d30
// 0071784d  85c0                 test eax, eax
// 0071784f  7424                 je 0x717875
// 00717851  8b16                 mov edx, dword ptr [esi]
// 00717853  8b4258               mov eax, dword ptr [edx + 0x58]
// 00717856  8bce                 mov ecx, esi
// 00717858  ffd0                 call eax
// 0071785a  85c0                 test eax, eax
// 0071785c  7517                 jne 0x717875
// 0071785e  8b16                 mov edx, dword ptr [esi]
// 00717860  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 00717866  8bce                 mov ecx, esi
// 00717868  ffd0                 call eax
// 0071786a  8bce                 mov ecx, esi
// 0071786c  e8bfb1ffff           call 0x712a30
// 00717871  5e                   pop esi
// 00717872  c20c00               ret 0xc
// 00717875  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00717879  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071787d  8b442408             mov eax, dword ptr [esp + 8]
// 00717881  51                   push ecx
// 00717882  52                   push edx
// 00717883  50                   push eax
// 00717884  8bce                 mov ecx, esi
// 00717886  e8b5baffff           call 0x713340
// 0071788b  5e                   pop esi
// 0071788c  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?OnLButtonDblClk@CXTPPropertyGridItemBool@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
