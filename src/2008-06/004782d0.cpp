// from server: 100% by auto
// roc 2008-06 004782d0  unit: CInstanceRecord::CNameItem  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004782d0
//
// 004782d0  56                   push esi
// 004782d1  8bf1                 mov esi, ecx
// 004782d3  e848bb0900           call 0x513e20
// 004782d8  50                   push eax
// 004782d9  8bce                 mov ecx, esi
// 004782db  e840af0900           call 0x513220
// 004782e0  b801000000           mov eax, 1
// 004782e5  840550f09600         test byte ptr [0x96f050], al
// 004782eb  751a                 jne 0x478307
// 004782ed  d9ee                 fldz 
// 004782ef  090550f09600         or dword ptr [0x96f050], eax
// 004782f5  d91544f09600         fst dword ptr [0x96f044]
// 004782fb  d91548f09600         fst dword ptr [0x96f048]
// 00478301  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00478307  d90544f09600         fld dword ptr [0x96f044]
// 0047830d  8bc6                 mov eax, esi
// 0047830f  d95e24               fstp dword ptr [esi + 0x24]
// 00478312  d90548f09600         fld dword ptr [0x96f048]
// 00478318  d95e28               fstp dword ptr [esi + 0x28]
// 0047831b  d9054cf09600         fld dword ptr [0x96f04c]
// 00478321  d95e2c               fstp dword ptr [esi + 0x2c]
// 00478324  5e                   pop esi
// 00478325  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
