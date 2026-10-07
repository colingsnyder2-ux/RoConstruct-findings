// roc 2007-08 005392b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005392b0
//
// 005392b0  83ec08               sub esp, 8
// 005392b3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005392b7  56                   push esi
// 005392b8  32c0                 xor al, al
// 005392ba  57                   push edi
// 005392bb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005392bf  8844240c             mov byte ptr [esp + 0xc], al
// 005392c3  88442408             mov byte ptr [esp + 8], al
// 005392c7  8b442408             mov eax, dword ptr [esp + 8]
// 005392cb  50                   push eax
// 005392cc  8bf1                 mov esi, ecx
// 005392ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005392d2  8b4608               mov eax, dword ptr [esi + 8]
// 005392d5  51                   push ecx
// 005392d6  52                   push edx
// 005392d7  57                   push edi
// 005392d8  50                   push eax
// 005392d9  8d4f08               lea ecx, [edi + 8]
// 005392dc  51                   push ecx
// 005392dd  e86e41edff           call 0x40d450
// 005392e2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005392e6  8b4608               mov eax, dword ptr [esi + 8]
// 005392e9  52                   push edx
// 005392ea  56                   push esi
// 005392eb  50                   push eax
// 005392ec  83c0f8               add eax, -8
// 005392ef  50                   push eax
// 005392f0  e85b48edff           call 0x40db50
// 005392f5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005392f9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005392fd  83c428               add esp, 0x28
// 00539300  834608f8             add dword ptr [esi + 8], -8
// 00539304  897804               mov dword ptr [eax + 4], edi
// 00539307  5f                   pop edi
// 00539308  8908                 mov dword ptr [eax], ecx
// 0053930a  5e                   pop esi
// 0053930b  83c408               add esp, 8
// 0053930e  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_sp.cpp (function ?erase@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@2@V32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_sp.cpp
