// roc 2009-06 00696000  unit: RBX::VClickDetector::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00696000
//
// 00696000  6aff                 push -1
// 00696002  6868eb8600           push 0x86eb68
// 00696007  64a100000000         mov eax, dword ptr fs:[0]
// 0069600d  50                   push eax
// 0069600e  64892500000000       mov dword ptr fs:[0], esp
// 00696015  83ec08               sub esp, 8
// 00696018  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069601c  56                   push esi
// 0069601d  57                   push edi
// 0069601e  8bf1                 mov esi, ecx
// 00696020  89742408             mov dword ptr [esp + 8], esi
// 00696024  50                   push eax
// 00696025  51                   push ecx
// 00696026  8bc4                 mov eax, esp
// 00696028  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00696030  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00696038  89642414             mov dword ptr [esp + 0x14], esp
// 0069603c  c70000000000         mov dword ptr [eax], 0
// 00696042  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00696046  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069604a  51                   push ecx
// 0069604b  52                   push edx
// 0069604c  c644242801           mov byte ptr [esp + 0x28], 1
// 00696051  e89a4bf5ff           call 0x5eabf0
// 00696056  50                   push eax
// 00696057  8bce                 mov ecx, esi
// 00696059  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0069605e  e89da0daff           call 0x440100
// 00696063  6a00                 push 0
// 00696065  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0069606a  e8c3290800           call 0x718a32
// 0069606f  6a18                 push 0x18
// 00696071  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 00696077  e8bc290800           call 0x718a38
// 0069607c  83c408               add esp, 8
// 0069607f  85c0                 test eax, eax
// 00696081  741e                 je 0x6960a1
// 00696083  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00696087  33c9                 xor ecx, ecx
// 00696089  33d2                 xor edx, edx
// 0069608b  897808               mov dword ptr [eax + 8], edi
// 0069608e  c700d07a8e00         mov dword ptr [eax], 0x8e7ad0
// 00696094  897004               mov dword ptr [eax + 4], esi
// 00696097  894810               mov dword ptr [eax + 0x10], ecx
// 0069609a  895014               mov dword ptr [eax + 0x14], edx
// 0069609d  8bf8                 mov edi, eax
// 0069609f  eb02                 jmp 0x6960a3
// 006960a1  33ff                 xor edi, edi
// 006960a3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006960a6  3bf8                 cmp edi, eax
// 006960a8  7409                 je 0x6960b3
// 006960aa  50                   push eax
// 006960ab  e882290800           call 0x718a32
// 006960b0  83c404               add esp, 4
// 006960b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006960b7  897e18               mov dword ptr [esi + 0x18], edi
// 006960ba  5f                   pop edi
// 006960bb  8bc6                 mov eax, esi
// 006960bd  64890d00000000       mov dword ptr fs:[0], ecx
// 006960c4  5e                   pop esi
// 006960c5  83c414               add esp, 0x14
// 006960c8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
