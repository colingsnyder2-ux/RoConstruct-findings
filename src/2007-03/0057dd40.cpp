// roc 2007-03 0057dd40  unit: seg_00570000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057dd40
//
// 0057dd40  6aff                 push -1
// 0057dd42  6893197500           push 0x751993
// 0057dd47  64a100000000         mov eax, dword ptr fs:[0]
// 0057dd4d  50                   push eax
// 0057dd4e  64892500000000       mov dword ptr fs:[0], esp
// 0057dd55  51                   push ecx
// 0057dd56  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057dd5a  53                   push ebx
// 0057dd5b  56                   push esi
// 0057dd5c  57                   push edi
// 0057dd5d  8bf1                 mov esi, ecx
// 0057dd5f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057dd63  50                   push eax
// 0057dd64  51                   push ecx
// 0057dd65  89742414             mov dword ptr [esp + 0x14], esi
// 0057dd69  e822f6ffff           call 0x57d390
// 0057dd6e  50                   push eax
// 0057dd6f  8bce                 mov ecx, esi
// 0057dd71  e81a32ffff           call 0x570f90
// 0057dd76  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057dd7a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057dd7e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057dd82  895628               mov dword ptr [esi + 0x28], edx
// 0057dd85  89462c               mov dword ptr [esi + 0x2c], eax
// 0057dd88  894e30               mov dword ptr [esi + 0x30], ecx
// 0057dd8b  8d7e34               lea edi, [esi + 0x34]
// 0057dd8e  8bcf                 mov ecx, edi
// 0057dd90  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057dd98  c706e4d67a00         mov dword ptr [esi], 0x7ad6e4
// 0057dd9e  e8adf0feff           call 0x56ce50
// 0057dda3  c644241801           mov byte ptr [esp + 0x18], 1
// 0057dda8  8d5e14               lea ebx, [esi + 0x14]
// 0057ddab  e8b0f3feff           call 0x56d160
// 0057ddb0  57                   push edi
// 0057ddb1  8903                 mov dword ptr [ebx], eax
// 0057ddb3  e8d8f5feff           call 0x56d390
// 0057ddb8  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057ddbc  50                   push eax
// 0057ddbd  6aff                 push -1
// 0057ddbf  52                   push edx
// 0057ddc0  e81bfbfaff           call 0x52d8e0
// 0057ddc5  83c408               add esp, 8
// 0057ddc8  50                   push eax
// 0057ddc9  8bcb                 mov ecx, ebx
// 0057ddcb  e8c0f0feff           call 0x56ce90
// 0057ddd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057ddd4  5f                   pop edi
// 0057ddd5  8bc6                 mov eax, esi
// 0057ddd7  5e                   pop esi
// 0057ddd8  5b                   pop ebx
// 0057ddd9  64890d00000000       mov dword ptr fs:[0], ecx
// 0057dde0  83c410               add esp, 0x10
// 0057dde3  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
