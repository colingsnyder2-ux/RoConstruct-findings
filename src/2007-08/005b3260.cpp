// roc 2007-08 005b3260  unit: RBX::Assembly  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3260
//
// 005b3260  53                   push ebx
// 005b3261  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005b3265  55                   push ebp
// 005b3266  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005b326a  56                   push esi
// 005b326b  8d741b02             lea esi, [ebx + ebx + 2]
// 005b326f  3bf5                 cmp esi, ebp
// 005b3271  57                   push edi
// 005b3272  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005b3276  895c2418             mov dword ptr [esp + 0x18], ebx
// 005b327a  7d2b                 jge 0x5b32a7
// 005b327c  8d642400             lea esp, [esp]
// 005b3280  8b44b7fc             mov eax, dword ptr [edi + esi*4 - 4]
// 005b3284  8b0cb7               mov ecx, dword ptr [edi + esi*4]
// 005b3287  50                   push eax
// 005b3288  51                   push ecx
// 005b3289  ff54242c             call dword ptr [esp + 0x2c]
// 005b328d  83c408               add esp, 8
// 005b3290  84c0                 test al, al
// 005b3292  7403                 je 0x5b3297
// 005b3294  83ee01               sub esi, 1
// 005b3297  8b14b7               mov edx, dword ptr [edi + esi*4]
// 005b329a  89149f               mov dword ptr [edi + ebx*4], edx
// 005b329d  8bde                 mov ebx, esi
// 005b329f  8d743602             lea esi, [esi + esi + 2]
// 005b32a3  3bf5                 cmp esi, ebp
// 005b32a5  7cd9                 jl 0x5b3280
// 005b32a7  750a                 jne 0x5b32b3
// 005b32a9  8b44affc             mov eax, dword ptr [edi + ebp*4 - 4]
// 005b32ad  89049f               mov dword ptr [edi + ebx*4], eax
// 005b32b0  8d5dff               lea ebx, [ebp - 1]
// 005b32b3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b32b7  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b32bb  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b32bf  51                   push ecx
// 005b32c0  52                   push edx
// 005b32c1  50                   push eax
// 005b32c2  53                   push ebx
// 005b32c3  57                   push edi
// 005b32c4  e887feffff           call 0x5b3150
// 005b32c9  83c414               add esp, 0x14
// 005b32cc  5f                   pop edi
// 005b32cd  5e                   pop esi
// 005b32ce  5d                   pop ebp
// 005b32cf  5b                   pop ebx
// 005b32d0  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Adjust_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@HHPAV12@P6A_NPBV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
