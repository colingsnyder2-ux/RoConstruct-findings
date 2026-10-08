// roc 2010-06 0068fa90  unit: RBX::Mechanism  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068fa90
//
// 0068fa90  d944240c             fld dword ptr [esp + 0xc]
// 0068fa94  56                   push esi
// 0068fa95  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068fa99  57                   push edi
// 0068fa9a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0068fa9e  51                   push ecx
// 0068fa9f  8d4624               lea eax, [esi + 0x24]
// 0068faa2  d91c24               fstp dword ptr [esp]
// 0068faa5  50                   push eax
// 0068faa6  8d4f24               lea ecx, [edi + 0x24]
// 0068faa9  51                   push ecx
// 0068faaa  e8e1feffff           call 0x68f990
// 0068faaf  83c40c               add esp, 0xc
// 0068fab2  84c0                 test al, al
// 0068fab4  7503                 jne 0x68fab9
// 0068fab6  5f                   pop edi
// 0068fab7  5e                   pop esi
// 0068fab8  c3                   ret 
// 0068fab9  d9442418             fld dword ptr [esp + 0x18]
// 0068fabd  51                   push ecx
// 0068fabe  d91c24               fstp dword ptr [esp]
// 0068fac1  56                   push esi
// 0068fac2  57                   push edi
// 0068fac3  e838ffffff           call 0x68fa00
// 0068fac8  83c40c               add esp, 0xc
// 0068facb  84c0                 test al, al
// 0068facd  5f                   pop edi
// 0068face  0f95c0               setne al
// 0068fad1  5e                   pop esi
// 0068fad2  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
