// roc 2007-03 00573ee0  unit: seg_00570000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573ee0
//
// 00573ee0  56                   push esi
// 00573ee1  57                   push edi
// 00573ee2  8bf1                 mov esi, ecx
// 00573ee4  e857210400           call 0x5b6040
// 00573ee9  c6865802000001       mov byte ptr [esi + 0x258], 1
// 00573ef0  8bbee0010000         mov edi, dword ptr [esi + 0x1e0]
// 00573ef6  8bce                 mov ecx, esi
// 00573ef8  e8530efcff           call 0x534d50
// 00573efd  50                   push eax
// 00573efe  8bcf                 mov ecx, edi
// 00573f00  e81bb90300           call 0x5af820
// 00573f05  5f                   pop edi
// 00573f06  5e                   pop esi
// 00573f07  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?onParentControllerChanged@PartInstance@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
