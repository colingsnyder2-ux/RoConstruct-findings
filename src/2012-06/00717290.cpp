// from server: 100% by auto
// roc 2012-06 00717290  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00717290
//
// 00717290  8b542404             mov edx, dword ptr [esp + 4]
// 00717294  57                   push edi
// 00717295  8bf9                 mov edi, ecx
// 00717297  85d2                 test edx, edx
// 00717299  750f                 jne 0x7172aa
// 0071729b  33c0                 xor eax, eax
// 0071729d  50                   push eax
// 0071729e  52                   push edx
// 0071729f  e89cfbffff           call 0x716e40
// 007172a4  8bc7                 mov eax, edi
// 007172a6  5f                   pop edi
// 007172a7  c20400               ret 4
// 007172aa  8bc2                 mov eax, edx
// 007172ac  56                   push esi
// 007172ad  8d7001               lea esi, [eax + 1]
// 007172b0  8a08                 mov cl, byte ptr [eax]
// 007172b2  40                   inc eax
// 007172b3  84c9                 test cl, cl
// 007172b5  75f9                 jne 0x7172b0
// 007172b7  2bc6                 sub eax, esi
// 007172b9  5e                   pop esi
// 007172ba  50                   push eax
// 007172bb  52                   push edx
// 007172bc  8bcf                 mov ecx, edi
// 007172be  e87dfbffff           call 0x716e40
// 007172c3  8bc7                 mov eax, edi
// 007172c5  5f                   pop edi
// 007172c6  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??4?$CSimpleStringT@D$0A@@ATL@@QAEAAV01@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
