// roc 2007-03 00479ee0  unit: seg_00470000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00479ee0
//
// 00479ee0  83ec08               sub esp, 8
// 00479ee3  53                   push ebx
// 00479ee4  55                   push ebp
// 00479ee5  56                   push esi
// 00479ee6  8b35bced7700         mov esi, dword ptr [0x77edbc]
// 00479eec  57                   push edi
// 00479eed  33ed                 xor ebp, ebp
// 00479eef  55                   push ebp
// 00479ef0  894c2418             mov dword ptr [esp + 0x18], ecx
// 00479ef4  ffd6                 call esi
// 00479ef6  6a01                 push 1
// 00479ef8  8bf8                 mov edi, eax
// 00479efa  ffd6                 call esi
// 00479efc  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00479f00  d906                 fld dword ptr [esi]
// 00479f02  8bd8                 mov ebx, eax
// 00479f04  e8f7521a00           call 0x61f200
// 00479f09  3bc5                 cmp eax, ebp
// 00479f0b  7f06                 jg 0x479f13
// 00479f0d  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00479f11  eb0c                 jmp 0x479f1f
// 00479f13  3bc7                 cmp eax, edi
// 00479f15  897c241c             mov dword ptr [esp + 0x1c], edi
// 00479f19  7d04                 jge 0x479f1f
// 00479f1b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00479f1f  d94604               fld dword ptr [esi + 4]
// 00479f22  e8d9521a00           call 0x61f200
// 00479f27  3bc5                 cmp eax, ebp
// 00479f29  7e08                 jle 0x479f33
// 00479f2b  3bc3                 cmp eax, ebx
// 00479f2d  8beb                 mov ebp, ebx
// 00479f2f  7d02                 jge 0x479f33
// 00479f31  8be8                 mov ebp, eax
// 00479f33  d94608               fld dword ptr [esi + 8]
// 00479f36  d826                 fsub dword ptr [esi]
// 00479f38  d95c2410             fstp dword ptr [esp + 0x10]
// 00479f3c  d9442410             fld dword ptr [esp + 0x10]
// 00479f40  e8bb521a00           call 0x61f200
// 00479f45  83f801               cmp eax, 1
// 00479f48  7f07                 jg 0x479f51
// 00479f4a  bf01000000           mov edi, 1
// 00479f4f  eb06                 jmp 0x479f57
// 00479f51  3bc7                 cmp eax, edi
// 00479f53  7d02                 jge 0x479f57
// 00479f55  8bf8                 mov edi, eax
// 00479f57  d9460c               fld dword ptr [esi + 0xc]
// 00479f5a  d86604               fsub dword ptr [esi + 4]
// 00479f5d  d95c2410             fstp dword ptr [esp + 0x10]
// 00479f61  d9442410             fld dword ptr [esp + 0x10]
// 00479f65  e896521a00           call 0x61f200
// 00479f6a  83f801               cmp eax, 1
// 00479f6d  7f07                 jg 0x479f76
// 00479f6f  b801000000           mov eax, 1
// 00479f74  eb06                 jmp 0x479f7c
// 00479f76  3bc3                 cmp eax, ebx
// 00479f78  7c02                 jl 0x479f7c
// 00479f7a  8bc3                 mov eax, ebx
// 00479f7c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00479f80  8b91e8010000         mov edx, dword ptr [ecx + 0x1e8]
// 00479f86  6a01                 push 1
// 00479f88  50                   push eax
// 00479f89  8b442424             mov eax, dword ptr [esp + 0x24]
// 00479f8d  57                   push edi
// 00479f8e  55                   push ebp
// 00479f8f  50                   push eax
// 00479f90  52                   push edx
// 00479f91  ff15dced7700         call dword ptr [0x77eddc]
// 00479f97  5f                   pop edi
// 00479f98  5e                   pop esi
// 00479f99  5d                   pop ebp
// 00479f9a  5b                   pop ebx
// 00479f9b  83c408               add esp, 8
// 00479f9e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?setDimensions@Win32Window@G3D@@UAEXABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
