// roc 2009-12 008972c0  unit: CXTPRibbonBar  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008972c0
//
// 008972c0  53                   push ebx
// 008972c1  56                   push esi
// 008972c2  57                   push edi
// 008972c3  8bf1                 mov esi, ecx
// 008972c5  e806d2f6ff           call 0x8044d0
// 008972ca  8bc8                 mov ecx, eax
// 008972cc  e89fe8f7ff           call 0x815b70
// 008972d1  8bf8                 mov edi, eax
// 008972d3  837f0400             cmp dword ptr [edi + 4], 0
// 008972d7  7f53                 jg 0x89732c
// 008972d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008972dc  50                   push eax
// 008972dd  e8fe7afdff           call 0x86ede0
// 008972e2  83c404               add esp, 4
// 008972e5  85c0                 test eax, eax
// 008972e7  7443                 je 0x89732c
// 008972e9  56                   push esi
// 008972ea  8bcf                 mov ecx, edi
// 008972ec  e8af7cfdff           call 0x86efa0
// 008972f1  85c0                 test eax, eax
// 008972f3  7537                 jne 0x89732c
// 008972f5  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008972fc  752e                 jne 0x89732c
// 008972fe  8bce                 mov ecx, esi
// 00897300  33db                 xor ebx, ebx
// 00897302  e869d9ffff           call 0x894c70
// 00897307  39984c060000         cmp dword ptr [eax + 0x64c], ebx
// 0089730d  7422                 je 0x897331
// 0089730f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00897313  8b96c4010000         mov edx, dword ptr [esi + 0x1c4]
// 00897319  8b5208               mov edx, dword ptr [edx + 8]
// 0089731c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00897322  50                   push eax
// 00897323  8b442418             mov eax, dword ptr [esp + 0x18]
// 00897327  50                   push eax
// 00897328  ffd2                 call edx
// 0089732a  eb07                 jmp 0x897333
// 0089732c  bb01000000           mov ebx, 1
// 00897331  33c0                 xor eax, eax
// 00897333  3b86d8010000         cmp eax, dword ptr [esi + 0x1d8]
// 00897339  7420                 je 0x89735b
// 0089733b  50                   push eax
// 0089733c  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00897342  e8f9830500           call 0x8ef740
// 00897347  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0089734e  740b                 je 0x89735b
// 00897350  8b4620               mov eax, dword ptr [esi + 0x20]
// 00897353  50                   push eax
// 00897354  8bcf                 mov ecx, edi
// 00897356  e8f57bfdff           call 0x86ef50
// 0089735b  85db                 test ebx, ebx
// 0089735d  7523                 jne 0x897382
// 0089735f  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00897365  85c0                 test eax, eax
// 00897367  7419                 je 0x897382
// 00897369  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089736d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00897371  51                   push ecx
// 00897372  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00897375  52                   push edx
// 00897376  51                   push ecx
// 00897377  8d8884010000         lea ecx, [eax + 0x184]
// 0089737d  e8be860300           call 0x8cfa40
// 00897382  8b542418             mov edx, dword ptr [esp + 0x18]
// 00897386  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089738a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089738e  52                   push edx
// 0089738f  50                   push eax
// 00897390  51                   push ecx
// 00897391  8bce                 mov ecx, esi
// 00897393  e838daf6ff           call 0x804dd0
// 00897398  5f                   pop edi
// 00897399  5e                   pop esi
// 0089739a  5b                   pop ebx
// 0089739b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseMove@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
