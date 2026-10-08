// roc 2007-08 0056ce80  unit: RBX::Lua::FunctionRef  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ce80
//
// 0056ce80  6aff                 push -1
// 0056ce82  68f8487500           push 0x7548f8
// 0056ce87  64a100000000         mov eax, dword ptr fs:[0]
// 0056ce8d  50                   push eax
// 0056ce8e  64892500000000       mov dword ptr fs:[0], esp
// 0056ce95  51                   push ecx
// 0056ce96  56                   push esi
// 0056ce97  8bf1                 mov esi, ecx
// 0056ce99  89742404             mov dword ptr [esp + 4], esi
// 0056ce9d  c70608727800         mov dword ptr [esi], 0x787208
// 0056cea3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0056cea6  85c9                 test ecx, ecx
// 0056cea8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056ceb0  7416                 je 0x56cec8
// 0056ceb2  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056ceb5  85c0                 test eax, eax
// 0056ceb7  740f                 je 0x56cec8
// 0056ceb9  51                   push ecx
// 0056ceba  68f0d8ffff           push 0xffffd8f0
// 0056cebf  50                   push eax
// 0056cec0  e84b1f0500           call 0x5bee10
// 0056cec5  83c40c               add esp, 0xc
// 0056cec8  8bce                 mov ecx, esi
// 0056ceca  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056ced2  e839fcffff           call 0x56cb10
// 0056ced7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056cedb  5e                   pop esi
// 0056cedc  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cee3  83c410               add esp, 0x10
// 0056cee6  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1FunctionRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
