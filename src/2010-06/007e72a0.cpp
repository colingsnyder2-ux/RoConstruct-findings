// roc 2010-06 007e72a0  unit: VCPtrList::?$CTypedPtrList  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e72a0
//
// 007e72a0  55                   push ebp
// 007e72a1  8be9                 mov ebp, ecx
// 007e72a3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007e72a6  85c9                 test ecx, ecx
// 007e72a8  7506                 jne 0x7e72b0
// 007e72aa  33c0                 xor eax, eax
// 007e72ac  5d                   pop ebp
// 007e72ad  c20400               ret 4
// 007e72b0  53                   push ebx
// 007e72b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007e72b5  c1eb04               shr ebx, 4
// 007e72b8  33d2                 xor edx, edx
// 007e72ba  8bc3                 mov eax, ebx
// 007e72bc  f77508               div dword ptr [ebp + 8]
// 007e72bf  56                   push esi
// 007e72c0  8b3491               mov esi, dword ptr [ecx + edx*4]
// 007e72c3  57                   push edi
// 007e72c4  8d3c91               lea edi, [ecx + edx*4]
// 007e72c7  85f6                 test esi, esi
// 007e72c9  7422                 je 0x7e72ed
// 007e72cb  eb03                 jmp 0x7e72d0
// 007e72cd  8d4900               lea ecx, [ecx]
// 007e72d0  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 007e72d3  750f                 jne 0x7e72e4
// 007e72d5  8d442414             lea eax, [esp + 0x14]
// 007e72d9  50                   push eax
// 007e72da  56                   push esi
// 007e72db  e870cf0800           call 0x874250
// 007e72e0  85c0                 test eax, eax
// 007e72e2  7512                 jne 0x7e72f6
// 007e72e4  8d7e48               lea edi, [esi + 0x48]
// 007e72e7  8b37                 mov esi, dword ptr [edi]
// 007e72e9  85f6                 test esi, esi
// 007e72eb  75e3                 jne 0x7e72d0
// 007e72ed  5f                   pop edi
// 007e72ee  5e                   pop esi
// 007e72ef  5b                   pop ebx
// 007e72f0  33c0                 xor eax, eax
// 007e72f2  5d                   pop ebp
// 007e72f3  c20400               ret 4
// 007e72f6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007e72f9  890f                 mov dword ptr [edi], ecx
// 007e72fb  56                   push esi
// 007e72fc  8bcd                 mov ecx, ebp
// 007e72fe  e84de7ffff           call 0x7e5a50
// 007e7303  5f                   pop edi
// 007e7304  5e                   pop esi
// 007e7305  5b                   pop ebx
// 007e7306  b801000000           mov eax, 1
// 007e730b  5d                   pop ebp
// 007e730c  c20400               ret 4
// copied from an identical function in another client (function ?RemoveKey@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@QAEHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp