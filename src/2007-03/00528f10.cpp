// roc 2007-03 00528f10  unit: seg_00520000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00528f10
//
// 00528f10  56                   push esi
// 00528f11  8bf0                 mov esi, eax
// 00528f13  3bf3                 cmp esi, ebx
// 00528f15  7d24                 jge 0x528f3b
// 00528f17  55                   push ebp
// 00528f18  8d6eff               lea ebp, [esi - 1]
// 00528f1b  eb03                 jmp 0x528f20
// 00528f1d  8d4900               lea ecx, [ecx]
// 00528f20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00528f24  50                   push eax
// 00528f25  6a01                 push 1
// 00528f27  56                   push esi
// 00528f28  57                   push edi
// 00528f29  55                   push ebp
// 00528f2a  57                   push edi
// 00528f2b  e810b7feff           call 0x514640
// 00528f30  83c601               add esi, 1
// 00528f33  83c418               add esp, 0x18
// 00528f36  3bf3                 cmp esi, ebx
// 00528f38  7ce6                 jl 0x528f20
// 00528f3a  5d                   pop ebp
// 00528f3b  5e                   pop esi
// 00528f3c  c3                   ret 
// library jpeg-6b/jcprepct.c (function _expand_bottom_edge)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
