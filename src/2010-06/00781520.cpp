// roc 2010-06 00781520  unit: seg_00780000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781520
//
// 00781520  83ec20               sub esp, 0x20
// 00781523  53                   push ebx
// 00781524  56                   push esi
// 00781525  57                   push edi
// 00781526  8bf0                 mov esi, eax
// 00781528  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0078152b  8d7c2414             lea edi, [esp + 0x14]
// 0078152f  e84ce7ffff           call 0x77fc80
// 00781534  837c24140d           cmp dword ptr [esp + 0x14], 0xd
// 00781539  7523                 jne 0x78155e
// 0078153b  8b03                 mov eax, dword ptr [ebx]
// 0078153d  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00781540  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00781544  8d0491               lea eax, [ecx + edx*4]
// 00781547  8b08                 mov ecx, dword ptr [eax]
// 00781549  5f                   pop edi
// 0078154a  81e1ff7f80ff         and ecx, 0xff807fff
// 00781550  81c900400000         or ecx, 0x4000
// 00781556  5e                   pop esi
// 00781557  8908                 mov dword ptr [eax], ecx
// 00781559  5b                   pop ebx
// 0078155a  83c420               add esp, 0x20
// 0078155d  c3                   ret 
// 0078155e  6a01                 push 1
// 00781560  8d542410             lea edx, [esp + 0x10]
// 00781564  52                   push edx
// 00781565  56                   push esi
// 00781566  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0078156e  e87defffff           call 0x7804f0
// 00781573  83c40c               add esp, 0xc
// 00781576  5f                   pop edi
// 00781577  5e                   pop esi
// 00781578  5b                   pop ebx
// 00781579  83c420               add esp, 0x20
// 0078157c  c3                   ret 
// library lua-5.1.4/lparser.c (function _exprstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
