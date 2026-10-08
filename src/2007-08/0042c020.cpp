// roc 2007-08 0042c020  unit: VCLuaFunction::?$CComObjectNoLock  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042c020
//
// 0042c020  51                   push ecx
// 0042c021  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042c025  33d2                 xor edx, edx
// 0042c027  3bc2                 cmp eax, edx
// 0042c029  891424               mov dword ptr [esp], edx
// 0042c02c  7423                 je 0x42c051
// 0042c02e  56                   push esi
// 0042c02f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042c033  52                   push edx
// 0042c034  8b542418             mov edx, dword ptr [esp + 0x18]
// 0042c038  52                   push edx
// 0042c039  56                   push esi
// 0042c03a  50                   push eax
// 0042c03b  e830ba0700           call 0x4a7a70
// 0042c040  8bc8                 mov ecx, eax
// 0042c042  83c110               add ecx, 0x10
// 0042c045  e8f6faffff           call 0x42bb40
// 0042c04a  8bc6                 mov eax, esi
// 0042c04c  5e                   pop esi
// 0042c04d  59                   pop ecx
// 0042c04e  c20c00               ret 0xc
// 0042c051  8b442408             mov eax, dword ptr [esp + 8]
// 0042c055  895004               mov dword ptr [eax + 4], edx
// 0042c058  895008               mov dword ptr [eax + 8], edx
// 0042c05b  88500c               mov byte ptr [eax + 0xc], dl
// 0042c05e  59                   pop ecx
// 0042c05f  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$TSignalDesc@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@QAE?AVconnection@signals@boost@@PAVSignalSource@23@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@6@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
