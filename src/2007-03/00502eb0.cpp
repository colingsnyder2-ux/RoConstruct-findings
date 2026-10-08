// roc 2007-03 00502eb0  unit: seg_00500000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00502eb0
//
// 00502eb0  6aff                 push -1
// 00502eb2  6818107500           push 0x751018
// 00502eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00502ebd  50                   push eax
// 00502ebe  83ec34               sub esp, 0x34
// 00502ec1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00502ec6  33c4                 xor eax, esp
// 00502ec8  89442430             mov dword ptr [esp + 0x30], eax
// 00502ecc  53                   push ebx
// 00502ecd  55                   push ebp
// 00502ece  56                   push esi
// 00502ecf  57                   push edi
// 00502ed0  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00502ed5  33c4                 xor eax, esp
// 00502ed7  50                   push eax
// 00502ed8  8d442448             lea eax, [esp + 0x48]
// 00502edc  64a300000000         mov dword ptr fs:[0], eax
// 00502ee2  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00502ee6  8bf1                 mov esi, ecx
// 00502ee8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00502eeb  85c0                 test eax, eax
// 00502eed  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00502ef5  0f86c0000000         jbe 0x502fbb
// 00502efb  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00502efe  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00502f04  03c7                 add eax, edi
// 00502f06  3bf8                 cmp edi, eax
// 00502f08  7602                 jbe 0x502f0c
// 00502f0a  ffd5                 call ebp
// 00502f0c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00502f0f  034e0c               add ecx, dword ptr [esi + 0xc]
// 00502f12  3bf9                 cmp edi, ecx
// 00502f14  7202                 jb 0x502f18
// 00502f16  ffd5                 call ebp
// 00502f18  8b4608               mov eax, dword ptr [esi + 8]
// 00502f1b  3bc7                 cmp eax, edi
// 00502f1d  7702                 ja 0x502f21
// 00502f1f  2bf8                 sub edi, eax
// 00502f21  8b5604               mov edx, dword ptr [esi + 4]
// 00502f24  8b3cba               mov edi, dword ptr [edx + edi*4]
// 00502f27  57                   push edi
// 00502f28  8d4c241c             lea ecx, [esp + 0x1c]
// 00502f2c  ff157ce77700         call dword ptr [0x77e77c]
// 00502f32  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00502f35  89442434             mov dword ptr [esp + 0x34], eax
// 00502f39  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00502f3c  894c2438             mov dword ptr [esp + 0x38], ecx
// 00502f40  8b5724               mov edx, dword ptr [edi + 0x24]
// 00502f43  8954243c             mov dword ptr [esp + 0x3c], edx
// 00502f47  8b4728               mov eax, dword ptr [edi + 0x28]
// 00502f4a  89442440             mov dword ptr [esp + 0x40], eax
// 00502f4e  33ff                 xor edi, edi
// 00502f50  83cdff               or ebp, 0xffffffff
// 00502f53  397e10               cmp dword ptr [esi + 0x10], edi
// 00502f56  897c2450             mov dword ptr [esp + 0x50], edi
// 00502f5a  7426                 je 0x502f82
// 00502f5c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00502f5f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00502f62  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00502f65  ff158ce77700         call dword ptr [0x77e78c]
// 00502f6b  83460c01             add dword ptr [esi + 0xc], 1
// 00502f6f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00502f72  394608               cmp dword ptr [esi + 8], eax
// 00502f75  7703                 ja 0x502f7a
// 00502f77  897e0c               mov dword ptr [esi + 0xc], edi
// 00502f7a  016e10               add dword ptr [esi + 0x10], ebp
// 00502f7d  7503                 jne 0x502f82
// 00502f7f  897e0c               mov dword ptr [esi + 0xc], edi
// 00502f82  8d542418             lea edx, [esp + 0x18]
// 00502f86  52                   push edx
// 00502f87  8bcb                 mov ecx, ebx
// 00502f89  ff157ce77700         call dword ptr [0x77e77c]
// 00502f8f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00502f93  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00502f97  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00502f9b  89431c               mov dword ptr [ebx + 0x1c], eax
// 00502f9e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00502fa2  894b20               mov dword ptr [ebx + 0x20], ecx
// 00502fa5  8d4c2418             lea ecx, [esp + 0x18]
// 00502fa9  895324               mov dword ptr [ebx + 0x24], edx
// 00502fac  894328               mov dword ptr [ebx + 0x28], eax
// 00502faf  896c2450             mov dword ptr [esp + 0x50], ebp
// 00502fb3  ff158ce77700         call dword ptr [0x77e78c]
// 00502fb9  eb06                 jmp 0x502fc1
// 00502fbb  53                   push ebx
// 00502fbc  e84ff2ffff           call 0x502210
// 00502fc1  8bc3                 mov eax, ebx
// 00502fc3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00502fc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00502fce  59                   pop ecx
// 00502fcf  5f                   pop edi
// 00502fd0  5e                   pop esi
// 00502fd1  5d                   pop ebp
// 00502fd2  5b                   pop ebx
// 00502fd3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00502fd7  33cc                 xor ecx, esp
// 00502fd9  e8c8be1100           call 0x61eea6
// 00502fde  83c440               add esp, 0x40
// 00502fe1  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?read@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
