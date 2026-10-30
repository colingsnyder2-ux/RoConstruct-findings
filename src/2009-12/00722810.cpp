// roc 2009-12 00722810  unit: UString_sink::?$stream_buffer  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722810
//
// 00722810  6aff                 push -1
// 00722812  6852769500           push 0x957652
// 00722817  64a100000000         mov eax, dword ptr fs:[0]
// 0072281d  50                   push eax
// 0072281e  64892500000000       mov dword ptr fs:[0], esp
// 00722825  83ec20               sub esp, 0x20
// 00722828  56                   push esi
// 00722829  68dcfd9d00           push 0x9dfddc
// 0072282e  8d4c240c             lea ecx, [esp + 0xc]
// 00722832  c744240800000000     mov dword ptr [esp + 8], 0
// 0072283a  ff15f4b69800         call dword ptr [0x98b6f4]
// 00722840  8b742434             mov esi, dword ptr [esp + 0x34]
// 00722844  8d442408             lea eax, [esp + 8]
// 00722848  50                   push eax
// 00722849  8bce                 mov ecx, esi
// 0072284b  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00722853  e8386bceff           call 0x409390
// 00722858  c7061cfd9d00         mov dword ptr [esi], 0x9dfd1c
// 0072285e  8d4c2408             lea ecx, [esp + 8]
// 00722862  c744240401000000     mov dword ptr [esp + 4], 1
// 0072286a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0072286f  ff15e4b69800         call dword ptr [0x98b6e4]
// 00722875  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00722879  8bc6                 mov eax, esi
// 0072287b  5e                   pop esi
// 0072287c  64890d00000000       mov dword ptr fs:[0], ecx
// 00722883  83c42c               add esp, 0x2c
// 00722886  c3                   ret 
// copied from an identical function in another client (function ?cant_write@detail@iostreams@boost@@YA?AVfailure@ios_base@std@@XZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp