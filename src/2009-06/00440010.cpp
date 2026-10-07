// roc 2009-06 00440010  unit: VCRenderSettingsItem::?$FactoryProduct  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440010
//
// 00440010  8b542408             mov edx, dword ptr [esp + 8]
// 00440014  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00440018  8bc2                 mov eax, edx
// 0044001a  2bc1                 sub eax, ecx
// 0044001c  56                   push esi
// 0044001d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00440021  c1f802               sar eax, 2
// 00440024  8d0486               lea eax, [esi + eax*4]
// 00440027  3bca                 cmp ecx, edx
// 00440029  7412                 je 0x44003d
// 0044002b  2bf1                 sub esi, ecx
// 0044002d  57                   push edi
// 0044002e  8bff                 mov edi, edi
// 00440030  8b39                 mov edi, dword ptr [ecx]
// 00440032  893c0e               mov dword ptr [esi + ecx], edi
// 00440035  83c104               add ecx, 4
// 00440038  3bca                 cmp ecx, edx
// 0044003a  75f4                 jne 0x440030
// 0044003c  5f                   pop edi
// 0044003d  5e                   pop esi
// 0044003e  c3                   ret 
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ??$_Copy_opt@PAW4PixelFormat@Ogre@@PAW412@@std@@YAPAW4PixelFormat@Ogre@@PAW412@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
