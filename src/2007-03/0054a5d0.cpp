// roc 2007-03 0054a5d0  unit: seg_00540000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a5d0
//
// 0054a5d0  55                   push ebp
// 0054a5d1  8bec                 mov ebp, esp
// 0054a5d3  6aff                 push -1
// 0054a5d5  6830317500           push 0x753130
// 0054a5da  64a100000000         mov eax, dword ptr fs:[0]
// 0054a5e0  50                   push eax
// 0054a5e1  64892500000000       mov dword ptr fs:[0], esp
// 0054a5e8  83ec08               sub esp, 8
// 0054a5eb  53                   push ebx
// 0054a5ec  56                   push esi
// 0054a5ed  8bf1                 mov esi, ecx
// 0054a5ef  8b06                 mov eax, dword ptr [esi]
// 0054a5f1  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0054a5f4  57                   push edi
// 0054a5f5  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054a5f8  33db                 xor ebx, ebx
// 0054a5fa  6a01                 push 1
// 0054a5fc  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054a5ff  895dfc               mov dword ptr [ebp - 4], ebx
// 0054a602  ffd2                 call edx
// 0054a604  eb0b                 jmp 0x54a611
// 0054a606  b80ca65400           mov eax, 0x54a60c
// 0054a60b  c3                   ret 
// 0054a60c  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0054a60f  33db                 xor ebx, ebx
// 0054a611  8b06                 mov eax, dword ptr [esi]
// 0054a613  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0054a616  6a02                 push 2
// 0054a618  8bce                 mov ecx, esi
// 0054a61a  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0054a621  ffd2                 call edx
// 0054a623  eb0b                 jmp 0x54a630
// 0054a625  b82ba65400           mov eax, 0x54a62b
// 0054a62a  c3                   ret 
// 0054a62b  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0054a62e  33db                 xor ebx, ebx
// 0054a630  385e41               cmp byte ptr [esi + 0x41], bl
// 0054a633  7403                 je 0x54a638
// 0054a635  885e41               mov byte ptr [esi + 0x41], bl
// 0054a638  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054a63b  895e54               mov dword ptr [esi + 0x54], ebx
// 0054a63e  5f                   pop edi
// 0054a63f  5e                   pop esi
// 0054a640  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a647  5b                   pop ebx
// 0054a648  8be5                 mov esp, ebp
// 0054a64a  5d                   pop ebp
// 0054a64b  c3                   ret 
// copied from an identical function in another client (function ?close@?$indirect_streambuf@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp