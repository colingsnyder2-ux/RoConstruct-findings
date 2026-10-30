// roc 2009-12 0080ef20  unit: CXTPImageManagerIcon  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ef20
//
// 0080ef20  6aff                 push -1
// 0080ef22  684ab79500           push 0x95b74a
// 0080ef27  64a100000000         mov eax, dword ptr fs:[0]
// 0080ef2d  50                   push eax
// 0080ef2e  51                   push ecx
// 0080ef2f  53                   push ebx
// 0080ef30  56                   push esi
// 0080ef31  57                   push edi
// 0080ef32  a10052b600           mov eax, dword ptr [0xb65200]
// 0080ef37  33c4                 xor eax, esp
// 0080ef39  50                   push eax
// 0080ef3a  8d442414             lea eax, [esp + 0x14]
// 0080ef3e  64a300000000         mov dword ptr fs:[0], eax
// 0080ef44  8bf1                 mov esi, ecx
// 0080ef46  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0080ef4a  8d442410             lea eax, [esp + 0x10]
// 0080ef4e  50                   push eax
// 0080ef4f  8d5e20               lea ebx, [esi + 0x20]
// 0080ef52  57                   push edi
// 0080ef53  8bcb                 mov ecx, ebx
// 0080ef55  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0080ef5d  e81edaffff           call 0x80c980
// 0080ef62  85c0                 test eax, eax
// 0080ef64  755b                 jne 0x80efc1
// 0080ef66  6858010000           push 0x158
// 0080ef6b  e8f048feff           call 0x7f3860
// 0080ef70  83c404               add esp, 4
// 0080ef73  89442424             mov dword ptr [esp + 0x24], eax
// 0080ef77  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0080ef7f  85c0                 test eax, eax
// 0080ef81  7413                 je 0x80ef96
// 0080ef83  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0080ef86  56                   push esi
// 0080ef87  6a0f                 push 0xf
// 0080ef89  57                   push edi
// 0080ef8a  51                   push ecx
// 0080ef8b  8bc8                 mov ecx, eax
// 0080ef8d  e82ee1ffff           call 0x80d0c0
// 0080ef92  8bf0                 mov esi, eax
// 0080ef94  eb02                 jmp 0x80ef98
// 0080ef96  33f6                 xor esi, esi
// 0080ef98  57                   push edi
// 0080ef99  8bcb                 mov ecx, ebx
// 0080ef9b  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080efa3  e8d8510800           call 0x894180
// 0080efa8  8930                 mov dword ptr [eax], esi
// 0080efaa  8bc6                 mov eax, esi
// 0080efac  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080efb0  64890d00000000       mov dword ptr fs:[0], ecx
// 0080efb7  59                   pop ecx
// 0080efb8  5f                   pop edi
// 0080efb9  5e                   pop esi
// 0080efba  5b                   pop ebx
// 0080efbb  83c410               add esp, 0x10
// 0080efbe  c20400               ret 4
// 0080efc1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080efc5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080efc9  64890d00000000       mov dword ptr fs:[0], ecx
// 0080efd0  59                   pop ecx
// 0080efd1  5f                   pop edi
// 0080efd2  5e                   pop esi
// 0080efd3  5b                   pop ebx
// 0080efd4  83c410               add esp, 0x10
// 0080efd7  c20400               ret 4
// copied from an identical function in another client (function ?CreateIcon@CXTPImageManagerIconSet@@AAEPAVCXTPImageManagerIcon@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp