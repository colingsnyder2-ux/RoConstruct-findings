// roc 2012-06 00a58420  unit: VCEdit::?$CXTMaskEditT  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a58420
//
// 00a58420  8b442404             mov eax, dword ptr [esp + 4]
// 00a58424  53                   push ebx
// 00a58425  55                   push ebp
// 00a58426  56                   push esi
// 00a58427  8bf1                 mov esi, ecx
// 00a58429  57                   push edi
// 00a5842a  8d7e70               lea edi, [esi + 0x70]
// 00a5842d  50                   push eax
// 00a5842e  8bcf                 mov ecx, edi
// 00a58430  ff157847b200         call dword ptr [0xb24778]
// 00a58436  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a5843a  8dae84000000         lea ebp, [esi + 0x84]
// 00a58440  53                   push ebx
// 00a58441  8bcd                 mov ecx, ebp
// 00a58443  ff157847b200         call dword ptr [0xb24778]
// 00a58449  8bcd                 mov ecx, ebp
// 00a5844b  ff155846b200         call dword ptr [0xb24658]
// 00a58451  8bcf                 mov ecx, edi
// 00a58453  89442414             mov dword ptr [esp + 0x14], eax
// 00a58457  ff155846b200         call dword ptr [0xb24658]
// 00a5845d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a58461  3bc1                 cmp eax, ecx
// 00a58463  7409                 je 0xa5846e
// 00a58465  5f                   pop edi
// 00a58466  5e                   pop esi
// 00a58467  5d                   pop ebp
// 00a58468  33c0                 xor eax, eax
// 00a5846a  5b                   pop ebx
// 00a5846b  c20c00               ret 0xc
// 00a5846e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a58472  8dbe80000000         lea edi, [esi + 0x80]
// 00a58478  85c0                 test eax, eax
// 00a5847a  750f                 jne 0xa5848b
// 00a5847c  53                   push ebx
// 00a5847d  8d4e74               lea ecx, [esi + 0x74]
// 00a58480  ff157847b200         call dword ptr [0xb24778]
// 00a58486  50                   push eax
// 00a58487  8bcf                 mov ecx, edi
// 00a58489  eb48                 jmp 0xa584d3
// 00a5848b  8d5e74               lea ebx, [esi + 0x74]
// 00a5848e  50                   push eax
// 00a5848f  8bcb                 mov ecx, ebx
// 00a58491  ff157847b200         call dword ptr [0xb24778]
// 00a58497  50                   push eax
// 00a58498  8bcf                 mov ecx, edi
// 00a5849a  ff152045b200         call dword ptr [0xb24520]
// 00a584a0  8bcb                 mov ecx, ebx
// 00a584a2  ff155846b200         call dword ptr [0xb24658]
// 00a584a8  8bcd                 mov ecx, ebp
// 00a584aa  89442414             mov dword ptr [esp + 0x14], eax
// 00a584ae  ff155846b200         call dword ptr [0xb24658]
// 00a584b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a584b8  3bc8                 cmp ecx, eax
// 00a584ba  741d                 je 0xa584d9
// 00a584bc  6a00                 push 0
// 00a584be  6a00                 push 0
// 00a584c0  8bcb                 mov ecx, ebx
// 00a584c2  ff159847b200         call dword ptr [0xb24798]
// 00a584c8  50                   push eax
// 00a584c9  8bce                 mov ecx, esi
// 00a584cb  e870f8ffff           call 0xa57d40
// 00a584d0  57                   push edi
// 00a584d1  8bcb                 mov ecx, ebx
// 00a584d3  ff152045b200         call dword ptr [0xb24520]
// 00a584d9  33c0                 xor eax, eax
// 00a584db  8bcf                 mov ecx, edi
// 00a584dd  894664               mov dword ptr [esi + 0x64], eax
// 00a584e0  894668               mov dword ptr [esi + 0x68], eax
// 00a584e3  ff159847b200         call dword ptr [0xb24798]
// 00a584e9  50                   push eax
// 00a584ea  8bce                 mov ecx, esi
// 00a584ec  e8cb9ff2ff           call 0x9824bc
// 00a584f1  57                   push edi
// 00a584f2  8d4e78               lea ecx, [esi + 0x78]
// 00a584f5  ff152045b200         call dword ptr [0xb24520]
// 00a584fb  5f                   pop edi
// 00a584fc  5e                   pop esi
// 00a584fd  5d                   pop ebp
// 00a584fe  b801000000           mov eax, 1
// 00a58503  5b                   pop ebx
// 00a58504  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetEditMask@?$CXTMaskEditT@VCEdit@@@@UAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp