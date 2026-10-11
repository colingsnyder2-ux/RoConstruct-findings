// roc 2008-06 00559a50  unit: RBX::VInstance::?$SignalDesc  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559a50
//
// 00559a50  6aff                 push -1
// 00559a52  68a8647c00           push 0x7c64a8
// 00559a57  64a100000000         mov eax, dword ptr fs:[0]
// 00559a5d  50                   push eax
// 00559a5e  64892500000000       mov dword ptr fs:[0], esp
// 00559a65  83ec18               sub esp, 0x18
// 00559a68  57                   push edi
// 00559a69  8bf9                 mov edi, ecx
// 00559a6b  6a01                 push 1
// 00559a6d  8d4c2408             lea ecx, [esp + 8]
// 00559a71  e8fa16ecff           call 0x41b170
// 00559a76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00559a7a  2b442410             sub eax, dword ptr [esp + 0x10]
// 00559a7e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00559a86  c1f802               sar eax, 2
// 00559a89  85c0                 test eax, eax
// 00559a8b  7706                 ja 0x559a93
// 00559a8d  ff1590288000         call dword ptr [0x802890]
// 00559a93  56                   push esi
// 00559a94  8b742414             mov esi, dword ptr [esp + 0x14]
// 00559a98  6a08                 push 8
// 00559a9a  e8816e1400           call 0x6a0920
// 00559a9f  83c404               add esp, 4
// 00559aa2  85c0                 test eax, eax
// 00559aa4  740f                 je 0x559ab5
// 00559aa6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00559aaa  c70014d78200         mov dword ptr [eax], 0x82d714
// 00559ab0  894804               mov dword ptr [eax + 4], ecx
// 00559ab3  eb02                 jmp 0x559ab7
// 00559ab5  33c0                 xor eax, eax
// 00559ab7  8d542430             lea edx, [esp + 0x30]
// 00559abb  8bc8                 mov ecx, eax
// 00559abd  3bd6                 cmp edx, esi
// 00559abf  7404                 je 0x559ac5
// 00559ac1  8b0e                 mov ecx, dword ptr [esi]
// 00559ac3  8906                 mov dword ptr [esi], eax
// 00559ac5  5e                   pop esi
// 00559ac6  85c9                 test ecx, ecx
// 00559ac8  7408                 je 0x559ad2
// 00559aca  8b01                 mov eax, dword ptr [ecx]
// 00559acc  8b10                 mov edx, dword ptr [eax]
// 00559ace  6a01                 push 1
// 00559ad0  ffd2                 call edx
// 00559ad2  8b0f                 mov ecx, dword ptr [edi]
// 00559ad4  8b01                 mov eax, dword ptr [ecx]
// 00559ad6  8b4004               mov eax, dword ptr [eax + 4]
// 00559ad9  8d542404             lea edx, [esp + 4]
// 00559add  52                   push edx
// 00559ade  ffd0                 call eax
// 00559ae0  8d4c2404             lea ecx, [esp + 4]
// 00559ae4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00559aec  e82f14ecff           call 0x41af20
// 00559af1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00559af5  5f                   pop edi
// 00559af6  64890d00000000       mov dword ptr fs:[0], ecx
// 00559afd  83c424               add esp, 0x24
// 00559b00  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
