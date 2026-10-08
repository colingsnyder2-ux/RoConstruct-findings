// roc 2009-06 0065d000  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065d000
//
// 0065d000  51                   push ecx
// 0065d001  6a28                 push 0x28
// 0065d003  c744240400000000     mov dword ptr [esp + 4], 0
// 0065d00b  e828ba0b00           call 0x718a38
// 0065d010  83c404               add esp, 4
// 0065d013  85c0                 test eax, eax
// 0065d015  7432                 je 0x65d049
// 0065d017  c700d8148e00         mov dword ptr [eax], 0x8e14d8
// 0065d01d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065d021  894808               mov dword ptr [eax + 8], ecx
// 0065d024  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065d028  89500c               mov dword ptr [eax + 0xc], edx
// 0065d02b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065d02f  894810               mov dword ptr [eax + 0x10], ecx
// 0065d032  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065d036  895018               mov dword ptr [eax + 0x18], edx
// 0065d039  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065d03d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0065d040  8b542420             mov edx, dword ptr [esp + 0x20]
// 0065d044  895020               mov dword ptr [eax + 0x20], edx
// 0065d047  eb02                 jmp 0x65d04b
// 0065d049  33c0                 xor eax, eax
// 0065d04b  56                   push esi
// 0065d04c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065d050  6a00                 push 0
// 0065d052  8906                 mov dword ptr [esi], eax
// 0065d054  e8d9b90b00           call 0x718a32
// 0065d059  83c404               add esp, 4
// 0065d05c  8bc6                 mov eax, esi
// 0065d05e  5e                   pop esi
// 0065d05f  59                   pop ecx
// 0065d060  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
