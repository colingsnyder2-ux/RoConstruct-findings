// roc 2007-03 0062bd30  unit: seg_00620000  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062bd30
//
// 0062bd30  83ec14               sub esp, 0x14
// 0062bd33  53                   push ebx
// 0062bd34  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0062bd38  55                   push ebp
// 0062bd39  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0062bd3d  56                   push esi
// 0062bd3e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0062bd42  85f6                 test esi, esi
// 0062bd44  57                   push edi
// 0062bd45  894c2410             mov dword ptr [esp + 0x10], ecx
// 0062bd49  0f8486000000         je 0x62bdd5
// 0062bd4f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0062bd52  8d442414             lea eax, [esp + 0x14]
// 0062bd56  50                   push eax
// 0062bd57  51                   push ecx
// 0062bd58  ff155ced7700         call dword ptr [0x77ed5c]
// 0062bd5e  8b4654               mov eax, dword ptr [esi + 0x54]
// 0062bd61  a900a00000           test eax, 0xa000
// 0062bd66  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0062bd6a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0062bd6e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062bd72  743a                 je 0x62bdae
// 0062bd74  8d5fec               lea ebx, [edi - 0x14]
// 0062bd77  3bdd                 cmp ebx, ebp
// 0062bd79  7d29                 jge 0x62bda4
// 0062bd7b  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0062bd7f  83c314               add ebx, 0x14
// 0062bd82  3bdd                 cmp ebx, ebp
// 0062bd84  7e1e                 jle 0x62bda4
// 0062bd86  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0062bd8a  8d69ec               lea ebp, [ecx - 0x14]
// 0062bd8d  3beb                 cmp ebp, ebx
// 0062bd8f  7d19                 jge 0x62bdaa
// 0062bd91  8d6a14               lea ebp, [edx + 0x14]
// 0062bd94  3beb                 cmp ebp, ebx
// 0062bd96  7e12                 jle 0x62bdaa
// 0062bd98  5f                   pop edi
// 0062bd99  8bc6                 mov eax, esi
// 0062bd9b  5e                   pop esi
// 0062bd9c  5d                   pop ebp
// 0062bd9d  5b                   pop ebx
// 0062bd9e  83c414               add esp, 0x14
// 0062bda1  c20c00               ret 0xc
// 0062bda4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0062bda8  eb04                 jmp 0x62bdae
// 0062bdaa  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0062bdae  a900500000           test eax, 0x5000
// 0062bdb3  7420                 je 0x62bdd5
// 0062bdb5  83c1ec               add ecx, -0x14
// 0062bdb8  3bcb                 cmp ecx, ebx
// 0062bdba  7d19                 jge 0x62bdd5
// 0062bdbc  83c214               add edx, 0x14
// 0062bdbf  3bd3                 cmp edx, ebx
// 0062bdc1  7e12                 jle 0x62bdd5
// 0062bdc3  83c7ec               add edi, -0x14
// 0062bdc6  3bfd                 cmp edi, ebp
// 0062bdc8  7d0b                 jge 0x62bdd5
// 0062bdca  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062bdce  83c214               add edx, 0x14
// 0062bdd1  3bd5                 cmp edx, ebp
// 0062bdd3  7fc3                 jg 0x62bd98
// 0062bdd5  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062bdd9  33ff                 xor edi, edi
// 0062bddb  81c690000000         add esi, 0x90
// 0062bde1  8b0e                 mov ecx, dword ptr [esi]
// 0062bde3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0062bde6  8d442414             lea eax, [esp + 0x14]
// 0062bdea  50                   push eax
// 0062bdeb  52                   push edx
// 0062bdec  ff155ced7700         call dword ptr [0x77ed5c]
// 0062bdf2  8b06                 mov eax, dword ptr [esi]
// 0062bdf4  8b4054               mov eax, dword ptr [eax + 0x54]
// 0062bdf7  a900a00000           test eax, 0xa000
// 0062bdfc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0062be00  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062be04  742c                 je 0x62be32
// 0062be06  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0062be0a  83c3ec               add ebx, -0x14
// 0062be0d  3bdd                 cmp ebx, ebp
// 0062be0f  7d67                 jge 0x62be78
// 0062be11  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0062be15  83c314               add ebx, 0x14
// 0062be18  3bdd                 cmp ebx, ebp
// 0062be1a  7e5c                 jle 0x62be78
// 0062be1c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0062be20  8d69ec               lea ebp, [ecx - 0x14]
// 0062be23  3beb                 cmp ebp, ebx
// 0062be25  7d07                 jge 0x62be2e
// 0062be27  8d6a14               lea ebp, [edx + 0x14]
// 0062be2a  3beb                 cmp ebp, ebx
// 0062be2c  7f50                 jg 0x62be7e
// 0062be2e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0062be32  a900500000           test eax, 0x5000
// 0062be37  7424                 je 0x62be5d
// 0062be39  83c1ec               add ecx, -0x14
// 0062be3c  3bcb                 cmp ecx, ebx
// 0062be3e  7d1d                 jge 0x62be5d
// 0062be40  83c214               add edx, 0x14
// 0062be43  3bd3                 cmp edx, ebx
// 0062be45  7e16                 jle 0x62be5d
// 0062be47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062be4b  83c1ec               add ecx, -0x14
// 0062be4e  3bcd                 cmp ecx, ebp
// 0062be50  7d0b                 jge 0x62be5d
// 0062be52  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062be56  83c214               add edx, 0x14
// 0062be59  3bd5                 cmp edx, ebp
// 0062be5b  7f36                 jg 0x62be93
// 0062be5d  83c701               add edi, 1
// 0062be60  83c604               add esi, 4
// 0062be63  83ff04               cmp edi, 4
// 0062be66  0f8c75ffffff         jl 0x62bde1
// 0062be6c  5f                   pop edi
// 0062be6d  5e                   pop esi
// 0062be6e  5d                   pop ebp
// 0062be6f  33c0                 xor eax, eax
// 0062be71  5b                   pop ebx
// 0062be72  83c414               add esp, 0x14
// 0062be75  c20c00               ret 0xc
// 0062be78  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0062be7c  ebb4                 jmp 0x62be32
// 0062be7e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062be82  8b84b890000000       mov eax, dword ptr [eax + edi*4 + 0x90]
// 0062be89  5f                   pop edi
// 0062be8a  5e                   pop esi
// 0062be8b  5d                   pop ebp
// 0062be8c  5b                   pop ebx
// 0062be8d  83c414               add esp, 0x14
// 0062be90  c20c00               ret 0xc
// 0062be93  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062be97  8b84b990000000       mov eax, dword ptr [ecx + edi*4 + 0x90]
// 0062be9e  5f                   pop edi
// 0062be9f  5e                   pop esi
// 0062bea0  5d                   pop ebp
// 0062bea1  5b                   pop ebx
// 0062bea2  83c414               add esp, 0x14
// 0062bea5  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?CanDock@CXTPCommandBars@@QBEPAVCXTPDockBar@@VCPoint@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
