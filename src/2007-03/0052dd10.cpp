// roc 2007-03 0052dd10  unit: seg_00520000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052dd10
//
// 0052dd10  64a100000000         mov eax, dword ptr fs:[0]
// 0052dd16  6aff                 push -1
// 0052dd18  6809807500           push 0x758009
// 0052dd1d  50                   push eax
// 0052dd1e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052dd22  64892500000000       mov dword ptr fs:[0], esp
// 0052dd29  83ec1c               sub esp, 0x1c
// 0052dd2c  85c0                 test eax, eax
// 0052dd2e  7514                 jne 0x52dd44
// 0052dd30  e89bfdffff           call 0x52dad0
// 0052dd35  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052dd39  64890d00000000       mov dword ptr fs:[0], ecx
// 0052dd40  83c428               add esp, 0x28
// 0052dd43  c3                   ret 
// 0052dd44  56                   push esi
// 0052dd45  50                   push eax
// 0052dd46  8d4c2408             lea ecx, [esp + 8]
// 0052dd4a  ff1578e77700         call dword ptr [0x77e778]
// 0052dd50  50                   push eax
// 0052dd51  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0052dd59  e812feffff           call 0x52db70
// 0052dd5e  83c404               add esp, 4
// 0052dd61  8d4c2404             lea ecx, [esp + 4]
// 0052dd65  8bf0                 mov esi, eax
// 0052dd67  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0052dd6f  ff158ce77700         call dword ptr [0x77e78c]
// 0052dd75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052dd79  8bc6                 mov eax, esi
// 0052dd7b  5e                   pop esi
// 0052dd7c  64890d00000000       mov dword ptr fs:[0], ecx
// 0052dd83  83c428               add esp, 0x28
// 0052dd86  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ?lookup@Name@RBX@@SAABV12@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
