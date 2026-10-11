// roc 2007-03 0057f280  unit: seg_00570000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f280
//
// 0057f280  6aff                 push -1
// 0057f282  68586d7500           push 0x756d58
// 0057f287  64a100000000         mov eax, dword ptr fs:[0]
// 0057f28d  50                   push eax
// 0057f28e  64892500000000       mov dword ptr fs:[0], esp
// 0057f295  51                   push ecx
// 0057f296  56                   push esi
// 0057f297  57                   push edi
// 0057f298  8bf9                 mov edi, ecx
// 0057f29a  897c2408             mov dword ptr [esp + 8], edi
// 0057f29e  c70730d97a00         mov dword ptr [edi], 0x7ad930
// 0057f2a4  8d7724               lea esi, [edi + 0x24]
// 0057f2a7  6a01                 push 1
// 0057f2a9  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0057f2b1  e88afeffff           call 0x57f140
// 0057f2b6  6834d97a00           push 0x7ad934
// 0057f2bb  56                   push esi
// 0057f2bc  e87fc1eeff           call 0x46b440
// 0057f2c1  83c40c               add esp, 0xc
// 0057f2c4  8bce                 mov ecx, esi
// 0057f2c6  c644241400           mov byte ptr [esp + 0x14], 0
// 0057f2cb  ff15e8e67700         call dword ptr [0x77e6e8]
// 0057f2d1  8d4f08               lea ecx, [edi + 8]
// 0057f2d4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0057f2dc  ff158ce77700         call dword ptr [0x77e78c]
// 0057f2e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057f2e6  5f                   pop edi
// 0057f2e7  5e                   pop esi
// 0057f2e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f2ef  83c410               add esp, 0x10
// 0057f2f2  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ??1Log@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
