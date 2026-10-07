// roc 2011-06 007deae0  unit: seg_007d0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007deae0
//
// 007deae0  8b4638               mov eax, dword ptr [esi + 0x38]
// 007deae3  8b08                 mov ecx, dword ptr [eax]
// 007deae5  57                   push edi
// 007deae6  8b3e                 mov edi, dword ptr [esi]
// 007deae8  8d51ff               lea edx, [ecx - 1]
// 007deaeb  8910                 mov dword ptr [eax], edx
// 007deaed  85c9                 test ecx, ecx
// 007deaef  760f                 jbe 0x7deb00
// 007deaf1  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007deaf4  8b5104               mov edx, dword ptr [ecx + 4]
// 007deaf7  0fb602               movzx eax, byte ptr [edx]
// 007deafa  42                   inc edx
// 007deafb  895104               mov dword ptr [ecx + 4], edx
// 007deafe  eb0c                 jmp 0x7deb0c
// 007deb00  8b4638               mov eax, dword ptr [esi + 0x38]
// 007deb03  50                   push eax
// 007deb04  e857bcffff           call 0x7da760
// 007deb09  83c404               add esp, 4
// 007deb0c  8906                 mov dword ptr [esi], eax
// 007deb0e  83f80a               cmp eax, 0xa
// 007deb11  7405                 je 0x7deb18
// 007deb13  83f80d               cmp eax, 0xd
// 007deb16  752f                 jne 0x7deb47
// 007deb18  3bc7                 cmp eax, edi
// 007deb1a  742b                 je 0x7deb47
// 007deb1c  8b4638               mov eax, dword ptr [esi + 0x38]
// 007deb1f  8b08                 mov ecx, dword ptr [eax]
// 007deb21  8d51ff               lea edx, [ecx - 1]
// 007deb24  8910                 mov dword ptr [eax], edx
// 007deb26  85c9                 test ecx, ecx
// 007deb28  760f                 jbe 0x7deb39
// 007deb2a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007deb2d  8b5104               mov edx, dword ptr [ecx + 4]
// 007deb30  0fb602               movzx eax, byte ptr [edx]
// 007deb33  42                   inc edx
// 007deb34  895104               mov dword ptr [ecx + 4], edx
// 007deb37  eb0c                 jmp 0x7deb45
// 007deb39  8b4638               mov eax, dword ptr [esi + 0x38]
// 007deb3c  50                   push eax
// 007deb3d  e81ebcffff           call 0x7da760
// 007deb42  83c404               add esp, 4
// 007deb45  8906                 mov dword ptr [esi], eax
// 007deb47  ff4604               inc dword ptr [esi + 4]
// 007deb4a  817e04fdffff7f       cmp dword ptr [esi + 4], 0x7ffffffd
// 007deb51  5f                   pop edi
// 007deb52  7c12                 jl 0x7deb66
// 007deb54  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007deb57  51                   push ecx
// 007deb58  686ce5ab00           push 0xabe56c
// 007deb5d  56                   push esi
// 007deb5e  e86dfeffff           call 0x7de9d0
// 007deb63  83c40c               add esp, 0xc
// 007deb66  c3                   ret 
// library lua-5.1.4/llex.c (function _inclinenumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
