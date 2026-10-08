// roc 2008-06 004a97e0  unit: seg_004a0000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a97e0
//
// 004a97e0  8b542408             mov edx, dword ptr [esp + 8]
// 004a97e4  8bc1                 mov eax, ecx
// 004a97e6  668b4c2404           mov cx, word ptr [esp + 4]
// 004a97eb  668908               mov word ptr [eax], cx
// 004a97ee  85d2                 test edx, edx
// 004a97f0  741d                 je 0x4a980f
// 004a97f2  53                   push ebx
// 004a97f3  56                   push esi
// 004a97f4  8d7002               lea esi, [eax + 2]
// 004a97f7  2bf2                 sub esi, edx
// 004a97f9  8da42400000000       lea esp, [esp]
// 004a9800  8a1a                 mov bl, byte ptr [edx]
// 004a9802  881c16               mov byte ptr [esi + edx], bl
// 004a9805  42                   inc edx
// 004a9806  84db                 test bl, bl
// 004a9808  75f6                 jne 0x4a9800
// 004a980a  5e                   pop esi
// 004a980b  5b                   pop ebx
// 004a980c  c20800               ret 8
// 004a980f  c6400200             mov byte ptr [eax + 2], 0
// 004a9813  c20800               ret 8
// library rbxgs-raknet/RakNetTypes.cpp (function ??0SocketDescriptor@@QAE@GPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
