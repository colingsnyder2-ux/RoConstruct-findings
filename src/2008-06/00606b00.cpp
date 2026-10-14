// roc 2008-06 00606b00  unit: RBX::ContactConnector  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606b00
//
// 00606b00  56                   push esi
// 00606b01  8b742408             mov esi, dword ptr [esp + 8]
// 00606b05  83fe0c               cmp esi, 0xc
// 00606b08  7d2f                 jge 0x606b39
// 00606b0a  8bc6                 mov eax, esi
// 00606b0c  99                   cdq 
// 00606b0d  83e203               and edx, 3
// 00606b10  03c2                 add eax, edx
// 00606b12  c1f802               sar eax, 2
// 00606b15  81e603000080         and esi, 0x80000003
// 00606b1b  7905                 jns 0x606b22
// 00606b1d  4e                   dec esi
// 00606b1e  83cefc               or esi, 0xfffffffc
// 00606b21  46                   inc esi
// 00606b22  8d0486               lea eax, [esi + eax*4]
// 00606b25  8b0485c8ae8400       mov eax, dword ptr [eax*4 + 0x84aec8]
// 00606b2c  8d1440               lea edx, [eax + eax*2]
// 00606b2f  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00606b32  8d0490               lea eax, [eax + edx*4]
// 00606b35  5e                   pop esi
// 00606b36  c20400               ret 4
// 00606b39  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00606b3c  83c6f4               add esi, -0xc
// 00606b3f  8bc6                 mov eax, esi
// 00606b41  99                   cdq 
// 00606b42  83e203               and edx, 3
// 00606b45  03c2                 add eax, edx
// 00606b47  c1f802               sar eax, 2
// 00606b4a  8d1486               lea edx, [esi + eax*4]
// 00606b4d  8b0495ccae8400       mov eax, dword ptr [edx*4 + 0x84aecc]
// 00606b54  8d0440               lea eax, [eax + eax*2]
// 00606b57  8d0481               lea eax, [ecx + eax*4]
// 00606b5a  5e                   pop esi
// 00606b5b  c20400               ret 4
// library openrbx-client/App\v8world\Contact.cpp (function ?getEdgeVertex@Block@RBX@@QBEPBVVector3@G3D@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Contact.cpp
