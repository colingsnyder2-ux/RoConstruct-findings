// roc 2009-12 006ccc10  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccc10
//
// 006ccc10  51                   push ecx
// 006ccc11  6a28                 push 0x28
// 006ccc13  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccc1b  e8406c1200           call 0x7f3860
// 006ccc20  83c404               add esp, 4
// 006ccc23  85c0                 test eax, eax
// 006ccc25  7432                 je 0x6ccc59
// 006ccc27  c70050789d00         mov dword ptr [eax], 0x9d7850
// 006ccc2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccc31  894808               mov dword ptr [eax + 8], ecx
// 006ccc34  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccc38  89500c               mov dword ptr [eax + 0xc], edx
// 006ccc3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ccc3f  894810               mov dword ptr [eax + 0x10], ecx
// 006ccc42  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ccc46  895018               mov dword ptr [eax + 0x18], edx
// 006ccc49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ccc4d  89481c               mov dword ptr [eax + 0x1c], ecx
// 006ccc50  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ccc54  895020               mov dword ptr [eax + 0x20], edx
// 006ccc57  eb02                 jmp 0x6ccc5b
// 006ccc59  33c0                 xor eax, eax
// 006ccc5b  56                   push esi
// 006ccc5c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ccc60  6a00                 push 0
// 006ccc62  8906                 mov dword ptr [esi], eax
// 006ccc64  e8f16b1200           call 0x7f385a
// 006ccc69  83c404               add esp, 4
// 006ccc6c  8bc6                 mov eax, esi
// 006ccc6e  5e                   pop esi
// 006ccc6f  59                   pop ecx
// 006ccc70  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
