// roc 2008-06 00577230  unit: RBX::DataModel  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577230
//
// 00577230  64a100000000         mov eax, dword ptr fs:[0]
// 00577236  6aff                 push -1
// 00577238  6878f47b00           push 0x7bf478
// 0057723d  50                   push eax
// 0057723e  64892500000000       mov dword ptr fs:[0], esp
// 00577245  56                   push esi
// 00577246  8bf1                 mov esi, ecx
// 00577248  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057724c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00577254  c70600000000         mov dword ptr [esi], 0
// 0057725a  85c0                 test eax, eax
// 0057725c  7418                 je 0x577276
// 0057725e  6a00                 push 0
// 00577260  8d4e08               lea ecx, [esi + 8]
// 00577263  51                   push ecx
// 00577264  8d542424             lea edx, [esp + 0x24]
// 00577268  8906                 mov dword ptr [esi], eax
// 0057726a  8b00                 mov eax, dword ptr [eax]
// 0057726c  52                   push edx
// 0057726d  ffd0                 call eax
// 0057726f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00577273  83c40c               add esp, 0xc
// 00577276  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0057727e  85c0                 test eax, eax
// 00577280  7415                 je 0x577297
// 00577282  8b00                 mov eax, dword ptr [eax]
// 00577284  85c0                 test eax, eax
// 00577286  740f                 je 0x577297
// 00577288  8d4c241c             lea ecx, [esp + 0x1c]
// 0057728c  6a01                 push 1
// 0057728e  51                   push ecx
// 0057728f  8bd1                 mov edx, ecx
// 00577291  52                   push edx
// 00577292  ffd0                 call eax
// 00577294  83c40c               add esp, 0xc
// 00577297  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057729b  8bc6                 mov eax, esi
// 0057729d  64890d00000000       mov dword ptr fs:[0], ecx
// 005772a4  5e                   pop esi
// 005772a5  83c40c               add esp, 0xc
// 005772a8  c22000               ret 0x20
// library rbxgs/util\boost.cpp (function ??0?$storage1@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
