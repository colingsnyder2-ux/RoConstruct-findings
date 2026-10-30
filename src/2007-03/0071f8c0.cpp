// roc 2007-03 0071f8c0  unit: seg_00710000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071f8c0
//
// 0071f8c0  53                   push ebx
// 0071f8c1  8b1dc8ec7700         mov ebx, dword ptr [0x77ecc8]
// 0071f8c7  57                   push edi
// 0071f8c8  8bf9                 mov edi, ecx
// 0071f8ca  8b4720               mov eax, dword ptr [edi + 0x20]
// 0071f8cd  50                   push eax
// 0071f8ce  ffd3                 call ebx
// 0071f8d0  50                   push eax
// 0071f8d1  e878edefff           call 0x61e64e
// 0071f8d6  85c0                 test eax, eax
// 0071f8d8  7512                 jne 0x71f8ec
// 0071f8da  8bcf                 mov ecx, edi
// 0071f8dc  e8df46fdff           call 0x6f3fc0
// 0071f8e1  8b80f0000000         mov eax, dword ptr [eax + 0xf0]
// 0071f8e7  5f                   pop edi
// 0071f8e8  5b                   pop ebx
// 0071f8e9  c20800               ret 8
// 0071f8ec  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071f8f0  85c0                 test eax, eax
// 0071f8f2  56                   push esi
// 0071f8f3  7504                 jne 0x71f8f9
// 0071f8f5  33f6                 xor esi, esi
// 0071f8f7  eb03                 jmp 0x71f8fc
// 0071f8f9  8b7004               mov esi, dword ptr [eax + 4]
// 0071f8fc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0071f8ff  51                   push ecx
// 0071f900  ffd3                 call ebx
// 0071f902  50                   push eax
// 0071f903  e846edefff           call 0x61e64e
// 0071f908  85c0                 test eax, eax
// 0071f90a  7403                 je 0x71f90f
// 0071f90c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0071f90f  8b5720               mov edx, dword ptr [edi + 0x20]
// 0071f912  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0071f916  52                   push edx
// 0071f917  56                   push esi
// 0071f918  53                   push ebx
// 0071f919  50                   push eax
// 0071f91a  ff1550ee7700         call dword ptr [0x77ee50]
// 0071f920  8bf0                 mov esi, eax
// 0071f922  85f6                 test esi, esi
// 0071f924  741b                 je 0x71f941
// 0071f926  83fe1f               cmp esi, 0x1f
// 0071f929  730e                 jae 0x71f939
// 0071f92b  8bcf                 mov ecx, edi
// 0071f92d  e88e46fdff           call 0x6f3fc0
// 0071f932  8bb4b0b0000000       mov esi, dword ptr [eax + esi*4 + 0xb0]
// 0071f939  8bc6                 mov eax, esi
// 0071f93b  5e                   pop esi
// 0071f93c  5f                   pop edi
// 0071f93d  5b                   pop ebx
// 0071f93e  c20800               ret 8
// 0071f941  81fb33010000         cmp ebx, 0x133
// 0071f947  741b                 je 0x71f964
// 0071f949  81fb34010000         cmp ebx, 0x134
// 0071f94f  7413                 je 0x71f964
// 0071f951  8bcf                 mov ecx, edi
// 0071f953  e86846fdff           call 0x6f3fc0
// 0071f958  8b80f0000000         mov eax, dword ptr [eax + 0xf0]
// 0071f95e  5e                   pop esi
// 0071f95f  5f                   pop edi
// 0071f960  5b                   pop ebx
// 0071f961  c20800               ret 8
// 0071f964  8bcf                 mov ecx, edi
// 0071f966  e85546fdff           call 0x6f3fc0
// 0071f96b  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 0071f971  5e                   pop esi
// 0071f972  5f                   pop edi
// 0071f973  5b                   pop ebx
// 0071f974  c20800               ret 8
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectFrame.cpp (function ?GetFillBackgroundBrush@CXTPSkinObjectFrame@@IAEPAUHBRUSH__@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectFrame.cpp
