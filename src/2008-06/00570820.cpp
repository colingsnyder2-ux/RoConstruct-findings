// roc 2008-06 00570820  unit: RBX::W4NormalId::?$EnumDesc  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570820
//
// 00570820  6aff                 push -1
// 00570822  68d1007d00           push 0x7d00d1
// 00570827  64a100000000         mov eax, dword ptr fs:[0]
// 0057082d  50                   push eax
// 0057082e  64892500000000       mov dword ptr fs:[0], esp
// 00570835  83ec08               sub esp, 8
// 00570838  53                   push ebx
// 00570839  56                   push esi
// 0057083a  57                   push edi
// 0057083b  8bf1                 mov esi, ecx
// 0057083d  6aff                 push -1
// 0057083f  68c0f78200           push 0x82f7c0
// 00570844  89742418             mov dword ptr [esp + 0x18], esi
// 00570848  c70630b78000         mov dword ptr [esi], 0x80b730
// 0057084e  e83d37feff           call 0x553f90
// 00570853  83c408               add esp, 8
// 00570856  894604               mov dword ptr [esi + 4], eax
// 00570859  33db                 xor ebx, ebx
// 0057085b  53                   push ebx
// 0057085c  8d4e08               lea ecx, [esi + 8]
// 0057085f  895c2420             mov dword ptr [esp + 0x20], ebx
// 00570863  e818fdffff           call 0x570580
// 00570868  53                   push ebx
// 00570869  8d4e3c               lea ecx, [esi + 0x3c]
// 0057086c  c644242001           mov byte ptr [esp + 0x20], 1
// 00570871  e8eafdffff           call 0x570660
// 00570876  53                   push ebx
// 00570877  8d4e70               lea ecx, [esi + 0x70]
// 0057087a  c644242002           mov byte ptr [esp + 0x20], 2
// 0057087f  e8bcfeffff           call 0x570740
// 00570884  6a04                 push 4
// 00570886  c644242003           mov byte ptr [esp + 0x20], 3
// 0057088b  c706bcf78200         mov dword ptr [esi], 0x82f7bc
// 00570891  8dbea4000000         lea edi, [esi + 0xa4]
// 00570897  e884001300           call 0x6a0920
// 0057089c  83c404               add esp, 4
// 0057089f  3bc3                 cmp eax, ebx
// 005708a1  7404                 je 0x5708a7
// 005708a3  8938                 mov dword ptr [eax], edi
// 005708a5  eb02                 jmp 0x5708a9
// 005708a7  33c0                 xor eax, eax
// 005708a9  8907                 mov dword ptr [edi], eax
// 005708ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005708af  895f0c               mov dword ptr [edi + 0xc], ebx
// 005708b2  895f10               mov dword ptr [edi + 0x10], ebx
// 005708b5  895f14               mov dword ptr [edi + 0x14], ebx
// 005708b8  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 005708be  5f                   pop edi
// 005708bf  8bc6                 mov eax, esi
// 005708c1  5e                   pop esi
// 005708c2  5b                   pop ebx
// 005708c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005708ca  83c414               add esp, 0x14
// 005708cd  c3                   ret 
// library openrbx-client/App\reflection\reflection_object.cpp (function ??0ClassDescriptor@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
