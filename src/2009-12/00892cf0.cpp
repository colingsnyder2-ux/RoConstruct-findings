// roc 2009-12 00892cf0  unit: CXTPToolBar::CControlButtonHide  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892cf0
//
// 00892cf0  6aff                 push -1
// 00892cf2  682a149600           push 0x96142a
// 00892cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00892cfd  50                   push eax
// 00892cfe  83ec0c               sub esp, 0xc
// 00892d01  53                   push ebx
// 00892d02  55                   push ebp
// 00892d03  56                   push esi
// 00892d04  57                   push edi
// 00892d05  a10052b600           mov eax, dword ptr [0xb65200]
// 00892d0a  33c4                 xor eax, esp
// 00892d0c  50                   push eax
// 00892d0d  8d442420             lea eax, [esp + 0x20]
// 00892d11  64a300000000         mov dword ptr fs:[0], eax
// 00892d17  8bf1                 mov esi, ecx
// 00892d19  89742418             mov dword ptr [esp + 0x18], esi
// 00892d1d  e820370900           call 0x926442
// 00892d22  8d6e24               lea ebp, [esi + 0x24]
// 00892d25  33ff                 xor edi, edi
// 00892d27  8bcd                 mov ecx, ebp
// 00892d29  897c2428             mov dword ptr [esp + 0x28], edi
// 00892d2d  c7061c3da000         mov dword ptr [esi], 0xa03d1c
// 00892d33  ff1574de9800         call dword ptr [0x98de74]
// 00892d39  8d4e28               lea ecx, [esi + 0x28]
// 00892d3c  ff1574de9800         call dword ptr [0x98de74]
// 00892d42  b302                 mov bl, 2
// 00892d44  6a44                 push 0x44
// 00892d46  885c242c             mov byte ptr [esp + 0x2c], bl
// 00892d4a  e8110bf6ff           call 0x7f3860
// 00892d4f  83c404               add esp, 4
// 00892d52  8944241c             mov dword ptr [esp + 0x1c], eax
// 00892d56  c644242803           mov byte ptr [esp + 0x28], 3
// 00892d5b  3bc7                 cmp eax, edi
// 00892d5d  7409                 je 0x892d68
// 00892d5f  8bc8                 mov ecx, eax
// 00892d61  e80a3efbff           call 0x846b70
// 00892d66  eb02                 jmp 0x892d6a
// 00892d68  33c0                 xor eax, eax
// 00892d6a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00892d6e  51                   push ecx
// 00892d6f  8bc8                 mov ecx, eax
// 00892d71  885c242c             mov byte ptr [esp + 0x2c], bl
// 00892d75  894620               mov dword ptr [esi + 0x20], eax
// 00892d78  e89323fbff           call 0x845110
// 00892d7d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00892d81  895e30               mov dword ptr [esi + 0x30], ebx
// 00892d84  897e34               mov dword ptr [esi + 0x34], edi
// 00892d87  e8920df6ff           call 0x7f3b1e
// 00892d8c  0fb7c3               movzx eax, bx
// 00892d8f  50                   push eax
// 00892d90  6a0e                 push 0xe
// 00892d92  50                   push eax
// 00892d93  e84614f6ff           call 0x7f41de
// 00892d98  50                   push eax
// 00892d99  ff1574cc9800         call dword ptr [0x98cc74]
// 00892d9f  89462c               mov dword ptr [esi + 0x2c], eax
// 00892da2  e8770df6ff           call 0x7f3b1e
// 00892da7  8b4804               mov ecx, dword ptr [eax + 4]
// 00892daa  e831380900           call 0x9265e0
// 00892daf  89442414             mov dword ptr [esp + 0x14], eax
// 00892db3  3bc7                 cmp eax, edi
// 00892db5  743f                 je 0x892df6
// 00892db7  e8620df6ff           call 0x7f3b1e
// 00892dbc  8b4004               mov eax, dword ptr [eax + 4]
// 00892dbf  8d542414             lea edx, [esp + 0x14]
// 00892dc3  52                   push edx
// 00892dc4  8bc8                 mov ecx, eax
// 00892dc6  e80f380900           call 0x9265da
// 00892dcb  8bf8                 mov edi, eax
// 00892dcd  3b5f40               cmp ebx, dword ptr [edi + 0x40]
// 00892dd0  7409                 je 0x892ddb
// 00892dd2  837c241400           cmp dword ptr [esp + 0x14], 0
// 00892dd7  75de                 jne 0x892db7
// 00892dd9  eb1b                 jmp 0x892df6
// 00892ddb  8b07                 mov eax, dword ptr [edi]
// 00892ddd  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00892de0  6a01                 push 1
// 00892de2  55                   push ebp
// 00892de3  8bcf                 mov ecx, edi
// 00892de5  ffd2                 call edx
// 00892de7  8b17                 mov edx, dword ptr [edi]
// 00892de9  6a06                 push 6
// 00892deb  8d4628               lea eax, [esi + 0x28]
// 00892dee  50                   push eax
// 00892def  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00892df2  8bcf                 mov ecx, edi
// 00892df4  ffd0                 call eax
// 00892df6  8bc6                 mov eax, esi
// 00892df8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00892dfc  64890d00000000       mov dword ptr fs:[0], ecx
// 00892e03  59                   pop ecx
// 00892e04  5f                   pop edi
// 00892e05  5e                   pop esi
// 00892e06  5d                   pop ebp
// 00892e07  5b                   pop ebx
// 00892e08  83c418               add esp, 0x18
// 00892e0b  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPMenuBarMDIMenuInfo@@QAE@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp