// roc 2009-12 00721c10  unit: seg_00720000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00721c10
//
// 00721c10  6aff                 push -1
// 00721c12  681ceb9400           push 0x94eb1c
// 00721c17  64a100000000         mov eax, dword ptr fs:[0]
// 00721c1d  50                   push eax
// 00721c1e  64892500000000       mov dword ptr fs:[0], esp
// 00721c25  51                   push ecx
// 00721c26  56                   push esi
// 00721c27  8bf1                 mov esi, ecx
// 00721c29  89742404             mov dword ptr [esp + 4], esi
// 00721c2d  8d4e34               lea ecx, [esi + 0x34]
// 00721c30  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00721c38  ff15e4b69800         call dword ptr [0x98b6e4]
// 00721c3e  8d4e18               lea ecx, [esi + 0x18]
// 00721c41  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00721c49  ff15e4b69800         call dword ptr [0x98b6e4]
// 00721c4f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721c53  5e                   pop esi
// 00721c54  64890d00000000       mov dword ptr fs:[0], ecx
// 00721c5b  83c410               add esp, 0x10
// 00721c5e  c3                   ret 
// copied from an identical function in another client (function ??1gzip_params@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp