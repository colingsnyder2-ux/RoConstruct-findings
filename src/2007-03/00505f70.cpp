// roc 2007-03 00505f70  unit: seg_00500000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505f70
//
// 00505f70  53                   push ebx
// 00505f71  55                   push ebp
// 00505f72  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00505f76  56                   push esi
// 00505f77  57                   push edi
// 00505f78  8b3d7cea7700         mov edi, dword ptr [0x77ea7c]
// 00505f7e  685c077a00           push 0x7a075c
// 00505f83  8bd8                 mov ebx, eax
// 00505f85  ffd7                 call edi
// 00505f87  8b442418             mov eax, dword ptr [esp + 0x18]
// 00505f8b  50                   push eax
// 00505f8c  68c8f47900           push 0x79f4c8
// 00505f91  ffd7                 call edi
// 00505f93  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00505f97  51                   push ecx
// 00505f98  6844927800           push 0x789244
// 00505f9d  ffd7                 call edi
// 00505f9f  83c414               add esp, 0x14
// 00505fa2  83fb0a               cmp ebx, 0xa
// 00505fa5  7e05                 jle 0x505fac
// 00505fa7  bb0a000000           mov ebx, 0xa
// 00505fac  83ceff               or esi, 0xffffffff
// 00505faf  83fb01               cmp ebx, 1
// 00505fb2  0f8e81000000         jle 0x506039
// 00505fb8  6828807900           push 0x798028
// 00505fbd  ffd7                 call edi
// 00505fbf  6840077a00           push 0x7a0740
// 00505fc4  ffd7                 call edi
// 00505fc6  83c408               add esp, 8
// 00505fc9  85f6                 test esi, esi
// 00505fcb  7c08                 jl 0x505fd5
// 00505fcd  3bf3                 cmp esi, ebx
// 00505fcf  0f8c88000000         jl 0x50605d
// 00505fd5  6828807900           push 0x798028
// 00505fda  ffd7                 call edi
// 00505fdc  83c404               add esp, 4
// 00505fdf  33f6                 xor esi, esi
// 00505fe1  85db                 test ebx, ebx
// 00505fe3  7e29                 jle 0x50600e
// 00505fe5  83fb03               cmp ebx, 3
// 00505fe8  7f0d                 jg 0x505ff7
// 00505fea  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 00505fee  52                   push edx
// 00505fef  56                   push esi
// 00505ff0  6834077a00           push 0x7a0734
// 00505ff5  eb0b                 jmp 0x506002
// 00505ff7  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 00505ffb  50                   push eax
// 00505ffc  56                   push esi
// 00505ffd  6828077a00           push 0x7a0728
// 00506002  ffd7                 call edi
// 00506004  83c601               add esi, 1
// 00506007  83c40c               add esp, 0xc
// 0050600a  3bf3                 cmp esi, ebx
// 0050600c  7cd7                 jl 0x505fe5
// 0050600e  6824077a00           push 0x7a0724
// 00506013  ffd7                 call edi
// 00506015  83c404               add esp, 4
// 00506018  ff1508e97700         call dword ptr [0x77e908]
// 0050601e  8bf0                 mov esi, eax
// 00506020  83ee30               sub esi, 0x30
// 00506023  780c                 js 0x506031
// 00506025  3bf3                 cmp esi, ebx
// 00506027  7d08                 jge 0x506031
// 00506029  56                   push esi
// 0050602a  6808c47800           push 0x78c408
// 0050602f  eb93                 jmp 0x505fc4
// 00506031  56                   push esi
// 00506032  6808077a00           push 0x7a0708
// 00506037  eb8b                 jmp 0x505fc4
// 00506039  7510                 jne 0x50604b
// 0050603b  8b4d00               mov ecx, dword ptr [ebp]
// 0050603e  51                   push ecx
// 0050603f  68ec067a00           push 0x7a06ec
// 00506044  ffd7                 call edi
// 00506046  83c408               add esp, 8
// 00506049  eb0a                 jmp 0x506055
// 0050604b  68d8067a00           push 0x7a06d8
// 00506050  ffd7                 call edi
// 00506052  83c404               add esp, 4
// 00506055  ff1508e97700         call dword ptr [0x77e908]
// 0050605b  33f6                 xor esi, esi
// 0050605d  685c077a00           push 0x7a075c
// 00506062  ffd7                 call edi
// 00506064  83c404               add esp, 4
// 00506067  5f                   pop edi
// 00506068  8bc6                 mov eax, esi
// 0050606a  5e                   pop esi
// 0050606b  5d                   pop ebp
// 0050606c  5b                   pop ebx
// 0050606d  c3                   ret 
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
