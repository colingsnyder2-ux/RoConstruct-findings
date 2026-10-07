// roc 2008-06 00741100  unit: XTPPaintThemes::CXTPOfficeTheme  size: 513 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741100
//
// 00741100  83ec20               sub esp, 0x20
// 00741103  53                   push ebx
// 00741104  55                   push ebp
// 00741105  56                   push esi
// 00741106  57                   push edi
// 00741107  6a1e                 push 0x1e
// 00741109  8bd9                 mov ebx, ecx
// 0074110b  e860cff6ff           call 0x6ae070
// 00741110  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00741114  50                   push eax
// 00741115  8d44243c             lea eax, [esp + 0x3c]
// 00741119  50                   push eax
// 0074111a  8bcd                 mov ecx, ebp
// 0074111c  e83d02f6ff           call 0x6a135e
// 00741121  8b742440             mov esi, dword ptr [esp + 0x40]
// 00741125  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00741129  8d0431               lea eax, [ecx + esi]
// 0074112c  99                   cdq 
// 0074112d  2bc2                 sub eax, edx
// 0074112f  d1f8                 sar eax, 1
// 00741131  837c244802           cmp dword ptr [esp + 0x48], 2
// 00741136  0f858e000000         jne 0x7411ca
// 0074113c  8d70f8               lea esi, [eax - 8]
// 0074113f  8d7808               lea edi, [eax + 8]
// 00741142  3bf7                 cmp esi, edi
// 00741144  0f8dad010000         jge 0x7412f7
// 0074114a  8d9b00000000         lea ebx, [ebx]
// 00741150  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00741154  8d4804               lea ecx, [eax + 4]
// 00741157  8d5601               lea edx, [esi + 1]
// 0074115a  89542410             mov dword ptr [esp + 0x10], edx
// 0074115e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00741162  8d5603               lea edx, [esi + 3]
// 00741165  83c006               add eax, 6
// 00741168  6a05                 push 5
// 0074116a  8bcb                 mov ecx, ebx
// 0074116c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00741170  89442420             mov dword ptr [esp + 0x20], eax
// 00741174  e8f7cef6ff           call 0x6ae070
// 00741179  50                   push eax
// 0074117a  8d442414             lea eax, [esp + 0x14]
// 0074117e  50                   push eax
// 0074117f  8bcd                 mov ecx, ebp
// 00741181  e8d801f6ff           call 0x6a135e
// 00741186  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0074118a  8d4803               lea ecx, [eax + 3]
// 0074118d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00741191  8d5602               lea edx, [esi + 2]
// 00741194  83c005               add eax, 5
// 00741197  6a26                 push 0x26
// 00741199  8bcb                 mov ecx, ebx
// 0074119b  89742424             mov dword ptr [esp + 0x24], esi
// 0074119f  8954242c             mov dword ptr [esp + 0x2c], edx
// 007411a3  89442430             mov dword ptr [esp + 0x30], eax
// 007411a7  e8c4cef6ff           call 0x6ae070
// 007411ac  50                   push eax
// 007411ad  8d442424             lea eax, [esp + 0x24]
// 007411b1  50                   push eax
// 007411b2  8bcd                 mov ecx, ebp
// 007411b4  e8a501f6ff           call 0x6a135e
// 007411b9  83c604               add esi, 4
// 007411bc  3bf7                 cmp esi, edi
// 007411be  7c90                 jl 0x741150
// 007411c0  5f                   pop edi
// 007411c1  5e                   pop esi
// 007411c2  5d                   pop ebp
// 007411c3  5b                   pop ebx
// 007411c4  83c420               add esp, 0x20
// 007411c7  c21800               ret 0x18
// 007411ca  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007411ce  83c7fc               add edi, -4
// 007411d1  83c6fc               add esi, -4
// 007411d4  8d4701               lea eax, [edi + 1]
// 007411d7  8d4e01               lea ecx, [esi + 1]
// 007411da  89442424             mov dword ptr [esp + 0x24], eax
// 007411de  894c2420             mov dword ptr [esp + 0x20], ecx
// 007411e2  8d5603               lea edx, [esi + 3]
// 007411e5  8d4703               lea eax, [edi + 3]
// 007411e8  6a05                 push 5
// 007411ea  8bcb                 mov ecx, ebx
// 007411ec  8954242c             mov dword ptr [esp + 0x2c], edx
// 007411f0  89442430             mov dword ptr [esp + 0x30], eax
// 007411f4  e877cef6ff           call 0x6ae070
// 007411f9  50                   push eax
// 007411fa  8d442424             lea eax, [esp + 0x24]
// 007411fe  50                   push eax
// 007411ff  8bcd                 mov ecx, ebp
// 00741201  e85801f6ff           call 0x6a135e
// 00741206  8d4e02               lea ecx, [esi + 2]
// 00741209  894c2428             mov dword ptr [esp + 0x28], ecx
// 0074120d  8d4702               lea eax, [edi + 2]
// 00741210  6a26                 push 0x26
// 00741212  8bcb                 mov ecx, ebx
// 00741214  89742424             mov dword ptr [esp + 0x24], esi
// 00741218  897c2428             mov dword ptr [esp + 0x28], edi
// 0074121c  89442430             mov dword ptr [esp + 0x30], eax
// 00741220  e84bcef6ff           call 0x6ae070
// 00741225  50                   push eax
// 00741226  8d542424             lea edx, [esp + 0x24]
// 0074122a  52                   push edx
// 0074122b  8bcd                 mov ecx, ebp
// 0074122d  e82c01f6ff           call 0x6a135e
// 00741232  83ee04               sub esi, 4
// 00741235  8d4601               lea eax, [esi + 1]
// 00741238  89442420             mov dword ptr [esp + 0x20], eax
// 0074123c  8d4701               lea eax, [edi + 1]
// 0074123f  8d4e03               lea ecx, [esi + 3]
// 00741242  89442424             mov dword ptr [esp + 0x24], eax
// 00741246  894c2428             mov dword ptr [esp + 0x28], ecx
// 0074124a  8d4703               lea eax, [edi + 3]
// 0074124d  6a05                 push 5
// 0074124f  8bcb                 mov ecx, ebx
// 00741251  89442430             mov dword ptr [esp + 0x30], eax
// 00741255  e816cef6ff           call 0x6ae070
// 0074125a  50                   push eax
// 0074125b  8d542424             lea edx, [esp + 0x24]
// 0074125f  52                   push edx
// 00741260  8bcd                 mov ecx, ebp
// 00741262  e8f700f6ff           call 0x6a135e
// 00741267  8d4602               lea eax, [esi + 2]
// 0074126a  89442428             mov dword ptr [esp + 0x28], eax
// 0074126e  8d4702               lea eax, [edi + 2]
// 00741271  6a26                 push 0x26
// 00741273  8bcb                 mov ecx, ebx
// 00741275  89742424             mov dword ptr [esp + 0x24], esi
// 00741279  897c2428             mov dword ptr [esp + 0x28], edi
// 0074127d  89442430             mov dword ptr [esp + 0x30], eax
// 00741281  e8eacdf6ff           call 0x6ae070
// 00741286  50                   push eax
// 00741287  8d4c2424             lea ecx, [esp + 0x24]
// 0074128b  51                   push ecx
// 0074128c  8bcd                 mov ecx, ebp
// 0074128e  e8cb00f6ff           call 0x6a135e
// 00741293  83c604               add esi, 4
// 00741296  83ef04               sub edi, 4
// 00741299  8d5601               lea edx, [esi + 1]
// 0074129c  8d4e03               lea ecx, [esi + 3]
// 0074129f  89542420             mov dword ptr [esp + 0x20], edx
// 007412a3  8d4701               lea eax, [edi + 1]
// 007412a6  894c2428             mov dword ptr [esp + 0x28], ecx
// 007412aa  8d5703               lea edx, [edi + 3]
// 007412ad  6a05                 push 5
// 007412af  8bcb                 mov ecx, ebx
// 007412b1  89442428             mov dword ptr [esp + 0x28], eax
// 007412b5  89542430             mov dword ptr [esp + 0x30], edx
// 007412b9  e8b2cdf6ff           call 0x6ae070
// 007412be  50                   push eax
// 007412bf  8d442424             lea eax, [esp + 0x24]
// 007412c3  50                   push eax
// 007412c4  8bcd                 mov ecx, ebp
// 007412c6  e89300f6ff           call 0x6a135e
// 007412cb  89742420             mov dword ptr [esp + 0x20], esi
// 007412cf  897c2424             mov dword ptr [esp + 0x24], edi
// 007412d3  83c602               add esi, 2
// 007412d6  83c702               add edi, 2
// 007412d9  6a26                 push 0x26
// 007412db  8bcb                 mov ecx, ebx
// 007412dd  8974242c             mov dword ptr [esp + 0x2c], esi
// 007412e1  897c2430             mov dword ptr [esp + 0x30], edi
// 007412e5  e886cdf6ff           call 0x6ae070
// 007412ea  50                   push eax
// 007412eb  8d4c2424             lea ecx, [esp + 0x24]
// 007412ef  51                   push ecx
// 007412f0  8bcd                 mov ecx, ebp
// 007412f2  e86700f6ff           call 0x6a135e
// 007412f7  5f                   pop edi
// 007412f8  5e                   pop esi
// 007412f9  5d                   pop ebp
// 007412fa  5b                   pop ebx
// 007412fb  83c420               add esp, 0x20
// 007412fe  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawPopupResizeGripper@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
