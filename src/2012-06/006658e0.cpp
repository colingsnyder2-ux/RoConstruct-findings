// roc 2012-06 006658e0  unit: seg_00660000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006658e0
//
// 006658e0  56                   push esi
// 006658e1  57                   push edi
// 006658e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006658e6  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 006658ec  8b4610               mov eax, dword ptr [esi + 0x10]
// 006658ef  894774               mov dword ptr [edi + 0x74], eax
// 006658f2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006658f5  51                   push ecx
// 006658f6  e8c5f6ffff           call 0x664fc0
// 006658fb  83c404               add esp, 4
// 006658fe  5f                   pop edi
// 006658ff  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00665903  5e                   pop esi
// 00665904  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
