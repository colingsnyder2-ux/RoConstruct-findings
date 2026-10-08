// roc 2007-08 0053dfb0  unit: RBX::Script  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053dfb0
//
// 0053dfb0  56                   push esi
// 0053dfb1  8b742408             mov esi, dword ptr [esp + 8]
// 0053dfb5  85f6                 test esi, esi
// 0053dfb7  57                   push edi
// 0053dfb8  8bf9                 mov edi, ecx
// 0053dfba  7413                 je 0x53dfcf
// 0053dfbc  8bce                 mov ecx, esi
// 0053dfbe  e84d04efff           call 0x42e410
// 0053dfc3  85c0                 test eax, eax
// 0053dfc5  7408                 je 0x53dfcf
// 0053dfc7  57                   push edi
// 0053dfc8  8bc8                 mov ecx, eax
// 0053dfca  e891bbffff           call 0x539b60
// 0053dfcf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053dfd3  50                   push eax
// 0053dfd4  56                   push esi
// 0053dfd5  8bcf                 mov ecx, edi
// 0053dfd7  e874ca0300           call 0x57aa50
// 0053dfdc  5f                   pop edi
// 0053dfdd  5e                   pop esi
// 0053dfde  c20800               ret 8
// library rbxgs/script\Script.cpp (function ?onServiceProvider@Script@RBX@@MAEXPBVServiceProvider@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
