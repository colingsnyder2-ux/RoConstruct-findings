// roc 2009-06 00693950  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693950
//
// 00693950  6aff                 push -1
// 00693952  6868eb8600           push 0x86eb68
// 00693957  64a100000000         mov eax, dword ptr fs:[0]
// 0069395d  50                   push eax
// 0069395e  64892500000000       mov dword ptr fs:[0], esp
// 00693965  83ec08               sub esp, 8
// 00693968  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069396c  56                   push esi
// 0069396d  57                   push edi
// 0069396e  8bf1                 mov esi, ecx
// 00693970  89742408             mov dword ptr [esp + 8], esi
// 00693974  50                   push eax
// 00693975  51                   push ecx
// 00693976  8bc4                 mov eax, esp
// 00693978  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693980  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693988  89642414             mov dword ptr [esp + 0x14], esp
// 0069398c  c70000000000         mov dword ptr [eax], 0
// 00693992  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693996  8b542428             mov edx, dword ptr [esp + 0x28]
// 0069399a  51                   push ecx
// 0069399b  52                   push edx
// 0069399c  c644242801           mov byte ptr [esp + 0x28], 1
// 006939a1  e80a82f5ff           call 0x5ebbb0
// 006939a6  50                   push eax
// 006939a7  8bce                 mov ecx, esi
// 006939a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006939ae  e84dc7daff           call 0x440100
// 006939b3  6a00                 push 0
// 006939b5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006939ba  e873500800           call 0x718a32
// 006939bf  6a18                 push 0x18
// 006939c1  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 006939c7  e86c500800           call 0x718a38
// 006939cc  83c408               add esp, 8
// 006939cf  85c0                 test eax, eax
// 006939d1  741e                 je 0x6939f1
// 006939d3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006939d7  33c9                 xor ecx, ecx
// 006939d9  33d2                 xor edx, edx
// 006939db  897808               mov dword ptr [eax + 8], edi
// 006939de  c7003c708e00         mov dword ptr [eax], 0x8e703c
// 006939e4  897004               mov dword ptr [eax + 4], esi
// 006939e7  894810               mov dword ptr [eax + 0x10], ecx
// 006939ea  895014               mov dword ptr [eax + 0x14], edx
// 006939ed  8bf8                 mov edi, eax
// 006939ef  eb02                 jmp 0x6939f3
// 006939f1  33ff                 xor edi, edi
// 006939f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006939f6  3bf8                 cmp edi, eax
// 006939f8  7409                 je 0x693a03
// 006939fa  50                   push eax
// 006939fb  e832500800           call 0x718a32
// 00693a00  83c404               add esp, 4
// 00693a03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693a07  897e18               mov dword ptr [esi + 0x18], edi
// 00693a0a  5f                   pop edi
// 00693a0b  8bc6                 mov eax, esi
// 00693a0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00693a14  5e                   pop esi
// 00693a15  83c414               add esp, 0x14
// 00693a18  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
