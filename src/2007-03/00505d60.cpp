// roc 2007-03 00505d60  unit: seg_00500000  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505d60
//
// 00505d60  83ec0c               sub esp, 0xc
// 00505d63  53                   push ebx
// 00505d64  bb01000000           mov ebx, 1
// 00505d69  841d18b18b00         test byte ptr [0x8bb118], bl
// 00505d6f  56                   push esi
// 00505d70  8bf1                 mov esi, ecx
// 00505d72  751e                 jne 0x505d92
// 00505d74  d9055cf47900         fld dword ptr [0x79f45c]
// 00505d7a  091d18b18b00         or dword ptr [0x8bb118], ebx
// 00505d80  d9150cb18b00         fst dword ptr [0x8bb10c]
// 00505d86  d91510b18b00         fst dword ptr [0x8bb110]
// 00505d8c  d91d14b18b00         fstp dword ptr [0x8bb114]
// 00505d92  841d08b18b00         test byte ptr [0x8bb108], bl
// 00505d98  751e                 jne 0x505db8
// 00505d9a  d90558f47900         fld dword ptr [0x79f458]
// 00505da0  091d08b18b00         or dword ptr [0x8bb108], ebx
// 00505da6  d915fcb08b00         fst dword ptr [0x8bb0fc]
// 00505dac  d91500b18b00         fst dword ptr [0x8bb100]
// 00505db2  d91d04b18b00         fstp dword ptr [0x8bb104]
// 00505db8  680cb18b00           push 0x8bb10c
// 00505dbd  68fcb08b00           push 0x8bb0fc
// 00505dc2  8d442410             lea eax, [esp + 0x10]
// 00505dc6  50                   push eax
// 00505dc7  8d4c2424             lea ecx, [esp + 0x24]
// 00505dcb  e82025f9ff           call 0x4982f0
// 00505dd0  d900                 fld dword ptr [eax]
// 00505dd2  d95c2418             fstp dword ptr [esp + 0x18]
// 00505dd6  d94004               fld dword ptr [eax + 4]
// 00505dd9  d95c241c             fstp dword ptr [esp + 0x1c]
// 00505ddd  d94008               fld dword ptr [eax + 8]
// 00505de0  d95c2420             fstp dword ptr [esp + 0x20]
// 00505de4  d94608               fld dword ptr [esi + 8]
// 00505de7  d84c241c             fmul dword ptr [esp + 0x1c]
// 00505deb  d94604               fld dword ptr [esi + 4]
// 00505dee  d84c2418             fmul dword ptr [esp + 0x18]
// 00505df2  dec1                 faddp st(1)
// 00505df4  d9460c               fld dword ptr [esi + 0xc]
// 00505df7  d84c2420             fmul dword ptr [esp + 0x20]
// 00505dfb  dec1                 faddp st(1)
// 00505dfd  d95c2418             fstp dword ptr [esp + 0x18]
// 00505e01  d9442418             fld dword ptr [esp + 0x18]
// 00505e05  d94610               fld dword ptr [esi + 0x10]
// 00505e08  ded9                 fcompp 
// 00505e0a  dfe0                 fnstsw ax
// 00505e0c  f6c441               test ah, 0x41
// 00505e0f  7a0a                 jp 0x505e1b
// 00505e11  5e                   pop esi
// 00505e12  8bc3                 mov eax, ebx
// 00505e14  5b                   pop ebx
// 00505e15  83c40c               add esp, 0xc
// 00505e18  c20c00               ret 0xc
// 00505e1b  5e                   pop esi
// 00505e1c  33c0                 xor eax, eax
// 00505e1e  5b                   pop ebx
// 00505e1f  83c40c               add esp, 0xc
// 00505e22  c20c00               ret 0xc
// library rbxgs/util\Extents.cpp (function ?halfSpaceContains@Plane@G3D@@QBE_NVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
