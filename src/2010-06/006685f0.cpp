// roc 2010-06 006685f0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006685f0
//
// 006685f0  51                   push ecx
// 006685f1  6a28                 push 0x28
// 006685f3  c744240400000000     mov dword ptr [esp + 4], 0
// 006685fb  e8a0f31300           call 0x7a79a0
// 00668600  83c404               add esp, 4
// 00668603  85c0                 test eax, eax
// 00668605  7432                 je 0x668639
// 00668607  c70074b9a300         mov dword ptr [eax], 0xa3b974
// 0066860d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00668611  894808               mov dword ptr [eax + 8], ecx
// 00668614  8b542410             mov edx, dword ptr [esp + 0x10]
// 00668618  89500c               mov dword ptr [eax + 0xc], edx
// 0066861b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066861f  894810               mov dword ptr [eax + 0x10], ecx
// 00668622  8b542418             mov edx, dword ptr [esp + 0x18]
// 00668626  895018               mov dword ptr [eax + 0x18], edx
// 00668629  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066862d  89481c               mov dword ptr [eax + 0x1c], ecx
// 00668630  8b542420             mov edx, dword ptr [esp + 0x20]
// 00668634  895020               mov dword ptr [eax + 0x20], edx
// 00668637  eb02                 jmp 0x66863b
// 00668639  33c0                 xor eax, eax
// 0066863b  56                   push esi
// 0066863c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00668640  6a00                 push 0
// 00668642  8906                 mov dword ptr [esi], eax
// 00668644  e851f31300           call 0x7a799a
// 00668649  83c404               add esp, 4
// 0066864c  8bc6                 mov eax, esi
// 0066864e  5e                   pop esi
// 0066864f  59                   pop ecx
// 00668650  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
