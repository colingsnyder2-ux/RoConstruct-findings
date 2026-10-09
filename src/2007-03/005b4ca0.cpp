// roc 2007-03 005b4ca0  unit: seg_005b0000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b4ca0
//
// 005b4ca0  d9ee                 fldz 
// 005b4ca2  83ec24               sub esp, 0x24
// 005b4ca5  53                   push ebx
// 005b4ca6  bb01000000           mov ebx, 1
// 005b4cab  841db8b08b00         test byte ptr [0x8bb0b8], bl
// 005b4cb1  56                   push esi
// 005b4cb2  751c                 jne 0x5b4cd0
// 005b4cb4  d9e8                 fld1 
// 005b4cb6  091db8b08b00         or dword ptr [0x8bb0b8], ebx
// 005b4cbc  d91dacb08b00         fstp dword ptr [0x8bb0ac]
// 005b4cc2  d915b0b08b00         fst dword ptr [0x8bb0b0]
// 005b4cc8  d91db4b08b00         fstp dword ptr [0x8bb0b4]
// 005b4cce  eb02                 jmp 0x5b4cd2
// 005b4cd0  ddd8                 fstp st(0)
// 005b4cd2  8b542434             mov edx, dword ptr [esp + 0x34]
// 005b4cd6  52                   push edx
// 005b4cd7  8d442424             lea eax, [esp + 0x24]
// 005b4cdb  68acb08b00           push 0x8bb0ac
// 005b4ce0  50                   push eax
// 005b4ce1  e8fafcffff           call 0x5b49e0
// 005b4ce6  83c40c               add esp, 0xc
// 005b4ce9  841dc4a08b00         test byte ptr [0x8ba0c4], bl
// 005b4cef  751c                 jne 0x5b4d0d
// 005b4cf1  d9ee                 fldz 
// 005b4cf3  091dc4a08b00         or dword ptr [0x8ba0c4], ebx
// 005b4cf9  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 005b4cff  d9e8                 fld1 
// 005b4d01  d91dbca08b00         fstp dword ptr [0x8ba0bc]
// 005b4d07  d91dc0a08b00         fstp dword ptr [0x8ba0c0]
// 005b4d0d  52                   push edx
// 005b4d0e  8d4c2418             lea ecx, [esp + 0x18]
// 005b4d12  68b8a08b00           push 0x8ba0b8
// 005b4d17  51                   push ecx
// 005b4d18  e8c3fcffff           call 0x5b49e0
// 005b4d1d  83c40c               add esp, 0xc
// 005b4d20  841d54778b00         test byte ptr [0x8b7754], bl
// 005b4d26  751c                 jne 0x5b4d44
// 005b4d28  d9ee                 fldz 
// 005b4d2a  091d54778b00         or dword ptr [0x8b7754], ebx
// 005b4d30  d91548778b00         fst dword ptr [0x8b7748]
// 005b4d36  d91d4c778b00         fstp dword ptr [0x8b774c]
// 005b4d3c  d9e8                 fld1 
// 005b4d3e  d91d50778b00         fstp dword ptr [0x8b7750]
// 005b4d44  52                   push edx
// 005b4d45  6848778b00           push 0x8b7748
// 005b4d4a  8d542410             lea edx, [esp + 0x10]
// 005b4d4e  52                   push edx
// 005b4d4f  e88cfcffff           call 0x5b49e0
// 005b4d54  d944241c             fld dword ptr [esp + 0x1c]
// 005b4d58  d95c2408             fstp dword ptr [esp + 8]
// 005b4d5c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005b4d60  d9442428             fld dword ptr [esp + 0x28]
// 005b4d64  83ec18               sub esp, 0x18
// 005b4d67  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b4d6b  8bce                 mov ecx, esi
// 005b4d6d  d944244c             fld dword ptr [esp + 0x4c]
// 005b4d71  d95c2418             fstp dword ptr [esp + 0x18]
// 005b4d75  d9442430             fld dword ptr [esp + 0x30]
// 005b4d79  d95c2414             fstp dword ptr [esp + 0x14]
// 005b4d7d  d944243c             fld dword ptr [esp + 0x3c]
// 005b4d81  d95c2410             fstp dword ptr [esp + 0x10]
// 005b4d85  d9442448             fld dword ptr [esp + 0x48]
// 005b4d89  d95c240c             fstp dword ptr [esp + 0xc]
// 005b4d8d  d944242c             fld dword ptr [esp + 0x2c]
// 005b4d91  d95c2408             fstp dword ptr [esp + 8]
// 005b4d95  d9442438             fld dword ptr [esp + 0x38]
// 005b4d99  d95c2404             fstp dword ptr [esp + 4]
// 005b4d9d  d9442444             fld dword ptr [esp + 0x44]
// 005b4da1  d91c24               fstp dword ptr [esp]
// 005b4da4  e807a9f4ff           call 0x4ff6b0
// 005b4da9  8bc6                 mov eax, esi
// 005b4dab  5e                   pop esi
// 005b4dac  5b                   pop ebx
// 005b4dad  83c424               add esp, 0x24
// 005b4db0  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToMatrix3Internal@RBX@@YA?AVMatrix3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
