// roc 2009-12 0084e860  unit: CXTPPropertyGrid  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e860
//
// 0084e860  6aff                 push -1
// 0084e862  68b8d69500           push 0x95d6b8
// 0084e867  64a100000000         mov eax, dword ptr fs:[0]
// 0084e86d  50                   push eax
// 0084e86e  83ec08               sub esp, 8
// 0084e871  53                   push ebx
// 0084e872  55                   push ebp
// 0084e873  56                   push esi
// 0084e874  57                   push edi
// 0084e875  a10052b600           mov eax, dword ptr [0xb65200]
// 0084e87a  33c4                 xor eax, esp
// 0084e87c  50                   push eax
// 0084e87d  8d44241c             lea eax, [esp + 0x1c]
// 0084e881  64a300000000         mov dword ptr fs:[0], eax
// 0084e887  8bf9                 mov edi, ecx
// 0084e889  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084e88c  50                   push eax
// 0084e88d  ff15e0cb9800         call dword ptr [0x98cbe0]
// 0084e893  50                   push eax
// 0084e894  e8977b0d00           call 0x926430
// 0084e899  8bf0                 mov esi, eax
// 0084e89b  e83011feff           call 0x82f9d0
// 0084e8a0  6a0f                 push 0xf
// 0084e8a2  8bc8                 mov ecx, eax
// 0084e8a4  e85708feff           call 0x82f100
// 0084e8a9  50                   push eax
// 0084e8aa  8d4c2418             lea ecx, [esp + 0x18]
// 0084e8ae  e81f7c0d00           call 0x9264d2
// 0084e8b3  8d4c2414             lea ecx, [esp + 0x14]
// 0084e8b7  51                   push ecx
// 0084e8b8  8bce                 mov ecx, esi
// 0084e8ba  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0084e8c2  e8057c0d00           call 0x9264cc
// 0084e8c7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084e8cb  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0084e8cf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084e8d3  8bd8                 mov ebx, eax
// 0084e8d5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0084e8d9  6849005a00           push 0x5a0049
// 0084e8de  2bc2                 sub eax, edx
// 0084e8e0  50                   push eax
// 0084e8e1  2bcd                 sub ecx, ebp
// 0084e8e3  51                   push ecx
// 0084e8e4  52                   push edx
// 0084e8e5  8b5604               mov edx, dword ptr [esi + 4]
// 0084e8e8  55                   push ebp
// 0084e8e9  52                   push edx
// 0084e8ea  ff1508b19800         call dword ptr [0x98b108]
// 0084e8f0  53                   push ebx
// 0084e8f1  8bce                 mov ecx, esi
// 0084e8f3  e8d47b0d00           call 0x9264cc
// 0084e8f8  8b4604               mov eax, dword ptr [esi + 4]
// 0084e8fb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0084e8fe  50                   push eax
// 0084e8ff  51                   push ecx
// 0084e900  ff15d8cb9800         call dword ptr [0x98cbd8]
// 0084e906  8d4c2414             lea ecx, [esp + 0x14]
// 0084e90a  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0084e912  c744241448189a00     mov dword ptr [esp + 0x14], 0x9a1848
// 0084e91a  e81109bcff           call 0x40f230
// 0084e91f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084e923  64890d00000000       mov dword ptr fs:[0], ecx
// 0084e92a  59                   pop ecx
// 0084e92b  5f                   pop edi
// 0084e92c  5e                   pop esi
// 0084e92d  5d                   pop ebp
// 0084e92e  5b                   pop ebx
// 0084e92f  83c414               add esp, 0x14
// 0084e932  c21000               ret 0x10
// copied from an identical function in another client (function ?OnInvertTracker@CXTPPropertyGrid@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp