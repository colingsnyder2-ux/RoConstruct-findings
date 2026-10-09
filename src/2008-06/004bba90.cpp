// roc 2008-06 004bba90  unit: ProfiledRakPeer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bba90
//
// 004bba90  56                   push esi
// 004bba91  8bf1                 mov esi, ecx
// 004bba93  8b06                 mov eax, dword ptr [esi]
// 004bba95  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bba98  ffd2                 call edx
// 004bba9a  84c0                 test al, al
// 004bba9c  7406                 je 0x4bbaa4
// 004bba9e  32c0                 xor al, al
// 004bbaa0  5e                   pop esi
// 004bbaa1  c20400               ret 4
// 004bbaa4  8b442408             mov eax, dword ptr [esp + 8]
// 004bbaa8  3d00020000           cmp eax, 0x200
// 004bbaad  7d11                 jge 0x4bbac0
// 004bbaaf  b800020000           mov eax, 0x200
// 004bbab4  898608070000         mov dword ptr [esi + 0x708], eax
// 004bbaba  b001                 mov al, 1
// 004bbabc  5e                   pop esi
// 004bbabd  c20400               ret 4
// 004bbac0  3dd4050000           cmp eax, 0x5d4
// 004bbac5  7e05                 jle 0x4bbacc
// 004bbac7  b8d4050000           mov eax, 0x5d4
// 004bbacc  898608070000         mov dword ptr [esi + 0x708], eax
// 004bbad2  b001                 mov al, 1
// 004bbad4  5e                   pop esi
// 004bbad5  c20400               ret 4
// copied from an identical function in another client (function ?setLimit@RakPeer@ns_ROCX000001@@QAE_NH@Z)

namespace ns_ROCX000001 {
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
}
