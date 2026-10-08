// roc 2007-03 00535820  unit: seg_00530000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00535820
//
// 00535820  6aff                 push -1
// 00535822  68c89e7500           push 0x759ec8
// 00535827  64a100000000         mov eax, dword ptr fs:[0]
// 0053582d  50                   push eax
// 0053582e  64892500000000       mov dword ptr fs:[0], esp
// 00535835  51                   push ecx
// 00535836  56                   push esi
// 00535837  8bf1                 mov esi, ecx
// 00535839  57                   push edi
// 0053583a  89742408             mov dword ptr [esp + 8], esi
// 0053583e  e88debffff           call 0x5343d0
// 00535843  8bf8                 mov edi, eax
// 00535845  e8a6feffff           call 0x5356f0
// 0053584a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0053584e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00535852  51                   push ecx
// 00535853  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00535857  52                   push edx
// 00535858  51                   push ecx
// 00535859  57                   push edi
// 0053585a  50                   push eax
// 0053585b  8bce                 mov ecx, esi
// 0053585d  e86ee10400           call 0x5839d0
// 00535862  8b542430             mov edx, dword ptr [esp + 0x30]
// 00535866  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053586a  83ec0c               sub esp, 0xc
// 0053586d  8bc4                 mov eax, esp
// 0053586f  8910                 mov dword ptr [eax], edx
// 00535871  8b542444             mov edx, dword ptr [esp + 0x44]
// 00535875  894804               mov dword ptr [eax + 4], ecx
// 00535878  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053587c  895008               mov dword ptr [eax + 8], edx
// 0053587f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00535883  83ec0c               sub esp, 0xc
// 00535886  8bc4                 mov eax, esp
// 00535888  8908                 mov dword ptr [eax], ecx
// 0053588a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0053588e  895004               mov dword ptr [eax + 4], edx
// 00535891  8d542454             lea edx, [esp + 0x54]
// 00535895  c74618389f7900       mov dword ptr [esi + 0x18], 0x799f38
// 0053589c  52                   push edx
// 0053589d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005358a5  c70658537a00         mov dword ptr [esi], 0x7a5358
// 005358ab  c7461850537a00       mov dword ptr [esi + 0x18], 0x7a5350
// 005358b2  894808               mov dword ptr [eax + 8], ecx
// 005358b5  e816f4ffff           call 0x534cd0
// 005358ba  8b08                 mov ecx, dword ptr [eax]
// 005358bc  c70000000000         mov dword ptr [eax], 0
// 005358c2  8b442458             mov eax, dword ptr [esp + 0x58]
// 005358c6  50                   push eax
// 005358c7  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005358ca  e821880e00           call 0x61e0f0
// 005358cf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005358d3  83c420               add esp, 0x20
// 005358d6  5f                   pop edi
// 005358d7  8bc6                 mov eax, esi
// 005358d9  64890d00000000       mov dword ptr fs:[0], ecx
// 005358e0  5e                   pop esi
// 005358e1  83c410               add esp, 0x10
// 005358e4  c22400               ret 0x24
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??$?0P8ModelInstance@RBX@@BEPAVPartInstance@1@XZP801@AEXPAV21@@Z@?$RefPropDescriptor@VModelInstance@RBX@@VPartInstance@2@@Reflection@RBX@@QAE@PBD0P8ModelInstance@2@BEPAVPartInstance@2@XZP832@AEXPAV42@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
