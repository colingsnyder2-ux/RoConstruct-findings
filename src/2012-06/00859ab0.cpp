// roc 2012-06 00859ab0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859ab0
//
// 00859ab0  6aff                 push -1
// 00859ab2  6892e1ac00           push 0xace192
// 00859ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00859abd  50                   push eax
// 00859abe  64892500000000       mov dword ptr fs:[0], esp
// 00859ac5  83ec20               sub esp, 0x20
// 00859ac8  56                   push esi
// 00859ac9  68ec44bd00           push 0xbd44ec
// 00859ace  8d4c240c             lea ecx, [esp + 0xc]
// 00859ad2  c744240800000000     mov dword ptr [esp + 8], 0
// 00859ada  ff154826b200         call dword ptr [0xb22648]
// 00859ae0  8b742434             mov esi, dword ptr [esp + 0x34]
// 00859ae4  8d442408             lea eax, [esp + 8]
// 00859ae8  50                   push eax
// 00859ae9  8bce                 mov ecx, esi
// 00859aeb  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00859af3  e8a825bbff           call 0x40c0a0
// 00859af8  c7065444bd00         mov dword ptr [esi], 0xbd4454
// 00859afe  8d4c2408             lea ecx, [esp + 8]
// 00859b02  c744240401000000     mov dword ptr [esp + 4], 1
// 00859b0a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00859b0f  ff153c26b200         call dword ptr [0xb2263c]
// 00859b15  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00859b19  8bc6                 mov eax, esi
// 00859b1b  5e                   pop esi
// 00859b1c  64890d00000000       mov dword ptr fs:[0], ecx
// 00859b23  83c42c               add esp, 0x2c
// 00859b26  c3                   ret 
// copied from an identical function in another client (function ?cant_seek@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp