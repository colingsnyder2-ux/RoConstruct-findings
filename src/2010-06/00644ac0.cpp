// roc 2010-06 00644ac0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644ac0
//
// 00644ac0  6aff                 push -1
// 00644ac2  68a0de9900           push 0x99dea0
// 00644ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00644acd  50                   push eax
// 00644ace  64892500000000       mov dword ptr fs:[0], esp
// 00644ad5  83ec40               sub esp, 0x40
// 00644ad8  8b442454             mov eax, dword ptr [esp + 0x54]
// 00644adc  53                   push ebx
// 00644add  56                   push esi
// 00644ade  57                   push edi
// 00644adf  8bf1                 mov esi, ecx
// 00644ae1  50                   push eax
// 00644ae2  8d4c2430             lea ecx, [esp + 0x30]
// 00644ae6  51                   push ecx
// 00644ae7  8bce                 mov ecx, esi
// 00644ae9  e86291fbff           call 0x5fdc50
// 00644aee  8bf8                 mov edi, eax
// 00644af0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00644af4  52                   push edx
// 00644af5  8d442410             lea eax, [esp + 0x10]
// 00644af9  50                   push eax
// 00644afa  8bce                 mov ecx, esi
// 00644afc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00644b04  e84791fbff           call 0x5fdc50
// 00644b09  57                   push edi
// 00644b0a  50                   push eax
// 00644b0b  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00644b10  e80b62feff           call 0x62ad20
// 00644b15  83c408               add esp, 8
// 00644b18  8d4c240c             lea ecx, [esp + 0xc]
// 00644b1c  8ad8                 mov bl, al
// 00644b1e  c644245400           mov byte ptr [esp + 0x54], 0
// 00644b23  ff1500a49e00         call dword ptr [0x9ea400]
// 00644b29  8d4c242c             lea ecx, [esp + 0x2c]
// 00644b2d  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00644b35  ff1500a49e00         call dword ptr [0x9ea400]
// 00644b3b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00644b3f  5f                   pop edi
// 00644b40  5e                   pop esi
// 00644b41  8ac3                 mov al, bl
// 00644b43  5b                   pop ebx
// 00644b44  64890d00000000       mov dword ptr fs:[0], ecx
// 00644b4b  83c44c               add esp, 0x4c
// 00644b4e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
