// roc 2011-06 006a1b40  unit: RBX::LuaWebService::UCachedLuaWebServiceInfo::?$AsyncHttpCache  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1b40
//
// 006a1b40  53                   push ebx
// 006a1b41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006a1b45  56                   push esi
// 006a1b46  57                   push edi
// 006a1b47  8bf9                 mov edi, ecx
// 006a1b49  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006a1b4c  e8af150000           call 0x6a3100
// 006a1b51  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 006a1b54  8bf0                 mov esi, eax
// 006a1b56  e8a5150000           call 0x6a3100
// 006a1b5b  3bf7                 cmp esi, edi
// 006a1b5d  7402                 je 0x6a1b61
// 006a1b5f  8bc6                 mov eax, esi
// 006a1b61  5f                   pop edi
// 006a1b62  5e                   pop esi
// 006a1b63  5b                   pop ebx
// 006a1b64  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?otherAssembly@Assembly@RBX@@QBEPAV12@PAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
