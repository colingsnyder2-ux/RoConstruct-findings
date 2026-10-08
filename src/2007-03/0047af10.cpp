// roc 2007-03 0047af10  unit: seg_00470000  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047af10
//
// 0047af10  8b442404             mov eax, dword ptr [esp + 4]
// 0047af14  53                   push ebx
// 0047af15  55                   push ebp
// 0047af16  56                   push esi
// 0047af17  8bf1                 mov esi, ecx
// 0047af19  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047af1c  b901000000           mov ecx, 1
// 0047af21  894604               mov dword ptr [esi + 4], eax
// 0047af24  840d487f8b00         test byte ptr [0x8b7f48], cl
// 0047af2a  57                   push edi
// 0047af2b  7513                 jne 0x47af40
// 0047af2d  090d487f8b00         or dword ptr [0x8b7f48], ecx
// 0047af33  bb20000000           mov ebx, 0x20
// 0047af38  891d447f8b00         mov dword ptr [0x8b7f44], ebx
// 0047af3e  eb06                 jmp 0x47af46
// 0047af40  8b1d447f8b00         mov ebx, dword ptr [0x8b7f44]
// 0047af46  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047af49  8b7e04               mov edi, dword ptr [esi + 4]
// 0047af4c  3bf9                 cmp edi, ecx
// 0047af4e  0f8e8e000000         jle 0x47afe2
// 0047af54  85c9                 test ecx, ecx
// 0047af56  7512                 jne 0x47af6a
// 0047af58  55                   push ebp
// 0047af59  8bce                 mov ecx, esi
// 0047af5b  894608               mov dword ptr [esi + 8], eax
// 0047af5e  e89d54ffff           call 0x470400
// 0047af63  5f                   pop edi
// 0047af64  5e                   pop esi
// 0047af65  5d                   pop ebp
// 0047af66  5b                   pop ebx
// 0047af67  c20800               ret 8
// 0047af6a  3bfb                 cmp edi, ebx
// 0047af6c  7d12                 jge 0x47af80
// 0047af6e  55                   push ebp
// 0047af6f  8bce                 mov ecx, esi
// 0047af71  895e08               mov dword ptr [esi + 8], ebx
// 0047af74  e88754ffff           call 0x470400
// 0047af79  5f                   pop edi
// 0047af7a  5e                   pop esi
// 0047af7b  5d                   pop ebp
// 0047af7c  5b                   pop ebx
// 0047af7d  c20800               ret 8
// 0047af80  d905104c7900         fld dword ptr [0x794c10]
// 0047af86  8bc1                 mov eax, ecx
// 0047af88  3d801a0600           cmp eax, 0x61a80
// 0047af8d  d95c2418             fstp dword ptr [esp + 0x18]
// 0047af91  7608                 jbe 0x47af9b
// 0047af93  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047af99  eb0d                 jmp 0x47afa8
// 0047af9b  3d00fa0000           cmp eax, 0xfa00
// 0047afa0  760a                 jbe 0x47afac
// 0047afa2  d905084c7900         fld dword ptr [0x794c08]
// 0047afa8  d95c2418             fstp dword ptr [esp + 0x18]
// 0047afac  8bd8                 mov ebx, eax
// 0047afae  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047afb2  db442414             fild dword ptr [esp + 0x14]
// 0047afb6  d84c2418             fmul dword ptr [esp + 0x18]
// 0047afba  e841421a00           call 0x61f200
// 0047afbf  2bc3                 sub eax, ebx
// 0047afc1  03c7                 add eax, edi
// 0047afc3  894608               mov dword ptr [esi + 8], eax
// 0047afc6  8b0d447f8b00         mov ecx, dword ptr [0x8b7f44]
// 0047afcc  3bc1                 cmp eax, ecx
// 0047afce  7d03                 jge 0x47afd3
// 0047afd0  894e08               mov dword ptr [esi + 8], ecx
// 0047afd3  55                   push ebp
// 0047afd4  8bce                 mov ecx, esi
// 0047afd6  e82554ffff           call 0x470400
// 0047afdb  5f                   pop edi
// 0047afdc  5e                   pop esi
// 0047afdd  5d                   pop ebp
// 0047afde  5b                   pop ebx
// 0047afdf  c20800               ret 8
// 0047afe2  b856555555           mov eax, 0x55555556
// 0047afe7  f7e9                 imul ecx
// 0047afe9  8bc2                 mov eax, edx
// 0047afeb  c1e81f               shr eax, 0x1f
// 0047afee  03c2                 add eax, edx
// 0047aff0  3bf8                 cmp edi, eax
// 0047aff2  7f19                 jg 0x47b00d
// 0047aff4  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047aff9  7412                 je 0x47b00d
// 0047affb  3bfb                 cmp edi, ebx
// 0047affd  7e0e                 jle 0x47b00d
// 0047afff  3bfd                 cmp edi, ebp
// 0047b001  7c02                 jl 0x47b005
// 0047b003  8bfd                 mov edi, ebp
// 0047b005  57                   push edi
// 0047b006  8bce                 mov ecx, esi
// 0047b008  e8f353ffff           call 0x470400
// 0047b00d  5f                   pop edi
// 0047b00e  5e                   pop esi
// 0047b00f  5d                   pop ebp
// 0047b010  5b                   pop ebx
// 0047b011  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
