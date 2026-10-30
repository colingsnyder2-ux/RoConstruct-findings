// from server: 100% by auto
// roc 2007-08 006105f0  unit: RBX::Ball  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006105f0
//
// 006105f0  55                   push ebp
// 006105f1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006105f5  56                   push esi
// 006105f6  57                   push edi
// 006105f7  8bf0                 mov esi, eax
// 006105f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006105fd  55                   push ebp
// 006105fe  50                   push eax
// 006105ff  56                   push esi
// 00610600  e86bfaffff           call 0x610070
// 00610605  8bf8                 mov edi, eax
// 00610607  83c40c               add esp, 0xc
// 0061060a  837f0800             cmp dword ptr [edi + 8], 0
// 0061060e  7507                 jne 0x610617
// 00610610  5f                   pop edi
// 00610611  5e                   pop esi
// 00610612  83c8ff               or eax, 0xffffffff
// 00610615  5d                   pop ebp
// 00610616  c3                   ret 
// 00610617  55                   push ebp
// 00610618  53                   push ebx
// 00610619  56                   push esi
// 0061061a  e851faffff           call 0x610070
// 0061061f  50                   push eax
// 00610620  57                   push edi
// 00610621  e85ae4ffff           call 0x60ea80
// 00610626  83c414               add esp, 0x14
// 00610629  85c0                 test eax, eax
// 0061062b  74e3                 je 0x610610
// 0061062d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00610631  8b4608               mov eax, dword ptr [esi + 8]
// 00610634  57                   push edi
// 00610635  56                   push esi
// 00610636  8bcb                 mov ecx, ebx
// 00610638  e8e3fbffff           call 0x610220
// 0061063d  8b7608               mov esi, dword ptr [esi + 8]
// 00610640  8b4608               mov eax, dword ptr [esi + 8]
// 00610643  83c408               add esp, 8
// 00610646  85c0                 test eax, eax
// 00610648  7413                 je 0x61065d
// 0061064a  83f801               cmp eax, 1
// 0061064d  7505                 jne 0x610654
// 0061064f  833e00               cmp dword ptr [esi], 0
// 00610652  7409                 je 0x61065d
// 00610654  5f                   pop edi
// 00610655  5e                   pop esi
// 00610656  b801000000           mov eax, 1
// 0061065b  5d                   pop ebp
// 0061065c  c3                   ret 
// 0061065d  5f                   pop edi
// 0061065e  5e                   pop esi
// 0061065f  33c0                 xor eax, eax
// 00610661  5d                   pop ebp
// 00610662  c3                   ret 
// library lua-5.1.4/lvm.c (function _call_orderTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
