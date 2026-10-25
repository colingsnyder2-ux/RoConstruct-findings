// from server: 100% by tester
// roc 2011-06 005189c0  unit: RBX::Network::ErrorCompPhysicsSender  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005189c0
//
// 005189c0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005189c3  8b442404             mov eax, dword ptr [esp + 4]
// 005189c7  8d0c81               lea ecx, [ecx + eax*4]
// 005189ca  3909                 cmp dword ptr [ecx], ecx
// 005189cc  750a                 jne 0x5189d8
// 005189ce  8bff                 mov edi, edi
// 005189d0  83c104               add ecx, 4
// 005189d3  40                   inc eax
// 005189d4  3909                 cmp dword ptr [ecx], ecx
// 005189d6  74f8                 je 0x5189d0
// 005189d8  c20400               ret 4

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
