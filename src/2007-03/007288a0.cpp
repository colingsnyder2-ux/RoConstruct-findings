// roc 2007-03 007288a0  unit: seg_00720000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007288a0
//
// 007288a0  8b4104               mov eax, dword ptr [ecx + 4]
// 007288a3  8b542404             mov edx, dword ptr [esp + 4]
// 007288a7  33c9                 xor ecx, ecx
// 007288a9  3b4204               cmp eax, dword ptr [edx + 4]
// 007288ac  0f94c1               sete cl
// 007288af  8ac1                 mov al, cl
// 007288b1  c20400               ret 4
// library rbxgs/v8world\SimJobStage.cpp (function ??8?$_Const_iterator@$0A@@?$list@PAVMechanism@RBX@@V?$allocator@PAVMechanism@RBX@@@std@@@std@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
