// roc 2010-06 0085b820  unit: CXTRegistryManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085b820
//
// 0085b820  55                   push ebp
// 0085b821  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0085b825  57                   push edi
// 0085b826  8bf9                 mov edi, ecx
// 0085b828  85ed                 test ebp, ebp
// 0085b82a  7507                 jne 0x85b833
// 0085b82c  5f                   pop edi
// 0085b82d  33c0                 xor eax, eax
// 0085b82f  5d                   pop ebp
// 0085b830  c20800               ret 8
// 0085b833  8b07                 mov eax, dword ptr [edi]
// 0085b835  8b5004               mov edx, dword ptr [eax + 4]
// 0085b838  53                   push ebx
// 0085b839  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0085b83d  56                   push esi
// 0085b83e  53                   push ebx
// 0085b83f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085b847  ffd2                 call edx
// 0085b849  8bf0                 mov esi, eax
// 0085b84b  85f6                 test esi, esi
// 0085b84d  7431                 je 0x85b880
// 0085b84f  8d442418             lea eax, [esp + 0x18]
// 0085b853  50                   push eax
// 0085b854  8d4c2418             lea ecx, [esp + 0x18]
// 0085b858  51                   push ecx
// 0085b859  6a00                 push 0
// 0085b85b  53                   push ebx
// 0085b85c  6a00                 push 0
// 0085b85e  6a00                 push 0
// 0085b860  6a00                 push 0
// 0085b862  55                   push ebp
// 0085b863  56                   push esi
// 0085b864  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0085b86c  ff1514a09e00         call dword ptr [0x9ea014]
// 0085b872  894710               mov dword ptr [edi + 0x10], eax
// 0085b875  56                   push esi
// 0085b876  85c0                 test eax, eax
// 0085b878  740f                 je 0x85b889
// 0085b87a  ff1510a09e00         call dword ptr [0x9ea010]
// 0085b880  5e                   pop esi
// 0085b881  5b                   pop ebx
// 0085b882  5f                   pop edi
// 0085b883  33c0                 xor eax, eax
// 0085b885  5d                   pop ebp
// 0085b886  c20800               ret 8
// 0085b889  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0085b88d  ff1510a09e00         call dword ptr [0x9ea010]
// 0085b893  5e                   pop esi
// 0085b894  5b                   pop ebx
// 0085b895  8bc7                 mov eax, edi
// 0085b897  5f                   pop edi
// 0085b898  5d                   pop ebp
// 0085b899  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetSectionKey@CXTRegistryManager@@MAEPAUHKEY__@@PBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
