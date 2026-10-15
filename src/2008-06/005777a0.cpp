// roc 2008-06 005777a0  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005777a0
//
// 005777a0  6aff                 push -1
// 005777a2  6878f47b00           push 0x7bf478
// 005777a7  64a100000000         mov eax, dword ptr fs:[0]
// 005777ad  50                   push eax
// 005777ae  64892500000000       mov dword ptr fs:[0], esp
// 005777b5  51                   push ecx
// 005777b6  56                   push esi
// 005777b7  8bf1                 mov esi, ecx
// 005777b9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005777bd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005777c1  50                   push eax
// 005777c2  51                   push ecx
// 005777c3  83ec20               sub esp, 0x20
// 005777c6  8bc4                 mov eax, esp
// 005777c8  c70000000000         mov dword ptr [eax], 0
// 005777ce  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005777d2  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005777da  8964242c             mov dword ptr [esp + 0x2c], esp
// 005777de  85c9                 test ecx, ecx
// 005777e0  7418                 je 0x5777fa
// 005777e2  8908                 mov dword ptr [eax], ecx
// 005777e4  83c008               add eax, 8
// 005777e7  6a00                 push 0
// 005777e9  50                   push eax
// 005777ea  8b442448             mov eax, dword ptr [esp + 0x48]
// 005777ee  8b08                 mov ecx, dword ptr [eax]
// 005777f0  8d542450             lea edx, [esp + 0x50]
// 005777f4  52                   push edx
// 005777f5  ffd1                 call ecx
// 005777f7  83c40c               add esp, 0xc
// 005777fa  8bce                 mov ecx, esi
// 005777fc  e8fffeffff           call 0x577700
// 00577801  8b442418             mov eax, dword ptr [esp + 0x18]
// 00577805  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057780d  85c0                 test eax, eax
// 0057780f  7415                 je 0x577826
// 00577811  8b00                 mov eax, dword ptr [eax]
// 00577813  85c0                 test eax, eax
// 00577815  740f                 je 0x577826
// 00577817  8d542420             lea edx, [esp + 0x20]
// 0057781b  6a01                 push 1
// 0057781d  52                   push edx
// 0057781e  8bca                 mov ecx, edx
// 00577820  51                   push ecx
// 00577821  ffd0                 call eax
// 00577823  83c40c               add esp, 0xc
// 00577826  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057782a  8bc6                 mov eax, esi
// 0057782c  64890d00000000       mov dword ptr fs:[0], ecx
// 00577833  5e                   pop esi
// 00577834  83c410               add esp, 0x10
// 00577837  c22800               ret 0x28
// library rbxgs/roc_datamodel_http_native_family_8a874868dba17bdc.cpp (function ??0?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@boost@@QAE@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@12@V?$value@W4MessageType@RBX@@@12@V?$value@_N@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_datamodel_http_native_family_8a874868dba17bdc.cpp
