// roc 2007-08 005bb810  unit: RBX::PVInstance  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb810
//
// 005bb810  6aff                 push -1
// 005bb812  6803637500           push 0x756303
// 005bb817  64a100000000         mov eax, dword ptr fs:[0]
// 005bb81d  50                   push eax
// 005bb81e  64892500000000       mov dword ptr fs:[0], esp
// 005bb825  83ec0c               sub esp, 0xc
// 005bb828  53                   push ebx
// 005bb829  55                   push ebp
// 005bb82a  56                   push esi
// 005bb82b  8bf1                 mov esi, ecx
// 005bb82d  57                   push edi
// 005bb82e  89742410             mov dword ptr [esp + 0x10], esi
// 005bb832  c706c48e7b00         mov dword ptr [esi], 0x7b8ec4
// 005bb838  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005bb83b  396e14               cmp dword ptr [esi + 0x14], ebp
// 005bb83e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005bb844  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005bb84c  7602                 jbe 0x5bb850
// 005bb84e  ffd3                 call ebx
// 005bb850  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005bb853  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005bb856  7602                 jbe 0x5bb85a
// 005bb858  ffd3                 call ebx
// 005bb85a  33db                 xor ebx, ebx
// 005bb85c  3bfd                 cmp edi, ebp
// 005bb85e  7415                 je 0x5bb875
// 005bb860  8b0f                 mov ecx, dword ptr [edi]
// 005bb862  3bcb                 cmp ecx, ebx
// 005bb864  7408                 je 0x5bb86e
// 005bb866  8b01                 mov eax, dword ptr [ecx]
// 005bb868  8b10                 mov edx, dword ptr [eax]
// 005bb86a  6a01                 push 1
// 005bb86c  ffd2                 call edx
// 005bb86e  83c704               add edi, 4
// 005bb871  3bfd                 cmp edi, ebp
// 005bb873  75eb                 jne 0x5bb860
// 005bb875  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005bb87b  3bc3                 cmp eax, ebx
// 005bb87d  7409                 je 0x5bb888
// 005bb87f  50                   push eax
// 005bb880  e8dd430700           call 0x62fc62
// 005bb885  83c404               add esp, 4
// 005bb888  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005bb88e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005bb894  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005bb89a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005bb89d  3bc3                 cmp eax, ebx
// 005bb89f  7409                 je 0x5bb8aa
// 005bb8a1  50                   push eax
// 005bb8a2  e8bb430700           call 0x62fc62
// 005bb8a7  83c404               add esp, 4
// 005bb8aa  8d4e68               lea ecx, [esi + 0x68]
// 005bb8ad  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005bb8b0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005bb8b6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005bb8bc  c644242405           mov byte ptr [esp + 0x24], 5
// 005bb8c1  e89ae9e4ff           call 0x40a260
// 005bb8c6  8b4660               mov eax, dword ptr [esi + 0x60]
// 005bb8c9  8b08                 mov ecx, dword ptr [eax]
// 005bb8cb  8d7e5c               lea edi, [esi + 0x5c]
// 005bb8ce  50                   push eax
// 005bb8cf  57                   push edi
// 005bb8d0  51                   push ecx
// 005bb8d1  57                   push edi
// 005bb8d2  8d442424             lea eax, [esp + 0x24]
// 005bb8d6  50                   push eax
// 005bb8d7  8bcf                 mov ecx, edi
// 005bb8d9  c644243804           mov byte ptr [esp + 0x38], 4
// 005bb8de  e87d7bf8ff           call 0x543460
// 005bb8e3  8b4704               mov eax, dword ptr [edi + 4]
// 005bb8e6  50                   push eax
// 005bb8e7  e876430700           call 0x62fc62
// 005bb8ec  895f04               mov dword ptr [edi + 4], ebx
// 005bb8ef  895f08               mov dword ptr [edi + 8], ebx
// 005bb8f2  8b4654               mov eax, dword ptr [esi + 0x54]
// 005bb8f5  8b08                 mov ecx, dword ptr [eax]
// 005bb8f7  83c404               add esp, 4
// 005bb8fa  8d7e50               lea edi, [esi + 0x50]
// 005bb8fd  50                   push eax
// 005bb8fe  57                   push edi
// 005bb8ff  51                   push ecx
// 005bb900  57                   push edi
// 005bb901  8d4c2424             lea ecx, [esp + 0x24]
// 005bb905  51                   push ecx
// 005bb906  8bcf                 mov ecx, edi
// 005bb908  c644243803           mov byte ptr [esp + 0x38], 3
// 005bb90d  e84e7bf8ff           call 0x543460
// 005bb912  8b4704               mov eax, dword ptr [edi + 4]
// 005bb915  50                   push eax
// 005bb916  e847430700           call 0x62fc62
// 005bb91b  895f04               mov dword ptr [edi + 4], ebx
// 005bb91e  895f08               mov dword ptr [edi + 8], ebx
// 005bb921  8b4644               mov eax, dword ptr [esi + 0x44]
// 005bb924  83c404               add esp, 4
// 005bb927  3bc3                 cmp eax, ebx
// 005bb929  7409                 je 0x5bb934
// 005bb92b  50                   push eax
// 005bb92c  e831430700           call 0x62fc62
// 005bb931  83c404               add esp, 4
// 005bb934  8d7e34               lea edi, [esi + 0x34]
// 005bb937  895e44               mov dword ptr [esi + 0x44], ebx
// 005bb93a  895e48               mov dword ptr [esi + 0x48], ebx
// 005bb93d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005bb940  8b4704               mov eax, dword ptr [edi + 4]
// 005bb943  8b08                 mov ecx, dword ptr [eax]
// 005bb945  50                   push eax
// 005bb946  57                   push edi
// 005bb947  51                   push ecx
// 005bb948  57                   push edi
// 005bb949  8d542424             lea edx, [esp + 0x24]
// 005bb94d  52                   push edx
// 005bb94e  8bcf                 mov ecx, edi
// 005bb950  c644243801           mov byte ptr [esp + 0x38], 1
// 005bb955  e8d6baffff           call 0x5b7430
// 005bb95a  8b4704               mov eax, dword ptr [edi + 4]
// 005bb95d  50                   push eax
// 005bb95e  e8ff420700           call 0x62fc62
// 005bb963  895f04               mov dword ptr [edi + 4], ebx
// 005bb966  895f08               mov dword ptr [edi + 8], ebx
// 005bb969  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005bb96c  8b08                 mov ecx, dword ptr [eax]
// 005bb96e  83c404               add esp, 4
// 005bb971  8d7e28               lea edi, [esi + 0x28]
// 005bb974  50                   push eax
// 005bb975  57                   push edi
// 005bb976  51                   push ecx
// 005bb977  57                   push edi
// 005bb978  8d442424             lea eax, [esp + 0x24]
// 005bb97c  50                   push eax
// 005bb97d  8bcf                 mov ecx, edi
// 005bb97f  885c2438             mov byte ptr [esp + 0x38], bl
// 005bb983  e8a8baffff           call 0x5b7430
// 005bb988  8b4704               mov eax, dword ptr [edi + 4]
// 005bb98b  50                   push eax
// 005bb98c  e8d1420700           call 0x62fc62
// 005bb991  83c404               add esp, 4
// 005bb994  8bce                 mov ecx, esi
// 005bb996  895f04               mov dword ptr [edi + 4], ebx
// 005bb999  895f08               mov dword ptr [edi + 8], ebx
// 005bb99c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005bb9a4  e8d7b8fcff           call 0x587280
// 005bb9a9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bb9ad  5f                   pop edi
// 005bb9ae  5e                   pop esi
// 005bb9af  5d                   pop ebp
// 005bb9b0  5b                   pop ebx
// 005bb9b1  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb9b8  83c418               add esp, 0x18
// 005bb9bb  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
