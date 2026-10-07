// roc 2008-06 00570ba0  unit: RBX::Reflection::ClassDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570ba0
//
// 00570ba0  64a100000000         mov eax, dword ptr fs:[0]
// 00570ba6  6aff                 push -1
// 00570ba8  685e017d00           push 0x7d015e
// 00570bad  50                   push eax
// 00570bae  64892500000000       mov dword ptr fs:[0], esp
// 00570bb5  55                   push ebp
// 00570bb6  56                   push esi
// 00570bb7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00570bbb  8be9                 mov ebp, ecx
// 00570bbd  8d4900               lea ecx, [ecx]
// 00570bc0  3b750c               cmp esi, dword ptr [ebp + 0xc]
// 00570bc3  745a                 je 0x570c1f
// 00570bc5  f60560c4960001       test byte ptr [0x96c460], 1
// 00570bcc  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00570bd2  752e                 jne 0x570c02
// 00570bd4  830d60c4960001       or dword ptr [0x96c460], 1
// 00570bdb  b9a0c39600           mov ecx, 0x96c3a0
// 00570be0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00570be8  e833fcffff           call 0x570820
// 00570bed  6800a37f00           push 0x7fa300
// 00570bf2  e8b80b1300           call 0x6a17af
// 00570bf7  83c404               add esp, 4
// 00570bfa  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00570c02  81fea0c39600         cmp esi, 0x96c3a0
// 00570c08  75b6                 jne 0x570bc0
// 00570c0a  32c0                 xor al, al
// 00570c0c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570c10  64890d00000000       mov dword ptr fs:[0], ecx
// 00570c17  5e                   pop esi
// 00570c18  5d                   pop ebp
// 00570c19  83c40c               add esp, 0xc
// 00570c1c  c20400               ret 4
// 00570c1f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570c23  5e                   pop esi
// 00570c24  b001                 mov al, 1
// 00570c26  64890d00000000       mov dword ptr fs:[0], ecx
// 00570c2d  5d                   pop ebp
// 00570c2e  83c40c               add esp, 0xc
// 00570c31  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NABVClassDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
