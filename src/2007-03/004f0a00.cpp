// roc 2007-03 004f0a00  unit: seg_004f0000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0a00
//
// 004f0a00  51                   push ecx
// 004f0a01  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f0a05  56                   push esi
// 004f0a06  8b742414             mov esi, dword ptr [esp + 0x14]
// 004f0a0a  8bc6                 mov eax, esi
// 004f0a0c  2bc1                 sub eax, ecx
// 004f0a0e  c1f802               sar eax, 2
// 004f0a11  83f828               cmp eax, 0x28
// 004f0a14  7e7a                 jle 0x4f0a90
// 004f0a16  83c001               add eax, 1
// 004f0a19  99                   cdq 
// 004f0a1a  53                   push ebx
// 004f0a1b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004f0a1f  83e207               and edx, 7
// 004f0a22  03c2                 add eax, edx
// 004f0a24  55                   push ebp
// 004f0a25  c1f803               sar eax, 3
// 004f0a28  57                   push edi
// 004f0a29  8d14c500000000       lea edx, [eax*8]
// 004f0a30  89542420             mov dword ptr [esp + 0x20], edx
// 004f0a34  53                   push ebx
// 004f0a35  8d3c8500000000       lea edi, [eax*4]
// 004f0a3c  03d1                 add edx, ecx
// 004f0a3e  8d040f               lea eax, [edi + ecx]
// 004f0a41  52                   push edx
// 004f0a42  50                   push eax
// 004f0a43  51                   push ecx
// 004f0a44  89442420             mov dword ptr [esp + 0x20], eax
// 004f0a48  e8e3feffff           call 0x4f0930
// 004f0a4d  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004f0a51  53                   push ebx
// 004f0a52  8d042f               lea eax, [edi + ebp]
// 004f0a55  50                   push eax
// 004f0a56  8bcd                 mov ecx, ebp
// 004f0a58  2bcf                 sub ecx, edi
// 004f0a5a  55                   push ebp
// 004f0a5b  51                   push ecx
// 004f0a5c  e8cffeffff           call 0x4f0930
// 004f0a61  53                   push ebx
// 004f0a62  8bc6                 mov eax, esi
// 004f0a64  2bc7                 sub eax, edi
// 004f0a66  56                   push esi
// 004f0a67  2b742448             sub esi, dword ptr [esp + 0x48]
// 004f0a6b  50                   push eax
// 004f0a6c  56                   push esi
// 004f0a6d  89442448             mov dword ptr [esp + 0x48], eax
// 004f0a71  e8bafeffff           call 0x4f0930
// 004f0a76  8b542448             mov edx, dword ptr [esp + 0x48]
// 004f0a7a  8b442440             mov eax, dword ptr [esp + 0x40]
// 004f0a7e  53                   push ebx
// 004f0a7f  52                   push edx
// 004f0a80  55                   push ebp
// 004f0a81  50                   push eax
// 004f0a82  e8a9feffff           call 0x4f0930
// 004f0a87  83c440               add esp, 0x40
// 004f0a8a  5f                   pop edi
// 004f0a8b  5d                   pop ebp
// 004f0a8c  5b                   pop ebx
// 004f0a8d  5e                   pop esi
// 004f0a8e  59                   pop ecx
// 004f0a8f  c3                   ret 
// 004f0a90  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f0a94  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f0a98  52                   push edx
// 004f0a99  56                   push esi
// 004f0a9a  50                   push eax
// 004f0a9b  51                   push ecx
// 004f0a9c  e88ffeffff           call 0x4f0930
// 004f0aa1  83c410               add esp, 0x10
// 004f0aa4  5e                   pop esi
// 004f0aa5  59                   pop ecx
// 004f0aa6  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Median@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
