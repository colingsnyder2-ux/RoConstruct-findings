// roc 2008-06 005d0370  unit: RBX::HopperBin::W4BinType::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0370
//
// 005d0370  6aff                 push -1
// 005d0372  6840137d00           push 0x7d1340
// 005d0377  64a100000000         mov eax, dword ptr fs:[0]
// 005d037d  50                   push eax
// 005d037e  64892500000000       mov dword ptr fs:[0], esp
// 005d0385  51                   push ecx
// 005d0386  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d038a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005d038e  56                   push esi
// 005d038f  50                   push eax
// 005d0390  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d0394  8bf1                 mov esi, ecx
// 005d0396  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d039a  51                   push ecx
// 005d039b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d039f  52                   push edx
// 005d03a0  50                   push eax
// 005d03a1  51                   push ecx
// 005d03a2  8d542444             lea edx, [esp + 0x44]
// 005d03a6  52                   push edx
// 005d03a7  e8a4f6ffff           call 0x5cfa50
// 005d03ac  8b08                 mov ecx, dword ptr [eax]
// 005d03ae  83c410               add esp, 0x10
// 005d03b1  c70000000000         mov dword ptr [eax], 0
// 005d03b7  8bc4                 mov eax, esp
// 005d03b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d03c1  8964240c             mov dword ptr [esp + 0xc], esp
// 005d03c5  8908                 mov dword ptr [eax], ecx
// 005d03c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d03cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d03cf  50                   push eax
// 005d03d0  51                   push ecx
// 005d03d1  c644242001           mov byte ptr [esp + 0x20], 1
// 005d03d6  e8d505ffff           call 0x5c09b0
// 005d03db  50                   push eax
// 005d03dc  8bce                 mov ecx, esi
// 005d03de  c644242400           mov byte ptr [esp + 0x24], 0
// 005d03e3  e8b874fcff           call 0x5978a0
// 005d03e8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005d03ec  85c0                 test eax, eax
// 005d03ee  7409                 je 0x5d03f9
// 005d03f0  50                   push eax
// 005d03f1  e884020d00           call 0x6a067a
// 005d03f6  83c404               add esp, 4
// 005d03f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d03fd  c70600af8300         mov dword ptr [esi], 0x83af00
// 005d0403  8bc6                 mov eax, esi
// 005d0405  64890d00000000       mov dword ptr fs:[0], ecx
// 005d040c  5e                   pop esi
// 005d040d  83c410               add esp, 0x10
// 005d0410  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
