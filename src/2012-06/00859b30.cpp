// roc 2012-06 00859b30  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859b30
//
// 00859b30  6aff                 push -1
// 00859b32  6892e1ac00           push 0xace192
// 00859b37  64a100000000         mov eax, dword ptr fs:[0]
// 00859b3d  50                   push eax
// 00859b3e  64892500000000       mov dword ptr fs:[0], esp
// 00859b45  83ec20               sub esp, 0x20
// 00859b48  56                   push esi
// 00859b49  680045bd00           push 0xbd4500
// 00859b4e  8d4c240c             lea ecx, [esp + 0xc]
// 00859b52  c744240800000000     mov dword ptr [esp + 8], 0
// 00859b5a  ff154826b200         call dword ptr [0xb22648]
// 00859b60  8b742434             mov esi, dword ptr [esp + 0x34]
// 00859b64  8d442408             lea eax, [esp + 8]
// 00859b68  50                   push eax
// 00859b69  8bce                 mov ecx, esi
// 00859b6b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00859b73  e82825bbff           call 0x40c0a0
// 00859b78  c7065444bd00         mov dword ptr [esi], 0xbd4454
// 00859b7e  8d4c2408             lea ecx, [esp + 8]
// 00859b82  c744240401000000     mov dword ptr [esp + 4], 1
// 00859b8a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00859b8f  ff153c26b200         call dword ptr [0xb2263c]
// 00859b95  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00859b99  8bc6                 mov eax, esi
// 00859b9b  5e                   pop esi
// 00859b9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00859ba3  83c42c               add esp, 0x2c
// 00859ba6  c3                   ret 
// copied from an identical function in another client (function ?bad_putback@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp