// roc 2011-06 0045c4d0  unit: VCRoblox3D::?$CComObject  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045c4d0
//
// 0045c4d0  81ec10020000         sub esp, 0x210
// 0045c4d6  8b942418020000       mov edx, dword ptr [esp + 0x218]
// 0045c4dd  53                   push ebx
// 0045c4de  55                   push ebp
// 0045c4df  56                   push esi
// 0045c4e0  8d442410             lea eax, [esp + 0x10]
// 0045c4e4  50                   push eax
// 0045c4e5  8b842424020000       mov eax, dword ptr [esp + 0x224]
// 0045c4ec  8d4c2410             lea ecx, [esp + 0x10]
// 0045c4f0  51                   push ecx
// 0045c4f1  52                   push edx
// 0045c4f2  50                   push eax
// 0045c4f3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0045c4fb  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0045c503  e8e8f8ffff           call 0x45bdf0
// 0045c508  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0045c50c  8b2d000ba400         mov ebp, dword ptr [0xa40b00]
// 0045c512  8bf0                 mov esi, eax
// 0045c514  85f6                 test esi, esi
// 0045c516  0f8cac000000         jl 0x45c5c8
// 0045c51c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045c520  33f6                 xor esi, esi
// 0045c522  8d54240c             lea edx, [esp + 0xc]
// 0045c526  52                   push edx
// 0045c527  56                   push esi
// 0045c528  56                   push esi
// 0045c529  56                   push esi
// 0045c52a  8974241c             mov dword ptr [esp + 0x1c], esi
// 0045c52e  8b08                 mov ecx, dword ptr [eax]
// 0045c530  6aff                 push -1
// 0045c532  50                   push eax
// 0045c533  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0045c536  ffd0                 call eax
// 0045c538  85c0                 test eax, eax
// 0045c53a  7c4d                 jl 0x45c589
// 0045c53c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045c540  85c0                 test eax, eax
// 0045c542  7445                 je 0x45c589
// 0045c544  50                   push eax
// 0045c545  ff15ec0aa400         call dword ptr [0xa40aec]
// 0045c54b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045c54f  50                   push eax
// 0045c550  51                   push ecx
// 0045c551  8d54241c             lea edx, [esp + 0x1c]
// 0045c555  6804010000           push 0x104
// 0045c55a  52                   push edx
// 0045c55b  ff15b409a400         call dword ptr [0xa409b4]
// 0045c561  50                   push eax
// 0045c562  e8a96efaff           call 0x403410
// 0045c567  83c414               add esp, 0x14
// 0045c56a  8d4c2414             lea ecx, [esp + 0x14]
// 0045c56e  33c0                 xor eax, eax
// 0045c570  51                   push ecx
// 0045c571  668984241e020000     mov word ptr [esp + 0x21e], ax
// 0045c579  e892c4ffff           call 0x458a10
// 0045c57e  33d2                 xor edx, edx
// 0045c580  6689544414           mov word ptr [esp + eax*2 + 0x14], dx
// 0045c585  8d742414             lea esi, [esp + 0x14]
// 0045c589  803d1816cb0001       cmp byte ptr [0xcb1618], 1
// 0045c590  751f                 jne 0x45c5b1
// 0045c592  6804e7a600           push 0xa6e704
// 0045c597  ff15e001a400         call dword ptr [0xa401e0]
// 0045c59d  85c0                 test eax, eax
// 0045c59f  7410                 je 0x45c5b1
// 0045c5a1  6820e7a600           push 0xa6e720
// 0045c5a6  50                   push eax
// 0045c5a7  ff156c03a400         call dword ptr [0xa4036c]
// 0045c5ad  85c0                 test eax, eax
// 0045c5af  7505                 jne 0x45c5b6
// 0045c5b1  a19c0aa400           mov eax, dword ptr [0xa40a9c]
// 0045c5b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045c5ba  56                   push esi
// 0045c5bb  53                   push ebx
// 0045c5bc  51                   push ecx
// 0045c5bd  ffd0                 call eax
// 0045c5bf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0045c5c3  52                   push edx
// 0045c5c4  8bf0                 mov esi, eax
// 0045c5c6  ffd5                 call ebp
// 0045c5c8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0045c5cc  85c0                 test eax, eax
// 0045c5ce  7408                 je 0x45c5d8
// 0045c5d0  8b08                 mov ecx, dword ptr [eax]
// 0045c5d2  8b5108               mov edx, dword ptr [ecx + 8]
// 0045c5d5  50                   push eax
// 0045c5d6  ffd2                 call edx
// 0045c5d8  53                   push ebx
// 0045c5d9  ffd5                 call ebp
// 0045c5db  8bc6                 mov eax, esi
// 0045c5dd  5e                   pop esi
// 0045c5de  5d                   pop ebp
// 0045c5df  5b                   pop ebx
// 0045c5e0  81c410020000         add esp, 0x210
// 0045c5e6  c20800               ret 8
// copied from an identical function in another client (function ?AtlRegisterTypeLib@ATL@@YGJPAUHINSTANCE__@@PB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_nativeatldirabi3272e783e3521ab9.cpp