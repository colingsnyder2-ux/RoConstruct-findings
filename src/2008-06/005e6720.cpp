// roc 2008-06 005e6720  unit: RBX::Clump  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6720
//
// 005e6720  53                   push ebx
// 005e6721  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005e6725  55                   push ebp
// 005e6726  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005e672a  56                   push esi
// 005e672b  8d741b02             lea esi, [ebx + ebx + 2]
// 005e672f  3bf5                 cmp esi, ebp
// 005e6731  57                   push edi
// 005e6732  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005e6736  895c2418             mov dword ptr [esp + 0x18], ebx
// 005e673a  7d29                 jge 0x5e6765
// 005e673c  8d642400             lea esp, [esp]
// 005e6740  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 005e6744  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 005e6747  50                   push eax
// 005e6748  51                   push ecx
// 005e6749  ff54242c             call dword ptr [esp + 0x2c]
// 005e674d  83c408               add esp, 8
// 005e6750  84c0                 test al, al
// 005e6752  7401                 je 0x5e6755
// 005e6754  4e                   dec esi
// 005e6755  8b14b7               mov edx, dword ptr [edi + esi*4]
// 005e6758  89149f               mov dword ptr [edi + ebx*4], edx
// 005e675b  8bde                 mov ebx, esi
// 005e675d  8d743602             lea esi, [esi + esi + 2]
// 005e6761  3bf5                 cmp esi, ebp
// 005e6763  7cdb                 jl 0x5e6740
// 005e6765  750a                 jne 0x5e6771
// 005e6767  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 005e676b  89049f               mov dword ptr [edi + ebx*4], eax
// 005e676e  8d5dff               lea ebx, [ebp - 1]
// 005e6771  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e6775  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e6779  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e677d  51                   push ecx
// 005e677e  52                   push edx
// 005e677f  50                   push eax
// 005e6780  53                   push ebx
// 005e6781  57                   push edi
// 005e6782  e859faffff           call 0x5e61e0
// 005e6787  83c414               add esp, 0x14
// 005e678a  5f                   pop edi
// 005e678b  5e                   pop esi
// 005e678c  5d                   pop ebp
// 005e678d  5b                   pop ebx
// 005e678e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
