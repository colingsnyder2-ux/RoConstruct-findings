// roc 2007-03 00536080  unit: seg_00530000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536080
//
// 00536080  6aff                 push -1
// 00536082  6893197500           push 0x751993
// 00536087  64a100000000         mov eax, dword ptr fs:[0]
// 0053608d  50                   push eax
// 0053608e  64892500000000       mov dword ptr fs:[0], esp
// 00536095  51                   push ecx
// 00536096  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053609a  53                   push ebx
// 0053609b  56                   push esi
// 0053609c  57                   push edi
// 0053609d  8bf1                 mov esi, ecx
// 0053609f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005360a3  50                   push eax
// 005360a4  51                   push ecx
// 005360a5  89742414             mov dword ptr [esp + 0x14], esi
// 005360a9  e842f6ffff           call 0x5356f0
// 005360ae  50                   push eax
// 005360af  8bce                 mov ecx, esi
// 005360b1  e8daae0300           call 0x570f90
// 005360b6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005360ba  8b442424             mov eax, dword ptr [esp + 0x24]
// 005360be  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005360c2  895628               mov dword ptr [esi + 0x28], edx
// 005360c5  89462c               mov dword ptr [esi + 0x2c], eax
// 005360c8  894e30               mov dword ptr [esi + 0x30], ecx
// 005360cb  8d7e34               lea edi, [esi + 0x34]
// 005360ce  8bcf                 mov ecx, edi
// 005360d0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005360d8  c706d4557a00         mov dword ptr [esi], 0x7a55d4
// 005360de  e86d6d0300           call 0x56ce50
// 005360e3  c644241801           mov byte ptr [esp + 0x18], 1
// 005360e8  8d5e14               lea ebx, [esi + 0x14]
// 005360eb  e8f06c0300           call 0x56cde0
// 005360f0  57                   push edi
// 005360f1  8903                 mov dword ptr [ebx], eax
// 005360f3  e878730300           call 0x56d470
// 005360f8  8b542434             mov edx, dword ptr [esp + 0x34]
// 005360fc  50                   push eax
// 005360fd  6aff                 push -1
// 005360ff  52                   push edx
// 00536100  e8db77ffff           call 0x52d8e0
// 00536105  83c408               add esp, 8
// 00536108  50                   push eax
// 00536109  8bcb                 mov ecx, ebx
// 0053610b  e8806d0300           call 0x56ce90
// 00536110  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00536114  5f                   pop edi
// 00536115  8bc6                 mov eax, esi
// 00536117  5e                   pop esi
// 00536118  5b                   pop ebx
// 00536119  64890d00000000       mov dword ptr fs:[0], ecx
// 00536120  83c410               add esp, 0x10
// 00536123  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
