// roc 2012-06 009c0f70  unit: VCPtrList::?$CTypedPtrList  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0f70
//
// 009c0f70  55                   push ebp
// 009c0f71  8be9                 mov ebp, ecx
// 009c0f73  8b4d04               mov ecx, dword ptr [ebp + 4]
// 009c0f76  85c9                 test ecx, ecx
// 009c0f78  7506                 jne 0x9c0f80
// 009c0f7a  33c0                 xor eax, eax
// 009c0f7c  5d                   pop ebp
// 009c0f7d  c20400               ret 4
// 009c0f80  53                   push ebx
// 009c0f81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009c0f85  c1eb04               shr ebx, 4
// 009c0f88  33d2                 xor edx, edx
// 009c0f8a  8bc3                 mov eax, ebx
// 009c0f8c  f77508               div dword ptr [ebp + 8]
// 009c0f8f  56                   push esi
// 009c0f90  8b3491               mov esi, dword ptr [ecx + edx*4]
// 009c0f93  57                   push edi
// 009c0f94  8d3c91               lea edi, [ecx + edx*4]
// 009c0f97  85f6                 test esi, esi
// 009c0f99  7422                 je 0x9c0fbd
// 009c0f9b  eb03                 jmp 0x9c0fa0
// 009c0f9d  8d4900               lea ecx, [ecx]
// 009c0fa0  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 009c0fa3  750f                 jne 0x9c0fb4
// 009c0fa5  8d442414             lea eax, [esp + 0x14]
// 009c0fa9  50                   push eax
// 009c0faa  56                   push esi
// 009c0fab  e8c0710a00           call 0xa68170
// 009c0fb0  85c0                 test eax, eax
// 009c0fb2  7512                 jne 0x9c0fc6
// 009c0fb4  8d7e48               lea edi, [esi + 0x48]
// 009c0fb7  8b37                 mov esi, dword ptr [edi]
// 009c0fb9  85f6                 test esi, esi
// 009c0fbb  75e3                 jne 0x9c0fa0
// 009c0fbd  5f                   pop edi
// 009c0fbe  5e                   pop esi
// 009c0fbf  5b                   pop ebx
// 009c0fc0  33c0                 xor eax, eax
// 009c0fc2  5d                   pop ebp
// 009c0fc3  c20400               ret 4
// 009c0fc6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 009c0fc9  890f                 mov dword ptr [edi], ecx
// 009c0fcb  56                   push esi
// 009c0fcc  8bcd                 mov ecx, ebp
// 009c0fce  e84de7ffff           call 0x9bf720
// 009c0fd3  5f                   pop edi
// 009c0fd4  5e                   pop esi
// 009c0fd5  5b                   pop ebx
// 009c0fd6  b801000000           mov eax, 1
// 009c0fdb  5d                   pop ebp
// 009c0fdc  c20400               ret 4
// copied from an identical function in another client (function ?RemoveKey@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp