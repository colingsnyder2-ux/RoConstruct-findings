// roc 2008-06 0066f510  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066f510
//
// 0066f510  8b442404             mov eax, dword ptr [esp + 4]
// 0066f514  8b4908               mov ecx, dword ptr [ecx + 8]
// 0066f517  6a00                 push 0
// 0066f519  50                   push eax
// 0066f51a  e871c3fdff           call 0x64b890
// 0066f51f  c20400               ret 4
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?wakeAssembly@AssemblyStage@RBX@@QAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
