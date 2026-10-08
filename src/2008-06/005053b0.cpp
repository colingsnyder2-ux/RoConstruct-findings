// from server: 100% by auto
// roc 2008-06 005053b0  unit: RBX::Render::RenderScene  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005053b0
//
// 005053b0  51                   push ecx
// 005053b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005053b5  56                   push esi
// 005053b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 005053ba  8bc6                 mov eax, esi
// 005053bc  2bc1                 sub eax, ecx
// 005053be  c1f802               sar eax, 2
// 005053c1  83f828               cmp eax, 0x28
// 005053c4  7e78                 jle 0x50543e
// 005053c6  40                   inc eax
// 005053c7  99                   cdq 
// 005053c8  53                   push ebx
// 005053c9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005053cd  83e207               and edx, 7
// 005053d0  03c2                 add eax, edx
// 005053d2  55                   push ebp
// 005053d3  c1f803               sar eax, 3
// 005053d6  57                   push edi
// 005053d7  8d14c500000000       lea edx, [eax*8]
// 005053de  89542420             mov dword ptr [esp + 0x20], edx
// 005053e2  53                   push ebx
// 005053e3  8d3c8500000000       lea edi, [eax*4]
// 005053ea  03d1                 add edx, ecx
// 005053ec  8d040f               lea eax, [edi + ecx]
// 005053ef  52                   push edx
// 005053f0  50                   push eax
// 005053f1  51                   push ecx
// 005053f2  89442420             mov dword ptr [esp + 0x20], eax
// 005053f6  e8e5feffff           call 0x5052e0
// 005053fb  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005053ff  53                   push ebx
// 00505400  8d042f               lea eax, [edi + ebp]
// 00505403  50                   push eax
// 00505404  8bcd                 mov ecx, ebp
// 00505406  2bcf                 sub ecx, edi
// 00505408  55                   push ebp
// 00505409  51                   push ecx
// 0050540a  e8d1feffff           call 0x5052e0
// 0050540f  53                   push ebx
// 00505410  8bc6                 mov eax, esi
// 00505412  2bc7                 sub eax, edi
// 00505414  56                   push esi
// 00505415  2b742448             sub esi, dword ptr [esp + 0x48]
// 00505419  50                   push eax
// 0050541a  56                   push esi
// 0050541b  89442448             mov dword ptr [esp + 0x48], eax
// 0050541f  e8bcfeffff           call 0x5052e0
// 00505424  8b542448             mov edx, dword ptr [esp + 0x48]
// 00505428  8b442440             mov eax, dword ptr [esp + 0x40]
// 0050542c  53                   push ebx
// 0050542d  52                   push edx
// 0050542e  55                   push ebp
// 0050542f  50                   push eax
// 00505430  e8abfeffff           call 0x5052e0
// 00505435  83c440               add esp, 0x40
// 00505438  5f                   pop edi
// 00505439  5d                   pop ebp
// 0050543a  5b                   pop ebx
// 0050543b  5e                   pop esi
// 0050543c  59                   pop ecx
// 0050543d  c3                   ret 
// 0050543e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00505442  8b442410             mov eax, dword ptr [esp + 0x10]
// 00505446  52                   push edx
// 00505447  56                   push esi
// 00505448  50                   push eax
// 00505449  51                   push ecx
// 0050544a  e891feffff           call 0x5052e0
// 0050544f  83c410               add esp, 0x10
// 00505452  5e                   pop esi
// 00505453  59                   pop ecx
// 00505454  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Median@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@P6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
