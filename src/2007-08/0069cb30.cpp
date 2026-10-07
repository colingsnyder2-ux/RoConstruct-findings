// roc 2007-08 0069cb30  unit: CXTPPropertyGridView  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cb30
//
// 0069cb30  56                   push esi
// 0069cb31  57                   push edi
// 0069cb32  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0069cb36  8d44240c             lea eax, [esp + 0xc]
// 0069cb3a  50                   push eax
// 0069cb3b  8bf1                 mov esi, ecx
// 0069cb3d  c70700000000         mov dword ptr [edi], 0
// 0069cb43  e88848fdff           call 0x6713d0
// 0069cb48  85c0                 test eax, eax
// 0069cb4a  7f0a                 jg 0x69cb56
// 0069cb4c  5f                   pop edi
// 0069cb4d  b857000780           mov eax, 0x80070057
// 0069cb52  5e                   pop esi
// 0069cb53  c21400               ret 0x14
// 0069cb56  83c0ff               add eax, -1
// 0069cb59  50                   push eax
// 0069cb5a  8d4eac               lea ecx, [esi - 0x54]
// 0069cb5d  e8bef0ffff           call 0x69bc20
// 0069cb62  85c0                 test eax, eax
// 0069cb64  74e6                 je 0x69cb4c
// 0069cb66  6a01                 push 1
// 0069cb68  8bc8                 mov ecx, eax
// 0069cb6a  e855b80900           call 0x7383c4
// 0069cb6f  8907                 mov dword ptr [edi], eax
// 0069cb71  5f                   pop edi
// 0069cb72  33c0                 xor eax, eax
// 0069cb74  5e                   pop esi
// 0069cb75  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChild@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
