// roc 2009-06 007f5a50  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5a50
//
// 007f5a50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f5a54  56                   push esi
// 007f5a55  6a00                 push 0
// 007f5a57  6a00                 push 0
// 007f5a59  8bf1                 mov esi, ecx
// 007f5a5b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f5a5f  50                   push eax
// 007f5a60  51                   push ecx
// 007f5a61  8bce                 mov ecx, esi
// 007f5a63  e858f3ffff           call 0x7f4dc0
// 007f5a68  85c0                 test eax, eax
// 007f5a6a  7421                 je 0x7f5a8d
// 007f5a6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f5a70  8b10                 mov edx, dword ptr [eax]
// 007f5a72  8b520c               mov edx, dword ptr [edx + 0xc]
// 007f5a75  51                   push ecx
// 007f5a76  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f5a7a  51                   push ecx
// 007f5a7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f5a7f  51                   push ecx
// 007f5a80  8bc8                 mov ecx, eax
// 007f5a82  ffd2                 call edx
// 007f5a84  b801000000           mov eax, 1
// 007f5a89  5e                   pop esi
// 007f5a8a  c21000               ret 0x10
// 007f5a8d  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f5a92  7406                 je 0x7f5a9a
// 007f5a94  33c0                 xor eax, eax
// 007f5a96  5e                   pop esi
// 007f5a97  c21000               ret 0x10
// 007f5a9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f5a9e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f5aa2  57                   push edi
// 007f5aa3  50                   push eax
// 007f5aa4  51                   push ecx
// 007f5aa5  8bce                 mov ecx, esi
// 007f5aa7  e834f0ffff           call 0x7f4ae0
// 007f5aac  8bf8                 mov edi, eax
// 007f5aae  85ff                 test edi, edi
// 007f5ab0  0f8484000000         je 0x7f5b3a
// 007f5ab6  8b16                 mov edx, dword ptr [esi]
// 007f5ab8  8b4264               mov eax, dword ptr [edx + 0x64]
// 007f5abb  57                   push edi
// 007f5abc  8bce                 mov ecx, esi
// 007f5abe  ffd0                 call eax
// 007f5ac0  85c0                 test eax, eax
// 007f5ac2  7476                 je 0x7f5b3a
// 007f5ac4  8b16                 mov edx, dword ptr [esi]
// 007f5ac6  8b4238               mov eax, dword ptr [edx + 0x38]
// 007f5ac9  8bce                 mov ecx, esi
// 007f5acb  ffd0                 call eax
// 007f5acd  85c0                 test eax, eax
// 007f5acf  7423                 je 0x7f5af4
// 007f5ad1  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f5ad5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f5ad9  8b16                 mov edx, dword ptr [esi]
// 007f5adb  8b5268               mov edx, dword ptr [edx + 0x68]
// 007f5ade  57                   push edi
// 007f5adf  50                   push eax
// 007f5ae0  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f5ae4  51                   push ecx
// 007f5ae5  50                   push eax
// 007f5ae6  8bce                 mov ecx, esi
// 007f5ae8  ffd2                 call edx
// 007f5aea  5f                   pop edi
// 007f5aeb  b801000000           mov eax, 1
// 007f5af0  5e                   pop esi
// 007f5af1  c21000               ret 0x10
// 007f5af4  8b06                 mov eax, dword ptr [esi]
// 007f5af6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f5af9  8bce                 mov ecx, esi
// 007f5afb  ffd2                 call edx
// 007f5afd  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 007f5b04  57                   push edi
// 007f5b05  7413                 je 0x7f5b1a
// 007f5b07  8b06                 mov eax, dword ptr [esi]
// 007f5b09  8b5060               mov edx, dword ptr [eax + 0x60]
// 007f5b0c  8bce                 mov ecx, esi
// 007f5b0e  ffd2                 call edx
// 007f5b10  5f                   pop edi
// 007f5b11  b801000000           mov eax, 1
// 007f5b16  5e                   pop esi
// 007f5b17  c21000               ret 0x10
// 007f5b1a  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f5b1e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f5b22  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f5b26  50                   push eax
// 007f5b27  51                   push ecx
// 007f5b28  52                   push edx
// 007f5b29  8bce                 mov ecx, esi
// 007f5b2b  e8f0faffff           call 0x7f5620
// 007f5b30  5f                   pop edi
// 007f5b31  b801000000           mov eax, 1
// 007f5b36  5e                   pop esi
// 007f5b37  c21000               ret 0x10
// 007f5b3a  5f                   pop edi
// 007f5b3b  33c0                 xor eax, eax
// 007f5b3d  5e                   pop esi
// 007f5b3e  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
