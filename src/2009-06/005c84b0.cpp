// roc 2009-06 005c84b0  unit: seg_005c0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c84b0
//
// 005c84b0  55                   push ebp
// 005c84b1  8bec                 mov ebp, esp
// 005c84b3  eb09                 jmp 0x5c84be
// 005c84b5  8b4508               mov eax, dword ptr [ebp + 8]
// 005c84b8  83c004               add eax, 4
// 005c84bb  894508               mov dword ptr [ebp + 8], eax
// 005c84be  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c84c1  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 005c84c4  740c                 je 0x5c84d2
// 005c84c6  8b5508               mov edx, dword ptr [ebp + 8]
// 005c84c9  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c84cc  8b08                 mov ecx, dword ptr [eax]
// 005c84ce  890a                 mov dword ptr [edx], ecx
// 005c84d0  ebe3                 jmp 0x5c84b5
// 005c84d2  5d                   pop ebp
// 005c84d3  c3                   ret 
// copied from an identical function in another client (function ??$_Fill@PAHH@std@@YAXPAH0ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp