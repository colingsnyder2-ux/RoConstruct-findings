// roc 2007-08 00540a80  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540a80
//
// 00540a80  6aff                 push -1
// 00540a82  6830057500           push 0x750530
// 00540a87  64a100000000         mov eax, dword ptr fs:[0]
// 00540a8d  50                   push eax
// 00540a8e  64892500000000       mov dword ptr fs:[0], esp
// 00540a95  83ec14               sub esp, 0x14
// 00540a98  56                   push esi
// 00540a99  57                   push edi
// 00540a9a  8bf9                 mov edi, ecx
// 00540a9c  c744240800000000     mov dword ptr [esp + 8], 0
// 00540aa4  8d442408             lea eax, [esp + 8]
// 00540aa8  50                   push eax
// 00540aa9  6a01                 push 1
// 00540aab  8d4c2414             lea ecx, [esp + 0x14]
// 00540aaf  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00540ab7  e85474edff           call 0x417f10
// 00540abc  8b742410             mov esi, dword ptr [esp + 0x10]
// 00540ac0  85f6                 test esi, esi
// 00540ac2  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00540aca  740b                 je 0x540ad7
// 00540acc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00540ad0  2bce                 sub ecx, esi
// 00540ad2  c1f902               sar ecx, 2
// 00540ad5  750a                 jne 0x540ae1
// 00540ad7  ff15d8e67700         call dword ptr [0x77e6d8]
// 00540add  8b742410             mov esi, dword ptr [esp + 0x10]
// 00540ae1  6a08                 push 8
// 00540ae3  e80ef40e00           call 0x62fef6
// 00540ae8  83c404               add esp, 4
// 00540aeb  85c0                 test eax, eax
// 00540aed  740f                 je 0x540afe
// 00540aef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00540af3  c700dc657a00         mov dword ptr [eax], 0x7a65dc
// 00540af9  895004               mov dword ptr [eax + 4], edx
// 00540afc  eb02                 jmp 0x540b00
// 00540afe  33c0                 xor eax, eax
// 00540b00  8b0e                 mov ecx, dword ptr [esi]
// 00540b02  85c9                 test ecx, ecx
// 00540b04  8906                 mov dword ptr [esi], eax
// 00540b06  7408                 je 0x540b10
// 00540b08  8b01                 mov eax, dword ptr [ecx]
// 00540b0a  8b10                 mov edx, dword ptr [eax]
// 00540b0c  6a01                 push 1
// 00540b0e  ffd2                 call edx
// 00540b10  8b0f                 mov ecx, dword ptr [edi]
// 00540b12  8b01                 mov eax, dword ptr [ecx]
// 00540b14  8b4004               mov eax, dword ptr [eax + 4]
// 00540b17  8d54240c             lea edx, [esp + 0xc]
// 00540b1b  52                   push edx
// 00540b1c  ffd0                 call eax
// 00540b1e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00540b22  85f6                 test esi, esi
// 00540b24  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00540b2c  742c                 je 0x540b5a
// 00540b2e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00540b32  3bf0                 cmp esi, eax
// 00540b34  8bf8                 mov edi, eax
// 00540b36  7419                 je 0x540b51
// 00540b38  8b0e                 mov ecx, dword ptr [esi]
// 00540b3a  85c9                 test ecx, ecx
// 00540b3c  7408                 je 0x540b46
// 00540b3e  8b11                 mov edx, dword ptr [ecx]
// 00540b40  8b02                 mov eax, dword ptr [edx]
// 00540b42  6a01                 push 1
// 00540b44  ffd0                 call eax
// 00540b46  83c604               add esi, 4
// 00540b49  3bf7                 cmp esi, edi
// 00540b4b  75eb                 jne 0x540b38
// 00540b4d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00540b51  56                   push esi
// 00540b52  e80bf10e00           call 0x62fc62
// 00540b57  83c404               add esp, 4
// 00540b5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00540b5e  5f                   pop edi
// 00540b5f  5e                   pop esi
// 00540b60  64890d00000000       mov dword ptr fs:[0], ecx
// 00540b67  83c420               add esp, 0x20
// 00540b6a  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@QBEXPBVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
