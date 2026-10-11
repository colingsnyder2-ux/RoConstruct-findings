// roc 2007-08 0052cca0  unit: seg_00520000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cca0
//
// 0052cca0  64a100000000         mov eax, dword ptr fs:[0]
// 0052cca6  6aff                 push -1
// 0052cca8  6879be7500           push 0x75be79
// 0052ccad  50                   push eax
// 0052ccae  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052ccb2  64892500000000       mov dword ptr fs:[0], esp
// 0052ccb9  83ec1c               sub esp, 0x1c
// 0052ccbc  85c0                 test eax, eax
// 0052ccbe  7514                 jne 0x52ccd4
// 0052ccc0  e86bfeffff           call 0x52cb30
// 0052ccc5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052ccc9  64890d00000000       mov dword ptr fs:[0], ecx
// 0052ccd0  83c428               add esp, 0x28
// 0052ccd3  c3                   ret 
// 0052ccd4  56                   push esi
// 0052ccd5  50                   push eax
// 0052ccd6  8d4c2408             lea ecx, [esp + 8]
// 0052ccda  ff1598e67700         call dword ptr [0x77e698]
// 0052cce0  50                   push eax
// 0052cce1  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0052cce9  e8e2feffff           call 0x52cbd0
// 0052ccee  83c404               add esp, 4
// 0052ccf1  8d4c2404             lea ecx, [esp + 4]
// 0052ccf5  8bf0                 mov esi, eax
// 0052ccf7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0052ccff  ff15ace67700         call dword ptr [0x77e6ac]
// 0052cd05  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052cd09  8bc6                 mov eax, esi
// 0052cd0b  5e                   pop esi
// 0052cd0c  64890d00000000       mov dword ptr fs:[0], ecx
// 0052cd13  83c428               add esp, 0x28
// 0052cd16  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ?lookup@Name@RBX@@SAABV12@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
