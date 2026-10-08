// roc 2008-06 005fddb0  unit: RBX::Tool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fddb0
//
// 005fddb0  51                   push ecx
// 005fddb1  6a28                 push 0x28
// 005fddb3  c744240400000000     mov dword ptr [esp + 4], 0
// 005fddbb  e8602b0a00           call 0x6a0920
// 005fddc0  83c404               add esp, 4
// 005fddc3  85c0                 test eax, eax
// 005fddc5  743a                 je 0x5fde01
// 005fddc7  c70010188400         mov dword ptr [eax], 0x841810
// 005fddcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fddd1  894808               mov dword ptr [eax + 8], ecx
// 005fddd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fddd8  89500c               mov dword ptr [eax + 0xc], edx
// 005fdddb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fdddf  894810               mov dword ptr [eax + 0x10], ecx
// 005fdde2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005fdde6  895018               mov dword ptr [eax + 0x18], edx
// 005fdde9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fdded  89481c               mov dword ptr [eax + 0x1c], ecx
// 005fddf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fddf4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005fddf8  895020               mov dword ptr [eax + 0x20], edx
// 005fddfb  8901                 mov dword ptr [ecx], eax
// 005fddfd  8bc1                 mov eax, ecx
// 005fddff  59                   pop ecx
// 005fde00  c3                   ret 
// 005fde01  8b442408             mov eax, dword ptr [esp + 8]
// 005fde05  33c9                 xor ecx, ecx
// 005fde07  8908                 mov dword ptr [eax], ecx
// 005fde09  59                   pop ecx
// 005fde0a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
