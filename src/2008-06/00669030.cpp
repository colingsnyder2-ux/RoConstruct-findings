// roc 2008-06 00669030  unit: RBX::TreeStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669030
//
// 00669030  8b442404             mov eax, dword ptr [esp + 4]
// 00669034  83f803               cmp eax, 3
// 00669037  740e                 je 0x669047
// 00669039  8b4908               mov ecx, dword ptr [ecx + 8]
// 0066903c  8b11                 mov edx, dword ptr [ecx]
// 0066903e  89442404             mov dword ptr [esp + 4], eax
// 00669042  8b4218               mov eax, dword ptr [edx + 0x18]
// 00669045  ffe0                 jmp eax
// 00669047  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0066904a  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?getMetric@TreeStage@RBX@@UAEHW4MetricType@IWorldStage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
