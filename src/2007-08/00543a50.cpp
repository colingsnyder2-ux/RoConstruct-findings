// roc 2007-08 00543a50  unit: RBX::DebugSettings::W4ErrorReporting::?$EnumDesc  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543a50
//
// 00543a50  6aff                 push -1
// 00543a52  6843ab7500           push 0x75ab43
// 00543a57  64a100000000         mov eax, dword ptr fs:[0]
// 00543a5d  50                   push eax
// 00543a5e  64892500000000       mov dword ptr fs:[0], esp
// 00543a65  51                   push ecx
// 00543a66  53                   push ebx
// 00543a67  55                   push ebp
// 00543a68  56                   push esi
// 00543a69  57                   push edi
// 00543a6a  6818b98900           push 0x89b918
// 00543a6f  8bf1                 mov esi, ecx
// 00543a71  684c697a00           push 0x7a694c
// 00543a76  89742418             mov dword ptr [esp + 0x18], esi
// 00543a7a  e8e1380400           call 0x587360
// 00543a7f  8d6e28               lea ebp, [esi + 0x28]
// 00543a82  33ff                 xor edi, edi
// 00543a84  8bcd                 mov ecx, ebp
// 00543a86  897c241c             mov dword ptr [esp + 0x1c], edi
// 00543a8a  c706fc687a00         mov dword ptr [esi], 0x7a68fc
// 00543a90  e81bfb0300           call 0x5835b0
// 00543a95  894504               mov dword ptr [ebp + 4], eax
// 00543a98  bb01000000           mov ebx, 1
// 00543a9d  885815               mov byte ptr [eax + 0x15], bl
// 00543aa0  8b4504               mov eax, dword ptr [ebp + 4]
// 00543aa3  894004               mov dword ptr [eax + 4], eax
// 00543aa6  8b4504               mov eax, dword ptr [ebp + 4]
// 00543aa9  8900                 mov dword ptr [eax], eax
// 00543aab  8b4504               mov eax, dword ptr [ebp + 4]
// 00543aae  894008               mov dword ptr [eax + 8], eax
// 00543ab1  897d08               mov dword ptr [ebp + 8], edi
// 00543ab4  8d6e34               lea ebp, [esi + 0x34]
// 00543ab7  8bcd                 mov ecx, ebp
// 00543ab9  885c241c             mov byte ptr [esp + 0x1c], bl
// 00543abd  e8eefa0300           call 0x5835b0
// 00543ac2  894504               mov dword ptr [ebp + 4], eax
// 00543ac5  885815               mov byte ptr [eax + 0x15], bl
// 00543ac8  8b4504               mov eax, dword ptr [ebp + 4]
// 00543acb  894004               mov dword ptr [eax + 4], eax
// 00543ace  8b4504               mov eax, dword ptr [ebp + 4]
// 00543ad1  8900                 mov dword ptr [eax], eax
// 00543ad3  8b4504               mov eax, dword ptr [ebp + 4]
// 00543ad6  894008               mov dword ptr [eax + 8], eax
// 00543ad9  897d08               mov dword ptr [ebp + 8], edi
// 00543adc  897e44               mov dword ptr [esi + 0x44], edi
// 00543adf  897e48               mov dword ptr [esi + 0x48], edi
// 00543ae2  897e4c               mov dword ptr [esi + 0x4c], edi
// 00543ae5  8d6e50               lea ebp, [esi + 0x50]
// 00543ae8  8bcd                 mov ecx, ebp
// 00543aea  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00543aef  e89c5d0300           call 0x579890
// 00543af4  894504               mov dword ptr [ebp + 4], eax
// 00543af7  88582d               mov byte ptr [eax + 0x2d], bl
// 00543afa  8b4504               mov eax, dword ptr [ebp + 4]
// 00543afd  894004               mov dword ptr [eax + 4], eax
// 00543b00  8b4504               mov eax, dword ptr [ebp + 4]
// 00543b03  8900                 mov dword ptr [eax], eax
// 00543b05  8b4504               mov eax, dword ptr [ebp + 4]
// 00543b08  894008               mov dword ptr [eax + 8], eax
// 00543b0b  897d08               mov dword ptr [ebp + 8], edi
// 00543b0e  8d6e5c               lea ebp, [esi + 0x5c]
// 00543b11  8bcd                 mov ecx, ebp
// 00543b13  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00543b18  e8735d0300           call 0x579890
// 00543b1d  894504               mov dword ptr [ebp + 4], eax
// 00543b20  88582d               mov byte ptr [eax + 0x2d], bl
// 00543b23  8b4504               mov eax, dword ptr [ebp + 4]
// 00543b26  894004               mov dword ptr [eax + 4], eax
// 00543b29  8b4504               mov eax, dword ptr [ebp + 4]
// 00543b2c  8900                 mov dword ptr [eax], eax
// 00543b2e  8b4504               mov eax, dword ptr [ebp + 4]
// 00543b31  894008               mov dword ptr [eax + 8], eax
// 00543b34  897d08               mov dword ptr [ebp + 8], edi
// 00543b37  897e6c               mov dword ptr [esi + 0x6c], edi
// 00543b3a  897e70               mov dword ptr [esi + 0x70], edi
// 00543b3d  897e74               mov dword ptr [esi + 0x74], edi
// 00543b40  897e7c               mov dword ptr [esi + 0x7c], edi
// 00543b43  89be80000000         mov dword ptr [esi + 0x80], edi
// 00543b49  89be84000000         mov dword ptr [esi + 0x84], edi
// 00543b4f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 00543b55  89be90000000         mov dword ptr [esi + 0x90], edi
// 00543b5b  89be94000000         mov dword ptr [esi + 0x94], edi
// 00543b61  683c697a00           push 0x7a693c
// 00543b66  57                   push edi
// 00543b67  8bce                 mov ecx, esi
// 00543b69  c644242408           mov byte ptr [esp + 0x24], 8
// 00543b6e  e8edf40900           call 0x5e3060
// 00543b73  682c697a00           push 0x7a692c
// 00543b78  53                   push ebx
// 00543b79  8bce                 mov ecx, esi
// 00543b7b  e8e0f40900           call 0x5e3060
// 00543b80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00543b84  5f                   pop edi
// 00543b85  8bc6                 mov eax, esi
// 00543b87  5e                   pop esi
// 00543b88  5d                   pop ebp
// 00543b89  5b                   pop ebx
// 00543b8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00543b91  83c410               add esp, 0x10
// 00543b94  c3                   ret 
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ??0?$EnumDesc@W4AssertAction@Debugable@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
