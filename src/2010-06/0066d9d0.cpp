// roc 2010-06 0066d9d0  unit: RBX::Humanoid  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066d9d0
//
// 0066d9d0  51                   push ecx
// 0066d9d1  6a28                 push 0x28
// 0066d9d3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066d9db  e8c09f1300           call 0x7a79a0
// 0066d9e0  83c404               add esp, 4
// 0066d9e3  85c0                 test eax, eax
// 0066d9e5  7432                 je 0x66da19
// 0066d9e7  c70058c8a300         mov dword ptr [eax], 0xa3c858
// 0066d9ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066d9f1  894808               mov dword ptr [eax + 8], ecx
// 0066d9f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066d9f8  89500c               mov dword ptr [eax + 0xc], edx
// 0066d9fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d9ff  894810               mov dword ptr [eax + 0x10], ecx
// 0066da02  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066da06  895018               mov dword ptr [eax + 0x18], edx
// 0066da09  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066da0d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066da10  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066da14  895020               mov dword ptr [eax + 0x20], edx
// 0066da17  eb02                 jmp 0x66da1b
// 0066da19  33c0                 xor eax, eax
// 0066da1b  56                   push esi
// 0066da1c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066da20  6a00                 push 0
// 0066da22  8906                 mov dword ptr [esi], eax
// 0066da24  e8719f1300           call 0x7a799a
// 0066da29  83c404               add esp, 4
// 0066da2c  8bc6                 mov eax, esi
// 0066da2e  5e                   pop esi
// 0066da2f  59                   pop ecx
// 0066da30  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
