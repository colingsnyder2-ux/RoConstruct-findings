// roc 2009-12 0087cf10  unit: XTPPaintThemes::CXTPDefaultTheme  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087cf10
//
// 0087cf10  83ec10               sub esp, 0x10
// 0087cf13  53                   push ebx
// 0087cf14  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0087cf18  55                   push ebp
// 0087cf19  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0087cf1d  56                   push esi
// 0087cf1e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0087cf22  57                   push edi
// 0087cf23  8bf9                 mov edi, ecx
// 0087cf25  83fb03               cmp ebx, 3
// 0087cf28  7405                 je 0x87cf2f
// 0087cf2a  83fb02               cmp ebx, 2
// 0087cf2d  756d                 jne 0x87cf9c
// 0087cf2f  8b06                 mov eax, dword ptr [esi]
// 0087cf31  8b5078               mov edx, dword ptr [eax + 0x78]
// 0087cf34  8bce                 mov ecx, esi
// 0087cf36  ffd2                 call edx
// 0087cf38  85c0                 test eax, eax
// 0087cf3a  7522                 jne 0x87cf5e
// 0087cf3c  8b06                 mov eax, dword ptr [esi]
// 0087cf3e  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0087cf41  8bce                 mov ecx, esi
// 0087cf43  ffd2                 call edx
// 0087cf45  85c0                 test eax, eax
// 0087cf47  7515                 jne 0x87cf5e
// 0087cf49  83fb03               cmp ebx, 3
// 0087cf4c  754e                 jne 0x87cf9c
// 0087cf4e  8b06                 mov eax, dword ptr [esi]
// 0087cf50  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0087cf56  8bce                 mov ecx, esi
// 0087cf58  ffd2                 call edx
// 0087cf5a  85c0                 test eax, eax
// 0087cf5c  743e                 je 0x87cf9c
// 0087cf5e  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0087cf64  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0087cf6a  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0087cf70  89442410             mov dword ptr [esp + 0x10], eax
// 0087cf74  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0087cf7a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087cf7e  6a0f                 push 0xf
// 0087cf80  8bcf                 mov ecx, edi
// 0087cf82  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087cf86  89442420             mov dword ptr [esp + 0x20], eax
// 0087cf8a  e8b106f8ff           call 0x7fd640
// 0087cf8f  50                   push eax
// 0087cf90  8d4c2414             lea ecx, [esp + 0x14]
// 0087cf94  51                   push ecx
// 0087cf95  8bcd                 mov ecx, ebp
// 0087cf97  e86276f7ff           call 0x7f45fe
// 0087cf9c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0087cfa0  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087cfa4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087cfa8  52                   push edx
// 0087cfa9  50                   push eax
// 0087cfaa  51                   push ecx
// 0087cfab  56                   push esi
// 0087cfac  8b742434             mov esi, dword ptr [esp + 0x34]
// 0087cfb0  53                   push ebx
// 0087cfb1  55                   push ebp
// 0087cfb2  56                   push esi
// 0087cfb3  8bcf                 mov ecx, edi
// 0087cfb5  e87639f8ff           call 0x800930
// 0087cfba  5f                   pop edi
// 0087cfbb  8bc6                 mov eax, esi
// 0087cfbd  5e                   pop esi
// 0087cfbe  5d                   pop ebp
// 0087cfbf  5b                   pop ebx
// 0087cfc0  83c410               add esp, 0x10
// 0087cfc3  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp