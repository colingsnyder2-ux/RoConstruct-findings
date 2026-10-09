// roc 2009-12 006ccdd0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccdd0
//
// 006ccdd0  51                   push ecx
// 006ccdd1  6a28                 push 0x28
// 006ccdd3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccddb  e8806a1200           call 0x7f3860
// 006ccde0  83c404               add esp, 4
// 006ccde3  85c0                 test eax, eax
// 006ccde5  7432                 je 0x6cce19
// 006ccde7  c700b0789d00         mov dword ptr [eax], 0x9d78b0
// 006ccded  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccdf1  894808               mov dword ptr [eax + 8], ecx
// 006ccdf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccdf8  89500c               mov dword ptr [eax + 0xc], edx
// 006ccdfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccdff  894810               mov dword ptr [eax + 0x10], ecx
// 006cce02  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cce06  895018               mov dword ptr [eax + 0x18], edx
// 006cce09  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006cce0d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006cce10  8b542420             mov edx, dword ptr [esp + 0x20]
// 006cce14  895020               mov dword ptr [eax + 0x20], edx
// 006cce17  eb02                 jmp 0x6cce1b
// 006cce19  33c0                 xor eax, eax
// 006cce1b  56                   push esi
// 006cce1c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cce20  6a00                 push 0
// 006cce22  8906                 mov dword ptr [esi], eax
// 006cce24  e8316a1200           call 0x7f385a
// 006cce29  83c404               add esp, 4
// 006cce2c  8bc6                 mov eax, esi
// 006cce2e  5e                   pop esi
// 006cce2f  59                   pop ecx
// 006cce30  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
