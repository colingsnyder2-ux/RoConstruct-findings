// roc 2010-06 00638a90  unit: RBX::P8PartInstance::?$GetSetImpl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00638a90
//
// 00638a90  51                   push ecx
// 00638a91  6a28                 push 0x28
// 00638a93  c744240400000000     mov dword ptr [esp + 4], 0
// 00638a9b  e800ef1600           call 0x7a79a0
// 00638aa0  83c404               add esp, 4
// 00638aa3  85c0                 test eax, eax
// 00638aa5  7432                 je 0x638ad9
// 00638aa7  c700a065a300         mov dword ptr [eax], 0xa365a0
// 00638aad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00638ab1  894808               mov dword ptr [eax + 8], ecx
// 00638ab4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00638ab8  89500c               mov dword ptr [eax + 0xc], edx
// 00638abb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00638abf  894810               mov dword ptr [eax + 0x10], ecx
// 00638ac2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00638ac6  895018               mov dword ptr [eax + 0x18], edx
// 00638ac9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00638acd  89481c               mov dword ptr [eax + 0x1c], ecx
// 00638ad0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00638ad4  895020               mov dword ptr [eax + 0x20], edx
// 00638ad7  eb02                 jmp 0x638adb
// 00638ad9  33c0                 xor eax, eax
// 00638adb  56                   push esi
// 00638adc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00638ae0  6a00                 push 0
// 00638ae2  8906                 mov dword ptr [esi], eax
// 00638ae4  e8b1ee1600           call 0x7a799a
// 00638ae9  83c404               add esp, 4
// 00638aec  8bc6                 mov eax, esi
// 00638aee  5e                   pop esi
// 00638aef  59                   pop ecx
// 00638af0  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
