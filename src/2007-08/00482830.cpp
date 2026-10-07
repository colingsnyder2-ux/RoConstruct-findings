// roc 2007-08 00482830  unit: G3D::Shader  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482830
//
// 00482830  55                   push ebp
// 00482831  56                   push esi
// 00482832  8bf1                 mov esi, ecx
// 00482834  57                   push edi
// 00482835  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00482839  d907                 fld dword ptr [edi]
// 0048283b  d91e                 fstp dword ptr [esi]
// 0048283d  d94704               fld dword ptr [edi + 4]
// 00482840  d95e04               fstp dword ptr [esi + 4]
// 00482843  d94708               fld dword ptr [edi + 8]
// 00482846  d95e08               fstp dword ptr [esi + 8]
// 00482849  d9470c               fld dword ptr [edi + 0xc]
// 0048284c  d95e0c               fstp dword ptr [esi + 0xc]
// 0048284f  d94710               fld dword ptr [edi + 0x10]
// 00482852  d95e10               fstp dword ptr [esi + 0x10]
// 00482855  d94714               fld dword ptr [edi + 0x14]
// 00482858  d95e14               fstp dword ptr [esi + 0x14]
// 0048285b  d94718               fld dword ptr [edi + 0x18]
// 0048285e  d95e18               fstp dword ptr [esi + 0x18]
// 00482861  d9471c               fld dword ptr [edi + 0x1c]
// 00482864  d95e1c               fstp dword ptr [esi + 0x1c]
// 00482867  d94720               fld dword ptr [edi + 0x20]
// 0048286a  d95e20               fstp dword ptr [esi + 0x20]
// 0048286d  d94724               fld dword ptr [edi + 0x24]
// 00482870  d95e24               fstp dword ptr [esi + 0x24]
// 00482873  d94728               fld dword ptr [edi + 0x28]
// 00482876  d95e28               fstp dword ptr [esi + 0x28]
// 00482879  d9472c               fld dword ptr [edi + 0x2c]
// 0048287c  d95e2c               fstp dword ptr [esi + 0x2c]
// 0048287f  d94730               fld dword ptr [edi + 0x30]
// 00482882  d95e30               fstp dword ptr [esi + 0x30]
// 00482885  d94734               fld dword ptr [edi + 0x34]
// 00482888  d95e34               fstp dword ptr [esi + 0x34]
// 0048288b  d94738               fld dword ptr [edi + 0x38]
// 0048288e  d95e38               fstp dword ptr [esi + 0x38]
// 00482891  d9473c               fld dword ptr [edi + 0x3c]
// 00482894  d95e3c               fstp dword ptr [esi + 0x3c]
// 00482897  8b6f40               mov ebp, dword ptr [edi + 0x40]
// 0048289a  8b4640               mov eax, dword ptr [esi + 0x40]
// 0048289d  3be8                 cmp ebp, eax
// 0048289f  7462                 je 0x482903
// 004828a1  85c0                 test eax, eax
// 004828a3  744d                 je 0x4828f2
// 004828a5  83c004               add eax, 4
// 004828a8  50                   push eax
// 004828a9  ff15e8d27700         call dword ptr [0x77d2e8]
// 004828af  85c0                 test eax, eax
// 004828b1  7538                 jne 0x4828eb
// 004828b3  8b4640               mov eax, dword ptr [esi + 0x40]
// 004828b6  53                   push ebx
// 004828b7  8b5808               mov ebx, dword ptr [eax + 8]
// 004828ba  85db                 test ebx, ebx
// 004828bc  741d                 je 0x4828db
// 004828be  8bff                 mov edi, edi
// 004828c0  8b0b                 mov ecx, dword ptr [ebx]
// 004828c2  8b11                 mov edx, dword ptr [ecx]
// 004828c4  8b4204               mov eax, dword ptr [edx + 4]
// 004828c7  ffd0                 call eax
// 004828c9  8bc3                 mov eax, ebx
// 004828cb  8b5b04               mov ebx, dword ptr [ebx + 4]
// 004828ce  50                   push eax
// 004828cf  e88ed31a00           call 0x62fc62
// 004828d4  83c404               add esp, 4
// 004828d7  85db                 test ebx, ebx
// 004828d9  75e5                 jne 0x4828c0
// 004828db  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004828de  85c9                 test ecx, ecx
// 004828e0  5b                   pop ebx
// 004828e1  7408                 je 0x4828eb
// 004828e3  8b11                 mov edx, dword ptr [ecx]
// 004828e5  8b02                 mov eax, dword ptr [edx]
// 004828e7  6a01                 push 1
// 004828e9  ffd0                 call eax
// 004828eb  c7464000000000       mov dword ptr [esi + 0x40], 0
// 004828f2  85ed                 test ebp, ebp
// 004828f4  740d                 je 0x482903
// 004828f6  896e40               mov dword ptr [esi + 0x40], ebp
// 004828f9  83c504               add ebp, 4
// 004828fc  55                   push ebp
// 004828fd  ff15ecd27700         call dword ptr [0x77d2ec]
// 00482903  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00482906  5f                   pop edi
// 00482907  894e44               mov dword ptr [esi + 0x44], ecx
// 0048290a  8bc6                 mov eax, esi
// 0048290c  5e                   pop esi
// 0048290d  5d                   pop ebp
// 0048290e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??4Arg@ArgList@GPUProgram@G3D@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
