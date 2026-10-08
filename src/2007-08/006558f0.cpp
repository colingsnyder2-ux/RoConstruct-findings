// from server: 84% by colin
// roc 2007-08 006558f0  unit: CInstanceRecord::CNameItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006558f0
//
// 006558f0  833dcc878c0000       cmp dword ptr [0x8c87cc], 0
// 006558f7  b800040000           mov eax, 0x400
// 006558fc  7411                 je 0x65590f
// 006558fe  e80dd70500           call 0x6b3010
// 00655903  8b10                 mov edx, dword ptr [eax]
// 00655905  8bc8                 mov ecx, eax
// 00655907  8b4234               mov eax, dword ptr [edx + 0x34]
// 0065590a  ffd0                 call eax
// 0065590c  0fb7c0               movzx eax, ax
// 0065590f  c3                   ret 

struct CNameItem
{
    unsigned short getValue() const;
};

extern int g_flag_008c87cc;

extern "C" void* __cdecl sub_006b3010();

unsigned short CNameItem::getValue() const
{
    unsigned short result = 0x400;
    if (g_flag_008c87cc != 0)
    {
        void* p = sub_006b3010();
        void** vtbl = *(void***)p;
        typedef unsigned short (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[0x34 / 4];
        result = fn(p);
    }
    return result;
}
