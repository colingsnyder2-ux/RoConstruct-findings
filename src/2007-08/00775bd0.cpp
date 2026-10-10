// from server: 99% by colin
// roc 2007-08 00775bd0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00775bd0
//
// 00775bd0  6870b67900           push 0x79b670
// 00775bd5  68a8677a00           push 0x7a67a8
// 00775bda  b9cc7d8c00           mov ecx, 0x8c7dcc
// 00775bdf  e8bcf4e7ff           call 0x5f50a0
// 00775be4  6810c87700           push 0x77c810
// 00775be9  e835b1ebff           call 0x630d23
// 00775bee  59                   pop ecx
// 00775bef  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__E?event_Changed@Tool@RBX@@2V?$SignalDesc@VTool@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp

extern "C" void __stdcall sub_5F50A0(void*, void*);
extern "C" void __cdecl sub_630D23(void*);

void sub_775BD0()
{
    sub_5F50A0((void*)0x7A67A8, (void*)0x79B670);
    sub_630D23((void*)0x77C810);
}
