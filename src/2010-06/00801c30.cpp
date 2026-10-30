// roc 2010-06 00801c30  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801c30
//
// 00801c30  8b442404             mov eax, dword ptr [esp + 4]
// 00801c34  56                   push esi
// 00801c35  50                   push eax
// 00801c36  8bf1                 mov esi, ecx
// 00801c38  e82fb11700           call 0x97cd6c
// 00801c3d  85c0                 test eax, eax
// 00801c3f  740e                 je 0x801c4f
// 00801c41  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 00801c47  8b11                 mov edx, dword ptr [ecx]
// 00801c49  50                   push eax
// 00801c4a  8b4210               mov eax, dword ptr [edx + 0x10]
// 00801c4d  ffd0                 call eax
// 00801c4f  b801000000           mov eax, 1
// 00801c54  5e                   pop esi
// 00801c55  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnPrintClient@CXTPPropertyGrid@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
