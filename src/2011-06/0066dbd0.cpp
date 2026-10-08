// roc 2011-06 0066dbd0  unit: RBX::P8PartInstance::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066dbd0
//
// 0066dbd0  51                   push ecx
// 0066dbd1  6a28                 push 0x28
// 0066dbd3  c744240400000000     mov dword ptr [esp + 4], 0
// 0066dbdb  e87ec41900           call 0x80a05e
// 0066dbe0  83c404               add esp, 4
// 0066dbe3  85c0                 test eax, eax
// 0066dbe5  743a                 je 0x66dc21
// 0066dbe7  c70014c9a900         mov dword ptr [eax], 0xa9c914
// 0066dbed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066dbf1  894808               mov dword ptr [eax + 8], ecx
// 0066dbf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0066dbf8  89500c               mov dword ptr [eax + 0xc], edx
// 0066dbfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066dbff  894810               mov dword ptr [eax + 0x10], ecx
// 0066dc02  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066dc06  895018               mov dword ptr [eax + 0x18], edx
// 0066dc09  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066dc0d  89481c               mov dword ptr [eax + 0x1c], ecx
// 0066dc10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066dc14  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066dc18  895020               mov dword ptr [eax + 0x20], edx
// 0066dc1b  8901                 mov dword ptr [ecx], eax
// 0066dc1d  8bc1                 mov eax, ecx
// 0066dc1f  59                   pop ecx
// 0066dc20  c3                   ret 
// 0066dc21  8b442408             mov eax, dword ptr [esp + 8]
// 0066dc25  33c9                 xor ecx, ecx
// 0066dc27  8908                 mov dword ptr [eax], ecx
// 0066dc29  59                   pop ecx
// 0066dc2a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
