// from server: 73% by colin
// roc 2007-08 005811d0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005811d0
//
// 005811d0  8b442404             mov eax, dword ptr [esp + 4]
// 005811d4  85c0                 test eax, eax
// 005811d6  8bd1                 mov edx, ecx
// 005811d8  7405                 je 0x5811df
// 005811da  83c0fc               add eax, -4
// 005811dd  eb02                 jmp 0x5811e1
// 005811df  33c0                 xor eax, eax
// 005811e1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005811e5  8b09                 mov ecx, dword ptr [ecx]
// 005811e7  56                   push esi
// 005811e8  8b7220               mov esi, dword ptr [edx + 0x20]
// 005811eb  51                   push ecx
// 005811ec  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 005811f2  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005811f5  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005811f8  8b5218               mov edx, dword ptr [edx + 0x18]
// 005811fb  8d8c01f8000000       lea ecx, [ecx + eax + 0xf8]
// 00581202  ffd2                 call edx
// 00581204  5e                   pop esi
// 00581205  c20800               ret 8

struct DescribedBase {
    char pad[0xf8];
    int memberOffset;
};

struct GetSet {
    char pad0[0x18];
    int offset;
    int index;
    int func;
};

struct BoundPropGetSet {
    void invoke(DescribedBase* object, int* value) const;
};

void BoundPropGetSet::invoke(DescribedBase* object, int* value) const
{
    DescribedBase* base = object ? (DescribedBase*)((char*)object - 4) : 0;
    int* table = *(int**)((char*)base + 0xf8);
    int idx = *(int*)((char*)this + 0x20);
    int off = *(int*)((char*)table + idx) + *(int*)((char*)this + 0x1c);
    void (*fn)(void*, int) = *(void(**)(void*, int))((char*)this + 0x18);
    fn((char*)base + off + 0xf8, *value);
}
