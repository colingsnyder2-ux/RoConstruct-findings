// roc 2008-06 0064e440  unit: RBX::P8Camera::?$GetSetImpl  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e440
//
// 0064e440  64a100000000         mov eax, dword ptr fs:[0]
// 0064e446  6aff                 push -1
// 0064e448  6890b27d00           push 0x7db290
// 0064e44d  50                   push eax
// 0064e44e  64892500000000       mov dword ptr fs:[0], esp
// 0064e455  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064e459  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0064e45d  56                   push esi
// 0064e45e  50                   push eax
// 0064e45f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0064e463  8bf1                 mov esi, ecx
// 0064e465  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064e469  51                   push ecx
// 0064e46a  52                   push edx
// 0064e46b  50                   push eax
// 0064e46c  8d4c2438             lea ecx, [esp + 0x38]
// 0064e470  51                   push ecx
// 0064e471  e8eafdffff           call 0x64e260
// 0064e476  8b08                 mov ecx, dword ptr [eax]
// 0064e478  83c40c               add esp, 0xc
// 0064e47b  c70000000000         mov dword ptr [eax], 0
// 0064e481  8bc4                 mov eax, esp
// 0064e483  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064e48b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0064e48f  8908                 mov dword ptr [eax], ecx
// 0064e491  8b542420             mov edx, dword ptr [esp + 0x20]
// 0064e495  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064e499  52                   push edx
// 0064e49a  50                   push eax
// 0064e49b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0064e4a0  e84b03fbff           call 0x5fe7f0
// 0064e4a5  50                   push eax
// 0064e4a6  8bce                 mov ecx, esi
// 0064e4a8  c644242000           mov byte ptr [esp + 0x20], 0
// 0064e4ad  e8ee4ddfff           call 0x4432a0
// 0064e4b2  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064e4b6  85c0                 test eax, eax
// 0064e4b8  7409                 je 0x64e4c3
// 0064e4ba  50                   push eax
// 0064e4bb  e8ba210500           call 0x6a067a
// 0064e4c0  83c404               add esp, 4
// 0064e4c3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064e4c7  c70634b38400         mov dword ptr [esi], 0x84b334
// 0064e4cd  8bc6                 mov eax, esi
// 0064e4cf  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e4d6  5e                   pop esi
// 0064e4d7  83c40c               add esp, 0xc
// 0064e4da  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
