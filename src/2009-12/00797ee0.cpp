// roc 2009-12 00797ee0  unit: lua_exception  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00797ee0
//
// 00797ee0  8b542404             mov edx, dword ptr [esp + 4]
// 00797ee4  8bc1                 mov eax, ecx
// 00797ee6  8b0a                 mov ecx, dword ptr [edx]
// 00797ee8  8908                 mov dword ptr [eax], ecx
// 00797eea  8b4a04               mov ecx, dword ptr [edx + 4]
// 00797eed  894804               mov dword ptr [eax + 4], ecx
// 00797ef0  85c9                 test ecx, ecx
// 00797ef2  740e                 je 0x797f02
// 00797ef4  56                   push esi
// 00797ef5  83c104               add ecx, 4
// 00797ef8  be01000000           mov esi, 1
// 00797efd  f00fc131             lock xadd dword ptr [ecx], esi
// 00797f01  5e                   pop esi
// 00797f02  dd4208               fld qword ptr [edx + 8]
// 00797f05  dd5808               fstp qword ptr [eax + 8]
// 00797f08  dd4210               fld qword ptr [edx + 0x10]
// 00797f0b  dd5810               fstp qword ptr [eax + 0x10]
// 00797f0e  c20400               ret 4
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@ABU0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
