// roc 2008-06 006c3900  unit: CXTPToolBar  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3900
//
// 006c3900  83ec10               sub esp, 0x10
// 006c3903  56                   push esi
// 006c3904  57                   push edi
// 006c3905  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006c3909  8bf1                 mov esi, ecx
// 006c390b  39bedc000000         cmp dword ptr [esi + 0xdc], edi
// 006c3911  0f8407010000         je 0x6c3a1e
// 006c3917  89bedc000000         mov dword ptr [esi + 0xdc], edi
// 006c391d  85ff                 test edi, edi
// 006c391f  750e                 jne 0x6c392f
// 006c3921  8b06                 mov eax, dword ptr [esi]
// 006c3923  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 006c3929  57                   push edi
// 006c392a  6a01                 push 1
// 006c392c  57                   push edi
// 006c392d  ffd2                 call edx
// 006c392f  8bc7                 mov eax, edi
// 006c3931  f7d8                 neg eax
// 006c3933  1bc0                 sbb eax, eax
// 006c3935  53                   push ebx
// 006c3936  83e008               and eax, 8
// 006c3939  50                   push eax
// 006c393a  8bce                 mov ecx, esi
// 006c393c  e82dd0fdff           call 0x6a096e
// 006c3941  8bce                 mov ecx, esi
// 006c3943  e8c814ffff           call 0x6b4e10
// 006c3948  8bd8                 mov ebx, eax
// 006c394a  85ff                 test edi, edi
// 006c394c  7428                 je 0x6c3976
// 006c394e  8b16                 mov edx, dword ptr [esi]
// 006c3950  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 006c3956  8bce                 mov ecx, esi
// 006c3958  ffd0                 call eax
// 006c395a  85db                 test ebx, ebx
// 006c395c  0f84bb000000         je 0x6c3a1d
// 006c3962  83be8c01000000       cmp dword ptr [esi + 0x18c], 0
// 006c3969  747d                 je 0x6c39e8
// 006c396b  85ff                 test edi, edi
// 006c396d  7579                 jne 0x6c39e8
// 006c396f  bf01000000           mov edi, 1
// 006c3974  eb74                 jmp 0x6c39ea
// 006c3976  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006c397c  83f802               cmp eax, 2
// 006c397f  740e                 je 0x6c398f
// 006c3981  85c0                 test eax, eax
// 006c3983  740a                 je 0x6c398f
// 006c3985  83f803               cmp eax, 3
// 006c3988  7405                 je 0x6c398f
// 006c398a  83f801               cmp eax, 1
// 006c398d  75cb                 jne 0x6c395a
// 006c398f  85db                 test ebx, ebx
// 006c3991  740b                 je 0x6c399e
// 006c3993  6a00                 push 0
// 006c3995  8bcb                 mov ecx, ebx
// 006c3997  e854fafdff           call 0x6a33f0
// 006c399c  ebbc                 jmp 0x6c395a
// 006c399e  8bce                 mov ecx, esi
// 006c39a0  e81b40ffff           call 0x6b79c0
// 006c39a5  8bf0                 mov esi, eax
// 006c39a7  56                   push esi
// 006c39a8  8d4c2410             lea ecx, [esp + 0x10]
// 006c39ac  e87f410300           call 0x6f7b30
// 006c39b1  85f6                 test esi, esi
// 006c39b3  7468                 je 0x6c3a1d
// 006c39b5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c39b9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 006c39bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c39c1  2b44240c             sub eax, dword ptr [esp + 0xc]
// 006c39c5  0fb7d1               movzx edx, cx
// 006c39c8  0fb7c8               movzx ecx, ax
// 006c39cb  c1e210               shl edx, 0x10
// 006c39ce  0bd1                 or edx, ecx
// 006c39d0  52                   push edx
// 006c39d1  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c39d4  6a00                 push 0
// 006c39d6  6a05                 push 5
// 006c39d8  52                   push edx
// 006c39d9  ff15142e8000         call dword ptr [0x802e14]
// 006c39df  5b                   pop ebx
// 006c39e0  5f                   pop edi
// 006c39e1  5e                   pop esi
// 006c39e2  83c410               add esp, 0x10
// 006c39e5  c20400               ret 4
// 006c39e8  33ff                 xor edi, edi
// 006c39ea  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 006c39f0  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 006c39f6  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006c39f9  50                   push eax
// 006c39fa  56                   push esi
// 006c39fb  6855280000           push 0x2855
// 006c3a00  52                   push edx
// 006c3a01  ff15142e8000         call dword ptr [0x802e14]
// 006c3a07  85ff                 test edi, edi
// 006c3a09  7408                 je 0x6c3a13
// 006c3a0b  56                   push esi
// 006c3a0c  8bcb                 mov ecx, ebx
// 006c3a0e  e86d1bfeff           call 0x6a5580
// 006c3a13  8b4374               mov eax, dword ptr [ebx + 0x74]
// 006c3a16  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006c3a1d  5b                   pop ebx
// 006c3a1e  5f                   pop edi
// 006c3a1f  5e                   pop esi
// 006c3a20  83c410               add esp, 0x10
// 006c3a23  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?SetVisible@CXTPToolBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
