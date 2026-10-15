// roc 2008-06 00577700  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577700
//
// 00577700  6aff                 push -1
// 00577702  6878f47b00           push 0x7bf478
// 00577707  64a100000000         mov eax, dword ptr fs:[0]
// 0057770d  50                   push eax
// 0057770e  64892500000000       mov dword ptr fs:[0], esp
// 00577715  51                   push ecx
// 00577716  56                   push esi
// 00577717  8bf1                 mov esi, ecx
// 00577719  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057771d  50                   push eax
// 0057771e  83ec20               sub esp, 0x20
// 00577721  8bc4                 mov eax, esp
// 00577723  c70000000000         mov dword ptr [eax], 0
// 00577729  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0057772d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00577735  89642428             mov dword ptr [esp + 0x28], esp
// 00577739  85c9                 test ecx, ecx
// 0057773b  7418                 je 0x577755
// 0057773d  8908                 mov dword ptr [eax], ecx
// 0057773f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00577743  83c008               add eax, 8
// 00577746  6a00                 push 0
// 00577748  50                   push eax
// 00577749  8b02                 mov eax, dword ptr [edx]
// 0057774b  8d4c244c             lea ecx, [esp + 0x4c]
// 0057774f  51                   push ecx
// 00577750  ffd0                 call eax
// 00577752  83c40c               add esp, 0xc
// 00577755  8bce                 mov ecx, esi
// 00577757  e834feffff           call 0x577590
// 0057775c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00577760  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 00577764  884e28               mov byte ptr [esi + 0x28], cl
// 00577767  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057776f  85c0                 test eax, eax
// 00577771  7415                 je 0x577788
// 00577773  8b00                 mov eax, dword ptr [eax]
// 00577775  85c0                 test eax, eax
// 00577777  740f                 je 0x577788
// 00577779  8d542420             lea edx, [esp + 0x20]
// 0057777d  6a01                 push 1
// 0057777f  52                   push edx
// 00577780  8bca                 mov ecx, edx
// 00577782  51                   push ecx
// 00577783  ffd0                 call eax
// 00577785  83c40c               add esp, 0xc
// 00577788  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057778c  8bc6                 mov eax, esi
// 0057778e  64890d00000000       mov dword ptr fs:[0], ecx
// 00577795  5e                   pop esi
// 00577796  83c410               add esp, 0x10
// 00577799  c22800               ret 0x28
// library rbxgs/roc_datamodel_http_native_family_8a874868dba17bdc.cpp (function ??0?$storage3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@boost@@QAE@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@12@V?$value@W4MessageType@RBX@@@12@V?$value@_N@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_datamodel_http_native_family_8a874868dba17bdc.cpp
