// roc 2012-06 00666740  unit: seg_00660000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666740
//
// 00666740  56                   push esi
// 00666741  57                   push edi
// 00666742  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00666746  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 0066674c  8b4608               mov eax, dword ptr [esi + 8]
// 0066674f  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 00666755  0f8381000000         jae 0x6667dc
// 0066675b  53                   push ebx
// 0066675c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00666760  55                   push ebp
// 00666761  8d6e0c               lea ebp, [esi + 0xc]
// 00666764  837d0008             cmp dword ptr [ebp], 8
// 00666768  7325                 jae 0x66678f
// 0066676a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066676e  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 00666774  6a08                 push 8
// 00666776  55                   push ebp
// 00666777  8d5618               lea edx, [esi + 0x18]
// 0066677a  52                   push edx
// 0066677b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066677f  50                   push eax
// 00666780  8b4104               mov eax, dword ptr [ecx + 4]
// 00666783  53                   push ebx
// 00666784  52                   push edx
// 00666785  57                   push edi
// 00666786  ffd0                 call eax
// 00666788  83c41c               add esp, 0x1c
// 0066678b  837d0008             cmp dword ptr [ebp], 8
// 0066678f  7549                 jne 0x6667da
// 00666791  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 00666797  8b4104               mov eax, dword ptr [ecx + 4]
// 0066679a  8d5618               lea edx, [esi + 0x18]
// 0066679d  52                   push edx
// 0066679e  57                   push edi
// 0066679f  ffd0                 call eax
// 006667a1  83c408               add esp, 8
// 006667a4  84c0                 test al, al
// 006667a6  7426                 je 0x6667ce
// 006667a8  807e1000             cmp byte ptr [esi + 0x10], 0
// 006667ac  7406                 je 0x6667b4
// 006667ae  ff03                 inc dword ptr [ebx]
// 006667b0  c6461000             mov byte ptr [esi + 0x10], 0
// 006667b4  ff4608               inc dword ptr [esi + 8]
// 006667b7  c7450000000000       mov dword ptr [ebp], 0
// 006667be  8b4e08               mov ecx, dword ptr [esi + 8]
// 006667c1  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 006667c7  729b                 jb 0x666764
// 006667c9  5d                   pop ebp
// 006667ca  5b                   pop ebx
// 006667cb  5f                   pop edi
// 006667cc  5e                   pop esi
// 006667cd  c3                   ret 
// 006667ce  807e1000             cmp byte ptr [esi + 0x10], 0
// 006667d2  7506                 jne 0x6667da
// 006667d4  ff0b                 dec dword ptr [ebx]
// 006667d6  c6461001             mov byte ptr [esi + 0x10], 1
// 006667da  5d                   pop ebp
// 006667db  5b                   pop ebx
// 006667dc  5f                   pop edi
// 006667dd  5e                   pop esi
// 006667de  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
