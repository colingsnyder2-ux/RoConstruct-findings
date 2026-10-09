// roc 2010-06 00730740  unit: lua_exception  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730740
//
// 00730740  8b542404             mov edx, dword ptr [esp + 4]
// 00730744  8bc1                 mov eax, ecx
// 00730746  8b0a                 mov ecx, dword ptr [edx]
// 00730748  8908                 mov dword ptr [eax], ecx
// 0073074a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0073074d  894804               mov dword ptr [eax + 4], ecx
// 00730750  85c9                 test ecx, ecx
// 00730752  740e                 je 0x730762
// 00730754  56                   push esi
// 00730755  83c104               add ecx, 4
// 00730758  be01000000           mov esi, 1
// 0073075d  f00fc131             lock xadd dword ptr [ecx], esi
// 00730761  5e                   pop esi
// 00730762  dd4208               fld qword ptr [edx + 8]
// 00730765  dd5808               fstp qword ptr [eax + 8]
// 00730768  dd4210               fld qword ptr [edx + 0x10]
// 0073076b  dd5810               fstp qword ptr [eax + 0x10]
// 0073076e  c20400               ret 4
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
