// roc 2012-06 00845b80  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00845b80
//
// 00845b80  8b4104               mov eax, dword ptr [ecx + 4]
// 00845b83  56                   push esi
// 00845b84  8b7004               mov esi, dword ptr [eax + 4]
// 00845b87  807e3500             cmp byte ptr [esi + 0x35], 0
// 00845b8b  57                   push edi
// 00845b8c  8bf8                 mov edi, eax
// 00845b8e  7531                 jne 0x845bc1
// 00845b90  53                   push ebx
// 00845b91  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00845b95  55                   push ebp
// 00845b96  8b2d5026b200         mov ebp, dword ptr [0xb22650]
// 00845b9c  8d642400             lea esp, [esp]
// 00845ba0  8d460c               lea eax, [esi + 0xc]
// 00845ba3  53                   push ebx
// 00845ba4  50                   push eax
// 00845ba5  ffd5                 call ebp
// 00845ba7  83c408               add esp, 8
// 00845baa  84c0                 test al, al
// 00845bac  7405                 je 0x845bb3
// 00845bae  8b7608               mov esi, dword ptr [esi + 8]
// 00845bb1  eb04                 jmp 0x845bb7
// 00845bb3  8bfe                 mov edi, esi
// 00845bb5  8b36                 mov esi, dword ptr [esi]
// 00845bb7  807e3500             cmp byte ptr [esi + 0x35], 0
// 00845bbb  74e3                 je 0x845ba0
// 00845bbd  5d                   pop ebp
// 00845bbe  8bc7                 mov eax, edi
// 00845bc0  5b                   pop ebx
// 00845bc1  5f                   pop edi
// 00845bc2  5e                   pop esi
// 00845bc3  c20400               ret 4
// copied from an identical function in another client (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// stl: map_str<pod12>
struct E { int v[3]; };
#include <map>
#include <string>
template class std::map<std::string, E>;