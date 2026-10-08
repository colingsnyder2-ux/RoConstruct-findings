// roc 2010-06 0066d960  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066d960
//
// 0066d960  51                   push ecx
// 0066d961  6a28                 push 0x28
// 0066d963  c744240400000000     mov dword ptr [esp + 4], 0
// 0066d96b  e830a01300           call 0x7a79a0
// 0066d970  83c404               add esp, 4
// 0066d973  85c0                 test eax, eax
// 0066d975  7432                 je 0x66d9a9
// 0066d977  c70040c8a300         mov dword ptr [eax], 0xa3c840
// 0066d97d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066d981  894808               mov dword ptr [eax + 8], ecx
// 0066d984  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066d988  89500c               mov dword ptr [eax + 0xc], edx
// 0066d98b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d98f  894810               mov dword ptr [eax + 0x10], ecx
// 0066d992  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066d996  895018               mov dword ptr [eax + 0x18], edx
// 0066d999  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066d99d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066d9a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066d9a4  895020               mov dword ptr [eax + 0x20], edx
// 0066d9a7  eb02                 jmp 0x66d9ab
// 0066d9a9  33c0                 xor eax, eax
// 0066d9ab  56                   push esi
// 0066d9ac  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066d9b0  6a00                 push 0
// 0066d9b2  8906                 mov dword ptr [esi], eax
// 0066d9b4  e8e19f1300           call 0x7a799a
// 0066d9b9  83c404               add esp, 4
// 0066d9bc  8bc6                 mov eax, esi
// 0066d9be  5e                   pop esi
// 0066d9bf  59                   pop ecx
// 0066d9c0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
