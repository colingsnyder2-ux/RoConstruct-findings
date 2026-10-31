// roc 2009-12 0044d680  unit: CRbxPlayDocTemplate  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044d680
//
// 0044d680  81ec10020000         sub esp, 0x210
// 0044d686  8b942418020000       mov edx, dword ptr [esp + 0x218]
// 0044d68d  53                   push ebx
// 0044d68e  55                   push ebp
// 0044d68f  56                   push esi
// 0044d690  8d442410             lea eax, [esp + 0x10]
// 0044d694  50                   push eax
// 0044d695  8b842424020000       mov eax, dword ptr [esp + 0x224]
// 0044d69c  8d4c2410             lea ecx, [esp + 0x10]
// 0044d6a0  51                   push ecx
// 0044d6a1  52                   push edx
// 0044d6a2  50                   push eax
// 0044d6a3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0044d6ab  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0044d6b3  e8e8f8ffff           call 0x44cfa0
// 0044d6b8  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0044d6bc  8b2d90ba9800         mov ebp, dword ptr [0x98ba90]
// 0044d6c2  8bf0                 mov esi, eax
// 0044d6c4  85f6                 test esi, esi
// 0044d6c6  0f8cac000000         jl 0x44d778
// 0044d6cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044d6d0  33f6                 xor esi, esi
// 0044d6d2  8d54240c             lea edx, [esp + 0xc]
// 0044d6d6  52                   push edx
// 0044d6d7  56                   push esi
// 0044d6d8  56                   push esi
// 0044d6d9  56                   push esi
// 0044d6da  8974241c             mov dword ptr [esp + 0x1c], esi
// 0044d6de  8b08                 mov ecx, dword ptr [eax]
// 0044d6e0  6aff                 push -1
// 0044d6e2  50                   push eax
// 0044d6e3  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0044d6e6  ffd0                 call eax
// 0044d6e8  85c0                 test eax, eax
// 0044d6ea  7c4d                 jl 0x44d739
// 0044d6ec  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044d6f0  85c0                 test eax, eax
// 0044d6f2  7445                 je 0x44d739
// 0044d6f4  50                   push eax
// 0044d6f5  ff1520ba9800         call dword ptr [0x98ba20]
// 0044d6fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044d6ff  50                   push eax
// 0044d700  51                   push ecx
// 0044d701  8d54241c             lea edx, [esp + 0x1c]
// 0044d705  6804010000           push 0x104
// 0044d70a  52                   push edx
// 0044d70b  ff15e4b79800         call dword ptr [0x98b7e4]
// 0044d711  50                   push eax
// 0044d712  e8d952fbff           call 0x4029f0
// 0044d717  83c414               add esp, 0x14
// 0044d71a  8d4c2414             lea ecx, [esp + 0x14]
// 0044d71e  33c0                 xor eax, eax
// 0044d720  51                   push ecx
// 0044d721  668984241e020000     mov word ptr [esp + 0x21e], ax
// 0044d729  e8e2d9ffff           call 0x44b110
// 0044d72e  33d2                 xor edx, edx
// 0044d730  6689544414           mov word ptr [esp + eax*2 + 0x14], dx
// 0044d735  8d742414             lea esi, [esp + 0x14]
// 0044d739  803d3c95b70001       cmp byte ptr [0xb7953c], 1
// 0044d740  751f                 jne 0x44d761
// 0044d742  6838b49a00           push 0x9ab438
// 0044d747  ff1584b29800         call dword ptr [0x98b284]
// 0044d74d  85c0                 test eax, eax
// 0044d74f  7410                 je 0x44d761
// 0044d751  6854b49a00           push 0x9ab454
// 0044d756  50                   push eax
// 0044d757  ff1520b29800         call dword ptr [0x98b220]
// 0044d75d  85c0                 test eax, eax
// 0044d75f  7505                 jne 0x44d766
// 0044d761  a168ba9800           mov eax, dword ptr [0x98ba68]
// 0044d766  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044d76a  56                   push esi
// 0044d76b  53                   push ebx
// 0044d76c  51                   push ecx
// 0044d76d  ffd0                 call eax
// 0044d76f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0044d773  52                   push edx
// 0044d774  8bf0                 mov esi, eax
// 0044d776  ffd5                 call ebp
// 0044d778  8b442410             mov eax, dword ptr [esp + 0x10]
// 0044d77c  85c0                 test eax, eax
// 0044d77e  7408                 je 0x44d788
// 0044d780  8b08                 mov ecx, dword ptr [eax]
// 0044d782  8b5108               mov edx, dword ptr [ecx + 8]
// 0044d785  50                   push eax
// 0044d786  ffd2                 call edx
// 0044d788  53                   push ebx
// 0044d789  ffd5                 call ebp
// 0044d78b  8bc6                 mov eax, esi
// 0044d78d  5e                   pop esi
// 0044d78e  5d                   pop ebp
// 0044d78f  5b                   pop ebx
// 0044d790  81c410020000         add esp, 0x210
// 0044d796  c20800               ret 8
// copied from an identical function in another client (function ?AtlRegisterTypeLib@ATL@@YGJPAUHINSTANCE__@@PB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_nativeatldirabi3272e783e3521ab9.cpp