// roc 2009-12 006e46c0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e46c0
//
// 006e46c0  51                   push ecx
// 006e46c1  6a28                 push 0x28
// 006e46c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006e46cb  e890f11000           call 0x7f3860
// 006e46d0  83c404               add esp, 4
// 006e46d3  85c0                 test eax, eax
// 006e46d5  7432                 je 0x6e4709
// 006e46d7  c700bcac9d00         mov dword ptr [eax], 0x9dacbc
// 006e46dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e46e1  894808               mov dword ptr [eax + 8], ecx
// 006e46e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e46e8  89500c               mov dword ptr [eax + 0xc], edx
// 006e46eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e46ef  894810               mov dword ptr [eax + 0x10], ecx
// 006e46f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006e46f6  895018               mov dword ptr [eax + 0x18], edx
// 006e46f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e46fd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006e4700  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e4704  895020               mov dword ptr [eax + 0x20], edx
// 006e4707  eb02                 jmp 0x6e470b
// 006e4709  33c0                 xor eax, eax
// 006e470b  56                   push esi
// 006e470c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e4710  6a00                 push 0
// 006e4712  8906                 mov dword ptr [esi], eax
// 006e4714  e841f11000           call 0x7f385a
// 006e4719  83c404               add esp, 4
// 006e471c  8bc6                 mov eax, esi
// 006e471e  5e                   pop esi
// 006e471f  59                   pop ecx
// 006e4720  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
