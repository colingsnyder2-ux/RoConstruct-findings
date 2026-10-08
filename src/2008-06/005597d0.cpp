// roc 2008-06 005597d0  unit: RBX::VInstance::?$SignalDesc  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005597d0
//
// 005597d0  64a100000000         mov eax, dword ptr fs:[0]
// 005597d6  6aff                 push -1
// 005597d8  6890b27d00           push 0x7db290
// 005597dd  50                   push eax
// 005597de  64892500000000       mov dword ptr fs:[0], esp
// 005597e5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005597e9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005597ed  56                   push esi
// 005597ee  50                   push eax
// 005597ef  8b442420             mov eax, dword ptr [esp + 0x20]
// 005597f3  8bf1                 mov esi, ecx
// 005597f5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005597f9  51                   push ecx
// 005597fa  52                   push edx
// 005597fb  50                   push eax
// 005597fc  8d4c2438             lea ecx, [esp + 0x38]
// 00559800  51                   push ecx
// 00559801  e84ae7ffff           call 0x557f50
// 00559806  8b08                 mov ecx, dword ptr [eax]
// 00559808  83c40c               add esp, 0xc
// 0055980b  c70000000000         mov dword ptr [eax], 0
// 00559811  8bc4                 mov eax, esp
// 00559813  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0055981b  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055981f  8908                 mov dword ptr [eax], ecx
// 00559821  8b542420             mov edx, dword ptr [esp + 0x20]
// 00559825  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00559829  52                   push edx
// 0055982a  50                   push eax
// 0055982b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00559830  e84b15ebff           call 0x40ad80
// 00559835  50                   push eax
// 00559836  8bce                 mov ecx, esi
// 00559838  c644242000           mov byte ptr [esp + 0x20], 0
// 0055983d  e8ee99eeff           call 0x443230
// 00559842  8b442428             mov eax, dword ptr [esp + 0x28]
// 00559846  85c0                 test eax, eax
// 00559848  7409                 je 0x559853
// 0055984a  50                   push eax
// 0055984b  e82a6e1400           call 0x6a067a
// 00559850  83c404               add esp, 4
// 00559853  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559857  c7062cd78200         mov dword ptr [esi], 0x82d72c
// 0055985d  8bc6                 mov eax, esi
// 0055985f  64890d00000000       mov dword ptr fs:[0], ecx
// 00559866  5e                   pop esi
// 00559867  83c40c               add esp, 0xc
// 0055986a  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
