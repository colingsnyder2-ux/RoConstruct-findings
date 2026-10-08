// roc 2007-08 0057ec00  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ec00
//
// 0057ec00  6aff                 push -1
// 0057ec02  68d3597500           push 0x7559d3
// 0057ec07  64a100000000         mov eax, dword ptr fs:[0]
// 0057ec0d  50                   push eax
// 0057ec0e  64892500000000       mov dword ptr fs:[0], esp
// 0057ec15  51                   push ecx
// 0057ec16  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057ec1a  53                   push ebx
// 0057ec1b  56                   push esi
// 0057ec1c  57                   push edi
// 0057ec1d  8bf1                 mov esi, ecx
// 0057ec1f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057ec23  50                   push eax
// 0057ec24  51                   push ecx
// 0057ec25  89742414             mov dword ptr [esp + 0x14], esi
// 0057ec29  e8f2f2ffff           call 0x57df20
// 0057ec2e  50                   push eax
// 0057ec2f  8bce                 mov ecx, esi
// 0057ec31  e87a21ffff           call 0x570db0
// 0057ec36  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057ec3a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057ec3e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057ec42  895628               mov dword ptr [esi + 0x28], edx
// 0057ec45  89462c               mov dword ptr [esi + 0x2c], eax
// 0057ec48  894e30               mov dword ptr [esi + 0x30], ecx
// 0057ec4b  8d7e34               lea edi, [esi + 0x34]
// 0057ec4e  8bcf                 mov ecx, edi
// 0057ec50  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057ec58  c70600bd7a00         mov dword ptr [esi], 0x7abd00
// 0057ec5e  e85de7feff           call 0x56d3c0
// 0057ec63  c644241801           mov byte ptr [esp + 0x18], 1
// 0057ec68  8d5e14               lea ebx, [esi + 0x14]
// 0057ec6b  e8e0e6feff           call 0x56d350
// 0057ec70  57                   push edi
// 0057ec71  8903                 mov dword ptr [ebx], eax
// 0057ec73  e8e8eafeff           call 0x56d760
// 0057ec78  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057ec7c  50                   push eax
// 0057ec7d  6aff                 push -1
// 0057ec7f  52                   push edx
// 0057ec80  e8bbdcfaff           call 0x52c940
// 0057ec85  83c408               add esp, 8
// 0057ec88  50                   push eax
// 0057ec89  8bcb                 mov ecx, ebx
// 0057ec8b  e870e7feff           call 0x56d400
// 0057ec90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057ec94  5f                   pop edi
// 0057ec95  8bc6                 mov eax, esi
// 0057ec97  5e                   pop esi
// 0057ec98  5b                   pop ebx
// 0057ec99  64890d00000000       mov dword ptr fs:[0], ecx
// 0057eca0  83c410               add esp, 0x10
// 0057eca3  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
