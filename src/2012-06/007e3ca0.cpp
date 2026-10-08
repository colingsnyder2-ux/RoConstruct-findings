// roc 2012-06 007e3ca0  unit: RBX::Assembly  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e3ca0
//
// 007e3ca0  53                   push ebx
// 007e3ca1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007e3ca5  55                   push ebp
// 007e3ca6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007e3caa  56                   push esi
// 007e3cab  8d741b02             lea esi, [ebx + ebx + 2]
// 007e3caf  3bf5                 cmp esi, ebp
// 007e3cb1  57                   push edi
// 007e3cb2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007e3cb6  895c2418             mov dword ptr [esp + 0x18], ebx
// 007e3cba  7d29                 jge 0x7e3ce5
// 007e3cbc  8d642400             lea esp, [esp]
// 007e3cc0  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 007e3cc4  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 007e3cc7  50                   push eax
// 007e3cc8  51                   push ecx
// 007e3cc9  ff54242c             call dword ptr [esp + 0x2c]
// 007e3ccd  83c408               add esp, 8
// 007e3cd0  84c0                 test al, al
// 007e3cd2  7401                 je 0x7e3cd5
// 007e3cd4  4e                   dec esi
// 007e3cd5  8b14b7               mov edx, dword ptr [edi + esi*4]
// 007e3cd8  89149f               mov dword ptr [edi + ebx*4], edx
// 007e3cdb  8bde                 mov ebx, esi
// 007e3cdd  8d743602             lea esi, [esi + esi + 2]
// 007e3ce1  3bf5                 cmp esi, ebp
// 007e3ce3  7cdb                 jl 0x7e3cc0
// 007e3ce5  750a                 jne 0x7e3cf1
// 007e3ce7  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 007e3ceb  89049f               mov dword ptr [edi + ebx*4], eax
// 007e3cee  8d5dff               lea ebx, [ebp - 1]
// 007e3cf1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007e3cf5  8b542420             mov edx, dword ptr [esp + 0x20]
// 007e3cf9  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e3cfd  51                   push ecx
// 007e3cfe  52                   push edx
// 007e3cff  50                   push eax
// 007e3d00  53                   push ebx
// 007e3d01  57                   push edi
// 007e3d02  e8e9fcffff           call 0x7e39f0
// 007e3d07  83c414               add esp, 0x14
// 007e3d0a  5f                   pop edi
// 007e3d0b  5e                   pop esi
// 007e3d0c  5d                   pop ebp
// 007e3d0d  5b                   pop ebx
// 007e3d0e  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
