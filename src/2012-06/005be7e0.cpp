// roc 2012-06 005be7e0  unit: RakNet::RakPeer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005be7e0
//
// 005be7e0  56                   push esi
// 005be7e1  8bf1                 mov esi, ecx
// 005be7e3  68f815d900           push 0xd915f8
// 005be7e8  8d4c240c             lea ecx, [esp + 0xc]
// 005be7ec  e83f35faff           call 0x561d30
// 005be7f1  84c0                 test al, al
// 005be7f3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005be7f7  50                   push eax
// 005be7f8  742b                 je 0x5be825
// 005be7fa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005be7fe  8b542410             mov edx, dword ptr [esp + 0x10]
// 005be802  83ec10               sub esp, 0x10
// 005be805  8bc4                 mov eax, esp
// 005be807  8908                 mov dword ptr [eax], ecx
// 005be809  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005be80d  895004               mov dword ptr [eax + 4], edx
// 005be810  8b542428             mov edx, dword ptr [esp + 0x28]
// 005be814  894808               mov dword ptr [eax + 8], ecx
// 005be817  8bce                 mov ecx, esi
// 005be819  89500c               mov dword ptr [eax + 0xc], edx
// 005be81c  e89fcaffff           call 0x5bb2c0
// 005be821  5e                   pop esi
// 005be822  c23000               ret 0x30
// 005be825  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005be829  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005be82d  51                   push ecx
// 005be82e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005be832  83ec14               sub esp, 0x14
// 005be835  8bc4                 mov eax, esp
// 005be837  8910                 mov dword ptr [eax], edx
// 005be839  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005be83d  894804               mov dword ptr [eax + 4], ecx
// 005be840  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005be844  895008               mov dword ptr [eax + 8], edx
// 005be847  8b542444             mov edx, dword ptr [esp + 0x44]
// 005be84b  89480c               mov dword ptr [eax + 0xc], ecx
// 005be84e  8bce                 mov ecx, esi
// 005be850  895010               mov dword ptr [eax + 0x10], edx
// 005be853  e8a8d6ffff           call 0x5bbf00
// 005be858  5e                   pop esi
// 005be859  c23000               ret 0x30
// library rbx2016-raknet/RakPeer.cpp (function ?GetRemoteSystem@RakPeer@RakNet@@IBEPAURemoteSystemStruct@12@UAddressOrGUID@2@_N1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
