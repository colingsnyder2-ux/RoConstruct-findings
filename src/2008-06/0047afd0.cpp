// roc 2008-06 0047afd0  unit: CInstanceRecord::CNameItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047afd0
//
// 0047afd0  56                   push esi
// 0047afd1  8bf1                 mov esi, ecx
// 0047afd3  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 0047afd9  57                   push edi
// 0047afda  85c9                 test ecx, ecx
// 0047afdc  7416                 je 0x47aff4
// 0047afde  c6861101000001       mov byte ptr [esi + 0x111], 1
// 0047afe5  8b01                 mov eax, dword ptr [ecx]
// 0047afe7  8b5010               mov edx, dword ptr [eax + 0x10]
// 0047afea  56                   push esi
// 0047afeb  ffd2                 call edx
// 0047afed  c6861101000000       mov byte ptr [esi + 0x111], 0
// 0047aff4  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 0047affa  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 0047b000  8dbe0c010000         lea edi, [esi + 0x10c]
// 0047b006  7425                 je 0x47b02d
// 0047b008  ff466c               inc dword ptr [esi + 0x6c]
// 0047b00b  85c0                 test eax, eax
// 0047b00d  7503                 jne 0x47b012
// 0047b00f  50                   push eax
// 0047b010  eb07                 jmp 0x47b019
// 0047b012  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 0047b018  50                   push eax
// 0047b019  ff1538f99600         call dword ptr [0x96f938]
// 0047b01f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 0047b025  51                   push ecx
// 0047b026  8bcf                 mov ecx, edi
// 0047b028  e873df1100           call 0x598fa0
// 0047b02d  5f                   pop edi
// 0047b02e  5e                   pop esi
// 0047b02f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beforePrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
