// roc 2007-08 00773620  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773620
//
// 00773620  53                   push ebx
// 00773621  55                   push ebp
// 00773622  56                   push esi
// 00773623  57                   push edi
// 00773624  6a05                 push 5
// 00773626  83ec0c               sub esp, 0xc
// 00773629  8bc4                 mov eax, esp
// 0077362b  b9d00a5a00           mov ecx, 0x5a0ad0
// 00773630  8908                 mov dword ptr [eax], ecx
// 00773632  33d2                 xor edx, edx
// 00773634  895004               mov dword ptr [eax + 4], edx
// 00773637  83ec0c               sub esp, 0xc
// 0077363a  33f6                 xor esi, esi
// 0077363c  897008               mov dword ptr [eax + 8], esi
// 0077363f  8bc4                 mov eax, esp
// 00773641  bfe0fc5900           mov edi, 0x59fce0
// 00773646  8938                 mov dword ptr [eax], edi
// 00773648  689c3d7b00           push 0x7b3d9c
// 0077364d  33db                 xor ebx, ebx
// 0077364f  33ed                 xor ebp, ebp
// 00773651  895804               mov dword ptr [eax + 4], ebx
// 00773654  68f0b67900           push 0x79b6f0
// 00773659  b9d0538c00           mov ecx, 0x8c53d0
// 0077365e  896808               mov dword ptr [eax + 8], ebp
// 00773661  e8aad3e2ff           call 0x5a0a10
// 00773666  6830b17700           push 0x77b130
// 0077366b  e8b3d6ebff           call 0x630d23
// 00773670  83c404               add esp, 4
// 00773673  5f                   pop edi
// 00773674  5e                   pop esi
// 00773675  5d                   pop ebp
// 00773676  5b                   pop ebx
// 00773677  c3                   ret 
// library rbxgs/v8datamodel\SpawnLocation.cpp (function ??__Eprop_TeamColor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/SpawnLocation.cpp
