// roc 2009-12 008e8ea0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8ea0
//
// 008e8ea0  56                   push esi
// 008e8ea1  8bf1                 mov esi, ecx
// 008e8ea3  57                   push edi
// 008e8ea4  8dbe08020000         lea edi, [esi + 0x208]
// 008e8eaa  8bcf                 mov ecx, edi
// 008e8eac  e80f2df8ff           call 0x86bbc0
// 008e8eb1  85c0                 test eax, eax
// 008e8eb3  7536                 jne 0x8e8eeb
// 008e8eb5  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e8eb9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e8ebd  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e8ec1  50                   push eax
// 008e8ec2  83ec10               sub esp, 0x10
// 008e8ec5  8bc4                 mov eax, esp
// 008e8ec7  8908                 mov dword ptr [eax], ecx
// 008e8ec9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e8ecd  895004               mov dword ptr [eax + 4], edx
// 008e8ed0  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e8ed4  894808               mov dword ptr [eax + 8], ecx
// 008e8ed7  89500c               mov dword ptr [eax + 0xc], edx
// 008e8eda  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e8ede  50                   push eax
// 008e8edf  8bce                 mov ecx, esi
// 008e8ee1  e83ae8ffff           call 0x8e7720
// 008e8ee6  5f                   pop edi
// 008e8ee7  5e                   pop esi
// 008e8ee8  c21800               ret 0x18
// 008e8eeb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e8eef  8b11                 mov edx, dword ptr [ecx]
// 008e8ef1  8b4248               mov eax, dword ptr [edx + 0x48]
// 008e8ef4  ffd0                 call eax
// 008e8ef6  83e802               sub eax, 2
// 008e8ef9  740b                 je 0x8e8f06
// 008e8efb  83e801               sub eax, 1
// 008e8efe  750a                 jne 0x8e8f0a
// 008e8f00  ff442418             inc dword ptr [esp + 0x18]
// 008e8f04  eb04                 jmp 0x8e8f0a
// 008e8f06  ff44241c             inc dword ptr [esp + 0x1c]
// 008e8f0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e8f0e  85c0                 test eax, eax
// 008e8f10  7403                 je 0x8e8f15
// 008e8f12  8b4004               mov eax, dword ptr [eax + 4]
// 008e8f15  6a00                 push 0
// 008e8f17  8d4c2414             lea ecx, [esp + 0x14]
// 008e8f1b  51                   push ecx
// 008e8f1c  6a00                 push 0
// 008e8f1e  6a09                 push 9
// 008e8f20  50                   push eax
// 008e8f21  8bcf                 mov ecx, edi
// 008e8f23  e81829f8ff           call 0x86b840
// 008e8f28  5f                   pop edi
// 008e8f29  33c0                 xor eax, eax
// 008e8f2b  5e                   pop esi
// 008e8f2c  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
