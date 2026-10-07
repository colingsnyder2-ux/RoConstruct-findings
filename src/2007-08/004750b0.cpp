// roc 2007-08 004750b0  unit: CInstanceRecord::CNameItem  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004750b0
//
// 004750b0  83ec30               sub esp, 0x30
// 004750b3  53                   push ebx
// 004750b4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004750b8  55                   push ebp
// 004750b9  56                   push esi
// 004750ba  8be9                 mov ebp, ecx
// 004750bc  57                   push edi
// 004750bd  8bcb                 mov ecx, ebx
// 004750bf  e88cffffff           call 0x475050
// 004750c4  8d44241c             lea eax, [esp + 0x1c]
// 004750c8  50                   push eax
// 004750c9  8bcd                 mov ecx, ebp
// 004750cb  e8d0480900           call 0x5099a0
// 004750d0  8bf0                 mov esi, eax
// 004750d2  b909000000           mov ecx, 9
// 004750d7  8bfb                 mov edi, ebx
// 004750d9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004750db  8d4c241c             lea ecx, [esp + 0x1c]
// 004750df  51                   push ecx
// 004750e0  8bcb                 mov ecx, ebx
// 004750e2  e8f9470900           call 0x5098e0
// 004750e7  5f                   pop edi
// 004750e8  d94528               fld dword ptr [ebp + 0x28]
// 004750eb  5e                   pop esi
// 004750ec  d94524               fld dword ptr [ebp + 0x24]
// 004750ef  d9452c               fld dword ptr [ebp + 0x2c]
// 004750f2  5d                   pop ebp
// 004750f3  d94004               fld dword ptr [eax + 4]
// 004750f6  d8cb                 fmul st(3)
// 004750f8  d900                 fld dword ptr [eax]
// 004750fa  d8cb                 fmul st(3)
// 004750fc  dec1                 faddp st(1)
// 004750fe  d94008               fld dword ptr [eax + 8]
// 00475101  d8ca                 fmul st(2)
// 00475103  dec1                 faddp st(1)
// 00475105  d95c2404             fstp dword ptr [esp + 4]
// 00475109  d9400c               fld dword ptr [eax + 0xc]
// 0047510c  d8ca                 fmul st(2)
// 0047510e  d94010               fld dword ptr [eax + 0x10]
// 00475111  d8cc                 fmul st(4)
// 00475113  dec1                 faddp st(1)
// 00475115  d94014               fld dword ptr [eax + 0x14]
// 00475118  d8ca                 fmul st(2)
// 0047511a  dec1                 faddp st(1)
// 0047511c  d95c2408             fstp dword ptr [esp + 8]
// 00475120  d94018               fld dword ptr [eax + 0x18]
// 00475123  deca                 fmulp st(2)
// 00475125  d9401c               fld dword ptr [eax + 0x1c]
// 00475128  decb                 fmulp st(3)
// 0047512a  d9c9                 fxch st(1)
// 0047512c  dec2                 faddp st(2)
// 0047512e  d84820               fmul dword ptr [eax + 0x20]
// 00475131  8bc3                 mov eax, ebx
// 00475133  dec1                 faddp st(1)
// 00475135  d95c240c             fstp dword ptr [esp + 0xc]
// 00475139  d9442404             fld dword ptr [esp + 4]
// 0047513d  d95b24               fstp dword ptr [ebx + 0x24]
// 00475140  d9442408             fld dword ptr [esp + 8]
// 00475144  d95b28               fstp dword ptr [ebx + 0x28]
// 00475147  d944240c             fld dword ptr [esp + 0xc]
// 0047514b  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0047514e  5b                   pop ebx
// 0047514f  83c430               add esp, 0x30
// 00475152  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?inverse@CoordinateFrame@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
