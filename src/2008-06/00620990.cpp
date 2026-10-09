// roc 2008-06 00620990  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620990
//
// 00620990  8b542404             mov edx, dword ptr [esp + 4]
// 00620994  8bc1                 mov eax, ecx
// 00620996  8b0a                 mov ecx, dword ptr [edx]
// 00620998  8908                 mov dword ptr [eax], ecx
// 0062099a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0062099d  894804               mov dword ptr [eax + 4], ecx
// 006209a0  85c9                 test ecx, ecx
// 006209a2  740e                 je 0x6209b2
// 006209a4  56                   push esi
// 006209a5  83c104               add ecx, 4
// 006209a8  be01000000           mov esi, 1
// 006209ad  f00fc131             lock xadd dword ptr [ecx], esi
// 006209b1  5e                   pop esi
// 006209b2  dd4208               fld qword ptr [edx + 8]
// 006209b5  dd5808               fstp qword ptr [eax + 8]
// 006209b8  dd4210               fld qword ptr [edx + 0x10]
// 006209bb  dd5810               fstp qword ptr [eax + 0x10]
// 006209be  c20400               ret 4
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
