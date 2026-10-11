// roc 2008-06 00439480  unit: CSelectionPropGrid  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439480
//
// 00439480  83ec08               sub esp, 8
// 00439483  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00439487  56                   push esi
// 00439488  57                   push edi
// 00439489  8bf1                 mov esi, ecx
// 0043948b  c644240800           mov byte ptr [esp + 8], 0
// 00439490  8b442408             mov eax, dword ptr [esp + 8]
// 00439494  50                   push eax
// 00439495  8b442420             mov eax, dword ptr [esp + 0x20]
// 00439499  c644241000           mov byte ptr [esp + 0x10], 0
// 0043949e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004394a2  51                   push ecx
// 004394a3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004394a6  52                   push edx
// 004394a7  50                   push eax
// 004394a8  51                   push ecx
// 004394a9  83c008               add eax, 8
// 004394ac  50                   push eax
// 004394ad  e81e85fdff           call 0x4119d0
// 004394b2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004394b6  8b4610               mov eax, dword ptr [esi + 0x10]
// 004394b9  52                   push edx
// 004394ba  8d4e08               lea ecx, [esi + 8]
// 004394bd  51                   push ecx
// 004394be  50                   push eax
// 004394bf  83c0f8               add eax, -8
// 004394c2  50                   push eax
// 004394c3  e8c8841600           call 0x5a1990
// 004394c8  834610f8             add dword ptr [esi + 0x10], -8
// 004394cc  8b442444             mov eax, dword ptr [esp + 0x44]
// 004394d0  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 004394d4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004394d7  83c428               add esp, 0x28
// 004394da  c70700000000         mov dword ptr [edi], 0
// 004394e0  39460c               cmp dword ptr [esi + 0xc], eax
// 004394e3  7704                 ja 0x4394e9
// 004394e5  3bc1                 cmp eax, ecx
// 004394e7  760a                 jbe 0x4394f3
// 004394e9  ff1590288000         call dword ptr [0x802890]
// 004394ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004394f3  8b16                 mov edx, dword ptr [esi]
// 004394f5  894704               mov dword ptr [edi + 4], eax
// 004394f8  8917                 mov dword ptr [edi], edx
// 004394fa  8bc7                 mov eax, edi
// 004394fc  5f                   pop edi
// 004394fd  5e                   pop esi
// 004394fe  83c408               add esp, 8
// 00439501  c20c00               ret 0xc
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
