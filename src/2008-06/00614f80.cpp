// roc 2008-06 00614f80  unit: RBX::RevoluteLink  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614f80
//
// 00614f80  8b442408             mov eax, dword ptr [esp + 8]
// 00614f84  48                   dec eax
// 00614f85  83f806               cmp eax, 6
// 00614f88  772a                 ja 0x614fb4
// 00614f8a  ff2485d04f6100       jmp dword ptr [eax*4 + 0x614fd0]
// 00614f91  e8aaf9efff           call 0x514940
// 00614f96  eb21                 jmp 0x614fb9
// 00614f98  e873f9efff           call 0x514910
// 00614f9d  eb1a                 jmp 0x614fb9
// 00614f9f  e80cf9efff           call 0x5148b0
// 00614fa4  eb13                 jmp 0x614fb9
// 00614fa6  e845faefff           call 0x5149f0
// 00614fab  eb0c                 jmp 0x614fb9
// 00614fad  e8cef9efff           call 0x514980
// 00614fb2  eb05                 jmp 0x614fb9
// 00614fb4  e867faefff           call 0x514a20
// 00614fb9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614fbd  d900                 fld dword ptr [eax]
// 00614fbf  d919                 fstp dword ptr [ecx]
// 00614fc1  d94004               fld dword ptr [eax + 4]
// 00614fc4  d95904               fstp dword ptr [ecx + 4]
// 00614fc7  d94008               fld dword ptr [eax + 8]
// 00614fca  8bc1                 mov eax, ecx
// 00614fcc  d95908               fstp dword ptr [ecx + 8]
// 00614fcf  c3                   ret 
// 00614fd0  98                   cwde 
// 00614fd1  4f                   dec edi
// 00614fd2  61                   popal 
// 00614fd3  009f4f6100b4         add byte ptr [edi - 0x4bff9eb1], bl
// 00614fd9  4f                   dec edi
// 00614fda  61                   popal 
// 00614fdb  00b44f6100a64f       add byte ptr [edi + ecx*2 + 0x4fa60061], dh
// 00614fe2  61                   popal 
// 00614fe3  00ad4f610091         add byte ptr [ebp - 0x6eff9eb1], ch
// 00614fe9  4f                   dec edi
// 00614fea  61                   popal 
// library rbxgs-dll/v8world\Controller.cpp (function ?controllerTypeToColor@Controller@RBX@@SA?AVColor3@G3D@@W4ControllerType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8world/Controller.cpp
