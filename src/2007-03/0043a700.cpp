// roc 2007-03 0043a700  unit: seg_00430000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043a700
//
// 0043a700  83ec08               sub esp, 8
// 0043a703  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0043a707  56                   push esi
// 0043a708  32c0                 xor al, al
// 0043a70a  57                   push edi
// 0043a70b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043a70f  8844240c             mov byte ptr [esp + 0xc], al
// 0043a713  88442408             mov byte ptr [esp + 8], al
// 0043a717  8b442408             mov eax, dword ptr [esp + 8]
// 0043a71b  50                   push eax
// 0043a71c  8bf1                 mov esi, ecx
// 0043a71e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043a722  8b4608               mov eax, dword ptr [esi + 8]
// 0043a725  51                   push ecx
// 0043a726  52                   push edx
// 0043a727  57                   push edi
// 0043a728  50                   push eax
// 0043a729  8d4f08               lea ecx, [edi + 8]
// 0043a72c  51                   push ecx
// 0043a72d  e81e3dfdff           call 0x40e450
// 0043a732  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0043a736  8b4608               mov eax, dword ptr [esi + 8]
// 0043a739  52                   push edx
// 0043a73a  56                   push esi
// 0043a73b  50                   push eax
// 0043a73c  83c0f8               add eax, -8
// 0043a73f  50                   push eax
// 0043a740  e8ab520600           call 0x49f9f0
// 0043a745  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0043a749  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0043a74d  83c428               add esp, 0x28
// 0043a750  834608f8             add dword ptr [esi + 8], -8
// 0043a754  897804               mov dword ptr [eax + 4], edi
// 0043a757  5f                   pop edi
// 0043a758  8908                 mov dword ptr [eax], ecx
// 0043a75a  5e                   pop esi
// 0043a75b  83c408               add esp, 8
// 0043a75e  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ?erase@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@2@V32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
