// from server: 81% by colin
// roc 2007-08 0063c4e0  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063c4e0
//
// 0063c4e0  56                   push esi
// 0063c4e1  8bf1                 mov esi, ecx
// 0063c4e3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063c4e9  85c9                 test ecx, ecx
// 0063c4eb  7506                 jne 0x63c4f3
// 0063c4ed  33c0                 xor eax, eax
// 0063c4ef  5e                   pop esi
// 0063c4f0  c20800               ret 8
// 0063c4f3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063c4f7  8b542408             mov edx, dword ptr [esp + 8]
// 0063c4fb  50                   push eax
// 0063c4fc  52                   push edx
// 0063c4fd  e8cea00000           call 0x6465d0
// 0063c502  50                   push eax
// 0063c503  8bce                 mov ecx, esi
// 0063c505  e806e3ffff           call 0x63a810
// 0063c50a  5e                   pop esi
// 0063c50b  c20800               ret 8

struct CXTPControl {
    char pad[0xfc];
    void* field_fc;
    int sub_63a810(void* p);
    void* sub_6465d0(void* a, void* b);
    int method(void* a, void* b);
};

int CXTPControl::method(void* a, void* b)
{
    void* p = field_fc;
    if (p == 0)
        return 0;
    void* r = sub_6465d0(a, b);
    return sub_63a810(r);
}
