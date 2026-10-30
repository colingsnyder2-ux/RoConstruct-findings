// from server: 100% by auto
// roc 2009-06 0041e820  unit: CSelectionTreeCtrl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041e820
//
// 0041e820  53                   push ebx
// 0041e821  56                   push esi
// 0041e822  8bf1                 mov esi, ecx
// 0041e824  33db                 xor ebx, ebx
// 0041e826  57                   push edi
// 0041e827  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0041e82a  746c                 je 0x41e898
// 0041e82c  8d642400             lea esp, [esp]
// 0041e830  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0041e833  3bc3                 cmp eax, ebx
// 0041e835  745c                 je 0x41e893
// 0041e837  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0041e83a  8b5614               mov edx, dword ptr [esi + 0x14]
// 0041e83d  8d4408ff             lea eax, [eax + ecx - 1]
// 0041e841  8bc8                 mov ecx, eax
// 0041e843  d1e9                 shr ecx, 1
// 0041e845  3bd1                 cmp edx, ecx
// 0041e847  7702                 ja 0x41e84b
// 0041e849  2bca                 sub ecx, edx
// 0041e84b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0041e84e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0041e851  83e001               and eax, 1
// 0041e854  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 0041e858  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0041e85c  3bfb                 cmp edi, ebx
// 0041e85e  742a                 je 0x41e88a
// 0041e860  8d5704               lea edx, [edi + 4]
// 0041e863  83c8ff               or eax, 0xffffffff
// 0041e866  f00fc102             lock xadd dword ptr [edx], eax
// 0041e86a  751e                 jne 0x41e88a
// 0041e86c  8b17                 mov edx, dword ptr [edi]
// 0041e86e  8b4204               mov eax, dword ptr [edx + 4]
// 0041e871  8bcf                 mov ecx, edi
// 0041e873  ffd0                 call eax
// 0041e875  8d4f08               lea ecx, [edi + 8]
// 0041e878  83caff               or edx, 0xffffffff
// 0041e87b  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e87f  7509                 jne 0x41e88a
// 0041e881  8b07                 mov eax, dword ptr [edi]
// 0041e883  8b5008               mov edx, dword ptr [eax + 8]
// 0041e886  8bcf                 mov ecx, edi
// 0041e888  ffd2                 call edx
// 0041e88a  83461cff             add dword ptr [esi + 0x1c], -1
// 0041e88e  7503                 jne 0x41e893
// 0041e890  895e18               mov dword ptr [esi + 0x18], ebx
// 0041e893  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0041e896  7598                 jne 0x41e830
// 0041e898  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0041e89b  3bfb                 cmp edi, ebx
// 0041e89d  761c                 jbe 0x41e8bb
// 0041e89f  90                   nop 
// 0041e8a0  8b4610               mov eax, dword ptr [esi + 0x10]
// 0041e8a3  4f                   dec edi
// 0041e8a4  391cb8               cmp dword ptr [eax + edi*4], ebx
// 0041e8a7  8d04b8               lea eax, [eax + edi*4]
// 0041e8aa  740b                 je 0x41e8b7
// 0041e8ac  8b08                 mov ecx, dword ptr [eax]
// 0041e8ae  51                   push ecx
// 0041e8af  e87ea12f00           call 0x718a32
// 0041e8b4  83c404               add esp, 4
// 0041e8b7  3bfb                 cmp edi, ebx
// 0041e8b9  77e5                 ja 0x41e8a0
// 0041e8bb  8b4610               mov eax, dword ptr [esi + 0x10]
// 0041e8be  3bc3                 cmp eax, ebx
// 0041e8c0  7409                 je 0x41e8cb
// 0041e8c2  50                   push eax
// 0041e8c3  e86aa12f00           call 0x718a32
// 0041e8c8  83c404               add esp, 4
// 0041e8cb  5f                   pop edi
// 0041e8cc  895e10               mov dword ptr [esi + 0x10], ebx
// 0041e8cf  895e14               mov dword ptr [esi + 0x14], ebx
// 0041e8d2  5e                   pop esi
// 0041e8d3  5b                   pop ebx
// 0041e8d4  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?_Tidy@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
