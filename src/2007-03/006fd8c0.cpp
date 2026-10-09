// roc 2007-03 006fd8c0  unit: seg_006f0000  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006fd8c0
//
// 006fd8c0  83ec08               sub esp, 8
// 006fd8c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fd8c7  8b4808               mov ecx, dword ptr [eax + 8]
// 006fd8ca  2b08                 sub ecx, dword ptr [eax]
// 006fd8cc  57                   push edi
// 006fd8cd  894c2404             mov dword ptr [esp + 4], ecx
// 006fd8d1  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006fd8d4  2b4804               sub ecx, dword ptr [eax + 4]
// 006fd8d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fd8db  33ff                 xor edi, edi
// 006fd8dd  85c9                 test ecx, ecx
// 006fd8df  894c2408             mov dword ptr [esp + 8], ecx
// 006fd8e3  c70000000000         mov dword ptr [eax], 0
// 006fd8e9  c744242001000000     mov dword ptr [esp + 0x20], 1
// 006fd8f1  0f8e9b010000         jle 0x6fda92
// 006fd8f7  53                   push ebx
// 006fd8f8  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 006fd8fc  55                   push ebp
// 006fd8fd  8b2d00d17700         mov ebp, dword ptr [0x77d100]
// 006fd903  56                   push esi
// 006fd904  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fd908  8b5104               mov edx, dword ptr [ecx + 4]
// 006fd90b  57                   push edi
// 006fd90c  33f6                 xor esi, esi
// 006fd90e  56                   push esi
// 006fd90f  52                   push edx
// 006fd910  ffd5                 call ebp
// 006fd912  3bc3                 cmp eax, ebx
// 006fd914  7530                 jne 0x6fd946
// 006fd916  8b442430             mov eax, dword ptr [esp + 0x30]
// 006fd91a  3b30                 cmp esi, dword ptr [eax]
// 006fd91c  7d13                 jge 0x6fd931
// 006fd91e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fd922  8b5104               mov edx, dword ptr [ecx + 4]
// 006fd925  57                   push edi
// 006fd926  83c601               add esi, 1
// 006fd929  56                   push esi
// 006fd92a  52                   push edx
// 006fd92b  ffd5                 call ebp
// 006fd92d  3bc3                 cmp eax, ebx
// 006fd92f  74e5                 je 0x6fd916
// 006fd931  85f6                 test esi, esi
// 006fd933  7e11                 jle 0x6fd946
// 006fd935  8b442420             mov eax, dword ptr [esp + 0x20]
// 006fd939  56                   push esi
// 006fd93a  57                   push edi
// 006fd93b  6a00                 push 0
// 006fd93d  50                   push eax
// 006fd93e  e89dfeffff           call 0x6fd7e0
// 006fd943  83c410               add esp, 0x10
// 006fd946  8b742410             mov esi, dword ptr [esp + 0x10]
// 006fd94a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fd94e  8b5104               mov edx, dword ptr [ecx + 4]
// 006fd951  57                   push edi
// 006fd952  83c6ff               add esi, -1
// 006fd955  56                   push esi
// 006fd956  52                   push edx
// 006fd957  ffd5                 call ebp
// 006fd959  3bc3                 cmp eax, ebx
// 006fd95b  754d                 jne 0x6fd9aa
// 006fd95d  8d4900               lea ecx, [ecx]
// 006fd960  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fd964  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006fd968  2b4108               sub eax, dword ptr [ecx + 8]
// 006fd96b  3bf0                 cmp esi, eax
// 006fd96d  7c13                 jl 0x6fd982
// 006fd96f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006fd973  8b4204               mov eax, dword ptr [edx + 4]
// 006fd976  57                   push edi
// 006fd977  83ee01               sub esi, 1
// 006fd97a  56                   push esi
// 006fd97b  50                   push eax
// 006fd97c  ffd5                 call ebp
// 006fd97e  3bc3                 cmp eax, ebx
// 006fd980  74de                 je 0x6fd960
// 006fd982  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fd986  8d41ff               lea eax, [ecx - 1]
// 006fd989  3bf0                 cmp esi, eax
// 006fd98b  741d                 je 0x6fd9aa
// 006fd98d  8b542430             mov edx, dword ptr [esp + 0x30]
// 006fd991  8b4208               mov eax, dword ptr [edx + 8]
// 006fd994  50                   push eax
// 006fd995  2bc1                 sub eax, ecx
// 006fd997  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006fd99b  57                   push edi
// 006fd99c  8d443001             lea eax, [eax + esi + 1]
// 006fd9a0  50                   push eax
// 006fd9a1  51                   push ecx
// 006fd9a2  e839feffff           call 0x6fd7e0
// 006fd9a7  83c410               add esp, 0x10
// 006fd9aa  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd9ae  8b442430             mov eax, dword ptr [esp + 0x30]
// 006fd9b2  2b5008               sub edx, dword ptr [eax + 8]
// 006fd9b5  3bf2                 cmp esi, edx
// 006fd9b7  7e63                 jle 0x6fda1c
// 006fd9b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fd9bd  8b5104               mov edx, dword ptr [ecx + 4]
// 006fd9c0  57                   push edi
// 006fd9c1  56                   push esi
// 006fd9c2  52                   push edx
// 006fd9c3  ffd5                 call ebp
// 006fd9c5  3bc3                 cmp eax, ebx
// 006fd9c7  7429                 je 0x6fd9f2
// 006fd9c9  8da42400000000       lea esp, [esp]
// 006fd9d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fd9d4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006fd9d8  2b4108               sub eax, dword ptr [ecx + 8]
// 006fd9db  3bf0                 cmp esi, eax
// 006fd9dd  7c13                 jl 0x6fd9f2
// 006fd9df  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006fd9e3  8b4204               mov eax, dword ptr [edx + 4]
// 006fd9e6  57                   push edi
// 006fd9e7  83ee01               sub esi, 1
// 006fd9ea  56                   push esi
// 006fd9eb  50                   push eax
// 006fd9ec  ffd5                 call ebp
// 006fd9ee  3bc3                 cmp eax, ebx
// 006fd9f0  75de                 jne 0x6fd9d0
// 006fd9f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006fd9f6  8b4108               mov eax, dword ptr [ecx + 8]
// 006fd9f9  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fd9fd  2bd0                 sub edx, eax
// 006fd9ff  3bf2                 cmp esi, edx
// 006fda01  7e19                 jle 0x6fda1c
// 006fda03  2b442410             sub eax, dword ptr [esp + 0x10]
// 006fda07  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006fda0b  8d443001             lea eax, [eax + esi + 1]
// 006fda0f  50                   push eax
// 006fda10  57                   push edi
// 006fda11  6a00                 push 0
// 006fda13  51                   push ecx
// 006fda14  e8c7fdffff           call 0x6fd7e0
// 006fda19  83c410               add esp, 0x10
// 006fda1c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006fda21  745f                 je 0x6fda82
// 006fda23  8b542430             mov edx, dword ptr [esp + 0x30]
// 006fda27  8b32                 mov esi, dword ptr [edx]
// 006fda29  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fda2d  8b4804               mov ecx, dword ptr [eax + 4]
// 006fda30  57                   push edi
// 006fda31  56                   push esi
// 006fda32  51                   push ecx
// 006fda33  ffd5                 call ebp
// 006fda35  3bc3                 cmp eax, ebx
// 006fda37  7529                 jne 0x6fda62
// 006fda39  8da42400000000       lea esp, [esp]
// 006fda40  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fda44  8b442430             mov eax, dword ptr [esp + 0x30]
// 006fda48  2b5008               sub edx, dword ptr [eax + 8]
// 006fda4b  3bf2                 cmp esi, edx
// 006fda4d  7d13                 jge 0x6fda62
// 006fda4f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006fda53  8b5104               mov edx, dword ptr [ecx + 4]
// 006fda56  57                   push edi
// 006fda57  83c601               add esi, 1
// 006fda5a  56                   push esi
// 006fda5b  52                   push edx
// 006fda5c  ffd5                 call ebp
// 006fda5e  3bc3                 cmp eax, ebx
// 006fda60  74de                 je 0x6fda40
// 006fda62  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fda66  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006fda6a  2b4108               sub eax, dword ptr [ecx + 8]
// 006fda6d  3bf0                 cmp esi, eax
// 006fda6f  7509                 jne 0x6fda7a
// 006fda71  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fda75  830001               add dword ptr [eax], 1
// 006fda78  eb08                 jmp 0x6fda82
// 006fda7a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006fda82  83c701               add edi, 1
// 006fda85  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 006fda89  0f8c75feffff         jl 0x6fd904
// 006fda8f  5e                   pop esi
// 006fda90  5d                   pop ebp
// 006fda91  5b                   pop ebx
// 006fda92  5f                   pop edi
// 006fda93  83c408               add esp, 8
// 006fda96  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerSchema.cpp (function ?RegionFromBitmap@@YAXPAVCDC@@PAVCRgn@@1AAHABVCRect@@3K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerSchema.cpp
