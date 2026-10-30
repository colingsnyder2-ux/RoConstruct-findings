// roc 2009-12 0084a8c0  unit: CXTPControlSelector  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a8c0
//
// 0084a8c0  6aff                 push -1
// 0084a8c2  685ad39500           push 0x95d35a
// 0084a8c7  64a100000000         mov eax, dword ptr fs:[0]
// 0084a8cd  50                   push eax
// 0084a8ce  83ec48               sub esp, 0x48
// 0084a8d1  a10052b600           mov eax, dword ptr [0xb65200]
// 0084a8d6  33c4                 xor eax, esp
// 0084a8d8  89442444             mov dword ptr [esp + 0x44], eax
// 0084a8dc  53                   push ebx
// 0084a8dd  56                   push esi
// 0084a8de  a10052b600           mov eax, dword ptr [0xb65200]
// 0084a8e3  33c4                 xor eax, esp
// 0084a8e5  50                   push eax
// 0084a8e6  8d442454             lea eax, [esp + 0x54]
// 0084a8ea  64a300000000         mov dword ptr fs:[0], eax
// 0084a8f0  8b742464             mov esi, dword ptr [esp + 0x64]
// 0084a8f4  6a3c                 push 0x3c
// 0084a8f6  8d442418             lea eax, [esp + 0x18]
// 0084a8fa  6a00                 push 0
// 0084a8fc  50                   push eax
// 0084a8fd  c744246800000000     mov dword ptr [esp + 0x68], 0
// 0084a905  8974241c             mov dword ptr [esp + 0x1c], esi
// 0084a909  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0084a911  e88ea1faff           call 0x7f4aa4
// 0084a916  83c40c               add esp, 0xc
// 0084a919  8d4c2414             lea ecx, [esp + 0x14]
// 0084a91d  51                   push ecx
// 0084a91e  6a3c                 push 0x3c
// 0084a920  6a11                 push 0x11
// 0084a922  ff1590b19800         call dword ptr [0x98b190]
// 0084a928  50                   push eax
// 0084a929  ff155cb19800         call dword ptr [0x98b15c]
// 0084a92f  807c242b02           cmp byte ptr [esp + 0x2b], 2
// 0084a934  0f97c3               seta bl
// 0084a937  84db                 test bl, bl
// 0084a939  7429                 je 0x84a964
// 0084a93b  e8e00dffff           call 0x83b720
// 0084a940  8bc8                 mov ecx, eax
// 0084a942  e8390effff           call 0x83b780
// 0084a947  84c0                 test al, al
// 0084a949  7417                 je 0x84a962
// 0084a94b  8d542430             lea edx, [esp + 0x30]
// 0084a94f  68d4b99f00           push 0x9fb9d4
// 0084a954  52                   push edx
// 0084a955  ff1574b79800         call dword ptr [0x98b774]
// 0084a95b  83c408               add esp, 8
// 0084a95e  85c0                 test eax, eax
// 0084a960  7502                 jne 0x84a964
// 0084a962  32db                 xor bl, bl
// 0084a964  68ccb99f00           push 0x9fb9cc
// 0084a969  8bce                 mov ecx, esi
// 0084a96b  ff15b8de9800         call dword ptr [0x98deb8]
// 0084a971  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0084a979  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0084a981  84db                 test bl, bl
// 0084a983  7534                 jne 0x84a9b9
// 0084a985  8bce                 mov ecx, esi
// 0084a987  ff1580de9800         call dword ptr [0x98de80]
// 0084a98d  50                   push eax
// 0084a98e  e8adfeffff           call 0x84a840
// 0084a993  83c404               add esp, 4
// 0084a996  85c0                 test eax, eax
// 0084a998  741f                 je 0x84a9b9
// 0084a99a  837c246800           cmp dword ptr [esp + 0x68], 0
// 0084a99f  7425                 je 0x84a9c6
// 0084a9a1  68f82f9c00           push 0x9c2ff8
// 0084a9a6  e895feffff           call 0x84a840
// 0084a9ab  83c404               add esp, 4
// 0084a9ae  85c0                 test eax, eax
// 0084a9b0  7414                 je 0x84a9c6
// 0084a9b2  68f82f9c00           push 0x9c2ff8
// 0084a9b7  eb05                 jmp 0x84a9be
// 0084a9b9  8d442430             lea eax, [esp + 0x30]
// 0084a9bd  50                   push eax
// 0084a9be  8bce                 mov ecx, esi
// 0084a9c0  ff155cde9800         call dword ptr [0x98de5c]
// 0084a9c6  8bc6                 mov eax, esi
// 0084a9c8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0084a9cc  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a9d3  59                   pop ecx
// 0084a9d4  5e                   pop esi
// 0084a9d5  5b                   pop ebx
// 0084a9d6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0084a9da  33cc                 xor ecx, esp
// 0084a9dc  e8b9a9faff           call 0x7f539a
// 0084a9e1  83c454               add esp, 0x54
// 0084a9e4  c3                   ret 
// copied from an identical function in another client (function ?GetVerticalFontName@CXTPDrawHelpers@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPDrawHelpers.cpp