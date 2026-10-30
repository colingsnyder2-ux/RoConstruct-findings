// roc 2009-12 008ac8d0  unit: CXTPDockingPaneWindowSelect  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac8d0
//
// 008ac8d0  55                   push ebp
// 008ac8d1  8be9                 mov ebp, ecx
// 008ac8d3  8b4d04               mov ecx, dword ptr [ebp + 4]
// 008ac8d6  85c9                 test ecx, ecx
// 008ac8d8  7506                 jne 0x8ac8e0
// 008ac8da  33c0                 xor eax, eax
// 008ac8dc  5d                   pop ebp
// 008ac8dd  c20400               ret 4
// 008ac8e0  53                   push ebx
// 008ac8e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008ac8e5  c1eb04               shr ebx, 4
// 008ac8e8  33d2                 xor edx, edx
// 008ac8ea  8bc3                 mov eax, ebx
// 008ac8ec  f77508               div dword ptr [ebp + 8]
// 008ac8ef  56                   push esi
// 008ac8f0  8b3491               mov esi, dword ptr [ecx + edx*4]
// 008ac8f3  57                   push edi
// 008ac8f4  8d3c91               lea edi, [ecx + edx*4]
// 008ac8f7  85f6                 test esi, esi
// 008ac8f9  7422                 je 0x8ac91d
// 008ac8fb  eb03                 jmp 0x8ac900
// 008ac8fd  8d4900               lea ecx, [ecx]
// 008ac900  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008ac903  750f                 jne 0x8ac914
// 008ac905  8d442414             lea eax, [esp + 0x14]
// 008ac909  50                   push eax
// 008ac90a  56                   push esi
// 008ac90b  e8b03bfcff           call 0x8704c0
// 008ac910  85c0                 test eax, eax
// 008ac912  7512                 jne 0x8ac926
// 008ac914  8d7e08               lea edi, [esi + 8]
// 008ac917  8b37                 mov esi, dword ptr [edi]
// 008ac919  85f6                 test esi, esi
// 008ac91b  75e3                 jne 0x8ac900
// 008ac91d  5f                   pop edi
// 008ac91e  5e                   pop esi
// 008ac91f  5b                   pop ebx
// 008ac920  33c0                 xor eax, eax
// 008ac922  5d                   pop ebp
// 008ac923  c20400               ret 4
// 008ac926  8b4e08               mov ecx, dword ptr [esi + 8]
// 008ac929  890f                 mov dword ptr [edi], ecx
// 008ac92b  56                   push esi
// 008ac92c  8bcd                 mov ecx, ebp
// 008ac92e  e88d63feff           call 0x892cc0
// 008ac933  5f                   pop edi
// 008ac934  5e                   pop esi
// 008ac935  5b                   pop ebx
// 008ac936  b801000000           mov eax, 1
// 008ac93b  5d                   pop ebp
// 008ac93c  c20400               ret 4
// copied from an identical function in another client (function ?RemoveKey@?$CMap@IIPAVCXTPImageManagerIconSet@@PAV1@@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp