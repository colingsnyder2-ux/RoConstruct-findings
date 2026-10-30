// roc 2009-12 00723ae0  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723ae0
//
// 00723ae0  55                   push ebp
// 00723ae1  8bec                 mov ebp, esp
// 00723ae3  6aff                 push -1
// 00723ae5  6880ec9400           push 0x94ec80
// 00723aea  64a100000000         mov eax, dword ptr fs:[0]
// 00723af0  50                   push eax
// 00723af1  64892500000000       mov dword ptr fs:[0], esp
// 00723af8  51                   push ecx
// 00723af9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00723afc  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00723aff  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00723b02  53                   push ebx
// 00723b03  56                   push esi
// 00723b04  57                   push edi
// 00723b05  8965f0               mov dword ptr [ebp - 0x10], esp
// 00723b08  50                   push eax
// 00723b09  8b4508               mov eax, dword ptr [ebp + 8]
// 00723b0c  51                   push ecx
// 00723b0d  52                   push edx
// 00723b0e  33db                 xor ebx, ebx
// 00723b10  50                   push eax
// 00723b11  895dfc               mov dword ptr [ebp - 4], ebx
// 00723b14  e887efffff           call 0x722aa0
// 00723b19  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00723b1c  83c410               add esp, 0x10
// 00723b1f  385901               cmp byte ptr [ecx + 1], bl
// 00723b22  7403                 je 0x723b27
// 00723b24  885901               mov byte ptr [ecx + 1], bl
// 00723b27  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00723b2a  5f                   pop edi
// 00723b2b  5e                   pop esi
// 00723b2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00723b33  5b                   pop ebx
// 00723b34  8be5                 mov esp, ebp
// 00723b36  5d                   pop ebp
// 00723b37  c3                   ret 
// 00723b38  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00723b3b  33db                 xor ebx, ebx
// 00723b3d  8965f0               mov dword ptr [ebp - 0x10], esp
// 00723b40  385801               cmp byte ptr [eax + 1], bl
// 00723b43  7403                 je 0x723b48
// 00723b45  885801               mov byte ptr [eax + 1], bl
// 00723b48  53                   push ebx
// 00723b49  53                   push ebx
// 00723b4a  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00723b51  e8220d0d00           call 0x7f4878
// copied from an identical function in another client (function ??$execute_all@V?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@V1234@V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@234@@detail@iostreams@boost@@YAHV?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@012@0V?$reset_operation@V?$optional@V?$concept_adapter@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@@detail@iostreams@boost@@@detail@iostreams@boost@@@012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp