// from server: 66% by colin
struct GetSetImpl {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int GetSetImpl_005d7bf0(int, unsigned char*);
};

int GetSetImpl::GetSetImpl_005d7bf0(int a, unsigned char* b)
{
    int obj = a;
    if (obj != 0)
        obj -= 0x14;
    else
        obj = 0;
    unsigned char idx = *b;
    int esi = field20;
    int ecx = *(int*)(obj + 0x150);
    ecx = *(int*)(ecx + esi);
    ecx += field1C;
    int edx = field18;
    ecx = ecx + obj + 0x150;
    return ((int (__thiscall*)(int, int))edx)(ecx, (int)idx);
}
