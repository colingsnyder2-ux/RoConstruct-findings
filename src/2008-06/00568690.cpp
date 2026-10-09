// roc 2008-06 00568690  unit: boost::thread_resource_error  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568690
//
// 00568690  6aff                 push -1
// 00568692  68abfd7b00           push 0x7bfdab
// 00568697  64a100000000         mov eax, dword ptr fs:[0]
// 0056869d  50                   push eax
// 0056869e  64892500000000       mov dword ptr fs:[0], esp
// 005686a5  51                   push ecx
// 005686a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005686aa  53                   push ebx
// 005686ab  55                   push ebp
// 005686ac  8be9                 mov ebp, ecx
// 005686ae  56                   push esi
// 005686af  8b742420             mov esi, dword ptr [esp + 0x20]
// 005686b3  50                   push eax
// 005686b4  8d5d04               lea ebx, [ebp + 4]
// 005686b7  56                   push esi
// 005686b8  8bcb                 mov ecx, ebx
// 005686ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005686be  897500               mov dword ptr [ebp], esi
// 005686c1  e83affffff           call 0x568600
// 005686c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005686ce  85f6                 test esi, esi
// 005686d0  7453                 je 0x568725
// 005686d2  57                   push edi
// 005686d3  8dbee4000000         lea edi, [esi + 0xe4]
// 005686d9  85ff                 test edi, edi
// 005686db  7431                 je 0x56870e
// 005686dd  8937                 mov dword ptr [edi], esi
// 005686df  8b33                 mov esi, dword ptr [ebx]
// 005686e1  85f6                 test esi, esi
// 005686e3  740c                 je 0x5686f1
// 005686e5  8d4e08               lea ecx, [esi + 8]
// 005686e8  ba01000000           mov edx, 1
// 005686ed  f00fc111             lock xadd dword ptr [ecx], edx
// 005686f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005686f4  85c9                 test ecx, ecx
// 005686f6  7413                 je 0x56870b
// 005686f8  8d4108               lea eax, [ecx + 8]
// 005686fb  83caff               or edx, 0xffffffff
// 005686fe  f00fc110             lock xadd dword ptr [eax], edx
// 00568702  7507                 jne 0x56870b
// 00568704  8b01                 mov eax, dword ptr [ecx]
// 00568706  8b5008               mov edx, dword ptr [eax + 8]
// 00568709  ffd2                 call edx
// 0056870b  897704               mov dword ptr [edi + 4], esi
// 0056870e  5f                   pop edi
// 0056870f  5e                   pop esi
// 00568710  8bc5                 mov eax, ebp
// 00568712  5d                   pop ebp
// 00568713  5b                   pop ebx
// 00568714  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00568718  64890d00000000       mov dword ptr fs:[0], ecx
// 0056871f  83c410               add esp, 0x10
// 00568722  c20800               ret 8
// 00568725  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00568729  5e                   pop esi
// 0056872a  8bc5                 mov eax, ebp
// 0056872c  5d                   pop ebp
// 0056872d  5b                   pop ebx
// 0056872e  64890d00000000       mov dword ptr fs:[0], ecx
// 00568735  83c410               add esp, 0x10
// 00568738  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
