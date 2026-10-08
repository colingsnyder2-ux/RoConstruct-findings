// from server: 100% by auto
// roc 2008-06 005a6870  unit: RBX::Workspace  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6870
//
// 005a6870  83ec14               sub esp, 0x14
// 005a6873  53                   push ebx
// 005a6874  8b1d60228000         mov ebx, dword ptr [0x802260]
// 005a687a  55                   push ebp
// 005a687b  56                   push esi
// 005a687c  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a6880  57                   push edi
// 005a6881  33ed                 xor ebp, ebp
// 005a6883  8b0e                 mov ecx, dword ptr [esi]
// 005a6885  8b5604               mov edx, dword ptr [esi + 4]
// 005a6888  8d442410             lea eax, [esp + 0x10]
// 005a688c  50                   push eax
// 005a688d  83ec10               sub esp, 0x10
// 005a6890  8bc4                 mov eax, esp
// 005a6892  8908                 mov dword ptr [eax], ecx
// 005a6894  8b4e08               mov ecx, dword ptr [esi + 8]
// 005a6897  895004               mov dword ptr [eax + 4], edx
// 005a689a  8b560c               mov edx, dword ptr [esi + 0xc]
// 005a689d  894808               mov dword ptr [eax + 8], ecx
// 005a68a0  89500c               mov dword ptr [eax + 0xc], edx
// 005a68a3  e888b20400           call 0x5f1b30
// 005a68a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a68ac  83c414               add esp, 0x14
// 005a68af  50                   push eax
// 005a68b0  ffd3                 call ebx
// 005a68b2  8d4c2414             lea ecx, [esp + 0x14]
// 005a68b6  6a01                 push 1
// 005a68b8  51                   push ecx
// 005a68b9  e882020000           call 0x5a6b40
// 005a68be  8b06                 mov eax, dword ptr [esi]
// 005a68c0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005a68c4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a68c7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005a68cb  83c408               add esp, 8
// 005a68ce  3bc2                 cmp eax, edx
// 005a68d0  751d                 jne 0x5a68ef
// 005a68d2  3bcf                 cmp ecx, edi
// 005a68d4  751b                 jne 0x5a68f1
// 005a68d6  8b4608               mov eax, dword ptr [esi + 8]
// 005a68d9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 005a68dd  85c0                 test eax, eax
// 005a68df  7e06                 jle 0x5a68e7
// 005a68e1  45                   inc ebp
// 005a68e2  83fd05               cmp ebp, 5
// 005a68e5  7c9c                 jl 0x5a6883
// 005a68e7  5f                   pop edi
// 005a68e8  5e                   pop esi
// 005a68e9  5d                   pop ebp
// 005a68ea  5b                   pop ebx
// 005a68eb  83c414               add esp, 0x14
// 005a68ee  c3                   ret 
// 005a68ef  3bcf                 cmp ecx, edi
// 005a68f1  7cf4                 jl 0x5a68e7
// 005a68f3  7fec                 jg 0x5a68e1
// 005a68f5  3bc2                 cmp eax, edx
// 005a68f7  76ee                 jbe 0x5a68e7
// 005a68f9  ebe6                 jmp 0x5a68e1
// library boost-1.34.1/libs\thread\src\thread.cpp (function ?sleep@thread@boost@@SAXABUxtime@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/thread.cpp
