// roc 2009-12 008e9640  unit: CXTPRibbonGroupControlPopup  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9640
//
// 008e9640  6aff                 push -1
// 008e9642  6824649600           push 0x966424
// 008e9647  64a100000000         mov eax, dword ptr fs:[0]
// 008e964d  50                   push eax
// 008e964e  56                   push esi
// 008e964f  57                   push edi
// 008e9650  a10052b600           mov eax, dword ptr [0xb65200]
// 008e9655  33c4                 xor eax, esp
// 008e9657  50                   push eax
// 008e9658  8d44240c             lea eax, [esp + 0xc]
// 008e965c  64a300000000         mov dword ptr fs:[0], eax
// 008e9662  8bf1                 mov esi, ecx
// 008e9664  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e9668  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008e966e  898674010000         mov dword ptr [esi + 0x174], eax
// 008e9674  85c0                 test eax, eax
// 008e9676  0f840b010000         je 0x8e9787
// 008e967c  85c9                 test ecx, ecx
// 008e967e  740f                 je 0x8e968f
// 008e9680  e857a7f0ff           call 0x7f3ddc
// 008e9685  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 008e968f  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008e9695  e836aef1ff           call 0x8044d0
// 008e969a  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008e96a1  8bf8                 mov edi, eax
// 008e96a3  7553                 jne 0x8e96f8
// 008e96a5  685c020000           push 0x25c
// 008e96aa  e8b1a1f0ff           call 0x7f3860
// 008e96af  83c404               add esp, 4
// 008e96b2  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e96b6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e96be  85c0                 test eax, eax
// 008e96c0  7409                 je 0x8e96cb
// 008e96c2  8bc8                 mov ecx, eax
// 008e96c4  e867b8f5ff           call 0x844f30
// 008e96c9  eb02                 jmp 0x8e96cd
// 008e96cb  33c0                 xor eax, eax
// 008e96cd  898678010000         mov dword ptr [esi + 0x178], eax
// 008e96d3  89b804010000         mov dword ptr [eax + 0x104], edi
// 008e96d9  8b06                 mov eax, dword ptr [esi]
// 008e96db  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008e96de  8bce                 mov ecx, esi
// 008e96e0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008e96e8  ffd2                 call edx
// 008e96ea  83f802               cmp eax, 2
// 008e96ed  747f                 je 0x8e976e
// 008e96ef  83f803               cmp eax, 3
// 008e96f2  747a                 je 0x8e976e
// 008e96f4  33c0                 xor eax, eax
// 008e96f6  eb7b                 jmp 0x8e9773
// 008e96f8  6880020000           push 0x280
// 008e96fd  e85ea1f0ff           call 0x7f3860
// 008e9702  83c404               add esp, 4
// 008e9705  8944241c             mov dword ptr [esp + 0x1c], eax
// 008e9709  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008e9711  85c0                 test eax, eax
// 008e9713  7410                 je 0x8e9725
// 008e9715  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 008e971b  51                   push ecx
// 008e971c  8bc8                 mov ecx, eax
// 008e971e  e8dd610000           call 0x8ef900
// 008e9723  eb02                 jmp 0x8e9727
// 008e9725  33c0                 xor eax, eax
// 008e9727  898678010000         mov dword ptr [esi + 0x178], eax
// 008e972d  89b804010000         mov dword ptr [eax + 0x104], edi
// 008e9733  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 008e9739  8b17                 mov edx, dword ptr [edi]
// 008e973b  8b8298010000         mov eax, dword ptr [edx + 0x198]
// 008e9741  8bcf                 mov ecx, edi
// 008e9743  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008e974b  ffd0                 call eax
// 008e974d  85c0                 test eax, eax
// 008e974f  7506                 jne 0x8e9757
// 008e9751  898738010000         mov dword ptr [edi + 0x138], eax
// 008e9757  8b16                 mov edx, dword ptr [esi]
// 008e9759  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008e975c  8bce                 mov ecx, esi
// 008e975e  ffd0                 call eax
// 008e9760  83f802               cmp eax, 2
// 008e9763  7409                 je 0x8e976e
// 008e9765  83f803               cmp eax, 3
// 008e9768  7404                 je 0x8e976e
// 008e976a  33c0                 xor eax, eax
// 008e976c  eb05                 jmp 0x8e9773
// 008e976e  b801000000           mov eax, 1
// 008e9773  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 008e9779  8b11                 mov edx, dword ptr [ecx]
// 008e977b  50                   push eax
// 008e977c  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008e9782  56                   push esi
// 008e9783  ffd0                 call eax
// 008e9785  eb14                 jmp 0x8e979b
// 008e9787  85c9                 test ecx, ecx
// 008e9789  7410                 je 0x8e979b
// 008e978b  8b11                 mov edx, dword ptr [ecx]
// 008e978d  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008e9793  6a00                 push 0
// 008e9795  6a01                 push 1
// 008e9797  6a00                 push 0
// 008e9799  ffd0                 call eax
// 008e979b  6a01                 push 1
// 008e979d  8bce                 mov ecx, esi
// 008e979f  e81ccff0ff           call 0x7f66c0
// 008e97a4  b801000000           mov eax, 1
// 008e97a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e97ad  64890d00000000       mov dword ptr fs:[0], ecx
// 008e97b4  59                   pop ecx
// 008e97b5  5f                   pop edi
// 008e97b6  5e                   pop esi
// 008e97b7  83c40c               add esp, 0xc
// 008e97ba  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CXTPRibbonGroupControlPopup@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp