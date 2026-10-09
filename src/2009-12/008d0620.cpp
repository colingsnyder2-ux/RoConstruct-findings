// roc 2009-12 008d0620  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0620
//
// 008d0620  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d0624  56                   push esi
// 008d0625  6a00                 push 0
// 008d0627  6a00                 push 0
// 008d0629  8bf1                 mov esi, ecx
// 008d062b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d062f  50                   push eax
// 008d0630  51                   push ecx
// 008d0631  8bce                 mov ecx, esi
// 008d0633  e838f3ffff           call 0x8cf970
// 008d0638  85c0                 test eax, eax
// 008d063a  7421                 je 0x8d065d
// 008d063c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d0640  8b10                 mov edx, dword ptr [eax]
// 008d0642  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d0645  51                   push ecx
// 008d0646  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d064a  51                   push ecx
// 008d064b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d064f  51                   push ecx
// 008d0650  8bc8                 mov ecx, eax
// 008d0652  ffd2                 call edx
// 008d0654  b801000000           mov eax, 1
// 008d0659  5e                   pop esi
// 008d065a  c21000               ret 0x10
// 008d065d  837c241400           cmp dword ptr [esp + 0x14], 0
// 008d0662  7406                 je 0x8d066a
// 008d0664  33c0                 xor eax, eax
// 008d0666  5e                   pop esi
// 008d0667  c21000               ret 0x10
// 008d066a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d066e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d0672  57                   push edi
// 008d0673  50                   push eax
// 008d0674  51                   push ecx
// 008d0675  8bce                 mov ecx, esi
// 008d0677  e814f0ffff           call 0x8cf690
// 008d067c  8bf8                 mov edi, eax
// 008d067e  85ff                 test edi, edi
// 008d0680  0f8484000000         je 0x8d070a
// 008d0686  8b16                 mov edx, dword ptr [esi]
// 008d0688  8b4264               mov eax, dword ptr [edx + 0x64]
// 008d068b  57                   push edi
// 008d068c  8bce                 mov ecx, esi
// 008d068e  ffd0                 call eax
// 008d0690  85c0                 test eax, eax
// 008d0692  7476                 je 0x8d070a
// 008d0694  8b16                 mov edx, dword ptr [esi]
// 008d0696  8b4238               mov eax, dword ptr [edx + 0x38]
// 008d0699  8bce                 mov ecx, esi
// 008d069b  ffd0                 call eax
// 008d069d  85c0                 test eax, eax
// 008d069f  7423                 je 0x8d06c4
// 008d06a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d06a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d06a9  8b16                 mov edx, dword ptr [esi]
// 008d06ab  8b5268               mov edx, dword ptr [edx + 0x68]
// 008d06ae  57                   push edi
// 008d06af  50                   push eax
// 008d06b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d06b4  51                   push ecx
// 008d06b5  50                   push eax
// 008d06b6  8bce                 mov ecx, esi
// 008d06b8  ffd2                 call edx
// 008d06ba  5f                   pop edi
// 008d06bb  b801000000           mov eax, 1
// 008d06c0  5e                   pop esi
// 008d06c1  c21000               ret 0x10
// 008d06c4  8b06                 mov eax, dword ptr [esi]
// 008d06c6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d06c9  8bce                 mov ecx, esi
// 008d06cb  ffd2                 call edx
// 008d06cd  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 008d06d4  57                   push edi
// 008d06d5  7413                 je 0x8d06ea
// 008d06d7  8b06                 mov eax, dword ptr [esi]
// 008d06d9  8b5060               mov edx, dword ptr [eax + 0x60]
// 008d06dc  8bce                 mov ecx, esi
// 008d06de  ffd2                 call edx
// 008d06e0  5f                   pop edi
// 008d06e1  b801000000           mov eax, 1
// 008d06e6  5e                   pop esi
// 008d06e7  c21000               ret 0x10
// 008d06ea  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d06ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d06f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d06f6  50                   push eax
// 008d06f7  51                   push ecx
// 008d06f8  52                   push edx
// 008d06f9  8bce                 mov ecx, esi
// 008d06fb  e8f0faffff           call 0x8d01f0
// 008d0700  5f                   pop edi
// 008d0701  b801000000           mov eax, 1
// 008d0706  5e                   pop esi
// 008d0707  c21000               ret 0x10
// 008d070a  5f                   pop edi
// 008d070b  33c0                 xor eax, eax
// 008d070d  5e                   pop esi
// 008d070e  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
