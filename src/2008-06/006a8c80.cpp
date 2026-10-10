// roc 2008-06 006a8c80  unit: CXTPControlComboBoxList  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8c80
//
// 006a8c80  56                   push esi
// 006a8c81  8bf1                 mov esi, ecx
// 006a8c83  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006a8c86  e835250000           call 0x6ab1c0
// 006a8c8b  85c0                 test eax, eax
// 006a8c8d  7448                 je 0x6a8cd7
// 006a8c8f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a8c92  8d44240c             lea eax, [esp + 0xc]
// 006a8c96  50                   push eax
// 006a8c97  51                   push ecx
// 006a8c98  ff15802d8000         call dword ptr [0x802d80]
// 006a8c9e  8b4660               mov eax, dword ptr [esi + 0x60]
// 006a8ca1  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006a8ca7  8d54240c             lea edx, [esp + 0xc]
// 006a8cab  52                   push edx
// 006a8cac  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006a8caf  52                   push edx
// 006a8cb0  ff15a02d8000         call dword ptr [0x802da0]
// 006a8cb6  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a8cba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a8cbe  8b542408             mov edx, dword ptr [esp + 8]
// 006a8cc2  50                   push eax
// 006a8cc3  8b4660               mov eax, dword ptr [esi + 0x60]
// 006a8cc6  51                   push ecx
// 006a8cc7  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006a8ccd  52                   push edx
// 006a8cce  e82df00000           call 0x6b7d00
// 006a8cd3  5e                   pop esi
// 006a8cd4  c20c00               ret 0xc
// 006a8cd7  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006a8cda  8b11                 mov edx, dword ptr [ecx]
// 006a8cdc  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006a8ce2  ffd0                 call eax
// 006a8ce4  8b10                 mov edx, dword ptr [eax]
// 006a8ce6  8bc8                 mov ecx, eax
// 006a8ce8  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 006a8cee  ffd0                 call eax
// 006a8cf0  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006a8cf3  8b11                 mov edx, dword ptr [ecx]
// 006a8cf5  8b4270               mov eax, dword ptr [edx + 0x70]
// 006a8cf8  6a01                 push 1
// 006a8cfa  ffd0                 call eax
// 006a8cfc  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a8d00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a8d04  8b16                 mov edx, dword ptr [esi]
// 006a8d06  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 006a8d0c  50                   push eax
// 006a8d0d  8b4660               mov eax, dword ptr [esi + 0x60]
// 006a8d10  51                   push ecx
// 006a8d11  50                   push eax
// 006a8d12  8bce                 mov ecx, esi
// 006a8d14  ffd2                 call edx
// 006a8d16  85c0                 test eax, eax
// 006a8d18  7507                 jne 0x6a8d21
// 006a8d1a  8bce                 mov ecx, esi
// 006a8d1c  e8477fffff           call 0x6a0c68
// 006a8d21  5e                   pop esi
// 006a8d22  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnRButtonDown@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
