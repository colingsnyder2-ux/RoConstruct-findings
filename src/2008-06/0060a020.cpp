// roc 2008-06 0060a020  unit: RBX::VInstance::?$NonFactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a020
//
// 0060a020  81ec94000000         sub esp, 0x94
// 0060a026  53                   push ebx
// 0060a027  56                   push esi
// 0060a028  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0060a02f  57                   push edi
// 0060a030  8bd9                 mov ebx, ecx
// 0060a032  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0060a03a  85f6                 test esi, esi
// 0060a03c  7429                 je 0x60a067
// 0060a03e  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0060a044  6a00                 push 0
// 0060a046  6850dd9200           push 0x92dd50
// 0060a04b  687c909200           push 0x92907c
// 0060a050  6a00                 push 0
// 0060a052  50                   push eax
// 0060a053  e86e770900           call 0x6a17c6
// 0060a058  83c414               add esp, 0x14
// 0060a05b  85c0                 test eax, eax
// 0060a05d  7408                 je 0x60a067
// 0060a05f  8db828020000         lea edi, [eax + 0x228]
// 0060a065  eb02                 jmp 0x60a069
// 0060a067  33ff                 xor edi, edi
// 0060a069  85f6                 test esi, esi
// 0060a06b  740e                 je 0x60a07b
// 0060a06d  8d442440             lea eax, [esp + 0x40]
// 0060a071  50                   push eax
// 0060a072  8bce                 mov ecx, esi
// 0060a074  e827fdffff           call 0x609da0
// 0060a079  eb09                 jmp 0x60a084
// 0060a07b  8d4c2470             lea ecx, [esp + 0x70]
// 0060a07f  e84ce2e6ff           call 0x4782d0
// 0060a084  8bf0                 mov esi, eax
// 0060a086  56                   push esi
// 0060a087  8d4c2414             lea ecx, [esp + 0x14]
// 0060a08b  e89091f0ff           call 0x513220
// 0060a090  d94624               fld dword ptr [esi + 0x24]
// 0060a093  8b8b50010000         mov ecx, dword ptr [ebx + 0x150]
// 0060a099  d95c2434             fstp dword ptr [esp + 0x34]
// 0060a09d  d94628               fld dword ptr [esi + 0x28]
// 0060a0a0  d95c2438             fstp dword ptr [esp + 0x38]
// 0060a0a4  d9462c               fld dword ptr [esi + 0x2c]
// 0060a0a7  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0060a0ae  d95c243c             fstp dword ptr [esp + 0x3c]
// 0060a0b2  397cb10c             cmp dword ptr [ecx + esi*4 + 0xc], edi
// 0060a0b6  741e                 je 0x60a0d6
// 0060a0b8  8b11                 mov edx, dword ptr [ecx]
// 0060a0ba  8b4210               mov eax, dword ptr [edx + 0x10]
// 0060a0bd  57                   push edi
// 0060a0be  56                   push esi
// 0060a0bf  ffd0                 call eax
// 0060a0c1  85ff                 test edi, edi
// 0060a0c3  7411                 je 0x60a0d6
// 0060a0c5  8d4c2410             lea ecx, [esp + 0x10]
// 0060a0c9  51                   push ecx
// 0060a0ca  8b8b50010000         mov ecx, dword ptr [ebx + 0x150]
// 0060a0d0  56                   push esi
// 0060a0d1  e87ab60300           call 0x645750
// 0060a0d6  5f                   pop edi
// 0060a0d7  5e                   pop esi
// 0060a0d8  5b                   pop ebx
// 0060a0d9  81c494000000         add esp, 0x94
// 0060a0df  c20800               ret 8
// library rbxgs/roc_unit_04a4f43d7b9f24d1.cpp (function ?setPart@VelocityMotor@RBX@@AAEXHPAVFeature@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_04a4f43d7b9f24d1.cpp
