// roc 2008-06 00612f60  unit: seg_00610000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00612f60
//
// 00612f60  56                   push esi
// 00612f61  8b742408             mov esi, dword ptr [esp + 8]
// 00612f65  8b4610               mov eax, dword ptr [esi + 0x10]
// 00612f68  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00612f6b  57                   push edi
// 00612f6c  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 00612f6f  7209                 jb 0x612f7a
// 00612f71  56                   push esi
// 00612f72  e819940400           call 0x65c390
// 00612f77  83c404               add esp, 4
// 00612f7a  56                   push esi
// 00612f7b  e8600d0100           call 0x623ce0
// 00612f80  8bf8                 mov edi, eax
// 00612f82  8b4608               mov eax, dword ptr [esi + 8]
// 00612f85  8938                 mov dword ptr [eax], edi
// 00612f87  c7400808000000       mov dword ptr [eax + 8], 8
// 00612f8e  83460810             add dword ptr [esi + 8], 0x10
// 00612f92  83c6f4               add esi, -0xc
// 00612f95  56                   push esi
// 00612f96  57                   push edi
// 00612f97  e864ffffff           call 0x612f00
// 00612f9c  83c40c               add esp, 0xc
// 00612f9f  8bc7                 mov eax, edi
// 00612fa1  5f                   pop edi
// 00612fa2  5e                   pop esi
// 00612fa3  c3                   ret 
// copied from an identical function in another client (function ?sub_5be820@ns_ROCX000000@@YAHPAUOuter@1@@Z)

namespace ns_ROCX000000 {
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
}
