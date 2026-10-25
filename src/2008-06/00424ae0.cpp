// from server: 100% by king_originala
// roc 2008-06 00424ae0  unit: CRobloxTreeCtrlNode  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424ae0
//
// 00424ae0  56                   push esi
// 00424ae1  8bf1                 mov esi, ecx
// 00424ae3  807e5500             cmp byte ptr [esi + 0x55], 0
// 00424ae7  7408                 je 0x424af1
// 00424ae9  806654fd             and byte ptr [esi + 0x54], 0xfd
// 00424aed  5e                   pop esi
// 00424aee  c20400               ret 4
// 00424af1  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00424af4  8b01                 mov eax, dword ptr [ecx]
// 00424af6  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00424afc  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 00424b02  6a08                 push 8
// 00424b04  52                   push edx
// 00424b05  ffd0                 call eax
// 00424b07  83c820               or eax, 0x20
// 00424b0a  7439                 je 0x424b45
// 00424b0c  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00424b0f  804e5402             or byte ptr [esi + 0x54], 2
// 00424b13  8b11                 mov edx, dword ptr [ecx]
// 00424b15  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00424b1b  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 00424b21  6a08                 push 8
// 00424b23  50                   push eax
// 00424b24  ffd2                 call edx
// 00424b26  0d80000000           or eax, 0x80
// 00424b2b  7418                 je 0x424b45
// 00424b2d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00424b30  8b01                 mov eax, dword ptr [ecx]
// 00424b32  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00424b38  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 00424b3e  6a08                 push 8
// 00424b40  6a20                 push 0x20
// 00424b42  52                   push edx
// 00424b43  ffd0                 call eax
// 00424b45  5e                   pop esi
// 00424b46  c20400               ret 4

struct Owner;

struct Table {
    void* padding[81];
    unsigned int (__thiscall *get)(Owner*, unsigned int, int);
    void* reserved;
    void (__thiscall *set)(Owner*, unsigned int, unsigned int, int);
};

struct Owner {
    Table* table;
};

struct S {
    unsigned char padding0[0x54];
    unsigned char flags;
    unsigned char disabled;
    unsigned char padding1[2];
    Owner* owner;
    unsigned char padding2[0x24];
    unsigned int item;

    void f(int);
};

void S::f(int)
{
    if (disabled) {
        flags &= 0xfd;
        return;
    }

    if (owner->table->get(owner, item, 8) | 0x20) {
        Owner* p = owner;
        flags |= 2;
        if (p->table->get(p, item, 8) | 0x80)
            owner->table->set(owner, item, 0x20, 8);
    }
}
