// roc 2009-12 006ccc80  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ccc80
//
// 006ccc80  51                   push ecx
// 006ccc81  6a28                 push 0x28
// 006ccc83  c744240400000000     mov dword ptr [esp + 4], 0
// 006ccc8b  e8d06b1200           call 0x7f3860
// 006ccc90  83c404               add esp, 4
// 006ccc93  85c0                 test eax, eax
// 006ccc95  7432                 je 0x6cccc9
// 006ccc97  c70068789d00         mov dword ptr [eax], 0x9d7868
// 006ccc9d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ccca1  894808               mov dword ptr [eax + 8], ecx
// 006ccca4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ccca8  89500c               mov dword ptr [eax + 0xc], edx
// 006cccab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cccaf  894810               mov dword ptr [eax + 0x10], ecx
// 006cccb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cccb6  895018               mov dword ptr [eax + 0x18], edx
// 006cccb9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006cccbd  89481c               mov dword ptr [eax + 0x1c], ecx
// 006cccc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006cccc4  895020               mov dword ptr [eax + 0x20], edx
// 006cccc7  eb02                 jmp 0x6ccccb
// 006cccc9  33c0                 xor eax, eax
// 006ccccb  56                   push esi
// 006ccccc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006cccd0  6a00                 push 0
// 006cccd2  8906                 mov dword ptr [esi], eax
// 006cccd4  e8816b1200           call 0x7f385a
// 006cccd9  83c404               add esp, 4
// 006cccdc  8bc6                 mov eax, esi
// 006cccde  5e                   pop esi
// 006cccdf  59                   pop ecx
// 006ccce0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
