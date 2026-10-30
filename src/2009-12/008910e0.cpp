// roc 2009-12 008910e0  unit: ATL::CRegObject  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008910e0
//
// 008910e0  8b4108               mov eax, dword ptr [ecx + 8]
// 008910e3  33d2                 xor edx, edx
// 008910e5  85c0                 test eax, eax
// 008910e7  7e3d                 jle 0x891126
// 008910e9  56                   push esi
// 008910ea  53                   push ebx
// 008910eb  33f6                 xor esi, esi
// 008910ed  57                   push edi
// 008910ee  8bff                 mov edi, edi
// 008910f0  85f6                 test esi, esi
// 008910f2  7c33                 jl 0x891127
// 008910f4  3bd0                 cmp edx, eax
// 008910f6  7d2f                 jge 0x891127
// 008910f8  8b4104               mov eax, dword ptr [ecx + 4]
// 008910fb  8b5c3004             mov ebx, dword ptr [eax + esi + 4]
// 008910ff  8b7c3008             mov edi, dword ptr [eax + esi + 8]
// 00891103  8d443004             lea eax, [eax + esi + 4]
// 00891107  895804               mov dword ptr [eax + 4], ebx
// 0089110a  8938                 mov dword ptr [eax], edi
// 0089110c  8b5808               mov ebx, dword ptr [eax + 8]
// 0089110f  8b780c               mov edi, dword ptr [eax + 0xc]
// 00891112  89580c               mov dword ptr [eax + 0xc], ebx
// 00891115  897808               mov dword ptr [eax + 8], edi
// 00891118  8b4108               mov eax, dword ptr [ecx + 8]
// 0089111b  42                   inc edx
// 0089111c  83c630               add esi, 0x30
// 0089111f  3bd0                 cmp edx, eax
// 00891121  7ccd                 jl 0x8910f0
// 00891123  5f                   pop edi
// 00891124  5b                   pop ebx
// 00891125  5e                   pop esi
// 00891126  c3                   ret 
// 00891127  e8e029f6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?InvertRects@CDockInfoArray@CXTPDockBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockBar.cpp