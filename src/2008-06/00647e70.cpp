// roc 2008-06 00647e70  unit: RBX::Block  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647e70
//
// 00647e70  d9ee                 fldz 
// 00647e72  8bc1                 mov eax, ecx
// 00647e74  8b542404             mov edx, dword ptr [esp + 4]
// 00647e78  d910                 fst dword ptr [eax]
// 00647e7a  d95004               fst dword ptr [eax + 4]
// 00647e7d  8d4814               lea ecx, [eax + 0x14]
// 00647e80  d95008               fst dword ptr [eax + 8]
// 00647e83  56                   push esi
// 00647e84  d9500c               fst dword ptr [eax + 0xc]
// 00647e87  be02000000           mov esi, 2
// 00647e8c  d95010               fst dword ptr [eax + 0x10]
// 00647e8f  d911                 fst dword ptr [ecx]
// 00647e91  d95018               fst dword ptr [eax + 0x18]
// 00647e94  d9501c               fst dword ptr [eax + 0x1c]
// 00647e97  d95020               fst dword ptr [eax + 0x20]
// 00647e9a  d95024               fst dword ptr [eax + 0x24]
// 00647e9d  d95028               fst dword ptr [eax + 0x28]
// 00647ea0  d9502c               fst dword ptr [eax + 0x2c]
// 00647ea3  d95030               fst dword ptr [eax + 0x30]
// 00647ea6  d95034               fst dword ptr [eax + 0x34]
// 00647ea9  d95038               fst dword ptr [eax + 0x38]
// 00647eac  d9503c               fst dword ptr [eax + 0x3c]
// 00647eaf  d95040               fst dword ptr [eax + 0x40]
// 00647eb2  d95044               fst dword ptr [eax + 0x44]
// 00647eb5  d95048               fst dword ptr [eax + 0x48]
// 00647eb8  d9504c               fst dword ptr [eax + 0x4c]
// 00647ebb  d95050               fst dword ptr [eax + 0x50]
// 00647ebe  d95054               fst dword ptr [eax + 0x54]
// 00647ec1  d95058               fst dword ptr [eax + 0x58]
// 00647ec4  d9585c               fstp dword ptr [eax + 0x5c]
// 00647ec7  d902                 fld dword ptr [edx]
// 00647ec9  d9e1                 fabs 
// 00647ecb  d9e0                 fchs 
// 00647ecd  d94204               fld dword ptr [edx + 4]
// 00647ed0  d9e1                 fabs 
// 00647ed2  d9e0                 fchs 
// 00647ed4  d94208               fld dword ptr [edx + 8]
// 00647ed7  d9e1                 fabs 
// 00647ed9  8bd6                 mov edx, esi
// 00647edb  d9e0                 fchs 
// 00647edd  d905b8c38100         fld dword ptr [0x81c3b8]
// 00647ee3  dccb                 fmul st(3), st(0)
// 00647ee5  eb11                 jmp 0x647ef8
// 00647ee7  d9c9                 fxch st(1)
// 00647ee9  ba02000000           mov edx, 2
// 00647eee  d9cb                 fxch st(3)
// 00647ef0  dccb                 fmul st(3), st(0)
// 00647ef2  eb04                 jmp 0x647ef8
// 00647ef4  d9c9                 fxch st(1)
// 00647ef6  d9cb                 fxch st(3)
// 00647ef8  dcca                 fmul st(2), st(0)
// 00647efa  83c118               add ecx, 0x18
// 00647efd  83ea01               sub edx, 1
// 00647f00  dcc9                 fmul st(1), st(0)
// 00647f02  d9cb                 fxch st(3)
// 00647f04  d951d4               fst dword ptr [ecx - 0x2c]
// 00647f07  d9ca                 fxch st(2)
// 00647f09  d951d8               fst dword ptr [ecx - 0x28]
// 00647f0c  d9c9                 fxch st(1)
// 00647f0e  d951dc               fst dword ptr [ecx - 0x24]
// 00647f11  d8cb                 fmul st(3)
// 00647f13  d9ca                 fxch st(2)
// 00647f15  d951e0               fst dword ptr [ecx - 0x20]
// 00647f18  d9c9                 fxch st(1)
// 00647f1a  d951e4               fst dword ptr [ecx - 0x1c]
// 00647f1d  d9ca                 fxch st(2)
// 00647f1f  d951e8               fst dword ptr [ecx - 0x18]
// 00647f22  75d0                 jne 0x647ef4
// 00647f24  83ee01               sub esi, 1
// 00647f27  75be                 jne 0x647ee7
// 00647f29  ddd8                 fstp st(0)
// 00647f2b  5e                   pop esi
// 00647f2c  ddd9                 fstp st(1)
// 00647f2e  ddd9                 fstp st(1)
// 00647f30  ddd8                 fstp st(0)
// 00647f32  c20400               ret 4
// library rbxgs-dll/v8world\Block.cpp (function ??0BlockTemplate@RBX@@AAE@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Block.cpp
