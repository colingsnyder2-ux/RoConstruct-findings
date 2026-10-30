// roc 2009-12 0080f2f0  unit: CXTPImageManagerIcon  size: 563 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080f2f0
//
// 0080f2f0  6aff                 push -1
// 0080f2f2  68529e9500           push 0x959e52
// 0080f2f7  64a100000000         mov eax, dword ptr fs:[0]
// 0080f2fd  50                   push eax
// 0080f2fe  83ec08               sub esp, 8
// 0080f301  55                   push ebp
// 0080f302  56                   push esi
// 0080f303  57                   push edi
// 0080f304  a10052b600           mov eax, dword ptr [0xb65200]
// 0080f309  33c4                 xor eax, esp
// 0080f30b  50                   push eax
// 0080f30c  8d442418             lea eax, [esp + 0x18]
// 0080f310  64a300000000         mov dword ptr fs:[0], eax
// 0080f316  8bf1                 mov esi, ecx
// 0080f318  8d4c2428             lea ecx, [esp + 0x28]
// 0080f31c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0080f324  e877b5ffff           call 0x80a8a0
// 0080f329  85c0                 test eax, eax
// 0080f32b  0f85ca010000         jne 0x80f4fb
// 0080f331  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0080f335  85c9                 test ecx, ecx
// 0080f337  752f                 jne 0x80f368
// 0080f339  394c2454             cmp dword ptr [esp + 0x54], ecx
// 0080f33d  751b                 jne 0x80f35a
// 0080f33f  8d442410             lea eax, [esp + 0x10]
// 0080f343  50                   push eax
// 0080f344  8d4c242c             lea ecx, [esp + 0x2c]
// 0080f348  e8c39dffff           call 0x809110
// 0080f34d  8b08                 mov ecx, dword ptr [eax]
// 0080f34f  894c2450             mov dword ptr [esp + 0x50], ecx
// 0080f353  8b5004               mov edx, dword ptr [eax + 4]
// 0080f356  89542454             mov dword ptr [esp + 0x54], edx
// 0080f35a  85c9                 test ecx, ecx
// 0080f35c  750a                 jne 0x80f368
// 0080f35e  394c2454             cmp dword ptr [esp + 0x54], ecx
// 0080f362  0f8493010000         je 0x80f4fb
// 0080f368  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0080f36c  8d44244c             lea eax, [esp + 0x4c]
// 0080f370  50                   push eax
// 0080f371  8d6e28               lea ebp, [esi + 0x28]
// 0080f374  57                   push edi
// 0080f375  8bcd                 mov ecx, ebp
// 0080f377  e804d6ffff           call 0x80c980
// 0080f37c  85c0                 test eax, eax
// 0080f37e  0f84ea000000         je 0x80f46e
// 0080f384  8b442458             mov eax, dword ptr [esp + 0x58]
// 0080f388  85c0                 test eax, eax
// 0080f38a  7529                 jne 0x80f3b5
// 0080f38c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0080f390  51                   push ecx
// 0080f391  83ec24               sub esp, 0x24
// 0080f394  8d542450             lea edx, [esp + 0x50]
// 0080f398  8bcc                 mov ecx, esp
// 0080f39a  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0080f3a1  52                   push edx
// 0080f3a2  e899b4ffff           call 0x80a840
// 0080f3a7  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080f3ab  e830fcffff           call 0x80efe0
// 0080f3b0  e91b010000           jmp 0x80f4d0
// 0080f3b5  83f801               cmp eax, 1
// 0080f3b8  7529                 jne 0x80f3e3
// 0080f3ba  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f3be  50                   push eax
// 0080f3bf  83ec24               sub esp, 0x24
// 0080f3c2  8d542450             lea edx, [esp + 0x50]
// 0080f3c6  8bcc                 mov ecx, esp
// 0080f3c8  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0080f3cf  52                   push edx
// 0080f3d0  e86bb4ffff           call 0x80a840
// 0080f3d5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080f3d9  e882fcffff           call 0x80f060
// 0080f3de  e9ed000000           jmp 0x80f4d0
// 0080f3e3  83f802               cmp eax, 2
// 0080f3e6  7529                 jne 0x80f411
// 0080f3e8  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f3ec  50                   push eax
// 0080f3ed  83ec24               sub esp, 0x24
// 0080f3f0  8d542450             lea edx, [esp + 0x50]
// 0080f3f4  8bcc                 mov ecx, esp
// 0080f3f6  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0080f3fd  52                   push edx
// 0080f3fe  e83db4ffff           call 0x80a840
// 0080f403  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080f407  e8d4fcffff           call 0x80f0e0
// 0080f40c  e9bf000000           jmp 0x80f4d0
// 0080f411  83f803               cmp eax, 3
// 0080f414  7529                 jne 0x80f43f
// 0080f416  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f41a  50                   push eax
// 0080f41b  83ec24               sub esp, 0x24
// 0080f41e  8d542450             lea edx, [esp + 0x50]
// 0080f422  8bcc                 mov ecx, esp
// 0080f424  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0080f42b  52                   push edx
// 0080f42c  e80fb4ffff           call 0x80a840
// 0080f431  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080f435  e826fdffff           call 0x80f160
// 0080f43a  e991000000           jmp 0x80f4d0
// 0080f43f  83f804               cmp eax, 4
// 0080f442  0f8588000000         jne 0x80f4d0
// 0080f448  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f44c  50                   push eax
// 0080f44d  83ec24               sub esp, 0x24
// 0080f450  8d542450             lea edx, [esp + 0x50]
// 0080f454  8bcc                 mov ecx, esp
// 0080f456  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0080f45d  52                   push edx
// 0080f45e  e8ddb3ffff           call 0x80a840
// 0080f463  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0080f467  e874fdffff           call 0x80f1e0
// 0080f46c  eb62                 jmp 0x80f4d0
// 0080f46e  837c245800           cmp dword ptr [esp + 0x58], 0
// 0080f473  0f8582000000         jne 0x80f4fb
// 0080f479  6a44                 push 0x44
// 0080f47b  e8e043feff           call 0x7f3860
// 0080f480  83c404               add esp, 4
// 0080f483  89442458             mov dword ptr [esp + 0x58], eax
// 0080f487  c644242001           mov byte ptr [esp + 0x20], 1
// 0080f48c  85c0                 test eax, eax
// 0080f48e  740d                 je 0x80f49d
// 0080f490  56                   push esi
// 0080f491  57                   push edi
// 0080f492  8bc8                 mov ecx, eax
// 0080f494  e867d2ffff           call 0x80c700
// 0080f499  8bf0                 mov esi, eax
// 0080f49b  eb02                 jmp 0x80f49f
// 0080f49d  33f6                 xor esi, esi
// 0080f49f  8b442450             mov eax, dword ptr [esp + 0x50]
// 0080f4a3  50                   push eax
// 0080f4a4  83ec24               sub esp, 0x24
// 0080f4a7  8d542450             lea edx, [esp + 0x50]
// 0080f4ab  8bcc                 mov ecx, esp
// 0080f4ad  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0080f4b4  52                   push edx
// 0080f4b5  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0080f4ba  e881b3ffff           call 0x80a840
// 0080f4bf  8bce                 mov ecx, esi
// 0080f4c1  e81afbffff           call 0x80efe0
// 0080f4c6  57                   push edi
// 0080f4c7  8bcd                 mov ecx, ebp
// 0080f4c9  e8b24c0800           call 0x894180
// 0080f4ce  8930                 mov dword ptr [eax], esi
// 0080f4d0  8d4c2428             lea ecx, [esp + 0x28]
// 0080f4d4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080f4dc  e8ffd8ffff           call 0x80cde0
// 0080f4e1  b801000000           mov eax, 1
// 0080f4e6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080f4ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f4f1  59                   pop ecx
// 0080f4f2  5f                   pop edi
// 0080f4f3  5e                   pop esi
// 0080f4f4  5d                   pop ebp
// 0080f4f5  83c414               add esp, 0x14
// 0080f4f8  c23400               ret 0x34
// 0080f4fb  8d4c2428             lea ecx, [esp + 0x28]
// 0080f4ff  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080f507  e8d4d8ffff           call 0x80cde0
// 0080f50c  33c0                 xor eax, eax
// 0080f50e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080f512  64890d00000000       mov dword ptr fs:[0], ecx
// 0080f519  59                   pop ecx
// 0080f51a  5f                   pop edi
// 0080f51b  5e                   pop esi
// 0080f51c  5d                   pop ebp
// 0080f51d  83c414               add esp, 0x14
// 0080f520  c23400               ret 0x34
// copied from an identical function in another client (function ?SetIcon@CXTPImageManager@@QAEHVCXTPImageManagerIconHandle@@IVCSize@@W4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp