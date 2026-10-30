// roc 2009-12 0083aec0  unit: CXTPToolBar::CControlButtonExpand  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083aec0
//
// 0083aec0  56                   push esi
// 0083aec1  8bf1                 mov esi, ecx
// 0083aec3  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0083aec9  57                   push edi
// 0083aeca  50                   push eax
// 0083aecb  e8b06a0000           call 0x841980
// 0083aed0  50                   push eax
// 0083aed1  e8688dfbff           call 0x7f3c3e
// 0083aed6  8bf8                 mov edi, eax
// 0083aed8  83c408               add esp, 8
// 0083aedb  85ff                 test edi, edi
// 0083aedd  0f84a8000000         je 0x83af8b
// 0083aee3  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0083aee9  83f802               cmp eax, 2
// 0083aeec  7409                 je 0x83aef7
// 0083aeee  83f803               cmp eax, 3
// 0083aef1  0f8594000000         jne 0x83af8b
// 0083aef7  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0083aefe  7517                 jne 0x83af17
// 0083af00  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083af04  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0083af08  51                   push ecx
// 0083af09  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083af0f  52                   push edx
// 0083af10  6a00                 push 0
// 0083af12  e8a9c6fcff           call 0x8075c0
// 0083af17  39be78010000         cmp dword ptr [esi + 0x178], edi
// 0083af1d  7407                 je 0x83af26
// 0083af1f  5f                   pop edi
// 0083af20  33c0                 xor eax, eax
// 0083af22  5e                   pop esi
// 0083af23  c20800               ret 8
// 0083af26  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0083af2d  74f0                 je 0x83af1f
// 0083af2f  6a01                 push 1
// 0083af31  6a00                 push 0
// 0083af33  8bcf                 mov ecx, edi
// 0083af35  e8566e0000           call 0x841d90
// 0083af3a  83f8ff               cmp eax, -1
// 0083af3d  7429                 je 0x83af68
// 0083af3f  6a01                 push 1
// 0083af41  6a00                 push 0
// 0083af43  8bcf                 mov ecx, edi
// 0083af45  e8466e0000           call 0x841d90
// 0083af4a  50                   push eax
// 0083af4b  8bcf                 mov ecx, edi
// 0083af4d  e80ea3fcff           call 0x805260
// 0083af52  8b10                 mov edx, dword ptr [eax]
// 0083af54  8bc8                 mov ecx, eax
// 0083af56  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0083af5c  ffd0                 call eax
// 0083af5e  5f                   pop edi
// 0083af5f  b801000000           mov eax, 1
// 0083af64  5e                   pop esi
// 0083af65  c20800               ret 8
// 0083af68  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0083af6f  74ae                 je 0x83af1f
// 0083af71  83bfa401000000       cmp dword ptr [edi + 0x1a4], 0
// 0083af78  74a5                 je 0x83af1f
// 0083af7a  8bcf                 mov ecx, edi
// 0083af7c  e86f950000           call 0x8444f0
// 0083af81  5f                   pop edi
// 0083af82  b801000000           mov eax, 1
// 0083af87  5e                   pop esi
// 0083af88  c20800               ret 8
// 0083af8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083af8f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0083af93  51                   push ecx
// 0083af94  52                   push edx
// 0083af95  8bce                 mov ecx, esi
// 0083af97  e824b1fbff           call 0x7f60c0
// 0083af9c  5f                   pop edi
// 0083af9d  5e                   pop esi
// 0083af9e  c20800               ret 8
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPControlPopup@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp