// from server: 100% by auto
// roc 2011-06 00874490  unit: CXTPToolTipContext  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874490
//
// 00874490  8b442404             mov eax, dword ptr [esp + 4]
// 00874494  83ec24               sub esp, 0x24
// 00874497  85c0                 test eax, eax
// 00874499  757c                 jne 0x874517
// 0087449b  8b0d908ad100         mov ecx, dword ptr [0xd18a90]
// 008744a1  85c9                 test ecx, ecx
// 008744a3  7472                 je 0x874517
// 008744a5  398190000000         cmp dword ptr [ecx + 0x90], eax
// 008744ab  746a                 je 0x874517
// 008744ad  56                   push esi
// 008744ae  8b742434             mov esi, dword ptr [esp + 0x34]
// 008744b2  8b06                 mov eax, dword ptr [esi]
// 008744b4  8b5604               mov edx, dword ptr [esi + 4]
// 008744b7  89442404             mov dword ptr [esp + 4], eax
// 008744bb  8d442404             lea eax, [esp + 4]
// 008744bf  50                   push eax
// 008744c0  6a00                 push 0
// 008744c2  89542410             mov dword ptr [esp + 0x10], edx
// 008744c6  e885d0ffff           call 0x871550
// 008744cb  8b0d908ad100         mov ecx, dword ptr [0xd18a90]
// 008744d1  3b8190000000         cmp eax, dword ptr [ecx + 0x90]
// 008744d7  7422                 je 0x8744fb
// 008744d9  8b542404             mov edx, dword ptr [esp + 4]
// 008744dd  8b442408             mov eax, dword ptr [esp + 8]
// 008744e1  89542420             mov dword ptr [esp + 0x20], edx
// 008744e5  8d54240c             lea edx, [esp + 0xc]
// 008744e9  52                   push edx
// 008744ea  89442428             mov dword ptr [esp + 0x28], eax
// 008744ee  c744241400020000     mov dword ptr [esp + 0x14], 0x200
// 008744f6  e835f6ffff           call 0x873b30
// 008744fb  8b442430             mov eax, dword ptr [esp + 0x30]
// 008744ff  8b0d8c8ad100         mov ecx, dword ptr [0xd18a8c]
// 00874505  56                   push esi
// 00874506  50                   push eax
// 00874507  6a00                 push 0
// 00874509  51                   push ecx
// 0087450a  ff150c1ba400         call dword ptr [0xa41b0c]
// 00874510  5e                   pop esi
// 00874511  83c424               add esp, 0x24
// 00874514  c20c00               ret 0xc
// 00874517  8b542430             mov edx, dword ptr [esp + 0x30]
// 0087451b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087451f  52                   push edx
// 00874520  8b158c8ad100         mov edx, dword ptr [0xd18a8c]
// 00874526  51                   push ecx
// 00874527  50                   push eax
// 00874528  52                   push edx
// 00874529  ff150c1ba400         call dword ptr [0xa41b0c]
// 0087452f  83c424               add esp, 0x24
// 00874532  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?MouseProc@CXTPToolTipContextToolTip@@KGJHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
