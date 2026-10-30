// roc 2009-12 00870b60  unit: CXTPHookManager::CHookSink  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870b60
//
// 00870b60  56                   push esi
// 00870b61  8bf1                 mov esi, ecx
// 00870b63  8b4e08               mov ecx, dword ptr [esi + 8]
// 00870b66  33c0                 xor eax, eax
// 00870b68  85c9                 test ecx, ecx
// 00870b6a  7e65                 jle 0x870bd1
// 00870b6c  57                   push edi
// 00870b6d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00870b71  85c0                 test eax, eax
// 00870b73  7c16                 jl 0x870b8b
// 00870b75  3bc1                 cmp eax, ecx
// 00870b77  7d12                 jge 0x870b8b
// 00870b79  8b5604               mov edx, dword ptr [esi + 4]
// 00870b7c  3b3c82               cmp edi, dword ptr [edx + eax*4]
// 00870b7f  740f                 je 0x870b90
// 00870b81  40                   inc eax
// 00870b82  3bc1                 cmp eax, ecx
// 00870b84  7ceb                 jl 0x870b71
// 00870b86  5f                   pop edi
// 00870b87  5e                   pop esi
// 00870b88  c20400               ret 4
// 00870b8b  e87c2ff8ff           call 0x7f3b0c
// 00870b90  83f8ff               cmp eax, -1
// 00870b93  743b                 je 0x870bd0
// 00870b95  6a01                 push 1
// 00870b97  50                   push eax
// 00870b98  8bce                 mov ecx, esi
// 00870b9a  e8e1c6fbff           call 0x82d280
// 00870b9f  837f0400             cmp dword ptr [edi + 4], 0
// 00870ba3  740a                 je 0x870baf
// 00870ba5  8b07                 mov eax, dword ptr [edi]
// 00870ba7  8b10                 mov edx, dword ptr [eax]
// 00870ba9  6a01                 push 1
// 00870bab  8bcf                 mov ecx, edi
// 00870bad  ffd2                 call edx
// 00870baf  837e0800             cmp dword ptr [esi + 8], 0
// 00870bb3  751b                 jne 0x870bd0
// 00870bb5  8b4618               mov eax, dword ptr [esi + 0x18]
// 00870bb8  50                   push eax
// 00870bb9  e822fdffff           call 0x8708e0
// 00870bbe  8bc8                 mov ecx, eax
// 00870bc0  e80bbd0300           call 0x8ac8d0
// 00870bc5  8b16                 mov edx, dword ptr [esi]
// 00870bc7  8b4204               mov eax, dword ptr [edx + 4]
// 00870bca  6a01                 push 1
// 00870bcc  8bce                 mov ecx, esi
// 00870bce  ffd0                 call eax
// 00870bd0  5f                   pop edi
// 00870bd1  5e                   pop esi
// 00870bd2  c20400               ret 4
// copied from an identical function in another client (function ?RemoveHook@CHookSink@CXTPHookManager@@QAEXPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp