// roc 2007-03 0054aeb0  unit: seg_00540000  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054aeb0
//
// 0054aeb0  6aff                 push -1
// 0054aeb2  68b8317500           push 0x7531b8
// 0054aeb7  64a100000000         mov eax, dword ptr fs:[0]
// 0054aebd  50                   push eax
// 0054aebe  64892500000000       mov dword ptr fs:[0], esp
// 0054aec5  51                   push ecx
// 0054aec6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054aeca  56                   push esi
// 0054aecb  57                   push edi
// 0054aecc  8bf1                 mov esi, ecx
// 0054aece  50                   push eax
// 0054aecf  8974240c             mov dword ptr [esp + 0xc], esi
// 0054aed3  e898f8ffff           call 0x54a770
// 0054aed8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0054aedc  6a00                 push 0
// 0054aede  57                   push edi
// 0054aedf  8d4c2428             lea ecx, [esp + 0x28]
// 0054aee3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0054aeeb  ff1568e77700         call dword ptr [0x77e768]
// 0054aef1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054aef5  897e18               mov dword ptr [esi + 0x18], edi
// 0054aef8  894614               mov dword ptr [esi + 0x14], eax
// 0054aefb  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0054af02  5f                   pop edi
// 0054af03  8bc6                 mov eax, esi
// 0054af05  5e                   pop esi
// 0054af06  64890d00000000       mov dword ptr fs:[0], ecx
// 0054af0d  83c410               add esp, 0x10
// 0054af10  c20800               ret 8
// copied from an identical function in another client (function ??$?0Uzlib_params@iostreams@boost@@@impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@HABUzlib_params@23@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp