// roc 2008-06 0061d990  unit: RBX::Lua::LuaArguments  size: 605 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061d990
//
// 0061d990  64a100000000         mov eax, dword ptr fs:[0]
// 0061d996  6aff                 push -1
// 0061d998  6809e77c00           push 0x7ce709
// 0061d99d  50                   push eax
// 0061d99e  64892500000000       mov dword ptr fs:[0], esp
// 0061d9a5  81ecac000000         sub esp, 0xac
// 0061d9ab  53                   push ebx
// 0061d9ac  55                   push ebp
// 0061d9ad  56                   push esi
// 0061d9ae  57                   push edi
// 0061d9af  8d4c2420             lea ecx, [esp + 0x20]
// 0061d9b3  e818a9e5ff           call 0x4782d0
// 0061d9b8  8b9c24cc000000       mov ebx, dword ptr [esp + 0xcc]
// 0061d9bf  53                   push ebx
// 0061d9c0  e84b42ffff           call 0x611c10
// 0061d9c5  83c404               add esp, 4
// 0061d9c8  83f80c               cmp eax, 0xc
// 0061d9cb  0f87b9010000         ja 0x61db8a
// 0061d9d1  0fb688e0db6100       movzx ecx, byte ptr [eax + 0x61dbe0]
// 0061d9d8  ff248dc4db6100       jmp dword ptr [ecx*4 + 0x61dbc4]
// 0061d9df  8b15c0b19500         mov edx, dword ptr [0x95b1c0]
// 0061d9e5  52                   push edx
// 0061d9e6  6a01                 push 1
// 0061d9e8  53                   push ebx
// 0061d9e9  e8c23bffff           call 0x6115b0
// 0061d9ee  d900                 fld dword ptr [eax]
// 0061d9f0  d95c2450             fstp dword ptr [esp + 0x50]
// 0061d9f4  83c40c               add esp, 0xc
// 0061d9f7  d94004               fld dword ptr [eax + 4]
// 0061d9fa  d95c2448             fstp dword ptr [esp + 0x48]
// 0061d9fe  d94008               fld dword ptr [eax + 8]
// 0061da01  d95c244c             fstp dword ptr [esp + 0x4c]
// 0061da05  e929010000           jmp 0x61db33
// 0061da0a  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 0061da0f  50                   push eax
// 0061da10  6a01                 push 1
// 0061da12  53                   push ebx
// 0061da13  e8983bffff           call 0x6115b0
// 0061da18  d900                 fld dword ptr [eax]
// 0061da1a  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 0061da20  d95c2450             fstp dword ptr [esp + 0x50]
// 0061da24  d94004               fld dword ptr [eax + 4]
// 0061da27  51                   push ecx
// 0061da28  d95c2458             fstp dword ptr [esp + 0x58]
// 0061da2c  6a02                 push 2
// 0061da2e  d94008               fld dword ptr [eax + 8]
// 0061da31  53                   push ebx
// 0061da32  d95c2464             fstp dword ptr [esp + 0x64]
// 0061da36  e8753bffff           call 0x6115b0
// 0061da3b  83c418               add esp, 0x18
// 0061da3e  50                   push eax
// 0061da3f  8d4c2424             lea ecx, [esp + 0x24]
// 0061da43  e8d8b3efff           call 0x518e20
// 0061da48  e9e6000000           jmp 0x61db33
// 0061da4d  33f6                 xor esi, esi
// 0061da4f  90                   nop 
// 0061da50  8d7e01               lea edi, [esi + 1]
// 0061da53  57                   push edi
// 0061da54  53                   push ebx
// 0061da55  e8d6edffff           call 0x61c830
// 0061da5a  d95cb44c             fstp dword ptr [esp + esi*4 + 0x4c]
// 0061da5e  8bf7                 mov esi, edi
// 0061da60  83c408               add esp, 8
// 0061da63  83fe03               cmp esi, 3
// 0061da66  7ce8                 jl 0x61da50
// 0061da68  e9c6000000           jmp 0x61db33
// 0061da6d  33f6                 xor esi, esi
// 0061da6f  90                   nop 
// 0061da70  8d7e01               lea edi, [esi + 1]
// 0061da73  57                   push edi
// 0061da74  53                   push ebx
// 0061da75  e8b6edffff           call 0x61c830
// 0061da7a  d95cb44c             fstp dword ptr [esp + esi*4 + 0x4c]
// 0061da7e  8bf7                 mov esi, edi
// 0061da80  83c408               add esp, 8
// 0061da83  83fe03               cmp esi, 3
// 0061da86  7ce8                 jl 0x61da70
// 0061da88  d9ee                 fldz 
// 0061da8a  6a04                 push 4
// 0061da8c  d9542414             fst dword ptr [esp + 0x14]
// 0061da90  53                   push ebx
// 0061da91  d954241c             fst dword ptr [esp + 0x1c]
// 0061da95  d95c2420             fstp dword ptr [esp + 0x20]
// 0061da99  d9e8                 fld1 
// 0061da9b  d95c2424             fstp dword ptr [esp + 0x24]
// 0061da9f  e88cedffff           call 0x61c830
// 0061daa4  d95c2418             fstp dword ptr [esp + 0x18]
// 0061daa8  6a05                 push 5
// 0061daaa  53                   push ebx
// 0061daab  e880edffff           call 0x61c830
// 0061dab0  d95c2424             fstp dword ptr [esp + 0x24]
// 0061dab4  6a06                 push 6
// 0061dab6  53                   push ebx
// 0061dab7  e874edffff           call 0x61c830
// 0061dabc  d95c2430             fstp dword ptr [esp + 0x30]
// 0061dac0  6a07                 push 7
// 0061dac2  53                   push ebx
// 0061dac3  e868edffff           call 0x61c830
// 0061dac8  d95c243c             fstp dword ptr [esp + 0x3c]
// 0061dacc  83c420               add esp, 0x20
// 0061dacf  8d542410             lea edx, [esp + 0x10]
// 0061dad3  52                   push edx
// 0061dad4  8d4c2458             lea ecx, [esp + 0x58]
// 0061dad8  e8c35fefff           call 0x513aa0
// 0061dadd  b909000000           mov ecx, 9
// 0061dae2  8d742454             lea esi, [esp + 0x54]
// 0061dae6  8d7c2420             lea edi, [esp + 0x20]
// 0061daea  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0061daec  eb45                 jmp 0x61db33
// 0061daee  33f6                 xor esi, esi
// 0061daf0  8d7e01               lea edi, [esi + 1]
// 0061daf3  57                   push edi
// 0061daf4  53                   push ebx
// 0061daf5  e836edffff           call 0x61c830
// 0061dafa  d95cb44c             fstp dword ptr [esp + esi*4 + 0x4c]
// 0061dafe  8bf7                 mov esi, edi
// 0061db00  83c408               add esp, 8
// 0061db03  83fe03               cmp esi, 3
// 0061db06  7ce8                 jl 0x61daf0
// 0061db08  bd04000000           mov ebp, 4
// 0061db0d  8d7c2420             lea edi, [esp + 0x20]
// 0061db11  33f6                 xor esi, esi
// 0061db13  8d042e               lea eax, [esi + ebp]
// 0061db16  50                   push eax
// 0061db17  53                   push ebx
// 0061db18  e813edffff           call 0x61c830
// 0061db1d  d91f                 fstp dword ptr [edi]
// 0061db1f  46                   inc esi
// 0061db20  83c408               add esp, 8
// 0061db23  83c704               add edi, 4
// 0061db26  83fe03               cmp esi, 3
// 0061db29  7ce8                 jl 0x61db13
// 0061db2b  83c503               add ebp, 3
// 0061db2e  83fd0d               cmp ebp, 0xd
// 0061db31  7cde                 jl 0x61db11
// 0061db33  83ec30               sub esp, 0x30
// 0061db36  8bf4                 mov esi, esp
// 0061db38  8d4c2450             lea ecx, [esp + 0x50]
// 0061db3c  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0061db43  51                   push ecx
// 0061db44  8bce                 mov ecx, esi
// 0061db46  e8d556efff           call 0x513220
// 0061db4b  d9442474             fld dword ptr [esp + 0x74]
// 0061db4f  d95e24               fstp dword ptr [esi + 0x24]
// 0061db52  53                   push ebx
// 0061db53  d944247c             fld dword ptr [esp + 0x7c]
// 0061db57  d95e28               fstp dword ptr [esi + 0x28]
// 0061db5a  d9842480000000       fld dword ptr [esp + 0x80]
// 0061db61  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061db64  e8e7b0f8ff           call 0x5a8c50
// 0061db69  8b8c24f0000000       mov ecx, dword ptr [esp + 0xf0]
// 0061db70  83c434               add esp, 0x34
// 0061db73  5f                   pop edi
// 0061db74  5e                   pop esi
// 0061db75  5d                   pop ebp
// 0061db76  b801000000           mov eax, 1
// 0061db7b  64890d00000000       mov dword ptr fs:[0], ecx
// 0061db82  5b                   pop ebx
// 0061db83  81c4b8000000         add esp, 0xb8
// 0061db89  c3                   ret 
// 0061db8a  50                   push eax
// 0061db8b  8d9424a4000000       lea edx, [esp + 0xa4]
// 0061db92  68c4448400           push 0x8444c4
// 0061db97  52                   push edx
// 0061db98  e873bfeeff           call 0x509b10
// 0061db9d  83c40c               add esp, 0xc
// 0061dba0  50                   push eax
// 0061dba1  8d4c247c             lea ecx, [esp + 0x7c]
// 0061dba5  c78424c800000000000000 mov dword ptr [esp + 0xc8], 0
// 0061dbb0  e89bc1deff           call 0x409d50
// 0061dbb5  68c81b8d00           push 0x8d1bc8
// 0061dbba  8d44247c             lea eax, [esp + 0x7c]
// 0061dbbe  50                   push eax
// 0061dbbf  e8c8390800           call 0x6a158c
// 0061dbc4  33db                 xor ebx, ebx
// 0061dbc6  61                   popal 
// 0061dbc7  00df                 add bh, bl
// 0061dbc9  d96100               fldenv [ecx]
// 0061dbcc  0ada                 or bl, dl
// 0061dbce  61                   popal 
// 0061dbcf  004dda               add byte ptr [ebp - 0x26], cl
// 0061dbd2  61                   popal 
// 0061dbd3  006dda               add byte ptr [ebp - 0x26], ch
// 0061dbd6  61                   popal 
// 0061dbd7  00ee                 add dh, ch
// 0061dbd9  da6100               fisub dword ptr [ecx]
// 0061dbdc  8adb                 mov bl, bl
// 0061dbde  61                   popal 
// 0061dbdf  0000                 add byte ptr [eax], al
// 0061dbe1  0102                 add dword ptr [edx], eax
// 0061dbe3  0306                 add eax, dword ptr [esi]
// 0061dbe5  06                   push es
// 0061dbe6  06                   push es
// 0061dbe7  0406                 add al, 6
// 0061dbe9  06                   push es
// 0061dbea  06                   push es
// 0061dbeb  06                   push es
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?newCoordinateFrame@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
