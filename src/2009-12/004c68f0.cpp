// roc 2009-12 004c68f0  unit: G3D::GImage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c68f0
//
// 004c68f0  6aff                 push -1
// 004c68f2  68e4299300           push 0x9329e4
// 004c68f7  64a100000000         mov eax, dword ptr fs:[0]
// 004c68fd  50                   push eax
// 004c68fe  64892500000000       mov dword ptr fs:[0], esp
// 004c6905  51                   push ecx
// 004c6906  56                   push esi
// 004c6907  8bf1                 mov esi, ecx
// 004c6909  89742404             mov dword ptr [esp + 4], esi
// 004c690d  8d4e44               lea ecx, [esi + 0x44]
// 004c6910  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004c6918  ff15e4b69800         call dword ptr [0x98b6e4]
// 004c691e  8d4e28               lea ecx, [esi + 0x28]
// 004c6921  c644241000           mov byte ptr [esp + 0x10], 0
// 004c6926  ff15e4b69800         call dword ptr [0x98b6e4]
// 004c692c  8d4e0c               lea ecx, [esi + 0xc]
// 004c692f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c6937  c706a0fd9900         mov dword ptr [esi], 0x99fda0
// 004c693d  ff15e4b69800         call dword ptr [0x98b6e4]
// 004c6943  8bce                 mov ecx, esi
// 004c6945  ff1550b79800         call dword ptr [0x98b750]
// 004c694b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c694f  5e                   pop esi
// 004c6950  64890d00000000       mov dword ptr fs:[0], ecx
// 004c6957  83c410               add esp, 0x10
// 004c695a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??1Error@GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
