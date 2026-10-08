// roc 2011-06 006a1d40  unit: RBX::Assembly  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1d40
//
// 006a1d40  53                   push ebx
// 006a1d41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006a1d45  55                   push ebp
// 006a1d46  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006a1d4a  56                   push esi
// 006a1d4b  8d741b02             lea esi, [ebx + ebx + 2]
// 006a1d4f  3bf5                 cmp esi, ebp
// 006a1d51  57                   push edi
// 006a1d52  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a1d56  895c2418             mov dword ptr [esp + 0x18], ebx
// 006a1d5a  7d29                 jge 0x6a1d85
// 006a1d5c  8d642400             lea esp, [esp]
// 006a1d60  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 006a1d64  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 006a1d67  50                   push eax
// 006a1d68  51                   push ecx
// 006a1d69  ff54242c             call dword ptr [esp + 0x2c]
// 006a1d6d  83c408               add esp, 8
// 006a1d70  84c0                 test al, al
// 006a1d72  7401                 je 0x6a1d75
// 006a1d74  4e                   dec esi
// 006a1d75  8b14b7               mov edx, dword ptr [edi + esi*4]
// 006a1d78  89149f               mov dword ptr [edi + ebx*4], edx
// 006a1d7b  8bde                 mov ebx, esi
// 006a1d7d  8d743602             lea esi, [esi + esi + 2]
// 006a1d81  3bf5                 cmp esi, ebp
// 006a1d83  7cdb                 jl 0x6a1d60
// 006a1d85  750a                 jne 0x6a1d91
// 006a1d87  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 006a1d8b  89049f               mov dword ptr [edi + ebx*4], eax
// 006a1d8e  8d5dff               lea ebx, [ebp - 1]
// 006a1d91  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a1d95  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a1d99  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a1d9d  51                   push ecx
// 006a1d9e  52                   push edx
// 006a1d9f  50                   push eax
// 006a1da0  53                   push ebx
// 006a1da1  57                   push edi
// 006a1da2  e8e9fdffff           call 0x6a1b90
// 006a1da7  83c414               add esp, 0x14
// 006a1daa  5f                   pop edi
// 006a1dab  5e                   pop esi
// 006a1dac  5d                   pop ebp
// 006a1dad  5b                   pop ebx
// 006a1dae  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
