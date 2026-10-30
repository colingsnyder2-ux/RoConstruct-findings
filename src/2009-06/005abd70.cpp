// roc 2009-06 005abd70  unit: RBX::Mesh  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abd70
//
// 005abd70  55                   push ebp
// 005abd71  8bec                 mov ebp, esp
// 005abd73  83ec30               sub esp, 0x30
// 005abd76  894dd0               mov dword ptr [ebp - 0x30], ecx
// 005abd79  8b4508               mov eax, dword ptr [ebp + 8]
// 005abd7c  50                   push eax
// 005abd7d  8d4df8               lea ecx, [ebp - 8]
// 005abd80  51                   push ecx
// 005abd81  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005abd84  e8c70f0000           call 0x5acd50
// 005abd89  8d55f0               lea edx, [ebp - 0x10]
// 005abd8c  52                   push edx
// 005abd8d  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005abd90  e89b860000           call 0x5b4430
// 005abd95  50                   push eax
// 005abd96  8d4df8               lea ecx, [ebp - 8]
// 005abd99  e802570100           call 0x5c14a0
// 005abd9e  0fb6c0               movzx eax, al
// 005abda1  85c0                 test eax, eax
// 005abda3  7528                 jne 0x5abdcd
// 005abda5  8d4df8               lea ecx, [ebp - 8]
// 005abda8  e883ffffff           call 0x5abd30
// 005abdad  50                   push eax
// 005abdae  e85d090000           call 0x5ac710
// 005abdb3  83c404               add esp, 4
// 005abdb6  50                   push eax
// 005abdb7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005abdba  51                   push ecx
// 005abdbb  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005abdbe  83c108               add ecx, 8
// 005abdc1  e85a16eaff           call 0x44d420
// 005abdc6  0fb6d0               movzx edx, al
// 005abdc9  85d2                 test edx, edx
// 005abdcb  7443                 je 0x5abe10
// 005abdcd  c745e400000000       mov dword ptr [ebp - 0x1c], 0
// 005abdd4  8b45f8               mov eax, dword ptr [ebp - 8]
// 005abdd7  8945dc               mov dword ptr [ebp - 0x24], eax
// 005abdda  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005abddd  894de0               mov dword ptr [ebp - 0x20], ecx
// 005abde0  8d55e4               lea edx, [ebp - 0x1c]
// 005abde3  52                   push edx
// 005abde4  8b4508               mov eax, dword ptr [ebp + 8]
// 005abde7  50                   push eax
// 005abde8  8d4de8               lea ecx, [ebp - 0x18]
// 005abdeb  e880ed0000           call 0x5bab70
// 005abdf0  50                   push eax
// 005abdf1  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 005abdf4  51                   push ecx
// 005abdf5  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 005abdf8  52                   push edx
// 005abdf9  8d45d4               lea eax, [ebp - 0x2c]
// 005abdfc  50                   push eax
// 005abdfd  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 005abe00  e82b090000           call 0x5ac730
// 005abe05  8b08                 mov ecx, dword ptr [eax]
// 005abe07  8b5004               mov edx, dword ptr [eax + 4]
// 005abe0a  894df8               mov dword ptr [ebp - 8], ecx
// 005abe0d  8955fc               mov dword ptr [ebp - 4], edx
// 005abe10  8d4df8               lea ecx, [ebp - 8]
// 005abe13  e838100000           call 0x5ace50
// 005abe18  83c004               add eax, 4
// 005abe1b  8be5                 mov esp, ebp
// 005abe1d  5d                   pop ebp
// 005abe1e  c20400               ret 4
// copied from an identical function in another client (function ??A?$map@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@@std@@QAEAAHABH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Containment/WmlConvexHull3.cpp