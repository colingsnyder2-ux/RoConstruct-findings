// roc 2008-06 005e18c0  unit: RBX::VLighting::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e18c0
//
// 005e18c0  6aff                 push -1
// 005e18c2  6843797c00           push 0x7c7943
// 005e18c7  64a100000000         mov eax, dword ptr fs:[0]
// 005e18cd  50                   push eax
// 005e18ce  64892500000000       mov dword ptr fs:[0], esp
// 005e18d5  51                   push ecx
// 005e18d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e18da  53                   push ebx
// 005e18db  56                   push esi
// 005e18dc  57                   push edi
// 005e18dd  8bf1                 mov esi, ecx
// 005e18df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e18e3  50                   push eax
// 005e18e4  51                   push ecx
// 005e18e5  89742414             mov dword ptr [esp + 0x14], esi
// 005e18e9  e812f8ffff           call 0x5e1100
// 005e18ee  50                   push eax
// 005e18ef  8bce                 mov ecx, esi
// 005e18f1  e89a3efbff           call 0x595790
// 005e18f6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e18fa  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e18fe  8d7e40               lea edi, [esi + 0x40]
// 005e1901  8bcf                 mov ecx, edi
// 005e1903  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e190b  c70624de8300         mov dword ptr [esi], 0x83de24
// 005e1911  895638               mov dword ptr [esi + 0x38], edx
// 005e1914  89463c               mov dword ptr [esi + 0x3c], eax
// 005e1917  e8a431fbff           call 0x594ac0
// 005e191c  c644241801           mov byte ptr [esp + 0x18], 1
// 005e1921  8d5e14               lea ebx, [esi + 0x14]
// 005e1924  e82731fbff           call 0x594a50
// 005e1929  57                   push edi
// 005e192a  8903                 mov dword ptr [ebx], eax
// 005e192c  e8dfb3f8ff           call 0x56cd10
// 005e1931  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e1935  50                   push eax
// 005e1936  6aff                 push -1
// 005e1938  51                   push ecx
// 005e1939  e85226f7ff           call 0x553f90
// 005e193e  83c408               add esp, 8
// 005e1941  50                   push eax
// 005e1942  8bcb                 mov ecx, ebx
// 005e1944  e8f731fbff           call 0x594b40
// 005e1949  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e194d  5f                   pop edi
// 005e194e  8bc6                 mov eax, esi
// 005e1950  5e                   pop esi
// 005e1951  5b                   pop ebx
// 005e1952  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1959  83c410               add esp, 0x10
// 005e195c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
