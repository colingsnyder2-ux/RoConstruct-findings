// from server: 100% by colin
// roc 2007-08 004b8cf0  unit: RakPeer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8cf0
//
// 004b8cf0  56                   push esi
// 004b8cf1  8bf1                 mov esi, ecx
// 004b8cf3  8b06                 mov eax, dword ptr [esi]
// 004b8cf5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004b8cf8  ffd2                 call edx
// 004b8cfa  84c0                 test al, al
// 004b8cfc  7406                 je 0x4b8d04
// 004b8cfe  32c0                 xor al, al
// 004b8d00  5e                   pop esi
// 004b8d01  c20400               ret 4
// 004b8d04  8b442408             mov eax, dword ptr [esp + 8]
// 004b8d08  3d00020000           cmp eax, 0x200
// 004b8d0d  7d11                 jge 0x4b8d20
// 004b8d0f  b800020000           mov eax, 0x200
// 004b8d14  898608070000         mov dword ptr [esi + 0x708], eax
// 004b8d1a  b001                 mov al, 1
// 004b8d1c  5e                   pop esi
// 004b8d1d  c20400               ret 4
// 004b8d20  3dd4050000           cmp eax, 0x5d4
// 004b8d25  7e05                 jle 0x4b8d2c
// 004b8d27  b8d4050000           mov eax, 0x5d4
// 004b8d2c  898608070000         mov dword ptr [esi + 0x708], eax
// 004b8d32  b001                 mov al, 1
// 004b8d34  5e                   pop esi
// 004b8d35  c20400               ret 4

struct RakPeer {
    virtual bool vfunc0();
    virtual bool vfunc1();
    virtual bool vfunc2();
    virtual bool vfunc3();
    virtual bool vfunc4();
    virtual bool vfunc5();
    virtual bool vfunc6();
    virtual bool vfunc7();
    virtual bool vfunc8();
    virtual bool vfunc9();
    virtual bool vfunc10();
    virtual bool vfunc11();
    char pad[0x704];
    int field_708;
    bool setLimit(int limit);
};

bool RakPeer::setLimit(int limit)
{
    if (vfunc11()) {
        return false;
    }
    if (limit < 0x200) {
        limit = 0x200;
    } else if (limit > 0x5d4) {
        limit = 0x5d4;
    }
    field_708 = limit;
    return true;
}
