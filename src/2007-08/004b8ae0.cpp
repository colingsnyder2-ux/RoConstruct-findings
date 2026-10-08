// from server: 88% by colin
// roc 2007-08 004b8ae0  unit: RakPeer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8ae0
//
// 004b8ae0  8b442404             mov eax, dword ptr [esp + 4]
// 004b8ae4  85c0                 test eax, eax
// 004b8ae6  741c                 je 0x4b8b04
// 004b8ae8  803800               cmp byte ptr [eax], 0
// 004b8aeb  7417                 je 0x4b8b04
// 004b8aed  8b542408             mov edx, dword ptr [esp + 8]
// 004b8af1  85d2                 test edx, edx
// 004b8af3  740f                 je 0x4b8b04
// 004b8af5  6a00                 push 0
// 004b8af7  52                   push edx
// 004b8af8  50                   push eax
// 004b8af9  81c1fc060000         add ecx, 0x6fc
// 004b8aff  e8bc140100           call 0x4c9fc0
// 004b8b04  c20800               ret 8

struct RakPeer {
    void m(const char*, const char*);
};

void RakPeer::m(const char* a, const char* b)
{
    if (a == 0 || *a == 0 || b == 0)
        return;
    extern void __stdcall f_4c9fc0(void*, const char*, const char*, int);
    f_4c9fc0((char*)this + 0x6fc, a, b, 0);
}
