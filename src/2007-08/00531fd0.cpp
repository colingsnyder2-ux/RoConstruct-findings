// roc 2007-08 00531fd0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531fd0
//
// 00531fd0  6aff                 push -1
// 00531fd2  68d3597500           push 0x7559d3
// 00531fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00531fdd  50                   push eax
// 00531fde  64892500000000       mov dword ptr fs:[0], esp
// 00531fe5  51                   push ecx
// 00531fe6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00531fea  53                   push ebx
// 00531feb  56                   push esi
// 00531fec  57                   push edi
// 00531fed  8bf1                 mov esi, ecx
// 00531fef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00531ff3  50                   push eax
// 00531ff4  51                   push ecx
// 00531ff5  89742414             mov dword ptr [esp + 0x14], esi
// 00531ff9  e8a2f6ffff           call 0x5316a0
// 00531ffe  50                   push eax
// 00531fff  8bce                 mov ecx, esi
// 00532001  e8aaed0300           call 0x570db0
// 00532006  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053200a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053200e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00532012  895628               mov dword ptr [esi + 0x28], edx
// 00532015  89462c               mov dword ptr [esi + 0x2c], eax
// 00532018  894e30               mov dword ptr [esi + 0x30], ecx
// 0053201b  8d7e34               lea edi, [esi + 0x34]
// 0053201e  8bcf                 mov ecx, edi
// 00532020  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00532028  c70600527a00         mov dword ptr [esi], 0x7a5200
// 0053202e  e88db30300           call 0x56d3c0
// 00532033  c644241801           mov byte ptr [esp + 0x18], 1
// 00532038  8d5e14               lea ebx, [esi + 0x14]
// 0053203b  e810b30300           call 0x56d350
// 00532040  57                   push edi
// 00532041  8903                 mov dword ptr [ebx], eax
// 00532043  e828ba0300           call 0x56da70
// 00532048  8b542434             mov edx, dword ptr [esp + 0x34]
// 0053204c  50                   push eax
// 0053204d  6aff                 push -1
// 0053204f  52                   push edx
// 00532050  e8eba8ffff           call 0x52c940
// 00532055  83c408               add esp, 8
// 00532058  50                   push eax
// 00532059  8bcb                 mov ecx, ebx
// 0053205b  e8a0b30300           call 0x56d400
// 00532060  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00532064  5f                   pop edi
// 00532065  8bc6                 mov eax, esi
// 00532067  5e                   pop esi
// 00532068  5b                   pop ebx
// 00532069  64890d00000000       mov dword ptr fs:[0], ecx
// 00532070  83c410               add esp, 0x10
// 00532073  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
