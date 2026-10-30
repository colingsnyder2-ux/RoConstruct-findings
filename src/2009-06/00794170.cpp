// roc 2009-06 00794170  unit: PAVCXTPCommandBar::?$CArray  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00794170
//
// 00794170  83ec14               sub esp, 0x14
// 00794173  8b442420             mov eax, dword ptr [esp + 0x20]
// 00794177  53                   push ebx
// 00794178  55                   push ebp
// 00794179  56                   push esi
// 0079417a  57                   push edi
// 0079417b  8bf1                 mov esi, ecx
// 0079417d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00794181  50                   push eax
// 00794182  51                   push ecx
// 00794183  ff1534ef8900         call dword ptr [0x89ef34]
// 00794189  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0079418c  83eb01               sub ebx, 1
// 0079418f  89442410             mov dword ptr [esp + 0x10], eax
// 00794193  7870                 js 0x794205
// 00794195  8b2d08ef8900         mov ebp, dword ptr [0x89ef08]
// 0079419b  eb03                 jmp 0x7941a0
// 0079419d  8d4900               lea ecx, [ecx]
// 007941a0  85db                 test ebx, ebx
// 007941a2  0f8c6e010000         jl 0x794316
// 007941a8  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 007941ab  0f8d65010000         jge 0x794316
// 007941b1  8b560c               mov edx, dword ptr [esi + 0xc]
// 007941b4  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 007941b7  85ff                 test edi, edi
// 007941b9  7445                 je 0x794200
// 007941bb  837f2000             cmp dword ptr [edi + 0x20], 0
// 007941bf  743f                 je 0x794200
// 007941c1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007941c5  83ec08               sub esp, 8
// 007941c8  8bc4                 mov eax, esp
// 007941ca  8908                 mov dword ptr [eax], ecx
// 007941cc  8b542438             mov edx, dword ptr [esp + 0x38]
// 007941d0  895004               mov dword ptr [eax + 4], edx
// 007941d3  8b07                 mov eax, dword ptr [edi]
// 007941d5  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 007941db  8bcf                 mov ecx, edi
// 007941dd  ffd2                 call edx
// 007941df  83f8fe               cmp eax, -2
// 007941e2  741c                 je 0x794200
// 007941e4  83f801               cmp eax, 1
// 007941e7  0f84e8000000         je 0x7942d5
// 007941ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007941f1  8b4720               mov eax, dword ptr [edi + 0x20]
// 007941f4  51                   push ecx
// 007941f5  50                   push eax
// 007941f6  ffd5                 call ebp
// 007941f8  85c0                 test eax, eax
// 007941fa  0f85d5000000         jne 0x7942d5
// 00794200  83eb01               sub ebx, 1
// 00794203  799b                 jns 0x7941a0
// 00794205  837e1000             cmp dword ptr [esi + 0x10], 0
// 00794209  7e64                 jle 0x79426f
// 0079420b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0079420e  33ff                 xor edi, edi
// 00794210  85c0                 test eax, eax
// 00794212  7e5b                 jle 0x79426f
// 00794214  8b2de0ed8900         mov ebp, dword ptr [0x89ede0]
// 0079421a  8d9b00000000         lea ebx, [ebx]
// 00794220  85ff                 test edi, edi
// 00794222  0f8cee000000         jl 0x794316
// 00794228  3bf8                 cmp edi, eax
// 0079422a  0f8de6000000         jge 0x794316
// 00794230  8b5630               mov edx, dword ptr [esi + 0x30]
// 00794233  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 00794236  53                   push ebx
// 00794237  ffd5                 call ebp
// 00794239  85c0                 test eax, eax
// 0079423b  742a                 je 0x794267
// 0079423d  53                   push ebx
// 0079423e  ff15c8ed8900         call dword ptr [0x89edc8]
// 00794244  85c0                 test eax, eax
// 00794246  741f                 je 0x794267
// 00794248  53                   push ebx
// 00794249  8d4c2418             lea ecx, [esp + 0x18]
// 0079424d  e8eec1fdff           call 0x770440
// 00794252  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00794256  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079425a  51                   push ecx
// 0079425b  52                   push edx
// 0079425c  50                   push eax
// 0079425d  ff15c0ed8900         call dword ptr [0x89edc0]
// 00794263  85c0                 test eax, eax
// 00794265  7562                 jne 0x7942c9
// 00794267  8b4634               mov eax, dword ptr [esi + 0x34]
// 0079426a  47                   inc edi
// 0079426b  3bf8                 cmp edi, eax
// 0079426d  7cb1                 jl 0x794220
// 0079426f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00794273  85c0                 test eax, eax
// 00794275  7416                 je 0x79428d
// 00794277  837e1000             cmp dword ptr [esi + 0x10], 0
// 0079427b  7e10                 jle 0x79428d
// 0079427d  6ae6                 push -0x1a
// 0079427f  50                   push eax
// 00794280  ff1570ec8900         call dword ptr [0x89ec70]
// 00794286  a900000100           test eax, 0x10000
// 0079428b  753c                 jne 0x7942c9
// 0079428d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00794290  33ff                 xor edi, edi
// 00794292  85c0                 test eax, eax
// 00794294  7e33                 jle 0x7942c9
// 00794296  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0079429a  8d9b00000000         lea ebx, [ebx]
// 007942a0  85ff                 test edi, edi
// 007942a2  7c72                 jl 0x794316
// 007942a4  3bf8                 cmp edi, eax
// 007942a6  7d6e                 jge 0x794316
// 007942a8  8b442430             mov eax, dword ptr [esp + 0x30]
// 007942ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007942b0  8b560c               mov edx, dword ptr [esi + 0xc]
// 007942b3  50                   push eax
// 007942b4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007942b7  51                   push ecx
// 007942b8  53                   push ebx
// 007942b9  50                   push eax
// 007942ba  8bce                 mov ecx, esi
// 007942bc  e8effdffff           call 0x7940b0
// 007942c1  8b4610               mov eax, dword ptr [esi + 0x10]
// 007942c4  47                   inc edi
// 007942c5  3bf8                 cmp edi, eax
// 007942c7  7cd7                 jl 0x7942a0
// 007942c9  33c0                 xor eax, eax
// 007942cb  5f                   pop edi
// 007942cc  5e                   pop esi
// 007942cd  5d                   pop ebp
// 007942ce  5b                   pop ebx
// 007942cf  83c414               add esp, 0x14
// 007942d2  c20c00               ret 0xc
// 007942d5  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 007942dc  7eeb                 jle 0x7942c9
// 007942de  8b442428             mov eax, dword ptr [esp + 0x28]
// 007942e2  3d00020000           cmp eax, 0x200
// 007942e7  74e0                 je 0x7942c9
// 007942e9  3da0000000           cmp eax, 0xa0
// 007942ee  74d9                 je 0x7942c9
// 007942f0  837e4000             cmp dword ptr [esi + 0x40], 0
// 007942f4  75d3                 jne 0x7942c9
// 007942f6  8bce                 mov ecx, esi
// 007942f8  e843fdffff           call 0x794040
// 007942fd  5f                   pop edi
// 007942fe  5e                   pop esi
// 007942ff  33c0                 xor eax, eax
// 00794301  33c9                 xor ecx, ecx
// 00794303  5d                   pop ebp
// 00794304  a39826a500           mov dword ptr [0xa52698], eax
// 00794309  890d9c26a500         mov dword ptr [0xa5269c], ecx
// 0079430f  5b                   pop ebx
// 00794310  83c414               add esp, 0x14
// 00794313  c20c00               ret 0xc
// 00794316  e8c949f8ff           call 0x718ce4
// copied from an identical function in another client (function ?PreTranslateMouseEvents@CXTPMouseManager@@AAEHIUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp