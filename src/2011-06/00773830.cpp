// roc 2011-06 00773830  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00773830
//
// 00773830  8b4104               mov eax, dword ptr [ecx + 4]
// 00773833  56                   push esi
// 00773834  8b7004               mov esi, dword ptr [eax + 4]
// 00773837  807e3500             cmp byte ptr [esi + 0x35], 0
// 0077383b  57                   push edi
// 0077383c  8bf8                 mov edi, eax
// 0077383e  7531                 jne 0x773871
// 00773840  53                   push ebx
// 00773841  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00773845  55                   push ebp
// 00773846  8b2d3405a400         mov ebp, dword ptr [0xa40534]
// 0077384c  8d642400             lea esp, [esp]
// 00773850  8d460c               lea eax, [esi + 0xc]
// 00773853  53                   push ebx
// 00773854  50                   push eax
// 00773855  ffd5                 call ebp
// 00773857  83c408               add esp, 8
// 0077385a  84c0                 test al, al
// 0077385c  7405                 je 0x773863
// 0077385e  8b7608               mov esi, dword ptr [esi + 8]
// 00773861  eb04                 jmp 0x773867
// 00773863  8bfe                 mov edi, esi
// 00773865  8b36                 mov esi, dword ptr [esi]
// 00773867  807e3500             cmp byte ptr [esi + 0x35], 0
// 0077386b  74e3                 je 0x773850
// 0077386d  5d                   pop ebp
// 0077386e  8bc7                 mov eax, edi
// 00773870  5b                   pop ebx
// 00773871  5f                   pop edi
// 00773872  5e                   pop esi
// 00773873  c20400               ret 4
// copied from an identical function in another client (function ?_Lbound@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@@std@@@2@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UE@@@std@@@2@$0A@@std@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// stl: map_str<pod12>
struct E { int v[3]; };
#include <map>
#include <string>
template class std::map<std::string, E>;