// roc 2010-06 006194b0  unit: RBX::VHat::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006194b0
//
// 006194b0  51                   push ecx
// 006194b1  6a28                 push 0x28
// 006194b3  c744240400000000     mov dword ptr [esp + 4], 0
// 006194bb  e8e0e41800           call 0x7a79a0
// 006194c0  83c404               add esp, 4
// 006194c3  85c0                 test eax, eax
// 006194c5  7432                 je 0x6194f9
// 006194c7  c7001c1ca300         mov dword ptr [eax], 0xa31c1c
// 006194cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006194d1  894808               mov dword ptr [eax + 8], ecx
// 006194d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006194d8  89500c               mov dword ptr [eax + 0xc], edx
// 006194db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006194df  894810               mov dword ptr [eax + 0x10], ecx
// 006194e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006194e6  895018               mov dword ptr [eax + 0x18], edx
// 006194e9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006194ed  89481c               mov dword ptr [eax + 0x1c], ecx
// 006194f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006194f4  895020               mov dword ptr [eax + 0x20], edx
// 006194f7  eb02                 jmp 0x6194fb
// 006194f9  33c0                 xor eax, eax
// 006194fb  56                   push esi
// 006194fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00619500  6a00                 push 0
// 00619502  8906                 mov dword ptr [esi], eax
// 00619504  e891e41800           call 0x7a799a
// 00619509  83c404               add esp, 4
// 0061950c  8bc6                 mov eax, esi
// 0061950e  5e                   pop esi
// 0061950f  59                   pop ecx
// 00619510  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
