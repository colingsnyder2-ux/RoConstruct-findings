// roc 2011-06 0059f4c0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0059f4c0
//
// 0059f4c0  6aff                 push -1
// 0059f4c2  6810e09e00           push 0x9ee010
// 0059f4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0059f4cd  50                   push eax
// 0059f4ce  64892500000000       mov dword ptr fs:[0], esp
// 0059f4d5  83ec40               sub esp, 0x40
// 0059f4d8  8b442454             mov eax, dword ptr [esp + 0x54]
// 0059f4dc  53                   push ebx
// 0059f4dd  56                   push esi
// 0059f4de  57                   push edi
// 0059f4df  8bf1                 mov esi, ecx
// 0059f4e1  50                   push eax
// 0059f4e2  8d4c2430             lea ecx, [esp + 0x30]
// 0059f4e6  51                   push ecx
// 0059f4e7  8bce                 mov ecx, esi
// 0059f4e9  e8e28feaff           call 0x4484d0
// 0059f4ee  8bf8                 mov edi, eax
// 0059f4f0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0059f4f4  52                   push edx
// 0059f4f5  8d442410             lea eax, [esp + 0x10]
// 0059f4f9  50                   push eax
// 0059f4fa  8bce                 mov ecx, esi
// 0059f4fc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0059f504  e8c78feaff           call 0x4484d0
// 0059f509  57                   push edi
// 0059f50a  50                   push eax
// 0059f50b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0059f510  e8bb050b00           call 0x64fad0
// 0059f515  83c408               add esp, 8
// 0059f518  8d4c240c             lea ecx, [esp + 0xc]
// 0059f51c  8ad8                 mov bl, al
// 0059f51e  c644245400           mov byte ptr [esp + 0x54], 0
// 0059f523  ff15d004a400         call dword ptr [0xa404d0]
// 0059f529  8d4c242c             lea ecx, [esp + 0x2c]
// 0059f52d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0059f535  ff15d004a400         call dword ptr [0xa404d0]
// 0059f53b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0059f53f  5f                   pop edi
// 0059f540  5e                   pop esi
// 0059f541  8ac3                 mov al, bl
// 0059f543  5b                   pop ebx
// 0059f544  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f54b  83c44c               add esp, 0x4c
// 0059f54e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Decal.cpp
