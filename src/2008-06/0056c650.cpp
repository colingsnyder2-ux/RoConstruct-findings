// roc 2008-06 0056c650  unit: RBX::Reflection::EnumDescriptor  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c650
//
// 0056c650  6aff                 push -1
// 0056c652  6868e37c00           push 0x7ce368
// 0056c657  64a100000000         mov eax, dword ptr fs:[0]
// 0056c65d  50                   push eax
// 0056c65e  64892500000000       mov dword ptr fs:[0], esp
// 0056c665  51                   push ecx
// 0056c666  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056c66a  56                   push esi
// 0056c66b  57                   push edi
// 0056c66c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056c670  8bf1                 mov esi, ecx
// 0056c672  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0056c676  50                   push eax
// 0056c677  51                   push ecx
// 0056c678  57                   push edi
// 0056c679  8bce                 mov ecx, esi
// 0056c67b  89742414             mov dword ptr [esp + 0x14], esi
// 0056c67f  e8fcedffff           call 0x56b480
// 0056c684  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056c688  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056c68c  8bd0                 mov edx, eax
// 0056c68e  c1fa02               sar edx, 2
// 0056c691  83e201               and edx, 1
// 0056c694  83e001               and eax, 1
// 0056c697  03d2                 add edx, edx
// 0056c699  0bd0                 or edx, eax
// 0056c69b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0056c69e  83e0fc               and eax, 0xfffffffc
// 0056c6a1  0bd0                 or edx, eax
// 0056c6a3  894e14               mov dword ptr [esi + 0x14], ecx
// 0056c6a6  56                   push esi
// 0056c6a7  8d4f08               lea ecx, [edi + 8]
// 0056c6aa  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0056c6b2  895610               mov dword ptr [esi + 0x10], edx
// 0056c6b5  e8b6faffff           call 0x56c170
// 0056c6ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056c6be  5f                   pop edi
// 0056c6bf  8bc6                 mov eax, esi
// 0056c6c1  5e                   pop esi
// 0056c6c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c6c9  83c410               add esp, 0x10
// 0056c6cc  c21400               ret 0x14
// library rbxgs/reflection\reflection_property.cpp (function ??0PropertyDescriptor@Reflection@RBX@@IAE@AAVClassDescriptor@12@ABVType@12@PBD2W4Functionality@012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
