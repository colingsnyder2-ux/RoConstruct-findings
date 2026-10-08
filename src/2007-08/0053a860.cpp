// roc 2007-08 0053a860  unit: RBX::VScriptContext::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053a860
//
// 0053a860  e85b48f5ff           call 0x48f0c0
// 0053a865  8b00                 mov eax, dword ptr [eax]
// 0053a867  6a01                 push 1
// 0053a869  50                   push eax
// 0053a86a  e8d1200600           call 0x59c940
// 0053a86f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053a873  33c9                 xor ecx, ecx
// 0053a875  84c0                 test al, al
// 0053a877  0f95c1               setne cl
// 0053a87a  51                   push ecx
// 0053a87b  52                   push edx
// 0053a87c  e8df340800           call 0x5bdd60
// 0053a881  83c410               add esp, 0x10
// 0053a884  b801000000           mov eax, 1
// 0053a889  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?trustedThread@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
