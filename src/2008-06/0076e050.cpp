// roc 2008-06 0076e050  unit: CXTPShadowsManager::CShadowWnd  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e050
//
// 0076e050  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0076e054  85c9                 test ecx, ecx
// 0076e056  745a                 je 0x76e0b2
// 0076e058  8b442408             mov eax, dword ptr [esp + 8]
// 0076e05c  85c0                 test eax, eax
// 0076e05e  7652                 jbe 0x76e0b2
// 0076e060  56                   push esi
// 0076e061  57                   push edi
// 0076e062  41                   inc ecx
// 0076e063  8bf8                 mov edi, eax
// 0076e065  8379ff00             cmp dword ptr [ecx - 1], 0
// 0076e069  7507                 jne 0x76e072
// 0076e06b  c741fffffeff00       mov dword ptr [ecx - 1], 0xfffeff
// 0076e072  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0076e076  85f6                 test esi, esi
// 0076e078  742e                 je 0x76e0a8
// 0076e07a  0fb641ff             movzx eax, byte ptr [ecx - 1]
// 0076e07e  69c0ff000000         imul eax, eax, 0xff
// 0076e084  99                   cdq 
// 0076e085  f7fe                 idiv esi
// 0076e087  8841ff               mov byte ptr [ecx - 1], al
// 0076e08a  0fb601               movzx eax, byte ptr [ecx]
// 0076e08d  69c0ff000000         imul eax, eax, 0xff
// 0076e093  99                   cdq 
// 0076e094  f7fe                 idiv esi
// 0076e096  8801                 mov byte ptr [ecx], al
// 0076e098  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0076e09c  69c0ff000000         imul eax, eax, 0xff
// 0076e0a2  99                   cdq 
// 0076e0a3  f7fe                 idiv esi
// 0076e0a5  884101               mov byte ptr [ecx + 1], al
// 0076e0a8  83c104               add ecx, 4
// 0076e0ab  83ef01               sub edi, 1
// 0076e0ae  75b5                 jne 0x76e065
// 0076e0b0  5f                   pop edi
// 0076e0b1  5e                   pop esi
// 0076e0b2  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?FixAlphaLayer@CXTPImageEditorDlg@@AAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
