// roc 2008-06 00636370  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636370
//
// 00636370  6aff                 push -1
// 00636372  68a8647c00           push 0x7c64a8
// 00636377  64a100000000         mov eax, dword ptr fs:[0]
// 0063637d  50                   push eax
// 0063637e  64892500000000       mov dword ptr fs:[0], esp
// 00636385  83ec18               sub esp, 0x18
// 00636388  57                   push edi
// 00636389  8bf9                 mov edi, ecx
// 0063638b  6a01                 push 1
// 0063638d  8d4c2408             lea ecx, [esp + 8]
// 00636391  e8da4ddeff           call 0x41b170
// 00636396  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063639a  2b442410             sub eax, dword ptr [esp + 0x10]
// 0063639e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006363a6  c1f802               sar eax, 2
// 006363a9  85c0                 test eax, eax
// 006363ab  7706                 ja 0x6363b3
// 006363ad  ff1590288000         call dword ptr [0x802890]
// 006363b3  56                   push esi
// 006363b4  8b742414             mov esi, dword ptr [esp + 0x14]
// 006363b8  6a08                 push 8
// 006363ba  e861a50600           call 0x6a0920
// 006363bf  83c404               add esp, 4
// 006363c2  85c0                 test eax, eax
// 006363c4  740f                 je 0x6363d5
// 006363c6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006363ca  c700cc068100         mov dword ptr [eax], 0x8106cc
// 006363d0  894804               mov dword ptr [eax + 4], ecx
// 006363d3  eb02                 jmp 0x6363d7
// 006363d5  33c0                 xor eax, eax
// 006363d7  8d542430             lea edx, [esp + 0x30]
// 006363db  8bc8                 mov ecx, eax
// 006363dd  3bd6                 cmp edx, esi
// 006363df  7404                 je 0x6363e5
// 006363e1  8b0e                 mov ecx, dword ptr [esi]
// 006363e3  8906                 mov dword ptr [esi], eax
// 006363e5  5e                   pop esi
// 006363e6  85c9                 test ecx, ecx
// 006363e8  7408                 je 0x6363f2
// 006363ea  8b01                 mov eax, dword ptr [ecx]
// 006363ec  8b10                 mov edx, dword ptr [eax]
// 006363ee  6a01                 push 1
// 006363f0  ffd2                 call edx
// 006363f2  8b0f                 mov ecx, dword ptr [edi]
// 006363f4  8b01                 mov eax, dword ptr [ecx]
// 006363f6  8b4004               mov eax, dword ptr [eax + 4]
// 006363f9  8d542404             lea edx, [esp + 4]
// 006363fd  52                   push edx
// 006363fe  ffd0                 call eax
// 00636400  8d4c2404             lea ecx, [esp + 4]
// 00636404  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0063640c  e80f4bdeff           call 0x41af20
// 00636411  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00636415  5f                   pop edi
// 00636416  64890d00000000       mov dword ptr fs:[0], ecx
// 0063641d  83c424               add esp, 0x24
// 00636420  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
