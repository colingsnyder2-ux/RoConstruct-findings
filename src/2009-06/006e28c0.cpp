// roc 2009-06 006e28c0  unit: RBX::ScoreHud  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e28c0
//
// 006e28c0  55                   push ebp
// 006e28c1  8bec                 mov ebp, esp
// 006e28c3  6aff                 push -1
// 006e28c5  68581c8700           push 0x871c58
// 006e28ca  64a100000000         mov eax, dword ptr fs:[0]
// 006e28d0  50                   push eax
// 006e28d1  64892500000000       mov dword ptr fs:[0], esp
// 006e28d8  83ec08               sub esp, 8
// 006e28db  53                   push ebx
// 006e28dc  56                   push esi
// 006e28dd  57                   push edi
// 006e28de  8965f0               mov dword ptr [ebp - 0x10], esp
// 006e28e1  8bf1                 mov esi, ecx
// 006e28e3  6a04                 push 4
// 006e28e5  8975ec               mov dword ptr [ebp - 0x14], esi
// 006e28e8  e84b610300           call 0x718a38
// 006e28ed  83c404               add esp, 4
// 006e28f0  85c0                 test eax, eax
// 006e28f2  7404                 je 0x6e28f8
// 006e28f4  8930                 mov dword ptr [eax], esi
// 006e28f6  eb02                 jmp 0x6e28fa
// 006e28f8  33c0                 xor eax, eax
// 006e28fa  8906                 mov dword ptr [esi], eax
// 006e28fc  8bce                 mov ecx, esi
// 006e28fe  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006e2905  e81633edff           call 0x5b5c20
// 006e290a  894618               mov dword ptr [esi + 0x18], eax
// 006e290d  b101                 mov cl, 1
// 006e290f  88482d               mov byte ptr [eax + 0x2d], cl
// 006e2912  8b4618               mov eax, dword ptr [esi + 0x18]
// 006e2915  894004               mov dword ptr [eax + 4], eax
// 006e2918  8b4618               mov eax, dword ptr [esi + 0x18]
// 006e291b  8900                 mov dword ptr [eax], eax
// 006e291d  8b4618               mov eax, dword ptr [esi + 0x18]
// 006e2920  894008               mov dword ptr [eax + 8], eax
// 006e2923  8b4508               mov eax, dword ptr [ebp + 8]
// 006e2926  884dfc               mov byte ptr [ebp - 4], cl
// 006e2929  50                   push eax
// 006e292a  8bce                 mov ecx, esi
// 006e292c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 006e2933  e8b8feffff           call 0x6e27f0
// 006e2938  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006e293b  5f                   pop edi
// 006e293c  8bc6                 mov eax, esi
// 006e293e  5e                   pop esi
// 006e293f  64890d00000000       mov dword ptr fs:[0], ecx
// 006e2946  5b                   pop ebx
// 006e2947  8be5                 mov esp, ebp
// 006e2949  5d                   pop ebp
// 006e294a  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
