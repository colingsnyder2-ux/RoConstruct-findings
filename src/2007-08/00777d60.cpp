// roc 2007-08 00777d60  unit: seg_00770000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777d60
//
// 00777d60  833d58bd8b0000       cmp dword ptr [0x8bbd58], 0
// 00777d67  7443                 je 0x777dac
// 00777d69  833d60bd8b0000       cmp dword ptr [0x8bbd60], 0
// 00777d70  7414                 je 0x777d86
// 00777d72  6858bd8b00           push 0x8bbd58
// 00777d77  e84408cdff           call 0x4485c0
// 00777d7c  c70560bd8b0000000000 mov dword ptr [0x8bbd60], 0
// 00777d86  a17cbd8b00           mov eax, dword ptr [0x8bbd7c]
// 00777d8b  85c0                 test eax, eax
// 00777d8d  7408                 je 0x777d97
// 00777d8f  8b08                 mov ecx, dword ptr [eax]
// 00777d91  8b5108               mov edx, dword ptr [ecx + 8]
// 00777d94  50                   push eax
// 00777d95  ffd2                 call edx
// 00777d97  6864bd8b00           push 0x8bbd64
// 00777d9c  ff1504d37700         call dword ptr [0x77d304]
// 00777da2  c70558bd8b0000000000 mov dword ptr [0x8bbd58], 0
// 00777dac  c3                   ret 
// copied from an identical function in another client (function ?roc_atl_module_term@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_module_term_aa49747d7f898d5b.cpp