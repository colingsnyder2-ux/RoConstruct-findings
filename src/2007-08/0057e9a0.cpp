// roc 2007-08 0057e9a0  unit: RBX::RootInstance  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e9a0
//
// 0057e9a0  6aff                 push -1
// 0057e9a2  68d3597500           push 0x7559d3
// 0057e9a7  64a100000000         mov eax, dword ptr fs:[0]
// 0057e9ad  50                   push eax
// 0057e9ae  64892500000000       mov dword ptr fs:[0], esp
// 0057e9b5  51                   push ecx
// 0057e9b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057e9ba  53                   push ebx
// 0057e9bb  56                   push esi
// 0057e9bc  57                   push edi
// 0057e9bd  8bf1                 mov esi, ecx
// 0057e9bf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057e9c3  50                   push eax
// 0057e9c4  51                   push ecx
// 0057e9c5  89742414             mov dword ptr [esp + 0x14], esi
// 0057e9c9  e852f5ffff           call 0x57df20
// 0057e9ce  50                   push eax
// 0057e9cf  8bce                 mov ecx, esi
// 0057e9d1  e8da23ffff           call 0x570db0
// 0057e9d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057e9da  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057e9de  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057e9e2  895628               mov dword ptr [esi + 0x28], edx
// 0057e9e5  89462c               mov dword ptr [esi + 0x2c], eax
// 0057e9e8  894e30               mov dword ptr [esi + 0x30], ecx
// 0057e9eb  8d7e34               lea edi, [esi + 0x34]
// 0057e9ee  8bcf                 mov ecx, edi
// 0057e9f0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057e9f8  c706f4bc7a00         mov dword ptr [esi], 0x7abcf4
// 0057e9fe  e8bde9feff           call 0x56d3c0
// 0057ea03  c644241801           mov byte ptr [esp + 0x18], 1
// 0057ea08  8d5e14               lea ebx, [esi + 0x14]
// 0057ea0b  e850edfeff           call 0x56d760
// 0057ea10  57                   push edi
// 0057ea11  8903                 mov dword ptr [ebx], eax
// 0057ea13  e878effeff           call 0x56d990
// 0057ea18  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057ea1c  50                   push eax
// 0057ea1d  6aff                 push -1
// 0057ea1f  52                   push edx
// 0057ea20  e81bdffaff           call 0x52c940
// 0057ea25  83c408               add esp, 8
// 0057ea28  50                   push eax
// 0057ea29  8bcb                 mov ecx, ebx
// 0057ea2b  e8d0e9feff           call 0x56d400
// 0057ea30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057ea34  5f                   pop edi
// 0057ea35  8bc6                 mov eax, esi
// 0057ea37  5e                   pop esi
// 0057ea38  5b                   pop ebx
// 0057ea39  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ea40  83c410               add esp, 0x10
// 0057ea43  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
