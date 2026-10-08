// roc 2008-06 0064e2f0  unit: RBX::P8Camera::?$GetSetImpl  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e2f0
//
// 0064e2f0  64a100000000         mov eax, dword ptr fs:[0]
// 0064e2f6  6aff                 push -1
// 0064e2f8  6890b27d00           push 0x7db290
// 0064e2fd  50                   push eax
// 0064e2fe  64892500000000       mov dword ptr fs:[0], esp
// 0064e305  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064e309  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0064e30d  56                   push esi
// 0064e30e  50                   push eax
// 0064e30f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0064e313  8bf1                 mov esi, ecx
// 0064e315  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064e319  51                   push ecx
// 0064e31a  52                   push edx
// 0064e31b  50                   push eax
// 0064e31c  8d4c2438             lea ecx, [esp + 0x38]
// 0064e320  51                   push ecx
// 0064e321  e8bafeffff           call 0x64e1e0
// 0064e326  8b08                 mov ecx, dword ptr [eax]
// 0064e328  83c40c               add esp, 0xc
// 0064e32b  c70000000000         mov dword ptr [eax], 0
// 0064e331  8bc4                 mov eax, esp
// 0064e333  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064e33b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0064e33f  8908                 mov dword ptr [eax], ecx
// 0064e341  8b542420             mov edx, dword ptr [esp + 0x20]
// 0064e345  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0064e349  52                   push edx
// 0064e34a  50                   push eax
// 0064e34b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0064e350  e89b04fbff           call 0x5fe7f0
// 0064e355  50                   push eax
// 0064e356  8bce                 mov ecx, esi
// 0064e358  c644242000           mov byte ptr [esp + 0x20], 0
// 0064e35d  e8de60f3ff           call 0x584440
// 0064e362  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064e366  85c0                 test eax, eax
// 0064e368  7409                 je 0x64e373
// 0064e36a  50                   push eax
// 0064e36b  e80a230500           call 0x6a067a
// 0064e370  83c404               add esp, 4
// 0064e373  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064e377  c706bcb28400         mov dword ptr [esi], 0x84b2bc
// 0064e37d  8bc6                 mov eax, esi
// 0064e37f  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e386  5e                   pop esi
// 0064e387  83c40c               add esp, 0xc
// 0064e38a  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
