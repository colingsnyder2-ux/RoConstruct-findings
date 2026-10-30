// roc 2007-03 0054b560  unit: seg_00540000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b560
//
// 0054b560  53                   push ebx
// 0054b561  56                   push esi
// 0054b562  8bf1                 mov esi, ecx
// 0054b564  8b4658               mov eax, dword ptr [esi + 0x58]
// 0054b567  c1e803               shr eax, 3
// 0054b56a  a801                 test al, 1
// 0054b56c  7411                 je 0x54b57f
// 0054b56e  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0054b571  833900               cmp dword ptr [ecx], 0
// 0054b574  7509                 jne 0x54b57f
// 0054b576  8b16                 mov edx, dword ptr [esi]
// 0054b578  8b4258               mov eax, dword ptr [edx + 0x58]
// 0054b57b  8bce                 mov ecx, esi
// 0054b57d  ffd0                 call eax
// 0054b57f  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054b583  83fbff               cmp ebx, -1
// 0054b586  747d                 je 0x54b605
// 0054b588  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0054b58b  c1e903               shr ecx, 3
// 0054b58e  f6c101               test cl, 1
// 0054b591  745e                 je 0x54b5f1
// 0054b593  8b5634               mov edx, dword ptr [esi + 0x34]
// 0054b596  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054b599  8b00                 mov eax, dword ptr [eax]
// 0054b59b  8b12                 mov edx, dword ptr [edx]
// 0054b59d  8d0c10               lea ecx, [eax + edx]
// 0054b5a0  3bc1                 cmp eax, ecx
// 0054b5a2  7533                 jne 0x54b5d7
// 0054b5a4  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054b5a7  8b08                 mov ecx, dword ptr [eax]
// 0054b5a9  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054b5ac  8b00                 mov eax, dword ptr [eax]
// 0054b5ae  2bc1                 sub eax, ecx
// 0054b5b0  85c0                 test eax, eax
// 0054b5b2  7e0f                 jle 0x54b5c3
// 0054b5b4  50                   push eax
// 0054b5b5  51                   push ecx
// 0054b5b6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0054b5b9  51                   push ecx
// 0054b5ba  83c640               add esi, 0x40
// 0054b5bd  56                   push esi
// 0054b5be  e80df5ffff           call 0x54aad0
// 0054b5c3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054b5c6  8b00                 mov eax, dword ptr [eax]
// 0054b5c8  8d0c10               lea ecx, [eax + edx]
// 0054b5cb  3bc1                 cmp eax, ecx
// 0054b5cd  7508                 jne 0x54b5d7
// 0054b5cf  5e                   pop esi
// 0054b5d0  83c8ff               or eax, 0xffffffff
// 0054b5d3  5b                   pop ebx
// 0054b5d4  c20400               ret 4
// 0054b5d7  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054b5da  8b02                 mov eax, dword ptr [edx]
// 0054b5dc  8818                 mov byte ptr [eax], bl
// 0054b5de  8b4634               mov eax, dword ptr [esi + 0x34]
// 0054b5e1  8300ff               add dword ptr [eax], -1
// 0054b5e4  8b7624               mov esi, dword ptr [esi + 0x24]
// 0054b5e7  830601               add dword ptr [esi], 1
// 0054b5ea  5e                   pop esi
// 0054b5eb  8bc3                 mov eax, ebx
// 0054b5ed  5b                   pop ebx
// 0054b5ee  c20400               ret 4
// 0054b5f1  8b5648               mov edx, dword ptr [esi + 0x48]
// 0054b5f4  6a01                 push 1
// 0054b5f6  8d4c2410             lea ecx, [esp + 0x10]
// 0054b5fa  51                   push ecx
// 0054b5fb  52                   push edx
// 0054b5fc  83c640               add esi, 0x40
// 0054b5ff  56                   push esi
// 0054b600  e8cbf4ffff           call 0x54aad0
// 0054b605  5e                   pop esi
// 0054b606  33c0                 xor eax, eax
// 0054b608  5b                   pop ebx
// 0054b609  c20400               ret 4
// copied from an identical function in another client (function ?overflow@?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp