// roc 2008-06 004b4240  unit: RBX::Network::VReplicator::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4240
//
// 004b4240  6aff                 push -1
// 004b4242  6843797c00           push 0x7c7943
// 004b4247  64a100000000         mov eax, dword ptr fs:[0]
// 004b424d  50                   push eax
// 004b424e  64892500000000       mov dword ptr fs:[0], esp
// 004b4255  51                   push ecx
// 004b4256  8b442424             mov eax, dword ptr [esp + 0x24]
// 004b425a  53                   push ebx
// 004b425b  56                   push esi
// 004b425c  57                   push edi
// 004b425d  8bf1                 mov esi, ecx
// 004b425f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004b4263  50                   push eax
// 004b4264  51                   push ecx
// 004b4265  89742414             mov dword ptr [esp + 0x14], esi
// 004b4269  e8a2a7feff           call 0x49ea10
// 004b426e  50                   push eax
// 004b426f  8bce                 mov ecx, esi
// 004b4271  e81a150e00           call 0x595790
// 004b4276  8b542420             mov edx, dword ptr [esp + 0x20]
// 004b427a  8b442424             mov eax, dword ptr [esp + 0x24]
// 004b427e  8d7e40               lea edi, [esi + 0x40]
// 004b4281  8bcf                 mov ecx, edi
// 004b4283  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b428b  c706cc4c8200         mov dword ptr [esi], 0x824ccc
// 004b4291  895638               mov dword ptr [esi + 0x38], edx
// 004b4294  89463c               mov dword ptr [esi + 0x3c], eax
// 004b4297  e824080e00           call 0x594ac0
// 004b429c  c644241801           mov byte ptr [esp + 0x18], 1
// 004b42a1  8d5e14               lea ebx, [esi + 0x14]
// 004b42a4  e8a7070e00           call 0x594a50
// 004b42a9  57                   push edi
// 004b42aa  8903                 mov dword ptr [ebx], eax
// 004b42ac  e87f890b00           call 0x56cc30
// 004b42b1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b42b5  50                   push eax
// 004b42b6  6aff                 push -1
// 004b42b8  51                   push ecx
// 004b42b9  e8d2fc0900           call 0x553f90
// 004b42be  83c408               add esp, 8
// 004b42c1  50                   push eax
// 004b42c2  8bcb                 mov ecx, ebx
// 004b42c4  e877080e00           call 0x594b40
// 004b42c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b42cd  5f                   pop edi
// 004b42ce  8bc6                 mov eax, esi
// 004b42d0  5e                   pop esi
// 004b42d1  5b                   pop ebx
// 004b42d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004b42d9  83c410               add esp, 0x10
// 004b42dc  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
