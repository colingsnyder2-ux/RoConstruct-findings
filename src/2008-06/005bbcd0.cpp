// roc 2008-06 005bbcd0  unit: RBX::Soundscape::SoundService  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbcd0
//
// 005bbcd0  64a100000000         mov eax, dword ptr fs:[0]
// 005bbcd6  6aff                 push -1
// 005bbcd8  6890b27d00           push 0x7db290
// 005bbcdd  50                   push eax
// 005bbcde  64892500000000       mov dword ptr fs:[0], esp
// 005bbce5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bbce9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005bbced  56                   push esi
// 005bbcee  50                   push eax
// 005bbcef  8b442420             mov eax, dword ptr [esp + 0x20]
// 005bbcf3  8bf1                 mov esi, ecx
// 005bbcf5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bbcf9  51                   push ecx
// 005bbcfa  52                   push edx
// 005bbcfb  50                   push eax
// 005bbcfc  8d4c2438             lea ecx, [esp + 0x38]
// 005bbd00  51                   push ecx
// 005bbd01  e86ab6ffff           call 0x5b7370
// 005bbd06  8b08                 mov ecx, dword ptr [eax]
// 005bbd08  83c40c               add esp, 0xc
// 005bbd0b  c70000000000         mov dword ptr [eax], 0
// 005bbd11  8bc4                 mov eax, esp
// 005bbd13  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005bbd1b  8964242c             mov dword ptr [esp + 0x2c], esp
// 005bbd1f  8908                 mov dword ptr [eax], ecx
// 005bbd21  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bbd25  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bbd29  52                   push edx
// 005bbd2a  50                   push eax
// 005bbd2b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005bbd30  e82bfbffff           call 0x5bb860
// 005bbd35  50                   push eax
// 005bbd36  8bce                 mov ecx, esi
// 005bbd38  c644242000           mov byte ptr [esp + 0x20], 0
// 005bbd3d  e84ee5e4ff           call 0x40a290
// 005bbd42  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bbd46  85c0                 test eax, eax
// 005bbd48  7409                 je 0x5bbd53
// 005bbd4a  50                   push eax
// 005bbd4b  e82a490e00           call 0x6a067a
// 005bbd50  83c404               add esp, 4
// 005bbd53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bbd57  c706d07c8300         mov dword ptr [esi], 0x837cd0
// 005bbd5d  8bc6                 mov eax, esi
// 005bbd5f  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbd66  5e                   pop esi
// 005bbd67  83c40c               add esp, 0xc
// 005bbd6a  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
