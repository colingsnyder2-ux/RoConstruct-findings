// roc 2009-12 007f98b0  unit: CXTPControlComboBoxList  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f98b0
//
// 007f98b0  51                   push ecx
// 007f98b1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f98b5  56                   push esi
// 007f98b6  57                   push edi
// 007f98b7  8d442408             lea eax, [esp + 8]
// 007f98bb  8bf1                 mov esi, ecx
// 007f98bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f98c1  50                   push eax
// 007f98c2  51                   push ecx
// 007f98c3  52                   push edx
// 007f98c4  8bce                 mov ecx, esi
// 007f98c6  e8a592c2ff           call 0x422b70
// 007f98cb  8bc8                 mov ecx, eax
// 007f98cd  e88ecb1200           call 0x926460
// 007f98d2  837c240800           cmp dword ptr [esp + 8], 0
// 007f98d7  8bf8                 mov edi, eax
// 007f98d9  751d                 jne 0x7f98f8
// 007f98db  8b06                 mov eax, dword ptr [esi]
// 007f98dd  8b9010020000         mov edx, dword ptr [eax + 0x210]
// 007f98e3  8bce                 mov ecx, esi
// 007f98e5  ffd2                 call edx
// 007f98e7  3bc7                 cmp eax, edi
// 007f98e9  740d                 je 0x7f98f8
// 007f98eb  8b06                 mov eax, dword ptr [esi]
// 007f98ed  8b9020020000         mov edx, dword ptr [eax + 0x220]
// 007f98f3  57                   push edi
// 007f98f4  8bce                 mov ecx, esi
// 007f98f6  ffd2                 call edx
// 007f98f8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f98fc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f9900  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f9904  50                   push eax
// 007f9905  51                   push ecx
// 007f9906  52                   push edx
// 007f9907  8bce                 mov ecx, esi
// 007f9909  e802a60400           call 0x843f10
// 007f990e  5f                   pop edi
// 007f990f  5e                   pop esi
// 007f9910  59                   pop ecx
// 007f9911  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPControlComboBoxList@@IAEXIVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp