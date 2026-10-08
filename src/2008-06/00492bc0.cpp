// roc 2008-06 00492bc0  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492bc0
//
// 00492bc0  6aff                 push -1
// 00492bc2  6843797c00           push 0x7c7943
// 00492bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00492bcd  50                   push eax
// 00492bce  64892500000000       mov dword ptr fs:[0], esp
// 00492bd5  51                   push ecx
// 00492bd6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00492bda  53                   push ebx
// 00492bdb  56                   push esi
// 00492bdc  57                   push edi
// 00492bdd  8bf1                 mov esi, ecx
// 00492bdf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00492be3  50                   push eax
// 00492be4  51                   push ecx
// 00492be5  89742414             mov dword ptr [esp + 0x14], esi
// 00492be9  e872e7ffff           call 0x491360
// 00492bee  50                   push eax
// 00492bef  8bce                 mov ecx, esi
// 00492bf1  e89a2b1000           call 0x595790
// 00492bf6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00492bfa  8b442424             mov eax, dword ptr [esp + 0x24]
// 00492bfe  8d7e40               lea edi, [esi + 0x40]
// 00492c01  8bcf                 mov ecx, edi
// 00492c03  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00492c0b  c706c01d8200         mov dword ptr [esi], 0x821dc0
// 00492c11  895638               mov dword ptr [esi + 0x38], edx
// 00492c14  89463c               mov dword ptr [esi + 0x3c], eax
// 00492c17  e8a41e1000           call 0x594ac0
// 00492c1c  c644241801           mov byte ptr [esp + 0x18], 1
// 00492c21  8d5e14               lea ebx, [esi + 0x14]
// 00492c24  e8271e1000           call 0x594a50
// 00492c29  57                   push edi
// 00492c2a  8903                 mov dword ptr [ebx], eax
// 00492c2c  e8ff9f0d00           call 0x56cc30
// 00492c31  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00492c35  50                   push eax
// 00492c36  6aff                 push -1
// 00492c38  51                   push ecx
// 00492c39  e852130c00           call 0x553f90
// 00492c3e  83c408               add esp, 8
// 00492c41  50                   push eax
// 00492c42  8bcb                 mov ecx, ebx
// 00492c44  e8f71e1000           call 0x594b40
// 00492c49  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00492c4d  5f                   pop edi
// 00492c4e  8bc6                 mov eax, esi
// 00492c50  5e                   pop esi
// 00492c51  5b                   pop ebx
// 00492c52  64890d00000000       mov dword ptr fs:[0], ecx
// 00492c59  83c410               add esp, 0x10
// 00492c5c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
