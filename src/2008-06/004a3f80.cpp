// roc 2008-06 004a3f80  unit: RBX::VHint::?$FactoryProduct  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3f80
//
// 004a3f80  64a100000000         mov eax, dword ptr fs:[0]
// 004a3f86  6aff                 push -1
// 004a3f88  6890b27d00           push 0x7db290
// 004a3f8d  50                   push eax
// 004a3f8e  64892500000000       mov dword ptr fs:[0], esp
// 004a3f95  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a3f99  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004a3f9d  56                   push esi
// 004a3f9e  50                   push eax
// 004a3f9f  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a3fa3  8bf1                 mov esi, ecx
// 004a3fa5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a3fa9  51                   push ecx
// 004a3faa  52                   push edx
// 004a3fab  50                   push eax
// 004a3fac  8d4c2438             lea ecx, [esp + 0x38]
// 004a3fb0  51                   push ecx
// 004a3fb1  e87ae0ffff           call 0x4a2030
// 004a3fb6  8b08                 mov ecx, dword ptr [eax]
// 004a3fb8  83c40c               add esp, 0xc
// 004a3fbb  c70000000000         mov dword ptr [eax], 0
// 004a3fc1  8bc4                 mov eax, esp
// 004a3fc3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a3fcb  8964242c             mov dword ptr [esp + 0x2c], esp
// 004a3fcf  8908                 mov dword ptr [eax], ecx
// 004a3fd1  8b542420             mov edx, dword ptr [esp + 0x20]
// 004a3fd5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a3fd9  52                   push edx
// 004a3fda  50                   push eax
// 004a3fdb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004a3fe0  e8bbabffff           call 0x49eba0
// 004a3fe5  50                   push eax
// 004a3fe6  8bce                 mov ecx, esi
// 004a3fe8  c644242000           mov byte ptr [esp + 0x20], 0
// 004a3fed  e8aef2f9ff           call 0x4432a0
// 004a3ff2  8b442428             mov eax, dword ptr [esp + 0x28]
// 004a3ff6  85c0                 test eax, eax
// 004a3ff8  7409                 je 0x4a4003
// 004a3ffa  50                   push eax
// 004a3ffb  e87ac61f00           call 0x6a067a
// 004a4000  83c404               add esp, 4
// 004a4003  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a4007  c70698388200         mov dword ptr [esi], 0x823898
// 004a400d  8bc6                 mov eax, esi
// 004a400f  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4016  5e                   pop esi
// 004a4017  83c40c               add esp, 0xc
// 004a401a  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
