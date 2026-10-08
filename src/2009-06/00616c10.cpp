// roc 2009-06 00616c10  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00616c10
//
// 00616c10  6aff                 push -1
// 00616c12  6800928500           push 0x859200
// 00616c17  64a100000000         mov eax, dword ptr fs:[0]
// 00616c1d  50                   push eax
// 00616c1e  64892500000000       mov dword ptr fs:[0], esp
// 00616c25  51                   push ecx
// 00616c26  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00616c2a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00616c2e  56                   push esi
// 00616c2f  50                   push eax
// 00616c30  8b442428             mov eax, dword ptr [esp + 0x28]
// 00616c34  8bf1                 mov esi, ecx
// 00616c36  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00616c3a  51                   push ecx
// 00616c3b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616c3f  52                   push edx
// 00616c40  50                   push eax
// 00616c41  51                   push ecx
// 00616c42  8d542444             lea edx, [esp + 0x44]
// 00616c46  52                   push edx
// 00616c47  e844ccffff           call 0x613890
// 00616c4c  8b08                 mov ecx, dword ptr [eax]
// 00616c4e  83c410               add esp, 0x10
// 00616c51  c70000000000         mov dword ptr [eax], 0
// 00616c57  8bc4                 mov eax, esp
// 00616c59  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00616c61  8964240c             mov dword ptr [esp + 0xc], esp
// 00616c65  8908                 mov dword ptr [eax], ecx
// 00616c67  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616c6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00616c6f  50                   push eax
// 00616c70  51                   push ecx
// 00616c71  c644242001           mov byte ptr [esp + 0x20], 1
// 00616c76  e8353afdff           call 0x5ea6b0
// 00616c7b  50                   push eax
// 00616c7c  8bce                 mov ecx, esi
// 00616c7e  c644242400           mov byte ptr [esp + 0x24], 0
// 00616c83  e8e86fe2ff           call 0x43dc70
// 00616c88  8b542430             mov edx, dword ptr [esp + 0x30]
// 00616c8c  52                   push edx
// 00616c8d  e8a01d1000           call 0x718a32
// 00616c92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00616c96  83c404               add esp, 4
// 00616c99  c706ac8e8d00         mov dword ptr [esi], 0x8d8eac
// 00616c9f  8bc6                 mov eax, esi
// 00616ca1  64890d00000000       mov dword ptr fs:[0], ecx
// 00616ca8  5e                   pop esi
// 00616ca9  83c410               add esp, 0x10
// 00616cac  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
