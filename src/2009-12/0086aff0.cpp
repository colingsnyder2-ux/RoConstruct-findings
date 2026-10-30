// roc 2009-12 0086aff0  unit: CXTPPropertyGridItemBool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086aff0
//
// 0086aff0  56                   push esi
// 0086aff1  8bf1                 mov esi, ecx
// 0086aff3  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0086affa  7439                 je 0x86b035
// 0086affc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086b000  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086b004  50                   push eax
// 0086b005  51                   push ecx
// 0086b006  8bce                 mov ecx, esi
// 0086b008  e823a5ffff           call 0x865530
// 0086b00d  85c0                 test eax, eax
// 0086b00f  7424                 je 0x86b035
// 0086b011  8b16                 mov edx, dword ptr [esi]
// 0086b013  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086b016  8bce                 mov ecx, esi
// 0086b018  ffd0                 call eax
// 0086b01a  85c0                 test eax, eax
// 0086b01c  7517                 jne 0x86b035
// 0086b01e  8b16                 mov edx, dword ptr [esi]
// 0086b020  8b82ac000000         mov eax, dword ptr [edx + 0xac]
// 0086b026  8bce                 mov ecx, esi
// 0086b028  ffd0                 call eax
// 0086b02a  8bce                 mov ecx, esi
// 0086b02c  e8dfb1ffff           call 0x866210
// 0086b031  5e                   pop esi
// 0086b032  c20c00               ret 0xc
// 0086b035  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086b039  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0086b03d  8b442408             mov eax, dword ptr [esp + 8]
// 0086b041  51                   push ecx
// 0086b042  52                   push edx
// 0086b043  50                   push eax
// 0086b044  8bce                 mov ecx, esi
// 0086b046  e8d5baffff           call 0x866b20
// 0086b04b  5e                   pop esi
// 0086b04c  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPPropertyGridItemBool@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp