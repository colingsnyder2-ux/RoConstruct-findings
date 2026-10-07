// roc 2012-06 005617c0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005617c0
//
// 005617c0  668b542404           mov dx, word ptr [esp + 4]
// 005617c5  8bc1                 mov eax, ecx
// 005617c7  33c9                 xor ecx, ecx
// 005617c9  668910               mov word ptr [eax], dx
// 005617cc  8b542408             mov edx, dword ptr [esp + 8]
// 005617d0  66894824             mov word ptr [eax + 0x24], cx
// 005617d4  3bd1                 cmp edx, ecx
// 005617d6  7423                 je 0x5617fb
// 005617d8  53                   push ebx
// 005617d9  56                   push esi
// 005617da  8d7002               lea esi, [eax + 2]
// 005617dd  2bf2                 sub esi, edx
// 005617df  90                   nop 
// 005617e0  8a1a                 mov bl, byte ptr [edx]
// 005617e2  881c16               mov byte ptr [esi + edx], bl
// 005617e5  42                   inc edx
// 005617e6  3ad9                 cmp bl, cl
// 005617e8  75f6                 jne 0x5617e0
// 005617ea  894828               mov dword ptr [eax + 0x28], ecx
// 005617ed  5e                   pop esi
// 005617ee  b902000000           mov ecx, 2
// 005617f3  5b                   pop ebx
// 005617f4  66894822             mov word ptr [eax + 0x22], cx
// 005617f8  c20800               ret 8
// 005617fb  884802               mov byte ptr [eax + 2], cl
// 005617fe  894828               mov dword ptr [eax + 0x28], ecx
// 00561801  b902000000           mov ecx, 2
// 00561806  66894822             mov word ptr [eax + 0x22], cx
// 0056180a  c20800               ret 8
// library rbx2016-raknet/RakNetTypes.cpp (function ??0SocketDescriptor@RakNet@@QAE@GPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
