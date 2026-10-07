// roc 2012-06 0069bc40  unit: RBX::VFriendService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069bc40
//
// 0069bc40  55                   push ebp
// 0069bc41  8bec                 mov ebp, esp
// 0069bc43  6aff                 push -1
// 0069bc45  68a070ab00           push 0xab70a0
// 0069bc4a  64a100000000         mov eax, dword ptr fs:[0]
// 0069bc50  50                   push eax
// 0069bc51  64892500000000       mov dword ptr fs:[0], esp
// 0069bc58  83ec08               sub esp, 8
// 0069bc5b  53                   push ebx
// 0069bc5c  56                   push esi
// 0069bc5d  57                   push edi
// 0069bc5e  8bf1                 mov esi, ecx
// 0069bc60  8965f0               mov dword ptr [ebp - 0x10], esp
// 0069bc63  8975ec               mov dword ptr [ebp - 0x14], esi
// 0069bc66  e885151300           call 0x7cd1f0
// 0069bc6b  894604               mov dword ptr [esi + 4], eax
// 0069bc6e  c6401501             mov byte ptr [eax + 0x15], 1
// 0069bc72  8b4604               mov eax, dword ptr [esi + 4]
// 0069bc75  894004               mov dword ptr [eax + 4], eax
// 0069bc78  8b4604               mov eax, dword ptr [esi + 4]
// 0069bc7b  8900                 mov dword ptr [eax], eax
// 0069bc7d  8b4604               mov eax, dword ptr [esi + 4]
// 0069bc80  894008               mov dword ptr [eax + 8], eax
// 0069bc83  8b4508               mov eax, dword ptr [ebp + 8]
// 0069bc86  50                   push eax
// 0069bc87  8bce                 mov ecx, esi
// 0069bc89  c7460800000000       mov dword ptr [esi + 8], 0
// 0069bc90  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0069bc97  e8a4faffff           call 0x69b740
// 0069bc9c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069bc9f  5f                   pop edi
// 0069bca0  8bc6                 mov eax, esi
// 0069bca2  5e                   pop esi
// 0069bca3  64890d00000000       mov dword ptr fs:[0], ecx
// 0069bcaa  5b                   pop ebx
// 0069bcab  8be5                 mov esp, ebp
// 0069bcad  5d                   pop ebp
// 0069bcae  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
