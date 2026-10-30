// roc 2009-12 00802b80  unit: CXTPPaintManager  size: 513 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00802b80
//
// 00802b80  6aff                 push -1
// 00802b82  68c0939500           push 0x9593c0
// 00802b87  64a100000000         mov eax, dword ptr fs:[0]
// 00802b8d  50                   push eax
// 00802b8e  83ec40               sub esp, 0x40
// 00802b91  55                   push ebp
// 00802b92  56                   push esi
// 00802b93  57                   push edi
// 00802b94  a10052b600           mov eax, dword ptr [0xb65200]
// 00802b99  33c4                 xor eax, esp
// 00802b9b  50                   push eax
// 00802b9c  8d442450             lea eax, [esp + 0x50]
// 00802ba0  64a300000000         mov dword ptr fs:[0], eax
// 00802ba6  8be9                 mov ebp, ecx
// 00802ba8  837d6800             cmp dword ptr [ebp + 0x68], 0
// 00802bac  7463                 je 0x802c11
// 00802bae  8db52c010000         lea esi, [ebp + 0x12c]
// 00802bb4  8bce                 mov ecx, esi
// 00802bb6  e805900600           call 0x86bbc0
// 00802bbb  85c0                 test eax, eax
// 00802bbd  7452                 je 0x802c11
// 00802bbf  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00802bc3  8b542468             mov edx, dword ptr [esp + 0x68]
// 00802bc7  8d48ee               lea ecx, [eax - 0x12]
// 00802bca  89442418             mov dword ptr [esp + 0x18], eax
// 00802bce  8b442470             mov eax, dword ptr [esp + 0x70]
// 00802bd2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00802bd6  8b442460             mov eax, dword ptr [esp + 0x60]
// 00802bda  894c2410             mov dword ptr [esp + 0x10], ecx
// 00802bde  89542414             mov dword ptr [esp + 0x14], edx
// 00802be2  85c0                 test eax, eax
// 00802be4  7403                 je 0x802be9
// 00802be6  8b4004               mov eax, dword ptr [eax + 4]
// 00802be9  6a00                 push 0
// 00802beb  8d4c2414             lea ecx, [esp + 0x14]
// 00802bef  51                   push ecx
// 00802bf0  6a00                 push 0
// 00802bf2  6a03                 push 3
// 00802bf4  50                   push eax
// 00802bf5  8bce                 mov ecx, esi
// 00802bf7  e8448c0600           call 0x86b840
// 00802bfc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00802c00  64890d00000000       mov dword ptr fs:[0], ecx
// 00802c07  59                   pop ecx
// 00802c08  5f                   pop edi
// 00802c09  5e                   pop esi
// 00802c0a  5d                   pop ebp
// 00802c0b  83c44c               add esp, 0x4c
// 00802c0e  c21400               ret 0x14
// 00802c11  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00802c15  85ff                 test edi, edi
// 00802c17  7504                 jne 0x802c1d
// 00802c19  33d2                 xor edx, edx
// 00802c1b  eb03                 jmp 0x802c20
// 00802c1d  8b5704               mov edx, dword ptr [edi + 4]
// 00802c20  6a10                 push 0x10
// 00802c22  8bcd                 mov ecx, ebp
// 00802c24  e817aaffff           call 0x7fd640
// 00802c29  50                   push eax
// 00802c2a  52                   push edx
// 00802c2b  8d4c2444             lea ecx, [esp + 0x44]
// 00802c2f  e8cc8a0400           call 0x84b700
// 00802c34  c744245800000000     mov dword ptr [esp + 0x58], 0
// 00802c3c  33f6                 xor esi, esi
// 00802c3e  8bff                 mov edi, edi
// 00802c40  8b542470             mov edx, dword ptr [esp + 0x70]
// 00802c44  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00802c48  2b542468             sub edx, dword ptr [esp + 0x68]
// 00802c4c  2bc6                 sub eax, esi
// 00802c4e  2b442464             sub eax, dword ptr [esp + 0x64]
// 00802c52  83ea02               sub edx, 2
// 00802c55  52                   push edx
// 00802c56  83e803               sub eax, 3
// 00802c59  50                   push eax
// 00802c5a  8d4c2418             lea ecx, [esp + 0x18]
// 00802c5e  51                   push ecx
// 00802c5f  8bcf                 mov ecx, edi
// 00802c61  e8dc1affff           call 0x7f4742
// 00802c66  8b542470             mov edx, dword ptr [esp + 0x70]
// 00802c6a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00802c6e  2b442464             sub eax, dword ptr [esp + 0x64]
// 00802c72  2bd6                 sub edx, esi
// 00802c74  2b542468             sub edx, dword ptr [esp + 0x68]
// 00802c78  48                   dec eax
// 00802c79  83ea04               sub edx, 4
// 00802c7c  52                   push edx
// 00802c7d  50                   push eax
// 00802c7e  8bcf                 mov ecx, edi
// 00802c80  e8b71affff           call 0x7f473c
// 00802c85  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00802c89  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00802c8d  2b4c2468             sub ecx, dword ptr [esp + 0x68]
// 00802c91  2bd6                 sub edx, esi
// 00802c93  2b542464             sub edx, dword ptr [esp + 0x64]
// 00802c97  83e902               sub ecx, 2
// 00802c9a  51                   push ecx
// 00802c9b  83ea04               sub edx, 4
// 00802c9e  52                   push edx
// 00802c9f  8d442428             lea eax, [esp + 0x28]
// 00802ca3  50                   push eax
// 00802ca4  8bcf                 mov ecx, edi
// 00802ca6  e8971affff           call 0x7f4742
// 00802cab  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00802caf  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00802cb3  2b542464             sub edx, dword ptr [esp + 0x64]
// 00802cb7  2bce                 sub ecx, esi
// 00802cb9  2b4c2468             sub ecx, dword ptr [esp + 0x68]
// 00802cbd  4a                   dec edx
// 00802cbe  83e905               sub ecx, 5
// 00802cc1  51                   push ecx
// 00802cc2  52                   push edx
// 00802cc3  8bcf                 mov ecx, edi
// 00802cc5  e8721affff           call 0x7f473c
// 00802cca  83c604               add esi, 4
// 00802ccd  83fe0c               cmp esi, 0xc
// 00802cd0  0f8c6affffff         jl 0x802c40
// 00802cd6  85ff                 test edi, edi
// 00802cd8  7504                 jne 0x802cde
// 00802cda  33d2                 xor edx, edx
// 00802cdc  eb03                 jmp 0x802ce1
// 00802cde  8b5704               mov edx, dword ptr [edi + 4]
// 00802ce1  6a14                 push 0x14
// 00802ce3  8bcd                 mov ecx, ebp
// 00802ce5  e856a9ffff           call 0x7fd640
// 00802cea  50                   push eax
// 00802ceb  52                   push edx
// 00802cec  8d4c2430             lea ecx, [esp + 0x30]
// 00802cf0  e80b8a0400           call 0x84b700
// 00802cf5  c644245801           mov byte ptr [esp + 0x58], 1
// 00802cfa  33f6                 xor esi, esi
// 00802cfc  8d642400             lea esp, [esp]
// 00802d00  8b442470             mov eax, dword ptr [esp + 0x70]
// 00802d04  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00802d08  2b442468             sub eax, dword ptr [esp + 0x68]
// 00802d0c  2bce                 sub ecx, esi
// 00802d0e  2b4c2464             sub ecx, dword ptr [esp + 0x64]
// 00802d12  83e802               sub eax, 2
// 00802d15  50                   push eax
// 00802d16  83e905               sub ecx, 5
// 00802d19  51                   push ecx
// 00802d1a  8d542428             lea edx, [esp + 0x28]
// 00802d1e  52                   push edx
// 00802d1f  8bcf                 mov ecx, edi
// 00802d21  e81c1affff           call 0x7f4742
// 00802d26  8b442470             mov eax, dword ptr [esp + 0x70]
// 00802d2a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00802d2e  2b4c2464             sub ecx, dword ptr [esp + 0x64]
// 00802d32  2bc6                 sub eax, esi
// 00802d34  2b442468             sub eax, dword ptr [esp + 0x68]
// 00802d38  49                   dec ecx
// 00802d39  83e806               sub eax, 6
// 00802d3c  50                   push eax
// 00802d3d  51                   push ecx
// 00802d3e  8bcf                 mov ecx, edi
// 00802d40  e8f719ffff           call 0x7f473c
// 00802d45  83c604               add esi, 4
// 00802d48  83fe0c               cmp esi, 0xc
// 00802d4b  7cb3                 jl 0x802d00
// 00802d4d  8d4c2428             lea ecx, [esp + 0x28]
// 00802d51  c644245800           mov byte ptr [esp + 0x58], 0
// 00802d56  e8358a0400           call 0x84b790
// 00802d5b  8d4c243c             lea ecx, [esp + 0x3c]
// 00802d5f  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00802d67  e8248a0400           call 0x84b790
// 00802d6c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00802d70  64890d00000000       mov dword ptr fs:[0], ecx
// 00802d77  59                   pop ecx
// 00802d78  5f                   pop edi
// 00802d79  5e                   pop esi
// 00802d7a  5d                   pop ebp
// 00802d7b  83c44c               add esp, 0x4c
// 00802d7e  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawStatusBarGripper@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp