// roc 2009-12 004ccbb0  unit: G3D::VARArea  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccbb0
//
// 004ccbb0  56                   push esi
// 004ccbb1  8bf1                 mov esi, ecx
// 004ccbb3  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 004ccbb9  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 004ccbbf  57                   push edi
// 004ccbc0  8dbe0c010000         lea edi, [esi + 0x10c]
// 004ccbc6  7425                 je 0x4ccbed
// 004ccbc8  ff466c               inc dword ptr [esi + 0x6c]
// 004ccbcb  85c0                 test eax, eax
// 004ccbcd  7503                 jne 0x4ccbd2
// 004ccbcf  50                   push eax
// 004ccbd0  eb07                 jmp 0x4ccbd9
// 004ccbd2  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 004ccbd8  50                   push eax
// 004ccbd9  ff1548dab700         call dword ptr [0xb7da48]
// 004ccbdf  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 004ccbe5  51                   push ecx
// 004ccbe6  8bcf                 mov ecx, edi
// 004ccbe8  e883eff7ff           call 0x44bb70
// 004ccbed  5f                   pop edi
// 004ccbee  5e                   pop esi
// 004ccbef  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceVertexAndPixelShaderBind@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
