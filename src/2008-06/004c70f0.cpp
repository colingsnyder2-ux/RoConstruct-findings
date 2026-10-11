// from server: 100% by tester
// roc 2008-06 004c70f0  unit: RBX::VInstance::?$Association::Item  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c70f0
//
// 004c70f0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004c70f3  8b442404             mov eax, dword ptr [esp + 4]
// 004c70f7  8d0c81               lea ecx, [ecx + eax*4]
// 004c70fa  3909                 cmp dword ptr [ecx], ecx
// 004c70fc  750a                 jne 0x4c7108
// 004c70fe  8bff                 mov edi, edi
// 004c7100  83c104               add ecx, 4
// 004c7103  40                   inc eax
// 004c7104  3909                 cmp dword ptr [ecx], ecx
// 004c7106  74f8                 je 0x4c7100
// 004c7108  c20400               ret 4

struct S
{
    int pad[3];
    int *data;
    int f(int);
};

int S::f(int index)
{
    int *p = data + index;
    while (*p == (int)p)
    {
        ++p;
        ++index;
    }
    return index;
}
