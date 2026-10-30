// roc 2011-06 0086c8f0  unit: CXTPStatusBarPane  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c8f0
//
// 0086c8f0  6aff                 push -1
// 0086c8f2  686a74a000           push 0xa0746a
// 0086c8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0086c8fd  50                   push eax
// 0086c8fe  81ec60010000         sub esp, 0x160
// 0086c904  a12058c900           mov eax, dword ptr [0xc95820]
// 0086c909  33c4                 xor eax, esp
// 0086c90b  8984245c010000       mov dword ptr [esp + 0x15c], eax
// 0086c912  53                   push ebx
// 0086c913  55                   push ebp
// 0086c914  56                   push esi
// 0086c915  57                   push edi
// 0086c916  a12058c900           mov eax, dword ptr [0xc95820]
// 0086c91b  33c4                 xor eax, esp
// 0086c91d  50                   push eax
// 0086c91e  8d842474010000       lea eax, [esp + 0x174]
// 0086c925  64a300000000         mov dword ptr fs:[0], eax
// 0086c92b  8bf1                 mov esi, ecx
// 0086c92d  89742418             mov dword ptr [esp + 0x18], esi
// 0086c931  e8d4011600           call 0x9ccb0a
// 0086c936  33ed                 xor ebp, ebp
// 0086c938  8d8e98000000         lea ecx, [esi + 0x98]
// 0086c93e  89ac247c010000       mov dword ptr [esp + 0x17c], ebp
// 0086c945  c706b4beac00         mov dword ptr [esi], 0xacbeb4
// 0086c94b  e8c0feffff           call 0x86c810
// 0086c950  8dbeb0000000         lea edi, [esi + 0xb0]
// 0086c956  896f04               mov dword ptr [edi + 4], ebp
// 0086c959  c7079041a700         mov dword ptr [edi], 0xa74190
// 0086c95f  bb02000000           mov ebx, 2
// 0086c964  8bce                 mov ecx, esi
// 0086c966  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0086c96d  895e64               mov dword ptr [esi + 0x64], ebx
// 0086c970  e88ba30800           call 0x8f6d00
// 0086c975  85c0                 test eax, eax
// 0086c977  8d4501               lea eax, [ebp + 1]
// 0086c97a  740b                 je 0x86c987
// 0086c97c  896e5c               mov dword ptr [esi + 0x5c], ebp
// 0086c97f  896e60               mov dword ptr [esi + 0x60], ebp
// 0086c982  896e68               mov dword ptr [esi + 0x68], ebp
// 0086c985  eb09                 jmp 0x86c990
// 0086c987  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0086c98a  895e60               mov dword ptr [esi + 0x60], ebx
// 0086c98d  894668               mov dword ptr [esi + 0x68], eax
// 0086c990  68a8000000           push 0xa8
// 0086c995  89aeac000000         mov dword ptr [esi + 0xac], ebp
// 0086c99b  89aec8000000         mov dword ptr [esi + 0xc8], ebp
// 0086c9a1  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0086c9a7  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 0086c9ad  e8acd6f9ff           call 0x80a05e
// 0086c9b2  83c404               add esp, 4
// 0086c9b5  89442414             mov dword ptr [esp + 0x14], eax
// 0086c9b9  c684247c01000003     mov byte ptr [esp + 0x17c], 3
// 0086c9c1  3bc5                 cmp eax, ebp
// 0086c9c3  7409                 je 0x86c9ce
// 0086c9c5  8bc8                 mov ecx, eax
// 0086c9c7  e844680000           call 0x873210
// 0086c9cc  eb02                 jmp 0x86c9d0
// 0086c9ce  33c0                 xor eax, eax
// 0086c9d0  8d4c241c             lea ecx, [esp + 0x1c]
// 0086c9d4  889c247c010000       mov byte ptr [esp + 0x17c], bl
// 0086c9db  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0086c9e1  e85a2bfaff           call 0x80f540
// 0086c9e6  8d8424f8000000       lea eax, [esp + 0xf8]
// 0086c9ed  50                   push eax
// 0086c9ee  ff152001a400         call dword ptr [0xa40120]
// 0086c9f4  50                   push eax
// 0086c9f5  8bcf                 mov ecx, edi
// 0086c9f7  e82cdcf9ff           call 0x80a628
// 0086c9fc  89aebc000000         mov dword ptr [esi + 0xbc], ebp
// 0086ca02  c786c400000001000000 mov dword ptr [esi + 0xc4], 1
// 0086ca0c  89aec0000000         mov dword ptr [esi + 0xc0], ebp
// 0086ca12  8bc6                 mov eax, esi
// 0086ca14  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 0086ca1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ca22  59                   pop ecx
// 0086ca23  5f                   pop edi
// 0086ca24  5e                   pop esi
// 0086ca25  5d                   pop ebp
// 0086ca26  5b                   pop ebx
// 0086ca27  8b8c245c010000       mov ecx, dword ptr [esp + 0x15c]
// 0086ca2e  33cc                 xor ecx, esp
// 0086ca30  e8c2eef9ff           call 0x80b8f7
// 0086ca35  81c46c010000         add esp, 0x16c
// 0086ca3b  c3                   ret 
// copied from an identical function in another client (function ??0CXTPStatusBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp