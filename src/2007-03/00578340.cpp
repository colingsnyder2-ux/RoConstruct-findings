// roc 2007-03 00578340  unit: seg_00570000  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578340
//
// 00578340  6aff                 push -1
// 00578342  6850667500           push 0x756650
// 00578347  64a100000000         mov eax, dword ptr fs:[0]
// 0057834d  50                   push eax
// 0057834e  64892500000000       mov dword ptr fs:[0], esp
// 00578355  83ec40               sub esp, 0x40
// 00578358  8b442454             mov eax, dword ptr [esp + 0x54]
// 0057835c  53                   push ebx
// 0057835d  56                   push esi
// 0057835e  57                   push edi
// 0057835f  8bf1                 mov esi, ecx
// 00578361  50                   push eax
// 00578362  8d4c2430             lea ecx, [esp + 0x30]
// 00578366  51                   push ecx
// 00578367  8bce                 mov ecx, esi
// 00578369  e8f2fdffff           call 0x578160
// 0057836e  8bf8                 mov edi, eax
// 00578370  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00578374  52                   push edx
// 00578375  8d442410             lea eax, [esp + 0x10]
// 00578379  50                   push eax
// 0057837a  8bce                 mov ecx, esi
// 0057837c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00578384  e8d7fdffff           call 0x578160
// 00578389  57                   push edi
// 0057838a  50                   push eax
// 0057838b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00578390  e8cbc3fcff           call 0x544760
// 00578395  83c408               add esp, 8
// 00578398  8d4c240c             lea ecx, [esp + 0xc]
// 0057839c  8ad8                 mov bl, al
// 0057839e  c644245400           mov byte ptr [esp + 0x54], 0
// 005783a3  ff158ce77700         call dword ptr [0x77e78c]
// 005783a9  8d4c242c             lea ecx, [esp + 0x2c]
// 005783ad  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 005783b5  ff158ce77700         call dword ptr [0x77e78c]
// 005783bb  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005783bf  5f                   pop edi
// 005783c0  5e                   pop esi
// 005783c1  8ac3                 mov al, bl
// 005783c3  5b                   pop ebx
// 005783c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005783cb  83c44c               add esp, 0x4c
// 005783ce  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
