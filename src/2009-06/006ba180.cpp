// roc 2009-06 006ba180  unit: RBX::UniversalTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba180
//
// 006ba180  56                   push esi
// 006ba181  8b742408             mov esi, dword ptr [esp + 8]
// 006ba185  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ba188  8b4844               mov ecx, dword ptr [eax + 0x44]
// 006ba18b  57                   push edi
// 006ba18c  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 006ba18f  7209                 jb 0x6ba19a
// 006ba191  56                   push esi
// 006ba192  e829fa0200           call 0x6e9bc0
// 006ba197  83c404               add esp, 4
// 006ba19a  56                   push esi
// 006ba19b  e8a0980000           call 0x6c3a40
// 006ba1a0  8bf8                 mov edi, eax
// 006ba1a2  8b4608               mov eax, dword ptr [esi + 8]
// 006ba1a5  8938                 mov dword ptr [eax], edi
// 006ba1a7  c7400808000000       mov dword ptr [eax + 8], 8
// 006ba1ae  83460810             add dword ptr [esi + 8], 0x10
// 006ba1b2  83c6f4               add esi, -0xc
// 006ba1b5  56                   push esi
// 006ba1b6  57                   push edi
// 006ba1b7  e864ffffff           call 0x6ba120
// 006ba1bc  83c40c               add esp, 0xc
// 006ba1bf  8bc7                 mov eax, edi
// 006ba1c1  5f                   pop edi
// 006ba1c2  5e                   pop esi
// 006ba1c3  c3                   ret 
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
