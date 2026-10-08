// roc 2008-06 0058aea0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058aea0
//
// 0058aea0  6aff                 push -1
// 0058aea2  6843797c00           push 0x7c7943
// 0058aea7  64a100000000         mov eax, dword ptr fs:[0]
// 0058aead  50                   push eax
// 0058aeae  64892500000000       mov dword ptr fs:[0], esp
// 0058aeb5  51                   push ecx
// 0058aeb6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058aeba  53                   push ebx
// 0058aebb  56                   push esi
// 0058aebc  57                   push edi
// 0058aebd  8bf1                 mov esi, ecx
// 0058aebf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058aec3  50                   push eax
// 0058aec4  51                   push ecx
// 0058aec5  89742414             mov dword ptr [esp + 0x14], esi
// 0058aec9  e8d2f3ffff           call 0x58a2a0
// 0058aece  50                   push eax
// 0058aecf  8bce                 mov ecx, esi
// 0058aed1  e8baa80000           call 0x595790
// 0058aed6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058aeda  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058aede  8d7e40               lea edi, [esi + 0x40]
// 0058aee1  8bcf                 mov ecx, edi
// 0058aee3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058aeeb  c70618198300         mov dword ptr [esi], 0x831918
// 0058aef1  895638               mov dword ptr [esi + 0x38], edx
// 0058aef4  89463c               mov dword ptr [esi + 0x3c], eax
// 0058aef7  e8c49b0000           call 0x594ac0
// 0058aefc  c644241801           mov byte ptr [esp + 0x18], 1
// 0058af01  8d5e14               lea ebx, [esi + 0x14]
// 0058af04  e8479b0000           call 0x594a50
// 0058af09  57                   push edi
// 0058af0a  8903                 mov dword ptr [ebx], eax
// 0058af0c  e8df1efeff           call 0x56cdf0
// 0058af11  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058af15  50                   push eax
// 0058af16  6aff                 push -1
// 0058af18  51                   push ecx
// 0058af19  e87290fcff           call 0x553f90
// 0058af1e  83c408               add esp, 8
// 0058af21  50                   push eax
// 0058af22  8bcb                 mov ecx, ebx
// 0058af24  e8179c0000           call 0x594b40
// 0058af29  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058af2d  5f                   pop edi
// 0058af2e  8bc6                 mov eax, esi
// 0058af30  5e                   pop esi
// 0058af31  5b                   pop ebx
// 0058af32  64890d00000000       mov dword ptr fs:[0], ecx
// 0058af39  83c410               add esp, 0x10
// 0058af3c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
