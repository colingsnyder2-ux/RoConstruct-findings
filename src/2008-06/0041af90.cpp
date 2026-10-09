// roc 2008-06 0041af90  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041af90
//
// 0041af90  55                   push ebp
// 0041af91  8bec                 mov ebp, esp
// 0041af93  6aff                 push -1
// 0041af95  68c0df7b00           push 0x7bdfc0
// 0041af9a  64a100000000         mov eax, dword ptr fs:[0]
// 0041afa0  50                   push eax
// 0041afa1  64892500000000       mov dword ptr fs:[0], esp
// 0041afa8  83ec08               sub esp, 8
// 0041afab  53                   push ebx
// 0041afac  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0041afaf  33c0                 xor eax, eax
// 0041afb1  56                   push esi
// 0041afb2  8bf1                 mov esi, ecx
// 0041afb4  57                   push edi
// 0041afb5  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041afb8  8975ec               mov dword ptr [ebp - 0x14], esi
// 0041afbb  89460c               mov dword ptr [esi + 0xc], eax
// 0041afbe  894610               mov dword ptr [esi + 0x10], eax
// 0041afc1  894614               mov dword ptr [esi + 0x14], eax
// 0041afc4  3bd8                 cmp ebx, eax
// 0041afc6  744d                 je 0x41b015
// 0041afc8  81fbffffff3f         cmp ebx, 0x3fffffff
// 0041afce  7605                 jbe 0x41afd5
// 0041afd0  e86bbd0a00           call 0x4c6d40
// 0041afd5  50                   push eax
// 0041afd6  53                   push ebx
// 0041afd7  e8745b0000           call 0x420b50
// 0041afdc  8bf8                 mov edi, eax
// 0041afde  c6450800             mov byte ptr [ebp + 8], 0
// 0041afe2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041afe5  8b5508               mov edx, dword ptr [ebp + 8]
// 0041afe8  51                   push ecx
// 0041afe9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0041afec  8d049f               lea eax, [edi + ebx*4]
// 0041afef  52                   push edx
// 0041aff0  894614               mov dword ptr [esi + 0x14], eax
// 0041aff3  8d4608               lea eax, [esi + 8]
// 0041aff6  50                   push eax
// 0041aff7  51                   push ecx
// 0041aff8  53                   push ebx
// 0041aff9  57                   push edi
// 0041affa  897e0c               mov dword ptr [esi + 0xc], edi
// 0041affd  897e10               mov dword ptr [esi + 0x10], edi
// 0041b000  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041b007  e844faffff           call 0x41aa50
// 0041b00c  8d149f               lea edx, [edi + ebx*4]
// 0041b00f  83c420               add esp, 0x20
// 0041b012  895610               mov dword ptr [esi + 0x10], edx
// 0041b015  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041b018  5f                   pop edi
// 0041b019  5e                   pop esi
// 0041b01a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b021  5b                   pop ebx
// 0041b022  8be5                 mov esp, ebp
// 0041b024  5d                   pop ebp
// 0041b025  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Construct_n@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@QAEXIABVany@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
