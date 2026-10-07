// roc 2012-06 009bf510  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf510
//
// 009bf510  8a442404             mov al, byte ptr [esp + 4]
// 009bf514  a80a                 test al, 0xa
// 009bf516  742f                 je 0x9bf547
// 009bf518  807c240800           cmp byte ptr [esp + 8], 0
// 009bf51d  752f                 jne 0x9bf54e
// 009bf51f  a808                 test al, 8
// 009bf521  752b                 jne 0x9bf54e
// 009bf523  f644240c20           test byte ptr [esp + 0xc], 0x20
// 009bf528  741d                 je 0x9bf547
// 009bf52a  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf52d  e87aa20d00           call 0xa997ac
// 009bf532  85c0                 test eax, eax
// 009bf534  7435                 je 0x9bf56b
// 009bf536  e825e3ffff           call 0x9bd860
// 009bf53b  6a08                 push 8
// 009bf53d  8bc8                 mov ecx, eax
// 009bf53f  e89cdaffff           call 0x9bcfe0
// 009bf544  c21000               ret 0x10
// 009bf547  8b442410             mov eax, dword ptr [esp + 0x10]
// 009bf54b  c21000               ret 0x10
// 009bf54e  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf551  e856a20d00           call 0xa997ac
// 009bf556  85c0                 test eax, eax
// 009bf558  7411                 je 0x9bf56b
// 009bf55a  e801e3ffff           call 0x9bd860
// 009bf55f  6a0e                 push 0xe
// 009bf561  8bc8                 mov ecx, eax
// 009bf563  e878daffff           call 0x9bcfe0
// 009bf568  c21000               ret 0x10
// 009bf56b  e8f0e2ffff           call 0x9bd860
// 009bf570  6a0f                 push 0xf
// 009bf572  8bc8                 mov ecx, eax
// 009bf574  e867daffff           call 0x9bcfe0
// 009bf579  c21000               ret 0x10
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetItemTextColor@CXTPTreeBase@@MBEKI_NKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
