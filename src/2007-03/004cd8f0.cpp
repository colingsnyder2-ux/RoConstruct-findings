// roc 2007-03 004cd8f0  unit: seg_004c0000  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd8f0
//
// 004cd8f0  51                   push ecx
// 004cd8f1  53                   push ebx
// 004cd8f2  55                   push ebp
// 004cd8f3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004cd8f7  56                   push esi
// 004cd8f8  57                   push edi
// 004cd8f9  8bf9                 mov edi, ecx
// 004cd8fb  8b4f04               mov ecx, dword ptr [edi + 4]
// 004cd8fe  3be9                 cmp ebp, ecx
// 004cd900  894c2410             mov dword ptr [esp + 0x10], ecx
// 004cd904  896f04               mov dword ptr [edi + 4], ebp
// 004cd907  7d63                 jge 0x4cd96c
// 004cd909  8da42400000000       lea esp, [esp]
// 004cd910  8b07                 mov eax, dword ptr [edi]
// 004cd912  8d1ca8               lea ebx, [eax + ebp*4]
// 004cd915  8b03                 mov eax, dword ptr [ebx]
// 004cd917  85c0                 test eax, eax
// 004cd919  744a                 je 0x4cd965
// 004cd91b  83c004               add eax, 4
// 004cd91e  50                   push eax
// 004cd91f  ff15a8d27700         call dword ptr [0x77d2a8]
// 004cd925  85c0                 test eax, eax
// 004cd927  7532                 jne 0x4cd95b
// 004cd929  8b0b                 mov ecx, dword ptr [ebx]
// 004cd92b  8b7108               mov esi, dword ptr [ecx + 8]
// 004cd92e  85f6                 test esi, esi
// 004cd930  741b                 je 0x4cd94d
// 004cd932  8b0e                 mov ecx, dword ptr [esi]
// 004cd934  8b11                 mov edx, dword ptr [ecx]
// 004cd936  8b4204               mov eax, dword ptr [edx + 4]
// 004cd939  ffd0                 call eax
// 004cd93b  8bc6                 mov eax, esi
// 004cd93d  8b7604               mov esi, dword ptr [esi + 4]
// 004cd940  50                   push eax
// 004cd941  e8aa071500           call 0x61e0f0
// 004cd946  83c404               add esp, 4
// 004cd949  85f6                 test esi, esi
// 004cd94b  75e5                 jne 0x4cd932
// 004cd94d  8b0b                 mov ecx, dword ptr [ebx]
// 004cd94f  85c9                 test ecx, ecx
// 004cd951  7408                 je 0x4cd95b
// 004cd953  8b11                 mov edx, dword ptr [ecx]
// 004cd955  8b02                 mov eax, dword ptr [edx]
// 004cd957  6a01                 push 1
// 004cd959  ffd0                 call eax
// 004cd95b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cd95f  c70300000000         mov dword ptr [ebx], 0
// 004cd965  83c501               add ebp, 1
// 004cd968  3be9                 cmp ebp, ecx
// 004cd96a  7ca4                 jl 0x4cd910
// 004cd96c  f605449f8b0001       test byte ptr [0x8b9f44], 1
// 004cd973  7514                 jne 0x4cd989
// 004cd975  830d449f8b0001       or dword ptr [0x8b9f44], 1
// 004cd97c  bb0a000000           mov ebx, 0xa
// 004cd981  891d409f8b00         mov dword ptr [0x8b9f40], ebx
// 004cd987  eb06                 jmp 0x4cd98f
// 004cd989  8b1d409f8b00         mov ebx, dword ptr [0x8b9f40]
// 004cd98f  8b7704               mov esi, dword ptr [edi + 4]
// 004cd992  8b4f08               mov ecx, dword ptr [edi + 8]
// 004cd995  3bf1                 cmp esi, ecx
// 004cd997  0f8e84000000         jle 0x4cda21
// 004cd99d  85c9                 test ecx, ecx
// 004cd99f  7511                 jne 0x4cd9b2
// 004cd9a1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cd9a5  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cd9a9  894f08               mov dword ptr [edi + 8], ecx
// 004cd9ac  52                   push edx
// 004cd9ad  e997000000           jmp 0x4cda49
// 004cd9b2  3bf3                 cmp esi, ebx
// 004cd9b4  7d0d                 jge 0x4cd9c3
// 004cd9b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cd9ba  895f08               mov dword ptr [edi + 8], ebx
// 004cd9bd  50                   push eax
// 004cd9be  e986000000           jmp 0x4cda49
// 004cd9c3  d905104c7900         fld dword ptr [0x794c10]
// 004cd9c9  8bc1                 mov eax, ecx
// 004cd9cb  03c0                 add eax, eax
// 004cd9cd  d95c241c             fstp dword ptr [esp + 0x1c]
// 004cd9d1  03c0                 add eax, eax
// 004cd9d3  3d801a0600           cmp eax, 0x61a80
// 004cd9d8  7608                 jbe 0x4cd9e2
// 004cd9da  d9050c4c7900         fld dword ptr [0x794c0c]
// 004cd9e0  eb0d                 jmp 0x4cd9ef
// 004cd9e2  3d00fa0000           cmp eax, 0xfa00
// 004cd9e7  760a                 jbe 0x4cd9f3
// 004cd9e9  d905084c7900         fld dword ptr [0x794c08]
// 004cd9ef  d95c241c             fstp dword ptr [esp + 0x1c]
// 004cd9f3  8bd9                 mov ebx, ecx
// 004cd9f5  895c2418             mov dword ptr [esp + 0x18], ebx
// 004cd9f9  db442418             fild dword ptr [esp + 0x18]
// 004cd9fd  d84c241c             fmul dword ptr [esp + 0x1c]
// 004cda01  e8fa171500           call 0x61f200
// 004cda06  2bc3                 sub eax, ebx
// 004cda08  03c6                 add eax, esi
// 004cda0a  894708               mov dword ptr [edi + 8], eax
// 004cda0d  8b0d409f8b00         mov ecx, dword ptr [0x8b9f40]
// 004cda13  3bc1                 cmp eax, ecx
// 004cda15  7d03                 jge 0x4cda1a
// 004cda17  894f08               mov dword ptr [edi + 8], ecx
// 004cda1a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cda1e  50                   push eax
// 004cda1f  eb28                 jmp 0x4cda49
// 004cda21  b856555555           mov eax, 0x55555556
// 004cda26  f7e9                 imul ecx
// 004cda28  8bca                 mov ecx, edx
// 004cda2a  c1e91f               shr ecx, 0x1f
// 004cda2d  03ca                 add ecx, edx
// 004cda2f  3bf1                 cmp esi, ecx
// 004cda31  7f1d                 jg 0x4cda50
// 004cda33  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004cda38  7416                 je 0x4cda50
// 004cda3a  3bf3                 cmp esi, ebx
// 004cda3c  7e12                 jle 0x4cda50
// 004cda3e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cda42  3bf0                 cmp esi, eax
// 004cda44  7c02                 jl 0x4cda48
// 004cda46  8bf0                 mov esi, eax
// 004cda48  56                   push esi
// 004cda49  8bcf                 mov ecx, edi
// 004cda4b  e860faffff           call 0x4cd4b0
// 004cda50  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cda54  3b4704               cmp eax, dword ptr [edi + 4]
// 004cda57  7d1e                 jge 0x4cda77
// 004cda59  8da42400000000       lea esp, [esp]
// 004cda60  8b17                 mov edx, dword ptr [edi]
// 004cda62  8d0c82               lea ecx, [edx + eax*4]
// 004cda65  85c9                 test ecx, ecx
// 004cda67  7406                 je 0x4cda6f
// 004cda69  c70100000000         mov dword ptr [ecx], 0
// 004cda6f  83c001               add eax, 1
// 004cda72  3b4704               cmp eax, dword ptr [edi + 4]
// 004cda75  7ce9                 jl 0x4cda60
// 004cda77  5f                   pop edi
// 004cda78  5e                   pop esi
// 004cda79  5d                   pop ebp
// 004cda7a  5b                   pop ebx
// 004cda7b  59                   pop ecx
// 004cda7c  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
