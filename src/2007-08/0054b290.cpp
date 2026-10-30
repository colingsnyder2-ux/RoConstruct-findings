// roc 2007-08 0054b290  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b290
//
// 0054b290  6aff                 push -1
// 0054b292  6892247500           push 0x752492
// 0054b297  64a100000000         mov eax, dword ptr fs:[0]
// 0054b29d  50                   push eax
// 0054b29e  64892500000000       mov dword ptr fs:[0], esp
// 0054b2a5  83ec20               sub esp, 0x20
// 0054b2a8  56                   push esi
// 0054b2a9  68d4787a00           push 0x7a78d4
// 0054b2ae  8d4c240c             lea ecx, [esp + 0xc]
// 0054b2b2  c744240800000000     mov dword ptr [esp + 8], 0
// 0054b2ba  ff1598e67700         call dword ptr [0x77e698]
// 0054b2c0  8b742434             mov esi, dword ptr [esp + 0x34]
// 0054b2c4  8d442408             lea eax, [esp + 8]
// 0054b2c8  50                   push eax
// 0054b2c9  8bce                 mov ecx, esi
// 0054b2cb  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0054b2d3  e8e87aecff           call 0x412dc0
// 0054b2d8  c7063c787a00         mov dword ptr [esi], 0x7a783c
// 0054b2de  8d4c2408             lea ecx, [esp + 8]
// 0054b2e2  c744240401000000     mov dword ptr [esp + 4], 1
// 0054b2ea  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0054b2ef  ff15ace67700         call dword ptr [0x77e6ac]
// 0054b2f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054b2f9  8bc6                 mov eax, esi
// 0054b2fb  5e                   pop esi
// 0054b2fc  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b303  83c42c               add esp, 0x2c
// 0054b306  c3                   ret 
// copied from an identical function in another client (function ?cant_seek@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp