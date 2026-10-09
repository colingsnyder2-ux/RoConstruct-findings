// roc 2009-12 006ccee0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccee0
//
// 006ccee0  51                   push ecx
// 006ccee1  6a28                 push 0x28
// 006ccee3  c744240400000000     mov dword ptr [esp + 4], 0
// 006cceeb  e870691200           call 0x7f3860
// 006ccef0  83c404               add esp, 4
// 006ccef3  85c0                 test eax, eax
// 006ccef5  7432                 je 0x6ccf29
// 006ccef7  c700f8789d00         mov dword ptr [eax], 0x9d78f8
// 006ccefd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccf01  894808               mov dword ptr [eax + 8], ecx
// 006ccf04  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccf08  89500c               mov dword ptr [eax + 0xc], edx
// 006ccf0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccf0f  894810               mov dword ptr [eax + 0x10], ecx
// 006ccf12  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccf16  895018               mov dword ptr [eax + 0x18], edx
// 006ccf19  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccf1d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccf20  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccf24  895020               mov dword ptr [eax + 0x20], edx
// 006ccf27  eb02                 jmp 0x6ccf2b
// 006ccf29  33c0                 xor eax, eax
// 006ccf2b  56                   push esi
// 006ccf2c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccf30  6a00                 push 0
// 006ccf32  8906                 mov dword ptr [esi], eax
// 006ccf34  e821691200           call 0x7f385a
// 006ccf39  83c404               add esp, 4
// 006ccf3c  8bc6                 mov eax, esi
// 006ccf3e  5e                   pop esi
// 006ccf3f  59                   pop ecx
// 006ccf40  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
