// roc 2007-08 006002b0  unit: RBX::BlockBlockContact  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006002b0
//
// 006002b0  6aff                 push -1
// 006002b2  6838877500           push 0x758738
// 006002b7  64a100000000         mov eax, dword ptr fs:[0]
// 006002bd  50                   push eax
// 006002be  64892500000000       mov dword ptr fs:[0], esp
// 006002c5  83ec14               sub esp, 0x14
// 006002c8  53                   push ebx
// 006002c9  56                   push esi
// 006002ca  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006002ce  8b06                 mov eax, dword ptr [esi]
// 006002d0  8bd9                 mov ebx, ecx
// 006002d2  8b4e04               mov ecx, dword ptr [esi + 4]
// 006002d5  57                   push edi
// 006002d6  8d0c88               lea ecx, [eax + ecx*4]
// 006002d9  51                   push ecx
// 006002da  50                   push eax
// 006002db  8d4c241c             lea ecx, [esp + 0x1c]
// 006002df  e8ecfeffff           call 0x6001d0
// 006002e4  33ff                 xor edi, edi
// 006002e6  397e04               cmp dword ptr [esi + 4], edi
// 006002e9  897c2428             mov dword ptr [esp + 0x28], edi
// 006002ed  7e29                 jle 0x600318
// 006002ef  90                   nop 
// 006002f0  8b16                 mov edx, dword ptr [esi]
// 006002f2  d9442434             fld dword ptr [esp + 0x34]
// 006002f6  51                   push ecx
// 006002f7  8d04ba               lea eax, [edx + edi*4]
// 006002fa  d91c24               fstp dword ptr [esp]
// 006002fd  8b10                 mov edx, dword ptr [eax]
// 006002ff  8d4c2418             lea ecx, [esp + 0x18]
// 00600303  51                   push ecx
// 00600304  52                   push edx
// 00600305  8bcb                 mov ecx, ebx
// 00600307  e824f7ffff           call 0x5ffa30
// 0060030c  84c0                 test al, al
// 0060030e  754d                 jne 0x60035d
// 00600310  83c701               add edi, 1
// 00600313  3b7e04               cmp edi, dword ptr [esi + 4]
// 00600316  7cd8                 jl 0x6002f0
// 00600318  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060031c  8b10                 mov edx, dword ptr [eax]
// 0060031e  50                   push eax
// 0060031f  8d4c2418             lea ecx, [esp + 0x18]
// 00600323  51                   push ecx
// 00600324  52                   push edx
// 00600325  8bf1                 mov esi, ecx
// 00600327  56                   push esi
// 00600328  8d54241c             lea edx, [esp + 0x1c]
// 0060032c  52                   push edx
// 0060032d  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00600335  e82637fbff           call 0x5b3a60
// 0060033a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060033e  50                   push eax
// 0060033f  e81ef90200           call 0x62fc62
// 00600344  83c404               add esp, 4
// 00600347  5f                   pop edi
// 00600348  5e                   pop esi
// 00600349  32c0                 xor al, al
// 0060034b  5b                   pop ebx
// 0060034c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00600350  64890d00000000       mov dword ptr fs:[0], ecx
// 00600357  83c420               add esp, 0x20
// 0060035a  c20800               ret 8
// 0060035d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00600361  8b10                 mov edx, dword ptr [eax]
// 00600363  50                   push eax
// 00600364  8d4c2418             lea ecx, [esp + 0x18]
// 00600368  51                   push ecx
// 00600369  52                   push edx
// 0060036a  8bf1                 mov esi, ecx
// 0060036c  56                   push esi
// 0060036d  8d44241c             lea eax, [esp + 0x1c]
// 00600371  50                   push eax
// 00600372  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0060037a  e8e136fbff           call 0x5b3a60
// 0060037f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00600383  51                   push ecx
// 00600384  e8d9f80200           call 0x62fc62
// 00600389  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060038d  83c404               add esp, 4
// 00600390  5f                   pop edi
// 00600391  5e                   pop esi
// 00600392  b001                 mov al, 1
// 00600394  5b                   pop ebx
// 00600395  64890d00000000       mov dword ptr fs:[0], ecx
// 0060039c  83c420               add esp, 0x20
// 0060039f  c20800               ret 8
// library rbxgs/v8world\ContactManager.cpp (function ?intersectingOthers@ContactManager@RBX@@QAE_NABV?$Array@PAVPrimitive@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
