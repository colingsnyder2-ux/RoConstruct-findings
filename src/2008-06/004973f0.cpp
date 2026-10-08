// roc 2008-06 004973f0  unit: RBX::Network::Players  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004973f0
//
// 004973f0  8bc1                 mov eax, ecx
// 004973f2  8b00                 mov eax, dword ptr [eax]
// 004973f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004973f8  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 004973fb  56                   push esi
// 004973fc  8b30                 mov esi, dword ptr [eax]
// 004973fe  83ec08               sub esp, 8
// 00497401  8bd4                 mov edx, esp
// 00497403  8932                 mov dword ptr [edx], esi
// 00497405  8b4004               mov eax, dword ptr [eax + 4]
// 00497408  83c108               add ecx, 8
// 0049740b  89642414             mov dword ptr [esp + 0x14], esp
// 0049740f  894204               mov dword ptr [edx + 4], eax
// 00497412  85c0                 test eax, eax
// 00497414  740c                 je 0x497422
// 00497416  83c004               add eax, 4
// 00497419  ba01000000           mov edx, 1
// 0049741e  f00fc110             lock xadd dword ptr [eax], edx
// 00497422  e8d9f5ffff           call 0x496a00
// 00497427  8b442408             mov eax, dword ptr [esp + 8]
// 0049742b  5e                   pop esi
// 0049742c  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ??$?RUconnection_slot_pair@detail@signals@boost@@@?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@?$call_bound1@X@detail@signals@boost@@QBE?AUunusable@234@ABUconnection_slot_pair@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
