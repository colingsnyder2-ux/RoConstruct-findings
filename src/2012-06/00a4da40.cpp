// roc 2012-06 00a4da40  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4da40
//
// 00a4da40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a4da44  56                   push esi
// 00a4da45  6a00                 push 0
// 00a4da47  6a00                 push 0
// 00a4da49  8bf1                 mov esi, ecx
// 00a4da4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4da4f  50                   push eax
// 00a4da50  51                   push ecx
// 00a4da51  8bce                 mov ecx, esi
// 00a4da53  e838f3ffff           call 0xa4cd90
// 00a4da58  85c0                 test eax, eax
// 00a4da5a  7421                 je 0xa4da7d
// 00a4da5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4da60  8b10                 mov edx, dword ptr [eax]
// 00a4da62  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a4da65  51                   push ecx
// 00a4da66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4da6a  51                   push ecx
// 00a4da6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4da6f  51                   push ecx
// 00a4da70  8bc8                 mov ecx, eax
// 00a4da72  ffd2                 call edx
// 00a4da74  b801000000           mov eax, 1
// 00a4da79  5e                   pop esi
// 00a4da7a  c21000               ret 0x10
// 00a4da7d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a4da82  7406                 je 0xa4da8a
// 00a4da84  33c0                 xor eax, eax
// 00a4da86  5e                   pop esi
// 00a4da87  c21000               ret 0x10
// 00a4da8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4da8e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a4da92  57                   push edi
// 00a4da93  50                   push eax
// 00a4da94  51                   push ecx
// 00a4da95  8bce                 mov ecx, esi
// 00a4da97  e814f0ffff           call 0xa4cab0
// 00a4da9c  8bf8                 mov edi, eax
// 00a4da9e  85ff                 test edi, edi
// 00a4daa0  0f8484000000         je 0xa4db2a
// 00a4daa6  8b16                 mov edx, dword ptr [esi]
// 00a4daa8  8b4264               mov eax, dword ptr [edx + 0x64]
// 00a4daab  57                   push edi
// 00a4daac  8bce                 mov ecx, esi
// 00a4daae  ffd0                 call eax
// 00a4dab0  85c0                 test eax, eax
// 00a4dab2  7476                 je 0xa4db2a
// 00a4dab4  8b16                 mov edx, dword ptr [esi]
// 00a4dab6  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a4dab9  8bce                 mov ecx, esi
// 00a4dabb  ffd0                 call eax
// 00a4dabd  85c0                 test eax, eax
// 00a4dabf  7423                 je 0xa4dae4
// 00a4dac1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a4dac5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4dac9  8b16                 mov edx, dword ptr [esi]
// 00a4dacb  8b5268               mov edx, dword ptr [edx + 0x68]
// 00a4dace  57                   push edi
// 00a4dacf  50                   push eax
// 00a4dad0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a4dad4  51                   push ecx
// 00a4dad5  50                   push eax
// 00a4dad6  8bce                 mov ecx, esi
// 00a4dad8  ffd2                 call edx
// 00a4dada  5f                   pop edi
// 00a4dadb  b801000000           mov eax, 1
// 00a4dae0  5e                   pop esi
// 00a4dae1  c21000               ret 0x10
// 00a4dae4  8b06                 mov eax, dword ptr [esi]
// 00a4dae6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a4dae9  8bce                 mov ecx, esi
// 00a4daeb  ffd2                 call edx
// 00a4daed  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 00a4daf4  57                   push edi
// 00a4daf5  7413                 je 0xa4db0a
// 00a4daf7  8b06                 mov eax, dword ptr [esi]
// 00a4daf9  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a4dafc  8bce                 mov ecx, esi
// 00a4dafe  ffd2                 call edx
// 00a4db00  5f                   pop edi
// 00a4db01  b801000000           mov eax, 1
// 00a4db06  5e                   pop esi
// 00a4db07  c21000               ret 0x10
// 00a4db0a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a4db0e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a4db12  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a4db16  50                   push eax
// 00a4db17  51                   push ecx
// 00a4db18  52                   push edx
// 00a4db19  8bce                 mov ecx, esi
// 00a4db1b  e8f0faffff           call 0xa4d610
// 00a4db20  5f                   pop edi
// 00a4db21  b801000000           mov eax, 1
// 00a4db26  5e                   pop esi
// 00a4db27  c21000               ret 0x10
// 00a4db2a  5f                   pop edi
// 00a4db2b  33c0                 xor eax, eax
// 00a4db2d  5e                   pop esi
// 00a4db2e  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
