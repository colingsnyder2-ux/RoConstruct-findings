// roc 2009-12 0088b350  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b350
//
// 0088b350  51                   push ecx
// 0088b351  56                   push esi
// 0088b352  8bf1                 mov esi, ecx
// 0088b354  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0088b35a  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0088b361  744a                 je 0x88b3ad
// 0088b363  8b16                 mov edx, dword ptr [esi]
// 0088b365  8b5258               mov edx, dword ptr [edx + 0x58]
// 0088b368  53                   push ebx
// 0088b369  8d442408             lea eax, [esp + 8]
// 0088b36d  50                   push eax
// 0088b36e  ffd2                 call edx
// 0088b370  8bc8                 mov ecx, eax
// 0088b372  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088b378  8d4c2408             lea ecx, [esp + 8]
// 0088b37c  8ad8                 mov bl, al
// 0088b37e  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b384  84db                 test bl, bl
// 0088b386  5b                   pop ebx
// 0088b387  7405                 je 0x88b38e
// 0088b389  33c0                 xor eax, eax
// 0088b38b  5e                   pop esi
// 0088b38c  59                   pop ecx
// 0088b38d  c3                   ret 
// 0088b38e  8bce                 mov ecx, esi
// 0088b390  e8fba8f6ff           call 0x7f5c90
// 0088b395  83f801               cmp eax, 1
// 0088b398  7413                 je 0x88b3ad
// 0088b39a  83f803               cmp eax, 3
// 0088b39d  740e                 je 0x88b3ad
// 0088b39f  83f804               cmp eax, 4
// 0088b3a2  7409                 je 0x88b3ad
// 0088b3a4  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0088b3aa  5e                   pop esi
// 0088b3ab  59                   pop ecx
// 0088b3ac  c3                   ret 
// 0088b3ad  b801000000           mov eax, 1
// 0088b3b2  5e                   pop esi
// 0088b3b3  59                   pop ecx
// 0088b3b4  c3                   ret 
// copied from an identical function in another client (function ?IsCaptionVisible@CXTPControlEdit@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp