// roc 2007-08 005f30a0  unit: RBX::Reflection::Z::$$A6AXMM::?$TSignalDesc::TSignalInstance  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f30a0
//
// 005f30a0  6aff                 push -1
// 005f30a2  6830057500           push 0x750530
// 005f30a7  64a100000000         mov eax, dword ptr fs:[0]
// 005f30ad  50                   push eax
// 005f30ae  64892500000000       mov dword ptr fs:[0], esp
// 005f30b5  83ec14               sub esp, 0x14
// 005f30b8  56                   push esi
// 005f30b9  57                   push edi
// 005f30ba  8bf9                 mov edi, ecx
// 005f30bc  c744240800000000     mov dword ptr [esp + 8], 0
// 005f30c4  8d442408             lea eax, [esp + 8]
// 005f30c8  50                   push eax
// 005f30c9  6a01                 push 1
// 005f30cb  8d4c2414             lea ecx, [esp + 0x14]
// 005f30cf  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005f30d7  e8344ee2ff           call 0x417f10
// 005f30dc  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f30e0  85f6                 test esi, esi
// 005f30e2  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005f30ea  740b                 je 0x5f30f7
// 005f30ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f30f0  2bce                 sub ecx, esi
// 005f30f2  c1f902               sar ecx, 2
// 005f30f5  750a                 jne 0x5f3101
// 005f30f7  ff15d8e67700         call dword ptr [0x77e6d8]
// 005f30fd  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f3101  6a08                 push 8
// 005f3103  e8eecd0300           call 0x62fef6
// 005f3108  83c404               add esp, 4
// 005f310b  85c0                 test eax, eax
// 005f310d  740f                 je 0x5f311e
// 005f310f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f3113  c70098717800         mov dword ptr [eax], 0x787198
// 005f3119  895004               mov dword ptr [eax + 4], edx
// 005f311c  eb02                 jmp 0x5f3120
// 005f311e  33c0                 xor eax, eax
// 005f3120  8b0e                 mov ecx, dword ptr [esi]
// 005f3122  85c9                 test ecx, ecx
// 005f3124  8906                 mov dword ptr [esi], eax
// 005f3126  7408                 je 0x5f3130
// 005f3128  8b01                 mov eax, dword ptr [ecx]
// 005f312a  8b10                 mov edx, dword ptr [eax]
// 005f312c  6a01                 push 1
// 005f312e  ffd2                 call edx
// 005f3130  8b0f                 mov ecx, dword ptr [edi]
// 005f3132  8b01                 mov eax, dword ptr [ecx]
// 005f3134  8b4004               mov eax, dword ptr [eax + 4]
// 005f3137  8d54240c             lea edx, [esp + 0xc]
// 005f313b  52                   push edx
// 005f313c  ffd0                 call eax
// 005f313e  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f3142  85f6                 test esi, esi
// 005f3144  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005f314c  742c                 je 0x5f317a
// 005f314e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f3152  3bf0                 cmp esi, eax
// 005f3154  8bf8                 mov edi, eax
// 005f3156  7419                 je 0x5f3171
// 005f3158  8b0e                 mov ecx, dword ptr [esi]
// 005f315a  85c9                 test ecx, ecx
// 005f315c  7408                 je 0x5f3166
// 005f315e  8b11                 mov edx, dword ptr [ecx]
// 005f3160  8b02                 mov eax, dword ptr [edx]
// 005f3162  6a01                 push 1
// 005f3164  ffd0                 call eax
// 005f3166  83c604               add esi, 4
// 005f3169  3bf7                 cmp esi, edi
// 005f316b  75eb                 jne 0x5f3158
// 005f316d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005f3171  56                   push esi
// 005f3172  e8ebca0300           call 0x62fc62
// 005f3177  83c404               add esp, 4
// 005f317a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f317e  5f                   pop edi
// 005f317f  5e                   pop esi
// 005f3180  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3187  83c420               add esp, 0x20
// 005f318a  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
