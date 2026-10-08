// roc 2009-06 004c9550  unit: boost::X::V?$function0::?$thread_data  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c9550
//
// 004c9550  6aff                 push -1
// 004c9552  6800928500           push 0x859200
// 004c9557  64a100000000         mov eax, dword ptr fs:[0]
// 004c955d  50                   push eax
// 004c955e  64892500000000       mov dword ptr fs:[0], esp
// 004c9565  51                   push ecx
// 004c9566  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c956a  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c956e  56                   push esi
// 004c956f  50                   push eax
// 004c9570  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c9574  8bf1                 mov esi, ecx
// 004c9576  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004c957a  51                   push ecx
// 004c957b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c957f  52                   push edx
// 004c9580  50                   push eax
// 004c9581  51                   push ecx
// 004c9582  8d542444             lea edx, [esp + 0x44]
// 004c9586  52                   push edx
// 004c9587  e824bfffff           call 0x4c54b0
// 004c958c  8b08                 mov ecx, dword ptr [eax]
// 004c958e  83c410               add esp, 0x10
// 004c9591  c70000000000         mov dword ptr [eax], 0
// 004c9597  8bc4                 mov eax, esp
// 004c9599  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c95a1  8964240c             mov dword ptr [esp + 0xc], esp
// 004c95a5  8908                 mov dword ptr [eax], ecx
// 004c95a7  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c95ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c95af  50                   push eax
// 004c95b0  51                   push ecx
// 004c95b1  c644242001           mov byte ptr [esp + 0x20], 1
// 004c95b6  e885feffff           call 0x4c9440
// 004c95bb  50                   push eax
// 004c95bc  8bce                 mov ecx, esi
// 004c95be  c644242400           mov byte ptr [esp + 0x24], 0
// 004c95c3  e82847f7ff           call 0x43dcf0
// 004c95c8  8b542430             mov edx, dword ptr [esp + 0x30]
// 004c95cc  52                   push edx
// 004c95cd  e860f42400           call 0x718a32
// 004c95d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c95d6  83c404               add esp, 4
// 004c95d9  c7069c508c00         mov dword ptr [esi], 0x8c509c
// 004c95df  8bc6                 mov eax, esi
// 004c95e1  64890d00000000       mov dword ptr fs:[0], ecx
// 004c95e8  5e                   pop esi
// 004c95e9  83c410               add esp, 0x10
// 004c95ec  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
