// roc 2009-12 00701540  unit: RBX::Assembly  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00701540
//
// 00701540  53                   push ebx
// 00701541  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00701545  55                   push ebp
// 00701546  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0070154a  56                   push esi
// 0070154b  8d741b02             lea esi, [ebx + ebx + 2]
// 0070154f  3bf5                 cmp esi, ebp
// 00701551  57                   push edi
// 00701552  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00701556  895c2418             mov dword ptr [esp + 0x18], ebx
// 0070155a  7d29                 jge 0x701585
// 0070155c  8d642400             lea esp, [esp]
// 00701560  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 00701564  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 00701567  50                   push eax
// 00701568  51                   push ecx
// 00701569  ff54242c             call dword ptr [esp + 0x2c]
// 0070156d  83c408               add esp, 8
// 00701570  84c0                 test al, al
// 00701572  7401                 je 0x701575
// 00701574  4e                   dec esi
// 00701575  8b14b7               mov edx, dword ptr [edi + esi*4]
// 00701578  89149f               mov dword ptr [edi + ebx*4], edx
// 0070157b  8bde                 mov ebx, esi
// 0070157d  8d743602             lea esi, [esi + esi + 2]
// 00701581  3bf5                 cmp esi, ebp
// 00701583  7cdb                 jl 0x701560
// 00701585  750a                 jne 0x701591
// 00701587  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 0070158b  89049f               mov dword ptr [edi + ebx*4], eax
// 0070158e  8d5dff               lea ebx, [ebp - 1]
// 00701591  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00701595  8b542420             mov edx, dword ptr [esp + 0x20]
// 00701599  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070159d  51                   push ecx
// 0070159e  52                   push edx
// 0070159f  50                   push eax
// 007015a0  53                   push ebx
// 007015a1  57                   push edi
// 007015a2  e8e9fbffff           call 0x701190
// 007015a7  83c414               add esp, 0x14
// 007015aa  5f                   pop edi
// 007015ab  5e                   pop esi
// 007015ac  5d                   pop ebp
// 007015ad  5b                   pop ebx
// 007015ae  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
