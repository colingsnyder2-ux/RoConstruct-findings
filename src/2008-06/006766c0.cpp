// roc 2008-06 006766c0  unit: RBX::AdornG3D  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006766c0
//
// 006766c0  56                   push esi
// 006766c1  8bf1                 mov esi, ecx
// 006766c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006766c7  8b06                 mov eax, dword ptr [esi]
// 006766c9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 006766cc  51                   push ecx
// 006766cd  8bce                 mov ecx, esi
// 006766cf  ffd2                 call edx
// 006766d1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006766d4  6a05                 push 5
// 006766d6  e8354de0ff           call 0x47b410
// 006766db  8b442408             mov eax, dword ptr [esp + 8]
// 006766df  8b4e04               mov ecx, dword ptr [esi + 4]
// 006766e2  50                   push eax
// 006766e3  e8d817e0ff           call 0x477ec0
// 006766e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006766ec  51                   push ecx
// 006766ed  8b4e04               mov ecx, dword ptr [esi + 4]
// 006766f0  e8cb17e0ff           call 0x477ec0
// 006766f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006766f9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006766fc  52                   push edx
// 006766fd  e8be17e0ff           call 0x477ec0
// 00676702  8b442414             mov eax, dword ptr [esp + 0x14]
// 00676706  8b4e04               mov ecx, dword ptr [esi + 4]
// 00676709  50                   push eax
// 0067670a  e8b117e0ff           call 0x477ec0
// 0067670f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00676712  e87922e0ff           call 0x478990
// 00676717  5e                   pop esi
// 00676718  c21400               ret 0x14
// library rbxgs-appdraw/AdornG3D.cpp (function ?quad@AdornG3D@RBX@@UAEXABVVector3@G3D@@000ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
