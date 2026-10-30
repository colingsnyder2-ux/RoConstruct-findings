// roc 2007-03 0054a9f0  unit: seg_00540000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a9f0
//
// 0054a9f0  6aff                 push -1
// 0054a9f2  68a2317500           push 0x7531a2
// 0054a9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0054a9fd  50                   push eax
// 0054a9fe  64892500000000       mov dword ptr fs:[0], esp
// 0054aa05  83ec20               sub esp, 0x20
// 0054aa08  56                   push esi
// 0054aa09  68c0797a00           push 0x7a79c0
// 0054aa0e  8d4c240c             lea ecx, [esp + 0xc]
// 0054aa12  c744240800000000     mov dword ptr [esp + 8], 0
// 0054aa1a  ff1578e77700         call dword ptr [0x77e778]
// 0054aa20  8b742434             mov esi, dword ptr [esp + 0x34]
// 0054aa24  8d442408             lea eax, [esp + 8]
// 0054aa28  50                   push eax
// 0054aa29  8bce                 mov ecx, esi
// 0054aa2b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0054aa33  e8e892ecff           call 0x413d20
// 0054aa38  c70640797a00         mov dword ptr [esi], 0x7a7940
// 0054aa3e  8d4c2408             lea ecx, [esp + 8]
// 0054aa42  c744240401000000     mov dword ptr [esp + 4], 1
// 0054aa4a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0054aa4f  ff158ce77700         call dword ptr [0x77e78c]
// 0054aa55  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054aa59  8bc6                 mov eax, esi
// 0054aa5b  5e                   pop esi
// 0054aa5c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054aa63  83c42c               add esp, 0x2c
// 0054aa66  c3                   ret 
// copied from an identical function in another client (function ?bad_putback@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp