// roc 2009-12 006898a0  unit: TextXmlWriter  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006898a0
//
// 006898a0  64a100000000         mov eax, dword ptr fs:[0]
// 006898a6  6aff                 push -1
// 006898a8  6803619400           push 0x946103
// 006898ad  50                   push eax
// 006898ae  64892500000000       mov dword ptr fs:[0], esp
// 006898b5  83ec3c               sub esp, 0x3c
// 006898b8  53                   push ebx
// 006898b9  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 006898bd  56                   push esi
// 006898be  57                   push edi
// 006898bf  8bf1                 mov esi, ecx
// 006898c1  8d7b10               lea edi, [ebx + 0x10]
// 006898c4  8bcf                 mov ecx, edi
// 006898c6  e805d5feff           call 0x676dd0
// 006898cb  6a00                 push 0
// 006898cd  84c0                 test al, al
// 006898cf  0f84ae000000         je 0x689983
// 006898d5  8b442460             mov eax, dword ptr [esp + 0x60]
// 006898d9  50                   push eax
// 006898da  53                   push ebx
// 006898db  8bce                 mov ecx, esi
// 006898dd  e82efeffff           call 0x689710
// 006898e2  8d4c2428             lea ecx, [esp + 0x28]
// 006898e6  ff15e8b69800         call dword ptr [0x98b6e8]
// 006898ec  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006898f4  e8778bfaff           call 0x632470
// 006898f9  89442444             mov dword ptr [esp + 0x44], eax
// 006898fd  8d4c2428             lea ecx, [esp + 0x28]
// 00689901  51                   push ecx
// 00689902  bb01000000           mov ebx, 1
// 00689907  8bcf                 mov ecx, edi
// 00689909  895c2454             mov dword ptr [esp + 0x54], ebx
// 0068990d  e81ed7feff           call 0x677030
// 00689912  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00689917  7517                 jne 0x689930
// 00689919  8b5624               mov edx, dword ptr [esi + 0x24]
// 0068991c  681c0b9d00           push 0x9d0b1c
// 00689921  52                   push edx
// 00689922  e8f92fdcff           call 0x44c920
// 00689927  8d4c2430             lea ecx, [esp + 0x30]
// 0068992b  e991000000           jmp 0x6899c1
// 00689930  8b4624               mov eax, dword ptr [esi + 0x24]
// 00689933  68140b9d00           push 0x9d0b14
// 00689938  50                   push eax
// 00689939  e8e22fdcff           call 0x44c920
// 0068993e  83c408               add esp, 8
// 00689941  56                   push esi
// 00689942  8d4c2410             lea ecx, [esp + 0x10]
// 00689946  51                   push ecx
// 00689947  8bcf                 mov ecx, edi
// 00689949  e852e3feff           call 0x677ca0
// 0068994e  8b5624               mov edx, dword ptr [esi + 0x24]
// 00689951  50                   push eax
// 00689952  52                   push edx
// 00689953  c644245802           mov byte ptr [esp + 0x58], 2
// 00689958  ff1520b69800         call dword ptr [0x98b620]
// 0068995e  83c408               add esp, 8
// 00689961  8d4c240c             lea ecx, [esp + 0xc]
// 00689965  885c2450             mov byte ptr [esp + 0x50], bl
// 00689969  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068996f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00689972  680c0b9d00           push 0x9d0b0c
// 00689977  50                   push eax
// 00689978  e8a32fdcff           call 0x44c920
// 0068997d  8d4c2430             lea ecx, [esp + 0x30]
// 00689981  eb3e                 jmp 0x6899c1
// 00689983  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00689987  51                   push ecx
// 00689988  53                   push ebx
// 00689989  8bce                 mov ecx, esi
// 0068998b  e880fdffff           call 0x689710
// 00689990  56                   push esi
// 00689991  8d542410             lea edx, [esp + 0x10]
// 00689995  52                   push edx
// 00689996  8bcf                 mov ecx, edi
// 00689998  e803e3feff           call 0x677ca0
// 0068999d  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006899a1  8b7624               mov esi, dword ptr [esi + 0x24]
// 006899a4  c744245003000000     mov dword ptr [esp + 0x50], 3
// 006899ac  7205                 jb 0x6899b3
// 006899ae  8b4004               mov eax, dword ptr [eax + 4]
// 006899b1  eb03                 jmp 0x6899b6
// 006899b3  83c004               add eax, 4
// 006899b6  50                   push eax
// 006899b7  56                   push esi
// 006899b8  e853fcffff           call 0x689610
// 006899bd  8d4c2414             lea ecx, [esp + 0x14]
// 006899c1  83c408               add esp, 8
// 006899c4  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 006899cc  ff15e4b69800         call dword ptr [0x98b6e4]
// 006899d2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006899d6  5f                   pop edi
// 006899d7  5e                   pop esi
// 006899d8  5b                   pop ebx
// 006899d9  64890d00000000       mov dword ptr fs:[0], ecx
// 006899e0  83c448               add esp, 0x48
// 006899e3  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?serializeNode@TextXmlWriter@@MAEXPBVXmlElement@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
