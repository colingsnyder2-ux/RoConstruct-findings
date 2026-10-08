// roc 2009-12 007deb20  unit: RBX::ContactStage  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007deb20
//
// 007deb20  53                   push ebx
// 007deb21  55                   push ebp
// 007deb22  56                   push esi
// 007deb23  8bf1                 mov esi, ecx
// 007deb25  807e0400             cmp byte ptr [esi + 4], 0
// 007deb29  57                   push edi
// 007deb2a  8b3e                 mov edi, dword ptr [esi]
// 007deb2c  8b1f                 mov ebx, dword ptr [edi]
// 007deb2e  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 007deb31  7430                 je 0x7deb63
// 007deb33  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 007deb38  740a                 je 0x7deb44
// 007deb3a  8b442414             mov eax, dword ptr [esp + 0x14]
// 007deb3e  8b08                 mov ecx, dword ptr [eax]
// 007deb40  8bc3                 mov eax, ebx
// 007deb42  eb08                 jmp 0x7deb4c
// 007deb44  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007deb48  8b09                 mov ecx, dword ptr [ecx]
// 007deb4a  8bc5                 mov eax, ebp
// 007deb4c  2bc1                 sub eax, ecx
// 007deb4e  85c0                 test eax, eax
// 007deb50  7611                 jbe 0x7deb63
// 007deb52  8b5608               mov edx, dword ptr [esi + 8]
// 007deb55  50                   push eax
// 007deb56  51                   push ecx
// 007deb57  52                   push edx
// 007deb58  e8433ee3ff           call 0x6129a0
// 007deb5d  83c40c               add esp, 0xc
// 007deb60  894608               mov dword ptr [esi + 8], eax
// 007deb63  8b4708               mov eax, dword ptr [edi + 8]
// 007deb66  8b542414             mov edx, dword ptr [esp + 0x14]
// 007deb6a  89460c               mov dword ptr [esi + 0xc], eax
// 007deb6d  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 007deb70  8b442418             mov eax, dword ptr [esp + 0x18]
// 007deb74  5f                   pop edi
// 007deb75  894e10               mov dword ptr [esi + 0x10], ecx
// 007deb78  891a                 mov dword ptr [edx], ebx
// 007deb7a  5e                   pop esi
// 007deb7b  8928                 mov dword ptr [eax], ebp
// 007deb7d  5d                   pop ebp
// 007deb7e  5b                   pop ebx
// 007deb7f  c20c00               ret 0xc
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?after@zlib_base@detail@iostreams@boost@@IAEXAAPBDAAPAD_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
