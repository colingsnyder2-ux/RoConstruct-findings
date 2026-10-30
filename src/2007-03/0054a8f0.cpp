// roc 2007-03 0054a8f0  unit: seg_00540000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a8f0
//
// 0054a8f0  6aff                 push -1
// 0054a8f2  68a2317500           push 0x7531a2
// 0054a8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0054a8fd  50                   push eax
// 0054a8fe  64892500000000       mov dword ptr fs:[0], esp
// 0054a905  83ec20               sub esp, 0x20
// 0054a908  56                   push esi
// 0054a909  689c797a00           push 0x7a799c
// 0054a90e  8d4c240c             lea ecx, [esp + 0xc]
// 0054a912  c744240800000000     mov dword ptr [esp + 8], 0
// 0054a91a  ff1578e77700         call dword ptr [0x77e778]
// 0054a920  8b742434             mov esi, dword ptr [esp + 0x34]
// 0054a924  8d442408             lea eax, [esp + 8]
// 0054a928  50                   push eax
// 0054a929  8bce                 mov ecx, esi
// 0054a92b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0054a933  e8e893ecff           call 0x413d20
// 0054a938  c70640797a00         mov dword ptr [esi], 0x7a7940
// 0054a93e  8d4c2408             lea ecx, [esp + 8]
// 0054a942  c744240401000000     mov dword ptr [esp + 4], 1
// 0054a94a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0054a94f  ff158ce77700         call dword ptr [0x77e78c]
// 0054a955  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054a959  8bc6                 mov eax, esi
// 0054a95b  5e                   pop esi
// 0054a95c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a963  83c42c               add esp, 0x2c
// 0054a966  c3                   ret 
// copied from an identical function in another client (function ?cant_write@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp