// roc 2009-12 0086c9f0  unit: CSelectionCaption  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c9f0
//
// 0086c9f0  8b442404             mov eax, dword ptr [esp + 4]
// 0086c9f4  56                   push esi
// 0086c9f5  8bf1                 mov esi, ecx
// 0086c9f7  85c0                 test eax, eax
// 0086c9f9  7403                 je 0x86c9fe
// 0086c9fb  89466c               mov dword ptr [esi + 0x6c], eax
// 0086c9fe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086ca02  85c0                 test eax, eax
// 0086ca04  744e                 je 0x86ca54
// 0086ca06  8b4004               mov eax, dword ptr [eax + 4]
// 0086ca09  57                   push edi
// 0086ca0a  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0086ca10  6a01                 push 1
// 0086ca12  50                   push eax
// 0086ca13  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086ca16  6a30                 push 0x30
// 0086ca18  50                   push eax
// 0086ca19  ffd7                 call edi
// 0086ca1b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0086ca21  51                   push ecx
// 0086ca22  ff1584cc9800         call dword ptr [0x98cc84]
// 0086ca28  85c0                 test eax, eax
// 0086ca2a  7427                 je 0x86ca53
// 0086ca2c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086ca2f  6a00                 push 0
// 0086ca31  6a00                 push 0
// 0086ca33  6a31                 push 0x31
// 0086ca35  52                   push edx
// 0086ca36  ffd7                 call edi
// 0086ca38  50                   push eax
// 0086ca39  e82679f8ff           call 0x7f4364
// 0086ca3e  85c0                 test eax, eax
// 0086ca40  7403                 je 0x86ca45
// 0086ca42  8b4004               mov eax, dword ptr [eax + 4]
// 0086ca45  6a01                 push 1
// 0086ca47  50                   push eax
// 0086ca48  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086ca4e  6a30                 push 0x30
// 0086ca50  50                   push eax
// 0086ca51  ffd7                 call edi
// 0086ca53  5f                   pop edi
// 0086ca54  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086ca58  85c0                 test eax, eax
// 0086ca5a  740d                 je 0x86ca69
// 0086ca5c  50                   push eax
// 0086ca5d  8d8ed0000000         lea ecx, [esi + 0xd0]
// 0086ca63  ff155cde9800         call dword ptr [0x98de5c]
// 0086ca69  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086ca6d  85c0                 test eax, eax
// 0086ca6f  7406                 je 0x86ca77
// 0086ca71  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0086ca77  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086ca7a  6a01                 push 1
// 0086ca7c  6a00                 push 0
// 0086ca7e  51                   push ecx
// 0086ca7f  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086ca85  5e                   pop esi
// 0086ca86  c21000               ret 0x10
// copied from an identical function in another client (function ?ModifyCaptionStyle@CXTCaption@@UAEXHPAVCFont@@PBDPAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp