// roc 2008-06 00601ba0  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601ba0
//
// 00601ba0  6aff                 push -1
// 00601ba2  68abfd7b00           push 0x7bfdab
// 00601ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00601bad  50                   push eax
// 00601bae  64892500000000       mov dword ptr fs:[0], esp
// 00601bb5  51                   push ecx
// 00601bb6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00601bba  53                   push ebx
// 00601bbb  55                   push ebp
// 00601bbc  8be9                 mov ebp, ecx
// 00601bbe  56                   push esi
// 00601bbf  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601bc3  50                   push eax
// 00601bc4  8d5d04               lea ebx, [ebp + 4]
// 00601bc7  56                   push esi
// 00601bc8  8bcb                 mov ecx, ebx
// 00601bca  896c2414             mov dword ptr [esp + 0x14], ebp
// 00601bce  897500               mov dword ptr [ebp], esi
// 00601bd1  e8aaf2ffff           call 0x600e80
// 00601bd6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00601bde  85f6                 test esi, esi
// 00601be0  7453                 je 0x601c35
// 00601be2  57                   push edi
// 00601be3  8dbee4000000         lea edi, [esi + 0xe4]
// 00601be9  85ff                 test edi, edi
// 00601beb  7431                 je 0x601c1e
// 00601bed  8937                 mov dword ptr [edi], esi
// 00601bef  8b33                 mov esi, dword ptr [ebx]
// 00601bf1  85f6                 test esi, esi
// 00601bf3  740c                 je 0x601c01
// 00601bf5  8d4e08               lea ecx, [esi + 8]
// 00601bf8  ba01000000           mov edx, 1
// 00601bfd  f00fc111             lock xadd dword ptr [ecx], edx
// 00601c01  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601c04  85c9                 test ecx, ecx
// 00601c06  7413                 je 0x601c1b
// 00601c08  8d4108               lea eax, [ecx + 8]
// 00601c0b  83caff               or edx, 0xffffffff
// 00601c0e  f00fc110             lock xadd dword ptr [eax], edx
// 00601c12  7507                 jne 0x601c1b
// 00601c14  8b01                 mov eax, dword ptr [ecx]
// 00601c16  8b5008               mov edx, dword ptr [eax + 8]
// 00601c19  ffd2                 call edx
// 00601c1b  897704               mov dword ptr [edi + 4], esi
// 00601c1e  5f                   pop edi
// 00601c1f  5e                   pop esi
// 00601c20  8bc5                 mov eax, ebp
// 00601c22  5d                   pop ebp
// 00601c23  5b                   pop ebx
// 00601c24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601c28  64890d00000000       mov dword ptr fs:[0], ecx
// 00601c2f  83c410               add esp, 0x10
// 00601c32  c20800               ret 8
// 00601c35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601c39  5e                   pop esi
// 00601c3a  8bc5                 mov eax, ebp
// 00601c3c  5d                   pop ebp
// 00601c3d  5b                   pop ebx
// 00601c3e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601c45  83c410               add esp, 0x10
// 00601c48  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
