// roc 2010-06 0084b450  unit: CXTPRibbonBar  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084b450
//
// 0084b450  53                   push ebx
// 0084b451  56                   push esi
// 0084b452  57                   push edi
// 0084b453  8bf1                 mov esi, ecx
// 0084b455  e876d1f6ff           call 0x7b85d0
// 0084b45a  8bc8                 mov ecx, eax
// 0084b45c  e8dfe7f7ff           call 0x7c9c40
// 0084b461  8bf8                 mov edi, eax
// 0084b463  837f0400             cmp dword ptr [edi + 4], 0
// 0084b467  7f53                 jg 0x84b4bc
// 0084b469  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084b46c  50                   push eax
// 0084b46d  e87e79fdff           call 0x822df0
// 0084b472  83c404               add esp, 4
// 0084b475  85c0                 test eax, eax
// 0084b477  7443                 je 0x84b4bc
// 0084b479  56                   push esi
// 0084b47a  8bcf                 mov ecx, edi
// 0084b47c  e82f7bfdff           call 0x822fb0
// 0084b481  85c0                 test eax, eax
// 0084b483  7537                 jne 0x84b4bc
// 0084b485  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 0084b48c  752e                 jne 0x84b4bc
// 0084b48e  8bce                 mov ecx, esi
// 0084b490  33db                 xor ebx, ebx
// 0084b492  e869d9ffff           call 0x848e00
// 0084b497  39984c060000         cmp dword ptr [eax + 0x64c], ebx
// 0084b49d  7422                 je 0x84b4c1
// 0084b49f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084b4a3  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 0084b4a9  8b5208               mov edx, dword ptr [edx + 8]
// 0084b4ac  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 0084b4b2  50                   push eax
// 0084b4b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084b4b7  50                   push eax
// 0084b4b8  ffd2                 call edx
// 0084b4ba  eb07                 jmp 0x84b4c3
// 0084b4bc  bb01000000           mov ebx, 1
// 0084b4c1  33c0                 xor eax, eax
// 0084b4c3  3b86d8010000         cmp eax, dword ptr [esi + 0x1d8]
// 0084b4c9  7420                 je 0x84b4eb
// 0084b4cb  50                   push eax
// 0084b4cc  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 0084b4d2  e859840500           call 0x8a3930
// 0084b4d7  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0084b4de  740b                 je 0x84b4eb
// 0084b4e0  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084b4e3  50                   push eax
// 0084b4e4  8bcf                 mov ecx, edi
// 0084b4e6  e8757afdff           call 0x822f60
// 0084b4eb  85db                 test ebx, ebx
// 0084b4ed  7523                 jne 0x84b512
// 0084b4ef  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 0084b4f5  85c0                 test eax, eax
// 0084b4f7  7419                 je 0x84b512
// 0084b4f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084b4fd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084b501  51                   push ecx
// 0084b502  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0084b505  52                   push edx
// 0084b506  51                   push ecx
// 0084b507  8d8884010000         lea ecx, [eax + 0x184]
// 0084b50d  e80e870300           call 0x883c20
// 0084b512  8b542418             mov edx, dword ptr [esp + 0x18]
// 0084b516  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084b51a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084b51e  52                   push edx
// 0084b51f  50                   push eax
// 0084b520  51                   push ecx
// 0084b521  8bce                 mov ecx, esi
// 0084b523  e818daf6ff           call 0x7b8f40
// 0084b528  5f                   pop edi
// 0084b529  5e                   pop esi
// 0084b52a  5b                   pop ebx
// 0084b52b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseMove@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
