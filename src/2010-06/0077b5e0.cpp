// from server: 100% by auto
// roc 2010-06 0077b5e0  unit: RBX::PartDropTool  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b5e0
//
// 0077b5e0  51                   push ecx
// 0077b5e1  55                   push ebp
// 0077b5e2  85ff                 test edi, edi
// 0077b5e4  7431                 je 0x77b617
// 0077b5e6  b801000000           mov eax, 1
// 0077b5eb  8bce                 mov ecx, esi
// 0077b5ed  d3e0                 shl eax, cl
// 0077b5ef  89442404             mov dword ptr [esp + 4], eax
// 0077b5f3  844706               test byte ptr [edi + 6], al
// 0077b5f6  751f                 jne 0x77b617
// 0077b5f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077b5fc  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0077b5ff  8b94b1bc000000       mov edx, dword ptr [ecx + esi*4 + 0xbc]
// 0077b606  52                   push edx
// 0077b607  56                   push esi
// 0077b608  57                   push edi
// 0077b609  e892faffff           call 0x77b0a0
// 0077b60e  8be8                 mov ebp, eax
// 0077b610  83c40c               add esp, 0xc
// 0077b613  85ed                 test ebp, ebp
// 0077b615  7505                 jne 0x77b61c
// 0077b617  33c0                 xor eax, eax
// 0077b619  5d                   pop ebp
// 0077b61a  59                   pop ecx
// 0077b61b  c3                   ret 
// 0077b61c  3bfb                 cmp edi, ebx
// 0077b61e  743a                 je 0x77b65a
// 0077b620  85db                 test ebx, ebx
// 0077b622  74f3                 je 0x77b617
// 0077b624  8a442404             mov al, byte ptr [esp + 4]
// 0077b628  844306               test byte ptr [ebx + 6], al
// 0077b62b  75ea                 jne 0x77b617
// 0077b62d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077b631  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0077b634  8b84b2bc000000       mov eax, dword ptr [edx + esi*4 + 0xbc]
// 0077b63b  50                   push eax
// 0077b63c  56                   push esi
// 0077b63d  53                   push ebx
// 0077b63e  e85dfaffff           call 0x77b0a0
// 0077b643  83c40c               add esp, 0xc
// 0077b646  85c0                 test eax, eax
// 0077b648  74cd                 je 0x77b617
// 0077b64a  50                   push eax
// 0077b64b  55                   push ebp
// 0077b64c  e83f73fbff           call 0x732990
// 0077b651  83c408               add esp, 8
// 0077b654  f7d8                 neg eax
// 0077b656  1bc0                 sbb eax, eax
// 0077b658  23c5                 and eax, ebp
// 0077b65a  5d                   pop ebp
// 0077b65b  59                   pop ecx
// 0077b65c  c3                   ret 
// library lua-5.1.4/lvm.c (function _get_compTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
