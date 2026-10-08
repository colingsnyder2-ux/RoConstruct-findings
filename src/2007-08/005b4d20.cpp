// from server: 100% by colin
// roc 2007-08 005b4d20  unit: RBX::Geometry  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4d20
//
// 005b4d20  8b442404             mov eax, dword ptr [esp + 4]
// 005b4d24  3b4808               cmp ecx, dword ptr [eax + 8]
// 005b4d27  7506                 jne 0x5b4d2f
// 005b4d29  8b4010               mov eax, dword ptr [eax + 0x10]
// 005b4d2c  c20400               ret 4
// 005b4d2f  8b4014               mov eax, dword ptr [eax + 0x14]
// 005b4d32  c20400               ret 4

struct Geometry {
    int getSomething(void* arg);
};

int Geometry::getSomething(void* arg)
{
    int* p = (int*)arg;
    if ((int)this == p[2])
        return p[4];
    return p[5];
}
