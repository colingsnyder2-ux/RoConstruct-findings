// roc 2008-06 0061de60  unit: RBX::Lua::LuaArguments  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061de60
//
// 0061de60  83ec38               sub esp, 0x38
// 0061de63  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061de68  53                   push ebx
// 0061de69  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0061de6d  55                   push ebp
// 0061de6e  56                   push esi
// 0061de6f  57                   push edi
// 0061de70  50                   push eax
// 0061de71  6a01                 push 1
// 0061de73  53                   push ebx
// 0061de74  e83737ffff           call 0x6115b0
// 0061de79  8bf0                 mov esi, eax
// 0061de7b  53                   push ebx
// 0061de7c  89742420             mov dword ptr [esp + 0x20], esi
// 0061de80  e88b3dffff           call 0x611c10
// 0061de85  8be8                 mov ebp, eax
// 0061de87  83c410               add esp, 0x10
// 0061de8a  83ed01               sub ebp, 1
// 0061de8d  754a                 jne 0x61ded9
// 0061de8f  8d4c2418             lea ecx, [esp + 0x18]
// 0061de93  51                   push ecx
// 0061de94  8bce                 mov ecx, esi
// 0061de96  e895a4e5ff           call 0x478330
// 0061de9b  83ec30               sub esp, 0x30
// 0061de9e  8bf4                 mov esi, esp
// 0061dea0  8d542448             lea edx, [esp + 0x48]
// 0061dea4  89642440             mov dword ptr [esp + 0x40], esp
// 0061dea8  52                   push edx
// 0061dea9  8bce                 mov ecx, esi
// 0061deab  e87053efff           call 0x513220
// 0061deb0  d944246c             fld dword ptr [esp + 0x6c]
// 0061deb4  d95e24               fstp dword ptr [esi + 0x24]
// 0061deb7  53                   push ebx
// 0061deb8  d9442474             fld dword ptr [esp + 0x74]
// 0061debc  d95e28               fstp dword ptr [esi + 0x28]
// 0061debf  d9442478             fld dword ptr [esp + 0x78]
// 0061dec3  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061dec6  e885adf8ff           call 0x5a8c50
// 0061decb  83c434               add esp, 0x34
// 0061dece  8d4501               lea eax, [ebp + 1]
// 0061ded1  5f                   pop edi
// 0061ded2  5e                   pop esi
// 0061ded3  5d                   pop ebp
// 0061ded4  5b                   pop ebx
// 0061ded5  83c438               add esp, 0x38
// 0061ded8  c3                   ret 
// 0061ded9  33ff                 xor edi, edi
// 0061dedb  85ed                 test ebp, ebp
// 0061dedd  7e5e                 jle 0x61df3d
// 0061dedf  eb04                 jmp 0x61dee5
// 0061dee1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061dee5  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 0061deea  50                   push eax
// 0061deeb  8d4f02               lea ecx, [edi + 2]
// 0061deee  51                   push ecx
// 0061deef  53                   push ebx
// 0061def0  e8bb36ffff           call 0x6115b0
// 0061def5  83c40c               add esp, 0xc
// 0061def8  50                   push eax
// 0061def9  8d54241c             lea edx, [esp + 0x1c]
// 0061defd  52                   push edx
// 0061defe  8bce                 mov ecx, esi
// 0061df00  e8eb09ffff           call 0x60e8f0
// 0061df05  83ec30               sub esp, 0x30
// 0061df08  8bf4                 mov esi, esp
// 0061df0a  8d442448             lea eax, [esp + 0x48]
// 0061df0e  89642444             mov dword ptr [esp + 0x44], esp
// 0061df12  50                   push eax
// 0061df13  8bce                 mov ecx, esi
// 0061df15  e80653efff           call 0x513220
// 0061df1a  d944246c             fld dword ptr [esp + 0x6c]
// 0061df1e  d95e24               fstp dword ptr [esi + 0x24]
// 0061df21  53                   push ebx
// 0061df22  d9442474             fld dword ptr [esp + 0x74]
// 0061df26  d95e28               fstp dword ptr [esi + 0x28]
// 0061df29  d9442478             fld dword ptr [esp + 0x78]
// 0061df2d  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061df30  e81badf8ff           call 0x5a8c50
// 0061df35  47                   inc edi
// 0061df36  83c434               add esp, 0x34
// 0061df39  3bfd                 cmp edi, ebp
// 0061df3b  7ca4                 jl 0x61dee1
// 0061df3d  5f                   pop edi
// 0061df3e  5e                   pop esi
// 0061df3f  8bc5                 mov eax, ebp
// 0061df41  5d                   pop ebp
// 0061df42  5b                   pop ebx
// 0061df43  83c438               add esp, 0x38
// 0061df46  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?on_toObjectSpace@CoordinateFrameBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
