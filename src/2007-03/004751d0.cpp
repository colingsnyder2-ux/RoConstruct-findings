// roc 2007-03 004751d0  unit: seg_00470000  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004751d0
//
// 004751d0  83ec30               sub esp, 0x30
// 004751d3  53                   push ebx
// 004751d4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004751d8  55                   push ebp
// 004751d9  56                   push esi
// 004751da  8be9                 mov ebp, ecx
// 004751dc  57                   push edi
// 004751dd  8bcb                 mov ecx, ebx
// 004751df  e88cffffff           call 0x475170
// 004751e4  8d44241c             lea eax, [esp + 0x1c]
// 004751e8  50                   push eax
// 004751e9  8bcd                 mov ecx, ebp
// 004751eb  e8609b0800           call 0x4fed50
// 004751f0  8bf0                 mov esi, eax
// 004751f2  b909000000           mov ecx, 9
// 004751f7  8bfb                 mov edi, ebx
// 004751f9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004751fb  8d4c241c             lea ecx, [esp + 0x1c]
// 004751ff  51                   push ecx
// 00475200  8bcb                 mov ecx, ebx
// 00475202  e8899a0800           call 0x4fec90
// 00475207  5f                   pop edi
// 00475208  d94528               fld dword ptr [ebp + 0x28]
// 0047520b  5e                   pop esi
// 0047520c  d94524               fld dword ptr [ebp + 0x24]
// 0047520f  d9452c               fld dword ptr [ebp + 0x2c]
// 00475212  5d                   pop ebp
// 00475213  d94004               fld dword ptr [eax + 4]
// 00475216  d8cb                 fmul st(3)
// 00475218  d900                 fld dword ptr [eax]
// 0047521a  d8cb                 fmul st(3)
// 0047521c  dec1                 faddp st(1)
// 0047521e  d94008               fld dword ptr [eax + 8]
// 00475221  d8ca                 fmul st(2)
// 00475223  dec1                 faddp st(1)
// 00475225  d95c2404             fstp dword ptr [esp + 4]
// 00475229  d9400c               fld dword ptr [eax + 0xc]
// 0047522c  d8ca                 fmul st(2)
// 0047522e  d94010               fld dword ptr [eax + 0x10]
// 00475231  d8cc                 fmul st(4)
// 00475233  dec1                 faddp st(1)
// 00475235  d94014               fld dword ptr [eax + 0x14]
// 00475238  d8ca                 fmul st(2)
// 0047523a  dec1                 faddp st(1)
// 0047523c  d95c2408             fstp dword ptr [esp + 8]
// 00475240  d94018               fld dword ptr [eax + 0x18]
// 00475243  deca                 fmulp st(2)
// 00475245  d9401c               fld dword ptr [eax + 0x1c]
// 00475248  decb                 fmulp st(3)
// 0047524a  d9c9                 fxch st(1)
// 0047524c  dec2                 faddp st(2)
// 0047524e  d84820               fmul dword ptr [eax + 0x20]
// 00475251  8bc3                 mov eax, ebx
// 00475253  dec1                 faddp st(1)
// 00475255  d95c240c             fstp dword ptr [esp + 0xc]
// 00475259  d9442404             fld dword ptr [esp + 4]
// 0047525d  d95b24               fstp dword ptr [ebx + 0x24]
// 00475260  d9442408             fld dword ptr [esp + 8]
// 00475264  d95b28               fstp dword ptr [ebx + 0x28]
// 00475267  d944240c             fld dword ptr [esp + 0xc]
// 0047526b  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0047526e  5b                   pop ebx
// 0047526f  83c430               add esp, 0x30
// 00475272  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ?inverse@CoordinateFrame@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
