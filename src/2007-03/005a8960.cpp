// roc 2007-03 005a8960  unit: seg_005a0000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8960
//
// 005a8960  6aff                 push -1
// 005a8962  685b1c7500           push 0x751c5b
// 005a8967  64a100000000         mov eax, dword ptr fs:[0]
// 005a896d  50                   push eax
// 005a896e  64892500000000       mov dword ptr fs:[0], esp
// 005a8975  83ec08               sub esp, 8
// 005a8978  55                   push ebp
// 005a8979  56                   push esi
// 005a897a  57                   push edi
// 005a897b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a897f  8bf1                 mov esi, ecx
// 005a8981  56                   push esi
// 005a8982  8bcf                 mov ecx, edi
// 005a8984  89742414             mov dword ptr [esp + 0x14], esi
// 005a8988  e8831bf0ff           call 0x4aa510
// 005a898d  6a24                 push 0x24
// 005a898f  e874570700           call 0x61e108
// 005a8994  83c404               add esp, 4
// 005a8997  8944240c             mov dword ptr [esp + 0xc], eax
// 005a899b  33ed                 xor ebp, ebp
// 005a899d  3bc5                 cmp eax, ebp
// 005a899f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a89a3  7409                 je 0x5a89ae
// 005a89a5  8bc8                 mov ecx, eax
// 005a89a7  e8f4feffff           call 0x5a88a0
// 005a89ac  8be8                 mov ebp, eax
// 005a89ae  53                   push ebx
// 005a89af  57                   push edi
// 005a89b0  8bcd                 mov ecx, ebp
// 005a89b2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a89ba  e8c1f7ffff           call 0x5a8180
// 005a89bf  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005a89c2  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a89c5  83c610               add esi, 0x10
// 005a89c8  8d442410             lea eax, [esp + 0x10]
// 005a89cc  50                   push eax
// 005a89cd  51                   push ecx
// 005a89ce  57                   push edi
// 005a89cf  8bce                 mov ecx, esi
// 005a89d1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a89d5  e8167cffff           call 0x5a05f0
// 005a89da  6a01                 push 1
// 005a89dc  8bce                 mov ecx, esi
// 005a89de  8bd8                 mov ebx, eax
// 005a89e0  e84b7cffff           call 0x5a0630
// 005a89e5  895f04               mov dword ptr [edi + 4], ebx
// 005a89e8  8b5304               mov edx, dword ptr [ebx + 4]
// 005a89eb  891a                 mov dword ptr [edx], ebx
// 005a89ed  8b4604               mov eax, dword ptr [esi + 4]
// 005a89f0  8b7804               mov edi, dword ptr [eax + 4]
// 005a89f3  3bf8                 cmp edi, eax
// 005a89f5  5b                   pop ebx
// 005a89f6  7506                 jne 0x5a89fe
// 005a89f8  ff1544e97700         call dword ptr [0x77e944]
// 005a89fe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a8a02  89751c               mov dword ptr [ebp + 0x1c], esi
// 005a8a05  897d20               mov dword ptr [ebp + 0x20], edi
// 005a8a08  8b01                 mov eax, dword ptr [ecx]
// 005a8a0a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005a8a0e  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a8a11  8b37                 mov esi, dword ptr [edi]
// 005a8a13  ffd2                 call edx
// 005a8a15  50                   push eax
// 005a8a16  8b4604               mov eax, dword ptr [esi + 4]
// 005a8a19  8bcf                 mov ecx, edi
// 005a8a1b  ffd0                 call eax
// 005a8a1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a8a21  5f                   pop edi
// 005a8a22  5e                   pop esi
// 005a8a23  5d                   pop ebp
// 005a8a24  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8a2b  83c414               add esp, 0x14
// 005a8a2e  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onAssemblyAdded@SimJobStage@RBX@@QAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/SimJobStage.cpp
