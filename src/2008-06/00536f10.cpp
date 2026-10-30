// from server: 100% by auto
// roc 2008-06 00536f10  unit: seg_00530000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536f10
//
// 00536f10  56                   push esi
// 00536f11  57                   push edi
// 00536f12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00536f16  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 00536f1c  8b4608               mov eax, dword ptr [esi + 8]
// 00536f1f  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 00536f25  0f8381000000         jae 0x536fac
// 00536f2b  53                   push ebx
// 00536f2c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00536f30  55                   push ebp
// 00536f31  8d6e0c               lea ebp, [esi + 0xc]
// 00536f34  837d0008             cmp dword ptr [ebp], 8
// 00536f38  7325                 jae 0x536f5f
// 00536f3a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00536f3e  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 00536f44  6a08                 push 8
// 00536f46  55                   push ebp
// 00536f47  8d5618               lea edx, [esi + 0x18]
// 00536f4a  52                   push edx
// 00536f4b  8b542424             mov edx, dword ptr [esp + 0x24]
// 00536f4f  50                   push eax
// 00536f50  8b4104               mov eax, dword ptr [ecx + 4]
// 00536f53  53                   push ebx
// 00536f54  52                   push edx
// 00536f55  57                   push edi
// 00536f56  ffd0                 call eax
// 00536f58  83c41c               add esp, 0x1c
// 00536f5b  837d0008             cmp dword ptr [ebp], 8
// 00536f5f  7549                 jne 0x536faa
// 00536f61  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 00536f67  8b4104               mov eax, dword ptr [ecx + 4]
// 00536f6a  8d5618               lea edx, [esi + 0x18]
// 00536f6d  52                   push edx
// 00536f6e  57                   push edi
// 00536f6f  ffd0                 call eax
// 00536f71  83c408               add esp, 8
// 00536f74  84c0                 test al, al
// 00536f76  7426                 je 0x536f9e
// 00536f78  807e1000             cmp byte ptr [esi + 0x10], 0
// 00536f7c  7406                 je 0x536f84
// 00536f7e  ff03                 inc dword ptr [ebx]
// 00536f80  c6461000             mov byte ptr [esi + 0x10], 0
// 00536f84  ff4608               inc dword ptr [esi + 8]
// 00536f87  c7450000000000       mov dword ptr [ebp], 0
// 00536f8e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00536f91  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 00536f97  729b                 jb 0x536f34
// 00536f99  5d                   pop ebp
// 00536f9a  5b                   pop ebx
// 00536f9b  5f                   pop edi
// 00536f9c  5e                   pop esi
// 00536f9d  c3                   ret 
// 00536f9e  807e1000             cmp byte ptr [esi + 0x10], 0
// 00536fa2  7506                 jne 0x536faa
// 00536fa4  ff0b                 dec dword ptr [ebx]
// 00536fa6  c6461001             mov byte ptr [esi + 0x10], 1
// 00536faa  5d                   pop ebp
// 00536fab  5b                   pop ebx
// 00536fac  5f                   pop edi
// 00536fad  5e                   pop esi
// 00536fae  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
