// roc 2007-08 0062de90  unit: RBX::AdornG3D  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062de90
//
// 0062de90  6aff                 push -1
// 0062de92  6818c07500           push 0x75c018
// 0062de97  64a100000000         mov eax, dword ptr fs:[0]
// 0062de9d  50                   push eax
// 0062de9e  64892500000000       mov dword ptr fs:[0], esp
// 0062dea5  51                   push ecx
// 0062dea6  56                   push esi
// 0062dea7  57                   push edi
// 0062dea8  8bf9                 mov edi, ecx
// 0062deaa  8b742420             mov esi, dword ptr [esp + 0x20]
// 0062deae  85f6                 test esi, esi
// 0062deb0  51                   push ecx
// 0062deb1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062deb9  8964240c             mov dword ptr [esp + 0xc], esp
// 0062debd  7417                 je 0x62ded6
// 0062debf  8b5704               mov edx, dword ptr [edi + 4]
// 0062dec2  8b06                 mov eax, dword ptr [esi]
// 0062dec4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0062dec7  8bcc                 mov ecx, esp
// 0062dec9  52                   push edx
// 0062deca  51                   push ecx
// 0062decb  8bce                 mov ecx, esi
// 0062decd  ffd0                 call eax
// 0062decf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062ded3  51                   push ecx
// 0062ded4  eb0d                 jmp 0x62dee3
// 0062ded6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062deda  8bc4                 mov eax, esp
// 0062dedc  c70000000000         mov dword ptr [eax], 0
// 0062dee2  52                   push edx
// 0062dee3  8b4f04               mov ecx, dword ptr [edi + 4]
// 0062dee6  e86583e4ff           call 0x476250
// 0062deeb  85f6                 test esi, esi
// 0062deed  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062def5  741f                 je 0x62df16
// 0062def7  8d4604               lea eax, [esi + 4]
// 0062defa  50                   push eax
// 0062defb  ff15e8d27700         call dword ptr [0x77d2e8]
// 0062df01  85c0                 test eax, eax
// 0062df03  7511                 jne 0x62df16
// 0062df05  8bce                 mov ecx, esi
// 0062df07  e8c49ee2ff           call 0x457dd0
// 0062df0c  8b16                 mov edx, dword ptr [esi]
// 0062df0e  8b02                 mov eax, dword ptr [edx]
// 0062df10  6a01                 push 1
// 0062df12  8bce                 mov ecx, esi
// 0062df14  ffd0                 call eax
// 0062df16  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062df1a  5f                   pop edi
// 0062df1b  64890d00000000       mov dword ptr fs:[0], ecx
// 0062df22  5e                   pop esi
// 0062df23  83c410               add esp, 0x10
// 0062df26  c20800               ret 8
// library rbxgs-appdraw/AdornG3D.cpp (function ?setTexture@AdornG3D@RBX@@UAEXHV?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
