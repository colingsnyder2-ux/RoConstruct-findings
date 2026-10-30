// roc 2009-12 007fb4a0  unit: CXTPControlComboBoxList  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb4a0
//
// 007fb4a0  56                   push esi
// 007fb4a1  8bf1                 mov esi, ecx
// 007fb4a3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb4a6  e805aaffff           call 0x7f5eb0
// 007fb4ab  85c0                 test eax, eax
// 007fb4ad  7448                 je 0x7fb4f7
// 007fb4af  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007fb4b2  8d44240c             lea eax, [esp + 0xc]
// 007fb4b6  50                   push eax
// 007fb4b7  51                   push ecx
// 007fb4b8  ff1554cc9800         call dword ptr [0x98cc54]
// 007fb4be  8b4660               mov eax, dword ptr [esi + 0x60]
// 007fb4c1  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007fb4c7  8d54240c             lea edx, [esp + 0xc]
// 007fb4cb  52                   push edx
// 007fb4cc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007fb4cf  52                   push edx
// 007fb4d0  ff1534cc9800         call dword ptr [0x98cc34]
// 007fb4d6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fb4da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fb4de  8b542408             mov edx, dword ptr [esp + 8]
// 007fb4e2  50                   push eax
// 007fb4e3  8b4660               mov eax, dword ptr [esi + 0x60]
// 007fb4e6  51                   push ecx
// 007fb4e7  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007fb4ed  52                   push edx
// 007fb4ee  e8ddbe0000           call 0x8073d0
// 007fb4f3  5e                   pop esi
// 007fb4f4  c20c00               ret 0xc
// 007fb4f7  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb4fa  8b11                 mov edx, dword ptr [ecx]
// 007fb4fc  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007fb502  ffd0                 call eax
// 007fb504  8b10                 mov edx, dword ptr [eax]
// 007fb506  8bc8                 mov ecx, eax
// 007fb508  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 007fb50e  ffd0                 call eax
// 007fb510  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb513  8b11                 mov edx, dword ptr [ecx]
// 007fb515  8b4270               mov eax, dword ptr [edx + 0x70]
// 007fb518  6a01                 push 1
// 007fb51a  ffd0                 call eax
// 007fb51c  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fb520  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fb524  8b16                 mov edx, dword ptr [esi]
// 007fb526  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 007fb52c  50                   push eax
// 007fb52d  8b4660               mov eax, dword ptr [esi + 0x60]
// 007fb530  51                   push ecx
// 007fb531  50                   push eax
// 007fb532  8bce                 mov ecx, esi
// 007fb534  ffd2                 call edx
// 007fb536  85c0                 test eax, eax
// 007fb538  7507                 jne 0x7fb541
// 007fb53a  8bce                 mov ecx, esi
// 007fb53c  e8ef88ffff           call 0x7f3e30
// 007fb541  5e                   pop esi
// 007fb542  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPControlComboBoxEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp