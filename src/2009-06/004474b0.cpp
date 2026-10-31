// roc 2009-06 004474b0  unit: CBrowserDocManager  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004474b0
//
// 004474b0  81ec10020000         sub esp, 0x210
// 004474b6  8b942418020000       mov edx, dword ptr [esp + 0x218]
// 004474bd  53                   push ebx
// 004474be  55                   push ebp
// 004474bf  56                   push esi
// 004474c0  8d442410             lea eax, [esp + 0x10]
// 004474c4  50                   push eax
// 004474c5  8b842424020000       mov eax, dword ptr [esp + 0x224]
// 004474cc  8d4c2410             lea ecx, [esp + 0x10]
// 004474d0  51                   push ecx
// 004474d1  52                   push edx
// 004474d2  50                   push eax
// 004474d3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004474db  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004474e3  e8e8f8ffff           call 0x446dd0
// 004474e8  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004474ec  8b2d3cea8900         mov ebp, dword ptr [0x89ea3c]
// 004474f2  8bf0                 mov esi, eax
// 004474f4  85f6                 test esi, esi
// 004474f6  0f8cac000000         jl 0x4475a8
// 004474fc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00447500  33f6                 xor esi, esi
// 00447502  8d54240c             lea edx, [esp + 0xc]
// 00447506  52                   push edx
// 00447507  56                   push esi
// 00447508  56                   push esi
// 00447509  56                   push esi
// 0044750a  8974241c             mov dword ptr [esp + 0x1c], esi
// 0044750e  8b08                 mov ecx, dword ptr [eax]
// 00447510  6aff                 push -1
// 00447512  50                   push eax
// 00447513  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00447516  ffd0                 call eax
// 00447518  85c0                 test eax, eax
// 0044751a  7c4d                 jl 0x447569
// 0044751c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00447520  85c0                 test eax, eax
// 00447522  7445                 je 0x447569
// 00447524  50                   push eax
// 00447525  ff1550ea8900         call dword ptr [0x89ea50]
// 0044752b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044752f  50                   push eax
// 00447530  51                   push ecx
// 00447531  8d54241c             lea edx, [esp + 0x1c]
// 00447535  6804010000           push 0x104
// 0044753a  52                   push edx
// 0044753b  ff1534e98900         call dword ptr [0x89e934]
// 00447541  50                   push eax
// 00447542  e8d9b7fbff           call 0x402d20
// 00447547  83c414               add esp, 0x14
// 0044754a  8d4c2414             lea ecx, [esp + 0x14]
// 0044754e  33c0                 xor eax, eax
// 00447550  51                   push ecx
// 00447551  668984241e020000     mov word ptr [esp + 0x21e], ax
// 00447559  e812d9ffff           call 0x444e70
// 0044755e  33d2                 xor edx, edx
// 00447560  6689544414           mov word ptr [esp + eax*2 + 0x14], dx
// 00447565  8d742414             lea esi, [esp + 0x14]
// 00447569  803d5497a30001       cmp byte ptr [0xa39754], 1
// 00447570  751f                 jne 0x447591
// 00447572  68c8718b00           push 0x8b71c8
// 00447577  ff1558e28900         call dword ptr [0x89e258]
// 0044757d  85c0                 test eax, eax
// 0044757f  7410                 je 0x447591
// 00447581  68e4718b00           push 0x8b71e4
// 00447586  50                   push eax
// 00447587  ff15e8e18900         call dword ptr [0x89e1e8]
// 0044758d  85c0                 test eax, eax
// 0044758f  7505                 jne 0x447596
// 00447591  a108ea8900           mov eax, dword ptr [0x89ea08]
// 00447596  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044759a  56                   push esi
// 0044759b  53                   push ebx
// 0044759c  51                   push ecx
// 0044759d  ffd0                 call eax
// 0044759f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004475a3  52                   push edx
// 004475a4  8bf0                 mov esi, eax
// 004475a6  ffd5                 call ebp
// 004475a8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004475ac  85c0                 test eax, eax
// 004475ae  7408                 je 0x4475b8
// 004475b0  8b08                 mov ecx, dword ptr [eax]
// 004475b2  8b5108               mov edx, dword ptr [ecx + 8]
// 004475b5  50                   push eax
// 004475b6  ffd2                 call edx
// 004475b8  53                   push ebx
// 004475b9  ffd5                 call ebp
// 004475bb  8bc6                 mov eax, esi
// 004475bd  5e                   pop esi
// 004475be  5d                   pop ebp
// 004475bf  5b                   pop ebx
// 004475c0  81c410020000         add esp, 0x210
// 004475c6  c20800               ret 8
// copied from an identical function in another client (function ?AtlRegisterTypeLib@ATL@@YGJPAUHINSTANCE__@@PB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_nativeatldirabi3272e783e3521ab9.cpp