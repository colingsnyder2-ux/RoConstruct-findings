// from server: 100% by colin
// roc 2007-08 005be820  unit: boost::detail::H::?$sp_counted_impl_p  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005be820
//
// 005be820  56                   push esi
// 005be821  8b742408             mov esi, dword ptr [esp + 8]
// 005be825  8b4610               mov eax, dword ptr [esi + 0x10]
// 005be828  8b4844               mov ecx, dword ptr [eax + 0x44]
// 005be82b  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 005be82e  57                   push edi
// 005be82f  7209                 jb 0x5be83a
// 005be831  56                   push esi
// 005be832  e8c9150500           call 0x60fe00
// 005be837  83c404               add esp, 4
// 005be83a  56                   push esi
// 005be83b  e8d09e0000           call 0x5c8710
// 005be840  8bf8                 mov edi, eax
// 005be842  8b4608               mov eax, dword ptr [esi + 8]
// 005be845  8938                 mov dword ptr [eax], edi
// 005be847  c7400808000000       mov dword ptr [eax + 8], 8
// 005be84e  83460810             add dword ptr [esi + 8], 0x10
// 005be852  83c6f4               add esi, -0xc
// 005be855  56                   push esi
// 005be856  57                   push edi
// 005be857  e864ffffff           call 0x5be7c0
// 005be85c  83c40c               add esp, 0xc
// 005be85f  8bc7                 mov eax, edi
// 005be861  5f                   pop edi
// 005be862  5e                   pop esi
// 005be863  c3                   ret 

struct Inner {
    char pad[0x40];
    unsigned int field40;
    unsigned int field44;
};

struct Outer {
    char pad0[8];
    unsigned int* field8;
    char padC[4];
    Inner* field10;
};

extern "C" void __cdecl sub_60fe00(Outer*);
extern "C" int __cdecl sub_5c8710(Outer*);
extern "C" void __cdecl sub_5be7c0(int, Outer*);

int __cdecl sub_5be820(Outer* obj)
{
    Inner* inner = obj->field10;
    if (inner->field44 >= inner->field40)
    {
        sub_60fe00(obj);
    }
    int result = sub_5c8710(obj);
    unsigned int* p = obj->field8;
    *p = (unsigned int)result;
    p[2] = 8;
    obj->field8 = (unsigned int*)((char*)obj->field8 + 0x10);
    sub_5be7c0(result, (Outer*)((char*)obj - 0xc));
    return result;
}
