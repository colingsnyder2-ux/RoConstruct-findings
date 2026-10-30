// roc 2011-06 00848af0  unit: VCPtrList::?$CTypedPtrList  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848af0
//
// 00848af0  55                   push ebp
// 00848af1  8be9                 mov ebp, ecx
// 00848af3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00848af6  85c9                 test ecx, ecx
// 00848af8  7506                 jne 0x848b00
// 00848afa  33c0                 xor eax, eax
// 00848afc  5d                   pop ebp
// 00848afd  c20400               ret 4
// 00848b00  53                   push ebx
// 00848b01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00848b05  c1eb04               shr ebx, 4
// 00848b08  33d2                 xor edx, edx
// 00848b0a  8bc3                 mov eax, ebx
// 00848b0c  f77508               div dword ptr [ebp + 8]
// 00848b0f  56                   push esi
// 00848b10  8b3491               mov esi, dword ptr [ecx + edx*4]
// 00848b13  57                   push edi
// 00848b14  8d3c91               lea edi, [ecx + edx*4]
// 00848b17  85f6                 test esi, esi
// 00848b19  7422                 je 0x848b3d
// 00848b1b  eb03                 jmp 0x848b20
// 00848b1d  8d4900               lea ecx, [ecx]
// 00848b20  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00848b23  750f                 jne 0x848b34
// 00848b25  8d442414             lea eax, [esp + 0x14]
// 00848b29  50                   push eax
// 00848b2a  56                   push esi
// 00848b2b  e810720a00           call 0x8efd40
// 00848b30  85c0                 test eax, eax
// 00848b32  7512                 jne 0x848b46
// 00848b34  8d7e48               lea edi, [esi + 0x48]
// 00848b37  8b37                 mov esi, dword ptr [edi]
// 00848b39  85f6                 test esi, esi
// 00848b3b  75e3                 jne 0x848b20
// 00848b3d  5f                   pop edi
// 00848b3e  5e                   pop esi
// 00848b3f  5b                   pop ebx
// 00848b40  33c0                 xor eax, eax
// 00848b42  5d                   pop ebp
// 00848b43  c20400               ret 4
// 00848b46  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00848b49  890f                 mov dword ptr [edi], ecx
// 00848b4b  56                   push esi
// 00848b4c  8bcd                 mov ecx, ebp
// 00848b4e  e84de7ffff           call 0x8472a0
// 00848b53  5f                   pop edi
// 00848b54  5e                   pop esi
// 00848b55  5b                   pop ebx
// 00848b56  b801000000           mov eax, 1
// 00848b5b  5d                   pop ebp
// 00848b5c  c20400               ret 4
// copied from an identical function in another client (function ?RemoveKey@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp