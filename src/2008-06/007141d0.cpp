// roc 2008-06 007141d0  unit: CXTPPropertyGridView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007141d0
//
// 007141d0  8d442404             lea eax, [esp + 4]
// 007141d4  50                   push eax
// 007141d5  e8c640fdff           call 0x6e82a0
// 007141da  85c0                 test eax, eax
// 007141dc  740d                 je 0x7141eb
// 007141de  83f8ff               cmp eax, -1
// 007141e1  7408                 je 0x7141eb
// 007141e3  b857000780           mov eax, 0x80070057
// 007141e8  c21400               ret 0x14
// 007141eb  6874da8500           push 0x85da74
// 007141f0  ff1500298000         call dword ptr [0x802900]
// 007141f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007141fa  8901                 mov dword ptr [ecx], eax
// 007141fc  33c0                 xor eax, eax
// 007141fe  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleName@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
