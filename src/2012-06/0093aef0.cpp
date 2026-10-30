// from server: 100% by auto
// roc 2012-06 0093aef0  unit: seg_00930000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093aef0
//
// 0093aef0  83ec20               sub esp, 0x20
// 0093aef3  53                   push ebx
// 0093aef4  56                   push esi
// 0093aef5  57                   push edi
// 0093aef6  8bf0                 mov esi, eax
// 0093aef8  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0093aefb  8d7c2414             lea edi, [esp + 0x14]
// 0093aeff  e80ce7ffff           call 0x939610
// 0093af04  837c24140d           cmp dword ptr [esp + 0x14], 0xd
// 0093af09  7523                 jne 0x93af2e
// 0093af0b  8b03                 mov eax, dword ptr [ebx]
// 0093af0d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0093af10  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0093af14  8d0491               lea eax, [ecx + edx*4]
// 0093af17  8b08                 mov ecx, dword ptr [eax]
// 0093af19  5f                   pop edi
// 0093af1a  81e1ff7f80ff         and ecx, 0xff807fff
// 0093af20  81c900400000         or ecx, 0x4000
// 0093af26  5e                   pop esi
// 0093af27  8908                 mov dword ptr [eax], ecx
// 0093af29  5b                   pop ebx
// 0093af2a  83c420               add esp, 0x20
// 0093af2d  c3                   ret 
// 0093af2e  6a01                 push 1
// 0093af30  8d542410             lea edx, [esp + 0x10]
// 0093af34  52                   push edx
// 0093af35  56                   push esi
// 0093af36  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0093af3e  e84defffff           call 0x939e90
// 0093af43  83c40c               add esp, 0xc
// 0093af46  5f                   pop edi
// 0093af47  5e                   pop esi
// 0093af48  5b                   pop ebx
// 0093af49  83c420               add esp, 0x20
// 0093af4c  c3                   ret 
// library lua-5.1.4/lparser.c (function _exprstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
