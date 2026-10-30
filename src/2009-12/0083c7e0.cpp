// roc 2009-12 0083c7e0  unit: CXTPAccessible  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c7e0
//
// 0083c7e0  6aff                 push -1
// 0083c7e2  6806c89500           push 0x95c806
// 0083c7e7  64a100000000         mov eax, dword ptr fs:[0]
// 0083c7ed  50                   push eax
// 0083c7ee  51                   push ecx
// 0083c7ef  56                   push esi
// 0083c7f0  57                   push edi
// 0083c7f1  a10052b600           mov eax, dword ptr [0xb65200]
// 0083c7f6  33c4                 xor eax, esp
// 0083c7f8  50                   push eax
// 0083c7f9  8d442410             lea eax, [esp + 0x10]
// 0083c7fd  64a300000000         mov dword ptr fs:[0], eax
// 0083c803  8bf1                 mov esi, ecx
// 0083c805  8974240c             mov dword ptr [esp + 0xc], esi
// 0083c809  8d7e14               lea edi, [esi + 0x14]
// 0083c80c  c7066c839f00         mov dword ptr [esi], 0x9f836c
// 0083c812  8bcf                 mov ecx, edi
// 0083c814  c7460474849f00       mov dword ptr [esi + 4], 0x9f8474
// 0083c81b  e800f0ffff           call 0x83b820
// 0083c820  8d4e38               lea ecx, [esi + 0x38]
// 0083c823  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0083c82b  e8f0efffff           call 0x83b820
// 0083c830  6804859f00           push 0x9f8504
// 0083c835  8bcf                 mov ecx, edi
// 0083c837  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0083c83c  e8fffcffff           call 0x83c540
// 0083c841  6a00                 push 0
// 0083c843  8d4608               lea eax, [esi + 8]
// 0083c846  68f4849f00           push 0x9f84f4
// 0083c84b  50                   push eax
// 0083c84c  8bcf                 mov ecx, edi
// 0083c84e  c70000000000         mov dword ptr [eax], 0
// 0083c854  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0083c85b  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0083c862  e889f0ffff           call 0x83b8f0
// 0083c867  8bc6                 mov eax, esi
// 0083c869  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083c86d  64890d00000000       mov dword ptr fs:[0], ecx
// 0083c874  59                   pop ecx
// 0083c875  5f                   pop edi
// 0083c876  5e                   pop esi
// 0083c877  83c410               add esp, 0x10
// 0083c87a  c3                   ret 
// copied from an identical function in another client (function ??0CXTPAccessible@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp