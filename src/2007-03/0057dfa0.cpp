// roc 2007-03 0057dfa0  unit: seg_00570000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057dfa0
//
// 0057dfa0  6aff                 push -1
// 0057dfa2  6893197500           push 0x751993
// 0057dfa7  64a100000000         mov eax, dword ptr fs:[0]
// 0057dfad  50                   push eax
// 0057dfae  64892500000000       mov dword ptr fs:[0], esp
// 0057dfb5  51                   push ecx
// 0057dfb6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057dfba  53                   push ebx
// 0057dfbb  56                   push esi
// 0057dfbc  57                   push edi
// 0057dfbd  8bf1                 mov esi, ecx
// 0057dfbf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057dfc3  50                   push eax
// 0057dfc4  51                   push ecx
// 0057dfc5  89742414             mov dword ptr [esp + 0x14], esi
// 0057dfc9  e8c2f3ffff           call 0x57d390
// 0057dfce  50                   push eax
// 0057dfcf  8bce                 mov ecx, esi
// 0057dfd1  e8ba2fffff           call 0x570f90
// 0057dfd6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057dfda  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057dfde  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057dfe2  895628               mov dword ptr [esi + 0x28], edx
// 0057dfe5  89462c               mov dword ptr [esi + 0x2c], eax
// 0057dfe8  894e30               mov dword ptr [esi + 0x30], ecx
// 0057dfeb  8d7e34               lea edi, [esi + 0x34]
// 0057dfee  8bcf                 mov ecx, edi
// 0057dff0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057dff8  c706f0d67a00         mov dword ptr [esi], 0x7ad6f0
// 0057dffe  e84deefeff           call 0x56ce50
// 0057e003  c644241801           mov byte ptr [esp + 0x18], 1
// 0057e008  8d5e14               lea ebx, [esi + 0x14]
// 0057e00b  e8d0edfeff           call 0x56cde0
// 0057e010  57                   push edi
// 0057e011  8903                 mov dword ptr [ebx], eax
// 0057e013  e848f1feff           call 0x56d160
// 0057e018  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057e01c  50                   push eax
// 0057e01d  6aff                 push -1
// 0057e01f  52                   push edx
// 0057e020  e8bbf8faff           call 0x52d8e0
// 0057e025  83c408               add esp, 8
// 0057e028  50                   push eax
// 0057e029  8bcb                 mov ecx, ebx
// 0057e02b  e860eefeff           call 0x56ce90
// 0057e030  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057e034  5f                   pop edi
// 0057e035  8bc6                 mov eax, esi
// 0057e037  5e                   pop esi
// 0057e038  5b                   pop ebx
// 0057e039  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e040  83c410               add esp, 0x10
// 0057e043  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
