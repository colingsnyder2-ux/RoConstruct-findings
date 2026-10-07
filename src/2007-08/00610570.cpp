// roc 2007-08 00610570  unit: RBX::Ball  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610570
//
// 00610570  51                   push ecx
// 00610571  85ff                 test edi, edi
// 00610573  55                   push ebp
// 00610574  7431                 je 0x6105a7
// 00610576  b801000000           mov eax, 1
// 0061057b  8bce                 mov ecx, esi
// 0061057d  d3e0                 shl eax, cl
// 0061057f  844706               test byte ptr [edi + 6], al
// 00610582  89442404             mov dword ptr [esp + 4], eax
// 00610586  751f                 jne 0x6105a7
// 00610588  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061058c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0061058f  8b94b1bc000000       mov edx, dword ptr [ecx + esi*4 + 0xbc]
// 00610596  52                   push edx
// 00610597  56                   push esi
// 00610598  57                   push edi
// 00610599  e8a2faffff           call 0x610040
// 0061059e  8be8                 mov ebp, eax
// 006105a0  83c40c               add esp, 0xc
// 006105a3  85ed                 test ebp, ebp
// 006105a5  7505                 jne 0x6105ac
// 006105a7  33c0                 xor eax, eax
// 006105a9  5d                   pop ebp
// 006105aa  59                   pop ecx
// 006105ab  c3                   ret 
// 006105ac  3bfb                 cmp edi, ebx
// 006105ae  743a                 je 0x6105ea
// 006105b0  85db                 test ebx, ebx
// 006105b2  74f3                 je 0x6105a7
// 006105b4  8a442404             mov al, byte ptr [esp + 4]
// 006105b8  844306               test byte ptr [ebx + 6], al
// 006105bb  75ea                 jne 0x6105a7
// 006105bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006105c1  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006105c4  8b84b2bc000000       mov eax, dword ptr [edx + esi*4 + 0xbc]
// 006105cb  50                   push eax
// 006105cc  56                   push esi
// 006105cd  53                   push ebx
// 006105ce  e86dfaffff           call 0x610040
// 006105d3  83c40c               add esp, 0xc
// 006105d6  85c0                 test eax, eax
// 006105d8  74cd                 je 0x6105a7
// 006105da  50                   push eax
// 006105db  55                   push ebp
// 006105dc  e89fe4ffff           call 0x60ea80
// 006105e1  83c408               add esp, 8
// 006105e4  f7d8                 neg eax
// 006105e6  1bc0                 sbb eax, eax
// 006105e8  23c5                 and eax, ebp
// 006105ea  5d                   pop ebp
// 006105eb  59                   pop ecx
// 006105ec  c3                   ret 
// library lua-5.1.4/lvm.c (function _get_compTM)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
