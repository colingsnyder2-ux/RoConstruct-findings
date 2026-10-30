// roc 2009-06 00758260  unit: VCPtrList::?$CTypedPtrList  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00758260
//
// 00758260  55                   push ebp
// 00758261  8be9                 mov ebp, ecx
// 00758263  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00758266  85c9                 test ecx, ecx
// 00758268  7506                 jne 0x758270
// 0075826a  33c0                 xor eax, eax
// 0075826c  5d                   pop ebp
// 0075826d  c20400               ret 4
// 00758270  53                   push ebx
// 00758271  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00758275  c1eb04               shr ebx, 4
// 00758278  33d2                 xor edx, edx
// 0075827a  8bc3                 mov eax, ebx
// 0075827c  f77508               div dword ptr [ebp + 8]
// 0075827f  56                   push esi
// 00758280  8b3491               mov esi, dword ptr [ecx + edx*4]
// 00758283  57                   push edi
// 00758284  8d3c91               lea edi, [ecx + edx*4]
// 00758287  85f6                 test esi, esi
// 00758289  7422                 je 0x7582ad
// 0075828b  eb03                 jmp 0x758290
// 0075828d  8d4900               lea ecx, [ecx]
// 00758290  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00758293  750f                 jne 0x7582a4
// 00758295  8d442414             lea eax, [esp + 0x14]
// 00758299  50                   push eax
// 0075829a  56                   push esi
// 0075829b  e860e7ffff           call 0x756a00
// 007582a0  85c0                 test eax, eax
// 007582a2  7512                 jne 0x7582b6
// 007582a4  8d7e48               lea edi, [esi + 0x48]
// 007582a7  8b37                 mov esi, dword ptr [edi]
// 007582a9  85f6                 test esi, esi
// 007582ab  75e3                 jne 0x758290
// 007582ad  5f                   pop edi
// 007582ae  5e                   pop esi
// 007582af  5b                   pop ebx
// 007582b0  33c0                 xor eax, eax
// 007582b2  5d                   pop ebp
// 007582b3  c20400               ret 4
// 007582b6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007582b9  890f                 mov dword ptr [edi], ecx
// 007582bb  56                   push esi
// 007582bc  8bcd                 mov ecx, ebp
// 007582be  e81de7ffff           call 0x7569e0
// 007582c3  5f                   pop edi
// 007582c4  5e                   pop esi
// 007582c5  5b                   pop ebx
// 007582c6  b801000000           mov eax, 1
// 007582cb  5d                   pop ebp
// 007582cc  c20400               ret 4
// copied from an identical function in another client (function ?RemoveKey@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEHPAX@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp