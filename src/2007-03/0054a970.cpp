// roc 2007-03 0054a970  unit: seg_00540000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a970
//
// 0054a970  6aff                 push -1
// 0054a972  68a2317500           push 0x7531a2
// 0054a977  64a100000000         mov eax, dword ptr fs:[0]
// 0054a97d  50                   push eax
// 0054a97e  64892500000000       mov dword ptr fs:[0], esp
// 0054a985  83ec20               sub esp, 0x20
// 0054a988  56                   push esi
// 0054a989  68ac797a00           push 0x7a79ac
// 0054a98e  8d4c240c             lea ecx, [esp + 0xc]
// 0054a992  c744240800000000     mov dword ptr [esp + 8], 0
// 0054a99a  ff1578e77700         call dword ptr [0x77e778]
// 0054a9a0  8b742434             mov esi, dword ptr [esp + 0x34]
// 0054a9a4  8d442408             lea eax, [esp + 8]
// 0054a9a8  50                   push eax
// 0054a9a9  8bce                 mov ecx, esi
// 0054a9ab  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0054a9b3  e86893ecff           call 0x413d20
// 0054a9b8  c70640797a00         mov dword ptr [esi], 0x7a7940
// 0054a9be  8d4c2408             lea ecx, [esp + 8]
// 0054a9c2  c744240401000000     mov dword ptr [esp + 4], 1
// 0054a9ca  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0054a9cf  ff158ce77700         call dword ptr [0x77e78c]
// 0054a9d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054a9d9  8bc6                 mov eax, esi
// 0054a9db  5e                   pop esi
// 0054a9dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a9e3  83c42c               add esp, 0x2c
// 0054a9e6  c3                   ret 
// copied from an identical function in another client (function ?cant_seek@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp