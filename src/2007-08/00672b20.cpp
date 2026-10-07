// roc 2007-08 00672b20  unit: CXTPControlButtonColor  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672b20
//
// 00672b20  56                   push esi
// 00672b21  8bf1                 mov esi, ecx
// 00672b23  e8d874fcff           call 0x63a000
// 00672b28  8bc8                 mov ecx, eax
// 00672b2a  e8c1a3fcff           call 0x63cef0
// 00672b2f  83f817               cmp eax, 0x17
// 00672b32  7d16                 jge 0x672b4a
// 00672b34  8b442408             mov eax, dword ptr [esp + 8]
// 00672b38  b917000000           mov ecx, 0x17
// 00672b3d  c70094000000         mov dword ptr [eax], 0x94
// 00672b43  894804               mov dword ptr [eax + 4], ecx
// 00672b46  5e                   pop esi
// 00672b47  c20800               ret 8
// 00672b4a  8bce                 mov ecx, esi
// 00672b4c  e8af74fcff           call 0x63a000
// 00672b51  8bc8                 mov ecx, eax
// 00672b53  e898a3fcff           call 0x63cef0
// 00672b58  8bc8                 mov ecx, eax
// 00672b5a  8b442408             mov eax, dword ptr [esp + 8]
// 00672b5e  c70094000000         mov dword ptr [eax], 0x94
// 00672b64  894804               mov dword ptr [eax + 4], ecx
// 00672b67  5e                   pop esi
// 00672b68  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlPopupColor.cpp (function ?GetSize@CXTPControlButtonColor@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlPopupColor.cpp
