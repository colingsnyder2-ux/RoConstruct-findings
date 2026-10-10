// roc 2008-06 006e77d0  unit: CXTPToolBar::CControlButtonExpand  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e77d0
//
// 006e77d0  56                   push esi
// 006e77d1  8bf1                 mov esi, ecx
// 006e77d3  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 006e77d9  57                   push edi
// 006e77da  50                   push eax
// 006e77db  e8e0690000           call 0x6ee1c0
// 006e77e0  50                   push eax
// 006e77e1  e84094fbff           call 0x6a0c26
// 006e77e6  8bf8                 mov edi, eax
// 006e77e8  83c408               add esp, 8
// 006e77eb  85ff                 test edi, edi
// 006e77ed  0f84a8000000         je 0x6e789b
// 006e77f3  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 006e77f9  83f802               cmp eax, 2
// 006e77fc  7409                 je 0x6e7807
// 006e77fe  83f803               cmp eax, 3
// 006e7801  0f8594000000         jne 0x6e789b
// 006e7807  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006e780e  7517                 jne 0x6e7827
// 006e7810  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e7814  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e7818  51                   push ecx
// 006e7819  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006e781f  52                   push edx
// 006e7820  6a00                 push 0
// 006e7822  e8c906fdff           call 0x6b7ef0
// 006e7827  39be78010000         cmp dword ptr [esi + 0x178], edi
// 006e782d  7407                 je 0x6e7836
// 006e782f  5f                   pop edi
// 006e7830  33c0                 xor eax, eax
// 006e7832  5e                   pop esi
// 006e7833  c20800               ret 8
// 006e7836  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006e783d  74f0                 je 0x6e782f
// 006e783f  6a01                 push 1
// 006e7841  6a00                 push 0
// 006e7843  8bcf                 mov ecx, edi
// 006e7845  e8966d0000           call 0x6ee5e0
// 006e784a  83f8ff               cmp eax, -1
// 006e784d  7429                 je 0x6e7878
// 006e784f  6a01                 push 1
// 006e7851  6a00                 push 0
// 006e7853  8bcf                 mov ecx, edi
// 006e7855  e8866d0000           call 0x6ee5e0
// 006e785a  50                   push eax
// 006e785b  8bcf                 mov ecx, edi
// 006e785d  e84ee3fcff           call 0x6b5bb0
// 006e7862  8b10                 mov edx, dword ptr [eax]
// 006e7864  8bc8                 mov ecx, eax
// 006e7866  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 006e786c  ffd0                 call eax
// 006e786e  5f                   pop edi
// 006e786f  b801000000           mov eax, 1
// 006e7874  5e                   pop esi
// 006e7875  c20800               ret 8
// 006e7878  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006e787f  74ae                 je 0x6e782f
// 006e7881  83bfa401000000       cmp dword ptr [edi + 0x1a4], 0
// 006e7888  74a5                 je 0x6e782f
// 006e788a  8bcf                 mov ecx, edi
// 006e788c  e84f950000           call 0x6f0de0
// 006e7891  5f                   pop edi
// 006e7892  b801000000           mov eax, 1
// 006e7897  5e                   pop esi
// 006e7898  c20800               ret 8
// 006e789b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e789f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e78a3  51                   push ecx
// 006e78a4  52                   push edx
// 006e78a5  8bce                 mov ecx, esi
// 006e78a7  e8243bfcff           call 0x6ab3d0
// 006e78ac  5f                   pop edi
// 006e78ad  5e                   pop esi
// 006e78ae  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?OnLButtonDblClk@CXTPControlPopup@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
