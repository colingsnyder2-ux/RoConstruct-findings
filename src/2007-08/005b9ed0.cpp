// roc 2007-08 005b9ed0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9ed0
//
// 005b9ed0  d9ee                 fldz 
// 005b9ed2  83ec24               sub esp, 0x24
// 005b9ed5  53                   push ebx
// 005b9ed6  bb01000000           mov ebx, 1
// 005b9edb  841de80b8c00         test byte ptr [0x8c0be8], bl
// 005b9ee1  56                   push esi
// 005b9ee2  751c                 jne 0x5b9f00
// 005b9ee4  d9e8                 fld1 
// 005b9ee6  091de80b8c00         or dword ptr [0x8c0be8], ebx
// 005b9eec  d91ddc0b8c00         fstp dword ptr [0x8c0bdc]
// 005b9ef2  d915e00b8c00         fst dword ptr [0x8c0be0]
// 005b9ef8  d91de40b8c00         fstp dword ptr [0x8c0be4]
// 005b9efe  eb02                 jmp 0x5b9f02
// 005b9f00  ddd8                 fstp st(0)
// 005b9f02  8b542434             mov edx, dword ptr [esp + 0x34]
// 005b9f06  52                   push edx
// 005b9f07  8d442424             lea eax, [esp + 0x24]
// 005b9f0b  68dc0b8c00           push 0x8c0bdc
// 005b9f10  50                   push eax
// 005b9f11  e80afcffff           call 0x5b9b20
// 005b9f16  83c40c               add esp, 0xc
// 005b9f19  841df4fb8b00         test byte ptr [0x8bfbf4], bl
// 005b9f1f  751c                 jne 0x5b9f3d
// 005b9f21  d9ee                 fldz 
// 005b9f23  091df4fb8b00         or dword ptr [0x8bfbf4], ebx
// 005b9f29  d915e8fb8b00         fst dword ptr [0x8bfbe8]
// 005b9f2f  d9e8                 fld1 
// 005b9f31  d91decfb8b00         fstp dword ptr [0x8bfbec]
// 005b9f37  d91df0fb8b00         fstp dword ptr [0x8bfbf0]
// 005b9f3d  52                   push edx
// 005b9f3e  8d4c2418             lea ecx, [esp + 0x18]
// 005b9f42  68e8fb8b00           push 0x8bfbe8
// 005b9f47  51                   push ecx
// 005b9f48  e8d3fbffff           call 0x5b9b20
// 005b9f4d  83c40c               add esp, 0xc
// 005b9f50  841d8cd08b00         test byte ptr [0x8bd08c], bl
// 005b9f56  751c                 jne 0x5b9f74
// 005b9f58  d9ee                 fldz 
// 005b9f5a  091d8cd08b00         or dword ptr [0x8bd08c], ebx
// 005b9f60  d91580d08b00         fst dword ptr [0x8bd080]
// 005b9f66  d91d84d08b00         fstp dword ptr [0x8bd084]
// 005b9f6c  d9e8                 fld1 
// 005b9f6e  d91d88d08b00         fstp dword ptr [0x8bd088]
// 005b9f74  52                   push edx
// 005b9f75  6880d08b00           push 0x8bd080
// 005b9f7a  8d542410             lea edx, [esp + 0x10]
// 005b9f7e  52                   push edx
// 005b9f7f  e89cfbffff           call 0x5b9b20
// 005b9f84  d944241c             fld dword ptr [esp + 0x1c]
// 005b9f88  d95c2408             fstp dword ptr [esp + 8]
// 005b9f8c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005b9f90  d9442428             fld dword ptr [esp + 0x28]
// 005b9f94  83ec18               sub esp, 0x18
// 005b9f97  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b9f9b  8bce                 mov ecx, esi
// 005b9f9d  d944244c             fld dword ptr [esp + 0x4c]
// 005b9fa1  d95c2418             fstp dword ptr [esp + 0x18]
// 005b9fa5  d9442430             fld dword ptr [esp + 0x30]
// 005b9fa9  d95c2414             fstp dword ptr [esp + 0x14]
// 005b9fad  d944243c             fld dword ptr [esp + 0x3c]
// 005b9fb1  d95c2410             fstp dword ptr [esp + 0x10]
// 005b9fb5  d9442448             fld dword ptr [esp + 0x48]
// 005b9fb9  d95c240c             fstp dword ptr [esp + 0xc]
// 005b9fbd  d944242c             fld dword ptr [esp + 0x2c]
// 005b9fc1  d95c2408             fstp dword ptr [esp + 8]
// 005b9fc5  d9442438             fld dword ptr [esp + 0x38]
// 005b9fc9  d95c2404             fstp dword ptr [esp + 4]
// 005b9fcd  d9442444             fld dword ptr [esp + 0x44]
// 005b9fd1  d91c24               fstp dword ptr [esp]
// 005b9fd4  e85701f5ff           call 0x50a130
// 005b9fd9  8bc6                 mov eax, esi
// 005b9fdb  5e                   pop esi
// 005b9fdc  5b                   pop ebx
// 005b9fdd  83c424               add esp, 0x24
// 005b9fe0  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToMatrix3Internal@RBX@@YA?AVMatrix3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
