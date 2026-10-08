// roc 2008-06 00585980  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585980
//
// 00585980  6aff                 push -1
// 00585982  68d32c7d00           push 0x7d2cd3
// 00585987  64a100000000         mov eax, dword ptr fs:[0]
// 0058598d  50                   push eax
// 0058598e  64892500000000       mov dword ptr fs:[0], esp
// 00585995  51                   push ecx
// 00585996  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058599a  53                   push ebx
// 0058599b  56                   push esi
// 0058599c  57                   push edi
// 0058599d  8bf1                 mov esi, ecx
// 0058599f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005859a3  50                   push eax
// 005859a4  51                   push ecx
// 005859a5  89742414             mov dword ptr [esp + 0x14], esi
// 005859a9  e852f7ffff           call 0x585100
// 005859ae  50                   push eax
// 005859af  8bce                 mov ecx, esi
// 005859b1  e8dafd0000           call 0x595790
// 005859b6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005859ba  8b442424             mov eax, dword ptr [esp + 0x24]
// 005859be  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005859c2  895638               mov dword ptr [esi + 0x38], edx
// 005859c5  89463c               mov dword ptr [esi + 0x3c], eax
// 005859c8  894e40               mov dword ptr [esi + 0x40], ecx
// 005859cb  8d7e44               lea edi, [esi + 0x44]
// 005859ce  8bcf                 mov ecx, edi
// 005859d0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005859d8  c706f80f8300         mov dword ptr [esi], 0x830ff8
// 005859de  e8ddf00000           call 0x594ac0
// 005859e3  c644241801           mov byte ptr [esp + 0x18], 1
// 005859e8  8d5e14               lea ebx, [esi + 0x14]
// 005859eb  e860f00000           call 0x594a50
// 005859f0  57                   push edi
// 005859f1  8903                 mov dword ptr [ebx], eax
// 005859f3  e86874feff           call 0x56ce60
// 005859f8  8b542434             mov edx, dword ptr [esp + 0x34]
// 005859fc  50                   push eax
// 005859fd  6aff                 push -1
// 005859ff  52                   push edx
// 00585a00  e88be5fcff           call 0x553f90
// 00585a05  83c408               add esp, 8
// 00585a08  50                   push eax
// 00585a09  8bcb                 mov ecx, ebx
// 00585a0b  e830f10000           call 0x594b40
// 00585a10  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00585a14  5f                   pop edi
// 00585a15  8bc6                 mov eax, esi
// 00585a17  5e                   pop esi
// 00585a18  5b                   pop ebx
// 00585a19  64890d00000000       mov dword ptr fs:[0], ecx
// 00585a20  83c410               add esp, 0x10
// 00585a23  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
