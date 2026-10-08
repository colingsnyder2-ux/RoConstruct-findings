// roc 2007-08 005af190  unit: RBX::VLighting::?$BoundFuncDesc  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005af190
//
// 005af190  6aff                 push -1
// 005af192  68588a7500           push 0x758a58
// 005af197  64a100000000         mov eax, dword ptr fs:[0]
// 005af19d  50                   push eax
// 005af19e  64892500000000       mov dword ptr fs:[0], esp
// 005af1a5  83ec14               sub esp, 0x14
// 005af1a8  56                   push esi
// 005af1a9  57                   push edi
// 005af1aa  8bf9                 mov edi, ecx
// 005af1ac  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005af1af  85c9                 test ecx, ecx
// 005af1b1  8b4730               mov eax, dword ptr [edi + 0x30]
// 005af1b4  89442408             mov dword ptr [esp + 8], eax
// 005af1b8  7409                 je 0x5af1c3
// 005af1ba  8b11                 mov edx, dword ptr [ecx]
// 005af1bc  8b4208               mov eax, dword ptr [edx + 8]
// 005af1bf  ffd0                 call eax
// 005af1c1  eb02                 jmp 0x5af1c5
// 005af1c3  33c0                 xor eax, eax
// 005af1c5  8944240c             mov dword ptr [esp + 0xc], eax
// 005af1c9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005af1cd  8b11                 mov edx, dword ptr [ecx]
// 005af1cf  8b5204               mov edx, dword ptr [edx + 4]
// 005af1d2  8d442408             lea eax, [esp + 8]
// 005af1d6  50                   push eax
// 005af1d7  6a01                 push 1
// 005af1d9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005af1e1  ffd2                 call edx
// 005af1e3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005af1e7  6a00                 push 0
// 005af1e9  686c958a00           push 0x8a956c
// 005af1ee  689c208800           push 0x88209c
// 005af1f3  6a00                 push 0
// 005af1f5  50                   push eax
// 005af1f6  e83b1b0800           call 0x630d36
// 005af1fb  8bf0                 mov esi, eax
// 005af1fd  83c414               add esp, 0x14
// 005af200  85f6                 test esi, esi
// 005af202  751e                 jne 0x5af222
// 005af204  68046e7800           push 0x786e04
// 005af209  8d4c2414             lea ecx, [esp + 0x14]
// 005af20d  ff1510e77700         call dword ptr [0x77e710]
// 005af213  680c1e8400           push 0x841e0c
// 005af218  8d4c2414             lea ecx, [esp + 0x14]
// 005af21c  51                   push ecx
// 005af21d  e87c190800           call 0x630b9e
// 005af222  8d4c2408             lea ecx, [esp + 8]
// 005af226  e8e5fffbff           call 0x56f210
// 005af22b  dd00                 fld qword ptr [eax]
// 005af22d  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 005af230  8b5728               mov edx, dword ptr [edi + 0x28]
// 005af233  83ec08               sub esp, 8
// 005af236  03ce                 add ecx, esi
// 005af238  dd1c24               fstp qword ptr [esp]
// 005af23b  ffd2                 call edx
// 005af23d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005af241  85c9                 test ecx, ecx
// 005af243  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005af24b  7408                 je 0x5af255
// 005af24d  8b01                 mov eax, dword ptr [ecx]
// 005af24f  8b10                 mov edx, dword ptr [eax]
// 005af251  6a01                 push 1
// 005af253  ffd2                 call edx
// 005af255  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005af259  5f                   pop edi
// 005af25a  5e                   pop esi
// 005af25b  64890d00000000       mov dword ptr fs:[0], ecx
// 005af262  83c420               add esp, 0x20
// 005af265  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
