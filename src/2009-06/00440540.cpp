// roc 2009-06 00440540  unit: G3D::VVector2int16::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440540
//
// 00440540  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00440544  85c9                 test ecx, ecx
// 00440546  761a                 jbe 0x440562
// 00440548  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0044054c  8b442404             mov eax, dword ptr [esp + 4]
// 00440550  56                   push esi
// 00440551  85c0                 test eax, eax
// 00440553  7404                 je 0x440559
// 00440555  8b32                 mov esi, dword ptr [edx]
// 00440557  8930                 mov dword ptr [eax], esi
// 00440559  49                   dec ecx
// 0044055a  83c004               add eax, 4
// 0044055d  85c9                 test ecx, ecx
// 0044055f  77f0                 ja 0x440551
// 00440561  5e                   pop esi
// 00440562  c3                   ret 
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ??$_Uninit_fill_n@PAW4PixelFormat@Ogre@@IW412@V?$allocator@W4PixelFormat@Ogre@@@std@@@std@@YAXPAW4PixelFormat@Ogre@@IABW412@AAV?$allocator@W4PixelFormat@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
