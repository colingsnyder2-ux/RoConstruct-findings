// roc 2007-03 005abfc0  unit: seg_005a0000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abfc0
//
// 005abfc0  53                   push ebx
// 005abfc1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005abfc5  55                   push ebp
// 005abfc6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005abfca  56                   push esi
// 005abfcb  8d741b02             lea esi, [ebx + ebx + 2]
// 005abfcf  3bf5                 cmp esi, ebp
// 005abfd1  57                   push edi
// 005abfd2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005abfd6  895c2418             mov dword ptr [esp + 0x18], ebx
// 005abfda  7d2b                 jge 0x5ac007
// 005abfdc  8d642400             lea esp, [esp]
// 005abfe0  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 005abfe4  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 005abfe7  50                   push eax
// 005abfe8  51                   push ecx
// 005abfe9  ff54242c             call dword ptr [esp + 0x2c]
// 005abfed  83c408               add esp, 8
// 005abff0  84c0                 test al, al
// 005abff2  7403                 je 0x5abff7
// 005abff4  83ee01               sub esi, 1
// 005abff7  8b14b7               mov edx, dword ptr [edi + esi*4]
// 005abffa  89149f               mov dword ptr [edi + ebx*4], edx
// 005abffd  8bde                 mov ebx, esi
// 005abfff  8d743602             lea esi, [esi + esi + 2]
// 005ac003  3bf5                 cmp esi, ebp
// 005ac005  7cd9                 jl 0x5abfe0
// 005ac007  750a                 jne 0x5ac013
// 005ac009  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 005ac00d  89049f               mov dword ptr [edi + ebx*4], eax
// 005ac010  8d5dff               lea ebx, [ebp - 1]
// 005ac013  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ac017  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ac01b  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ac01f  51                   push ecx
// 005ac020  52                   push edx
// 005ac021  50                   push eax
// 005ac022  53                   push ebx
// 005ac023  57                   push edi
// 005ac024  e857feffff           call 0x5abe80
// 005ac029  83c414               add esp, 0x14
// 005ac02c  5f                   pop edi
// 005ac02d  5e                   pop esi
// 005ac02e  5d                   pop ebp
// 005ac02f  5b                   pop ebx
// 005ac030  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
