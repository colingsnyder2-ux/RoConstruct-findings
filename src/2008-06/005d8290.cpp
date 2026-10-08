// roc 2008-06 005d8290  unit: RBX::Humanoid  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8290
//
// 005d8290  51                   push ecx
// 005d8291  6a28                 push 0x28
// 005d8293  c744240400000000     mov dword ptr [esp + 4], 0
// 005d829b  e880860c00           call 0x6a0920
// 005d82a0  83c404               add esp, 4
// 005d82a3  85c0                 test eax, eax
// 005d82a5  743a                 je 0x5d82e1
// 005d82a7  c70044d38300         mov dword ptr [eax], 0x83d344
// 005d82ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d82b1  894808               mov dword ptr [eax + 8], ecx
// 005d82b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005d82b8  89500c               mov dword ptr [eax + 0xc], edx
// 005d82bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005d82bf  894810               mov dword ptr [eax + 0x10], ecx
// 005d82c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005d82c6  895018               mov dword ptr [eax + 0x18], edx
// 005d82c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d82cd  89481c               mov dword ptr [eax + 0x1c], ecx
// 005d82d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d82d4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d82d8  895020               mov dword ptr [eax + 0x20], edx
// 005d82db  8901                 mov dword ptr [ecx], eax
// 005d82dd  8bc1                 mov eax, ecx
// 005d82df  59                   pop ecx
// 005d82e0  c3                   ret 
// 005d82e1  8b442408             mov eax, dword ptr [esp + 8]
// 005d82e5  33c9                 xor ecx, ecx
// 005d82e7  8908                 mov dword ptr [eax], ecx
// 005d82e9  59                   pop ecx
// 005d82ea  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$getset@P8FlagStand@RBX@@BE?AVBrickColor@2@XZP812@AEXV32@@Z@?$PropDescriptor@VFlagStand@RBX@@VBrickColor@2@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@@std@@P8FlagStand@2@BE?AVBrickColor@2@XZP852@AEXV62@@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
