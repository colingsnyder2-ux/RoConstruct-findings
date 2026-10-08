// from server: 100% by auto
// roc 2008-06 00508bb0  unit: G3D::Shader  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00508bb0
//
// 00508bb0  803d1935970000       cmp byte ptr [0x973519], 0
// 00508bb7  7528                 jne 0x508be1
// 00508bb9  683c280400           push 0x4283c
// 00508bbe  e85d7d1900           call 0x6a0920
// 00508bc3  83c404               add esp, 4
// 00508bc6  85c0                 test eax, eax
// 00508bc8  7409                 je 0x508bd3
// 00508bca  8bc8                 mov ecx, eax
// 00508bcc  e88ff8ffff           call 0x508460
// 00508bd1  eb02                 jmp 0x508bd5
// 00508bd3  33c0                 xor eax, eax
// 00508bd5  a314359700           mov dword ptr [0x973514], eax
// 00508bda  c6051935970001       mov byte ptr [0x973519], 1
// 00508be1  8b442408             mov eax, dword ptr [esp + 8]
// 00508be5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00508be9  50                   push eax
// 00508bea  51                   push ecx
// 00508beb  8b0d14359700         mov ecx, dword ptr [0x973514]
// 00508bf1  e87afeffff           call 0x508a70
// 00508bf6  c3                   ret 
// library g3d-6.09/G3Dcpp\System.cpp (function ?realloc@System@G3D@@SAPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
