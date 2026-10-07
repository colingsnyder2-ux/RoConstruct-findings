// roc 2008-06 005bbd70  unit: RBX::Soundscape::SoundService  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbd70
//
// 005bbd70  6aff                 push -1
// 005bbd72  68880d7c00           push 0x7c0d88
// 005bbd77  64a100000000         mov eax, dword ptr fs:[0]
// 005bbd7d  50                   push eax
// 005bbd7e  64892500000000       mov dword ptr fs:[0], esp
// 005bbd85  83ec08               sub esp, 8
// 005bbd88  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bbd8c  56                   push esi
// 005bbd8d  57                   push edi
// 005bbd8e  8bf1                 mov esi, ecx
// 005bbd90  89742408             mov dword ptr [esp + 8], esi
// 005bbd94  50                   push eax
// 005bbd95  51                   push ecx
// 005bbd96  8bc4                 mov eax, esp
// 005bbd98  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005bbda0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005bbda8  89642414             mov dword ptr [esp + 0x14], esp
// 005bbdac  c70000000000         mov dword ptr [eax], 0
// 005bbdb2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bbdb6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bbdba  51                   push ecx
// 005bbdbb  52                   push edx
// 005bbdbc  c644242801           mov byte ptr [esp + 0x28], 1
// 005bbdc1  e89afaffff           call 0x5bb860
// 005bbdc6  50                   push eax
// 005bbdc7  8bce                 mov ecx, esi
// 005bbdc9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005bbdce  e8bde4e4ff           call 0x40a290
// 005bbdd3  6a18                 push 0x18
// 005bbdd5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005bbdda  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 005bbde0  e83b4b0e00           call 0x6a0920
// 005bbde5  83c404               add esp, 4
// 005bbde8  85c0                 test eax, eax
// 005bbdea  741e                 je 0x5bbe0a
// 005bbdec  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005bbdf0  33c9                 xor ecx, ecx
// 005bbdf2  33d2                 xor edx, edx
// 005bbdf4  897808               mov dword ptr [eax + 8], edi
// 005bbdf7  c70020768300         mov dword ptr [eax], 0x837620
// 005bbdfd  897004               mov dword ptr [eax + 4], esi
// 005bbe00  894810               mov dword ptr [eax + 0x10], ecx
// 005bbe03  895014               mov dword ptr [eax + 0x14], edx
// 005bbe06  8bf8                 mov edi, eax
// 005bbe08  eb02                 jmp 0x5bbe0c
// 005bbe0a  33ff                 xor edi, edi
// 005bbe0c  8b4618               mov eax, dword ptr [esi + 0x18]
// 005bbe0f  3bf8                 cmp edi, eax
// 005bbe11  740d                 je 0x5bbe20
// 005bbe13  85c0                 test eax, eax
// 005bbe15  7409                 je 0x5bbe20
// 005bbe17  50                   push eax
// 005bbe18  e85d480e00           call 0x6a067a
// 005bbe1d  83c404               add esp, 4
// 005bbe20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bbe24  897e18               mov dword ptr [esi + 0x18], edi
// 005bbe27  5f                   pop edi
// 005bbe28  8bc6                 mov eax, esi
// 005bbe2a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbe31  5e                   pop esi
// 005bbe32  83c414               add esp, 0x14
// 005bbe35  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
