// roc 2009-06 006c1b80  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1b80
//
// 006c1b80  8b542404             mov edx, dword ptr [esp + 4]
// 006c1b84  8bc1                 mov eax, ecx
// 006c1b86  8b0a                 mov ecx, dword ptr [edx]
// 006c1b88  8908                 mov dword ptr [eax], ecx
// 006c1b8a  8b4a04               mov ecx, dword ptr [edx + 4]
// 006c1b8d  894804               mov dword ptr [eax + 4], ecx
// 006c1b90  85c9                 test ecx, ecx
// 006c1b92  740e                 je 0x6c1ba2
// 006c1b94  56                   push esi
// 006c1b95  83c104               add ecx, 4
// 006c1b98  be01000000           mov esi, 1
// 006c1b9d  f00fc131             lock xadd dword ptr [ecx], esi
// 006c1ba1  5e                   pop esi
// 006c1ba2  dd4208               fld qword ptr [edx + 8]
// 006c1ba5  dd5808               fstp qword ptr [eax + 8]
// 006c1ba8  dd4210               fld qword ptr [edx + 0x10]
// 006c1bab  dd5810               fstp qword ptr [eax + 0x10]
// 006c1bae  c20400               ret 4
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
