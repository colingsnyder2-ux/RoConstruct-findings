// roc 2010-06 00495a40  unit: seg_00490000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00495a40
//
// 00495a40  56                   push esi
// 00495a41  8bf1                 mov esi, ecx
// 00495a43  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00495a49  57                   push edi
// 00495a4a  85c9                 test ecx, ecx
// 00495a4c  7416                 je 0x495a64
// 00495a4e  c6861101000001       mov byte ptr [esi + 0x111], 1
// 00495a55  8b01                 mov eax, dword ptr [ecx]
// 00495a57  8b5010               mov edx, dword ptr [eax + 0x10]
// 00495a5a  56                   push esi
// 00495a5b  ffd2                 call edx
// 00495a5d  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00495a64  8b8680040000         mov eax, dword ptr [esi + 0x480]
// 00495a6a  39860c010000         cmp dword ptr [esi + 0x10c], eax
// 00495a70  8dbe0c010000         lea edi, [esi + 0x10c]
// 00495a76  7425                 je 0x495a9d
// 00495a78  ff466c               inc dword ptr [esi + 0x6c]
// 00495a7b  85c0                 test eax, eax
// 00495a7d  7503                 jne 0x495a82
// 00495a7f  50                   push eax
// 00495a80  eb07                 jmp 0x495a89
// 00495a82  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00495a88  50                   push eax
// 00495a89  ff15d83ac000         call dword ptr [0xc03ad8]
// 00495a8f  8b8e80040000         mov ecx, dword ptr [esi + 0x480]
// 00495a95  51                   push ecx
// 00495a96  8bcf                 mov ecx, edi
// 00495a98  e88312ffff           call 0x486d20
// 00495a9d  5f                   pop edi
// 00495a9e  5e                   pop esi
// 00495a9f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?beforePrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
