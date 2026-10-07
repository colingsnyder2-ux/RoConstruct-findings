// roc 2012-06 005ba4f0  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba4f0
//
// 005ba4f0  56                   push esi
// 005ba4f1  57                   push edi
// 005ba4f2  8bf1                 mov esi, ecx
// 005ba4f4  e8e777faff           call 0x561ce0
// 005ba4f9  8d7e10               lea edi, [esi + 0x10]
// 005ba4fc  8bcf                 mov ecx, edi
// 005ba4fe  e82d75faff           call 0x561a30
// 005ba503  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ba507  8b08                 mov ecx, dword ptr [eax]
// 005ba509  890e                 mov dword ptr [esi], ecx
// 005ba50b  8b5004               mov edx, dword ptr [eax + 4]
// 005ba50e  895604               mov dword ptr [esi + 4], edx
// 005ba511  668b4808             mov cx, word ptr [eax + 8]
// 005ba515  83c010               add eax, 0x10
// 005ba518  66894e08             mov word ptr [esi + 8], cx
// 005ba51c  50                   push eax
// 005ba51d  8bcf                 mov ecx, edi
// 005ba51f  e8ec72faff           call 0x561810
// 005ba524  5f                   pop edi
// 005ba525  8bc6                 mov eax, esi
// 005ba527  5e                   pop esi
// 005ba528  c20400               ret 4
// library rbx2016-raknet/PluginInterface2.cpp (function ??0AddressOrGUID@RakNet@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet PluginInterface2.cpp
