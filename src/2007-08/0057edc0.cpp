// roc 2007-08 0057edc0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057edc0
//
// 0057edc0  6aff                 push -1
// 0057edc2  68d3597500           push 0x7559d3
// 0057edc7  64a100000000         mov eax, dword ptr fs:[0]
// 0057edcd  50                   push eax
// 0057edce  64892500000000       mov dword ptr fs:[0], esp
// 0057edd5  51                   push ecx
// 0057edd6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057edda  53                   push ebx
// 0057eddb  56                   push esi
// 0057eddc  57                   push edi
// 0057eddd  8bf1                 mov esi, ecx
// 0057eddf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057ede3  50                   push eax
// 0057ede4  51                   push ecx
// 0057ede5  89742414             mov dword ptr [esp + 0x14], esi
// 0057ede9  e832f1ffff           call 0x57df20
// 0057edee  50                   push eax
// 0057edef  8bce                 mov ecx, esi
// 0057edf1  e8ba1fffff           call 0x570db0
// 0057edf6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057edfa  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057edfe  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057ee02  895628               mov dword ptr [esi + 0x28], edx
// 0057ee05  89462c               mov dword ptr [esi + 0x2c], eax
// 0057ee08  894e30               mov dword ptr [esi + 0x30], ecx
// 0057ee0b  8d7e34               lea edi, [esi + 0x34]
// 0057ee0e  8bcf                 mov ecx, edi
// 0057ee10  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057ee18  c7060cbd7a00         mov dword ptr [esi], 0x7abd0c
// 0057ee1e  e89de5feff           call 0x56d3c0
// 0057ee23  c644241801           mov byte ptr [esp + 0x18], 1
// 0057ee28  8d5e14               lea ebx, [esi + 0x14]
// 0057ee2b  e820e5feff           call 0x56d350
// 0057ee30  57                   push edi
// 0057ee31  8903                 mov dword ptr [ebx], eax
// 0057ee33  e808eafeff           call 0x56d840
// 0057ee38  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057ee3c  50                   push eax
// 0057ee3d  6aff                 push -1
// 0057ee3f  52                   push edx
// 0057ee40  e8fbdafaff           call 0x52c940
// 0057ee45  83c408               add esp, 8
// 0057ee48  50                   push eax
// 0057ee49  8bcb                 mov ecx, ebx
// 0057ee4b  e8b0e5feff           call 0x56d400
// 0057ee50  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057ee54  5f                   pop edi
// 0057ee55  8bc6                 mov eax, esi
// 0057ee57  5e                   pop esi
// 0057ee58  5b                   pop ebx
// 0057ee59  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ee60  83c410               add esp, 0x10
// 0057ee63  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
