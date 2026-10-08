// roc 2009-06 00568eb0  unit: RBX::RbxG3D::RenderScene  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568eb0
//
// 00568eb0  56                   push esi
// 00568eb1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00568eb5  57                   push edi
// 00568eb6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00568eba  2bf7                 sub esi, edi
// 00568ebc  8bc6                 mov eax, esi
// 00568ebe  c1f802               sar eax, 2
// 00568ec1  83f801               cmp eax, 1
// 00568ec4  7e31                 jle 0x568ef7
// 00568ec6  53                   push ebx
// 00568ec7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00568ecb  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 00568ecf  8b0f                 mov ecx, dword ptr [edi]
// 00568ed1  53                   push ebx
// 00568ed2  50                   push eax
// 00568ed3  8d56fc               lea edx, [esi - 4]
// 00568ed6  c1fa02               sar edx, 2
// 00568ed9  52                   push edx
// 00568eda  6a00                 push 0
// 00568edc  57                   push edi
// 00568edd  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 00568ee1  e8dafbffff           call 0x568ac0
// 00568ee6  83ee04               sub esi, 4
// 00568ee9  8bc6                 mov eax, esi
// 00568eeb  c1f802               sar eax, 2
// 00568eee  83c414               add esp, 0x14
// 00568ef1  83f801               cmp eax, 1
// 00568ef4  7fd5                 jg 0x568ecb
// 00568ef6  5b                   pop ebx
// 00568ef7  5f                   pop edi
// 00568ef8  5e                   pop esi
// 00568ef9  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
