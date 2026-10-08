// roc 2009-06 006676d0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006676d0
//
// 006676d0  51                   push ecx
// 006676d1  6a28                 push 0x28
// 006676d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006676db  e858130b00           call 0x718a38
// 006676e0  83c404               add esp, 4
// 006676e3  85c0                 test eax, eax
// 006676e5  7432                 je 0x667719
// 006676e7  c700ec2d8e00         mov dword ptr [eax], 0x8e2dec
// 006676ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006676f1  894808               mov dword ptr [eax + 8], ecx
// 006676f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006676f8  89500c               mov dword ptr [eax + 0xc], edx
// 006676fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006676ff  894810               mov dword ptr [eax + 0x10], ecx
// 00667702  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667706  895018               mov dword ptr [eax + 0x18], edx
// 00667709  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066770d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00667710  8b542420             mov edx, dword ptr [esp + 0x20]
// 00667714  895020               mov dword ptr [eax + 0x20], edx
// 00667717  eb02                 jmp 0x66771b
// 00667719  33c0                 xor eax, eax
// 0066771b  56                   push esi
// 0066771c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00667720  6a00                 push 0
// 00667722  8906                 mov dword ptr [esi], eax
// 00667724  e809130b00           call 0x718a32
// 00667729  83c404               add esp, 4
// 0066772c  8bc6                 mov eax, esi
// 0066772e  5e                   pop esi
// 0066772f  59                   pop ecx
// 00667730  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
