// roc 2007-08 00475c50  unit: CInstanceRecord::CNameItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475c50
//
// 00475c50  56                   push esi
// 00475c51  8bf1                 mov esi, ecx
// 00475c53  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 00475c59  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 00475c5f  57                   push edi
// 00475c60  8dbe0c010000         lea edi, [esi + 0x10c]
// 00475c66  7426                 je 0x475c8e
// 00475c68  83466c01             add dword ptr [esi + 0x6c], 1
// 00475c6c  85c0                 test eax, eax
// 00475c6e  7503                 jne 0x475c73
// 00475c70  50                   push eax
// 00475c71  eb07                 jmp 0x475c7a
// 00475c73  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00475c79  50                   push eax
// 00475c7a  ff1524da8b00         call dword ptr [0x8bda24]
// 00475c80  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 00475c86  51                   push ecx
// 00475c87  8bcf                 mov ecx, edi
// 00475c89  e8e2f2ffff           call 0x474f70
// 00475c8e  5f                   pop edi
// 00475c8f  5e                   pop esi
// 00475c90  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?forceVertexAndPixelShaderBind@RenderDevice@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
