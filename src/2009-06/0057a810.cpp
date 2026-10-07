// roc 2009-06 0057a810  unit: G3D::LineSegment  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a810
//
// 0057a810  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057a814  8b542404             mov edx, dword ptr [esp + 4]
// 0057a818  56                   push esi
// 0057a819  8bf1                 mov esi, ecx
// 0057a81b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057a81f  50                   push eax
// 0057a820  51                   push ecx
// 0057a821  52                   push edx
// 0057a822  8bce                 mov ecx, esi
// 0057a824  e8f7fdffff           call 0x57a620
// 0057a829  c70674bf8c00         mov dword ptr [esi], 0x8cbf74
// 0057a82f  8bc6                 mov eax, esi
// 0057a831  5e                   pop esi
// 0057a832  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
