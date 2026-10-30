// roc 2009-12 008330e0  unit: VCPtrList::?$CTypedPtrList  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008330e0
//
// 008330e0  55                   push ebp
// 008330e1  8be9                 mov ebp, ecx
// 008330e3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 008330e6  85c9                 test ecx, ecx
// 008330e8  7506                 jne 0x8330f0
// 008330ea  33c0                 xor eax, eax
// 008330ec  5d                   pop ebp
// 008330ed  c20400               ret 4
// 008330f0  53                   push ebx
// 008330f1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008330f5  c1eb04               shr ebx, 4
// 008330f8  33d2                 xor edx, edx
// 008330fa  8bc3                 mov eax, ebx
// 008330fc  f77508               div dword ptr [ebp + 8]
// 008330ff  56                   push esi
// 00833100  8b3491               mov esi, dword ptr [ecx + edx*4]
// 00833103  57                   push edi
// 00833104  8d3c91               lea edi, [ecx + edx*4]
// 00833107  85f6                 test esi, esi
// 00833109  7422                 je 0x83312d
// 0083310b  eb03                 jmp 0x833110
// 0083310d  8d4900               lea ecx, [ecx]
// 00833110  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00833113  750f                 jne 0x833124
// 00833115  8d442414             lea eax, [esp + 0x14]
// 00833119  50                   push eax
// 0083311a  56                   push esi
// 0083311b  e8a0d30300           call 0x8704c0
// 00833120  85c0                 test eax, eax
// 00833122  7512                 jne 0x833136
// 00833124  8d7e48               lea edi, [esi + 0x48]
// 00833127  8b37                 mov esi, dword ptr [edi]
// 00833129  85f6                 test esi, esi
// 0083312b  75e3                 jne 0x833110
// 0083312d  5f                   pop edi
// 0083312e  5e                   pop esi
// 0083312f  5b                   pop ebx
// 00833130  33c0                 xor eax, eax
// 00833132  5d                   pop ebp
// 00833133  c20400               ret 4
// 00833136  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00833139  890f                 mov dword ptr [edi], ecx
// 0083313b  56                   push esi
// 0083313c  8bcd                 mov ecx, ebp
// 0083313e  e84de7ffff           call 0x831890
// 00833143  5f                   pop edi
// 00833144  5e                   pop esi
// 00833145  5b                   pop ebx
// 00833146  b801000000           mov eax, 1
// 0083314b  5d                   pop ebp
// 0083314c  c20400               ret 4
// copied from an identical function in another client (function ?RemoveKey@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp