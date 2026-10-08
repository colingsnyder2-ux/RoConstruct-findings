// roc 2010-06 00543400  unit: RBX::AggregatingSceneManager  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00543400
//
// 00543400  6aff                 push -1
// 00543402  68befc9800           push 0x98fcbe
// 00543407  64a100000000         mov eax, dword ptr fs:[0]
// 0054340d  50                   push eax
// 0054340e  64892500000000       mov dword ptr fs:[0], esp
// 00543415  51                   push ecx
// 00543416  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054341a  56                   push esi
// 0054341b  8bf1                 mov esi, ecx
// 0054341d  89742404             mov dword ptr [esp + 4], esi
// 00543421  894604               mov dword ptr [esi + 4], eax
// 00543424  8d542418             lea edx, [esp + 0x18]
// 00543428  52                   push edx
// 00543429  8d44241c             lea eax, [esp + 0x1c]
// 0054342d  8d4e08               lea ecx, [esi + 8]
// 00543430  50                   push eax
// 00543431  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00543439  c706b0f2a100         mov dword ptr [esi], 0xa1f2b0
// 0054343f  e86c862100           call 0x75bab0
// 00543444  8d542418             lea edx, [esp + 0x18]
// 00543448  52                   push edx
// 00543449  8d44241c             lea eax, [esp + 0x1c]
// 0054344d  8d4e28               lea ecx, [esi + 0x28]
// 00543450  50                   push eax
// 00543451  c644241801           mov byte ptr [esp + 0x18], 1
// 00543456  e895d41100           call 0x6608f0
// 0054345b  8d4c2418             lea ecx, [esp + 0x18]
// 0054345f  51                   push ecx
// 00543460  8d54241c             lea edx, [esp + 0x1c]
// 00543464  52                   push edx
// 00543465  8d4e48               lea ecx, [esi + 0x48]
// 00543468  c644241802           mov byte ptr [esp + 0x18], 2
// 0054346d  e87ed41100           call 0x6608f0
// 00543472  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00543476  8bc6                 mov eax, esi
// 00543478  5e                   pop esi
// 00543479  64890d00000000       mov dword ptr fs:[0], ecx
// 00543480  83c410               add esp, 0x10
// 00543483  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ??0AggregatingSceneManager@Render@RBX@@QAE@PAVRenderScene@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
