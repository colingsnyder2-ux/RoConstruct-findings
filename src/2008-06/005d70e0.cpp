// roc 2008-06 005d70e0  unit: RBX::TimerService  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d70e0
//
// 005d70e0  6aff                 push -1
// 005d70e2  68a85c7d00           push 0x7d5ca8
// 005d70e7  64a100000000         mov eax, dword ptr fs:[0]
// 005d70ed  50                   push eax
// 005d70ee  64892500000000       mov dword ptr fs:[0], esp
// 005d70f5  51                   push ecx
// 005d70f6  56                   push esi
// 005d70f7  8bf1                 mov esi, ecx
// 005d70f9  89742404             mov dword ptr [esp + 4], esi
// 005d70fd  e8bef8ffff           call 0x5d69c0
// 005d7102  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d710a  e80196feff           call 0x5c0710
// 005d710f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7113  89461c               mov dword ptr [esi + 0x1c], eax
// 005d7116  c706d4d08300         mov dword ptr [esi], 0x83d0d4
// 005d711c  c74610c8d08300       mov dword ptr [esi + 0x10], 0x83d0c8
// 005d7123  c74614c0d08300       mov dword ptr [esi + 0x14], 0x83d0c0
// 005d712a  c74620b8d08300       mov dword ptr [esi + 0x20], 0x83d0b8
// 005d7131  c74624a8d08300       mov dword ptr [esi + 0x24], 0x83d0a8
// 005d7138  c7464498d08300       mov dword ptr [esi + 0x44], 0x83d098
// 005d713f  c7466488d08300       mov dword ptr [esi + 0x64], 0x83d088
// 005d7146  c7868400000078d08300 mov dword ptr [esi + 0x84], 0x83d078
// 005d7150  c786a400000068d08300 mov dword ptr [esi + 0xa4], 0x83d068
// 005d715a  c786c400000058d08300 mov dword ptr [esi + 0xc4], 0x83d058
// 005d7164  8bc6                 mov eax, esi
// 005d7166  5e                   pop esi
// 005d7167  64890d00000000       mov dword ptr fs:[0], ecx
// 005d716e  83c410               add esp, 0x10
// 005d7171  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
