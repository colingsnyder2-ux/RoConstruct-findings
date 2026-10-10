// from server: 37% by colin
struct CNameItem {
    char pad0[0x20];
    int field20;
    int field24;
    int field28;
    int field2c;
    int method();
};

struct Inner {
    char pad0[0xb0];
    int (__stdcall *fn)(int, int, int, int, int);
};

extern "C" int __stdcall sub_65e4d0(int);

int CNameItem::method()
{
    int local_10;
    int local_18;
    int local_1c;
    int ebx;
    int ebp;
    int edi;
    int eax;
    int ecx;
    int edx;
    int *p;

    eax = *(int*)this;
    edx = *(int*)(eax + 0xa8);
    eax = ((int (__thiscall*)(void*))edx)(this);
    edi = *(int*)((char*)&local_1c + 0x1c);
    if (eax != 0) {
        eax = *(int*)(edi + 0xc);
        if (eax != 0) {
            if (*(int*)(eax + 0xac) != 0) {
                ebp = 1;
            } else {
                ebp = 0;
            }
        } else {
            ebp = 0;
        }
    } else {
        ebp = 0;
    }
    eax = *(int*)(edi + 0x24);
    edx = *(int*)this;
    local_18 = eax;
    eax = *(int*)(edx + 0xec);
    ecx = (int)this;
    eax = ((int (__thiscall*)(void*))eax)(this);
    ecx = *(int*)(edi + 4);
    edi = *(int*)(edi + 0xc);
    ebx = eax;
    ebx = -ebx;
    ebx = (ebx < 0) ? -1 : 0;
    ebx = -ebx;
    ebp = -ebp;
    ebp = (ebp < 0) ? -1 : 0;
    ebp = ebp & 0xfffffffe;
    ebp = ebp + 2;
    ebx = ebx + ebp;
    if (edi != 0) {
        ecx = edi;
        eax = sub_65e4d0(ecx);
        eax = eax & 0xf00000;
        local_10 = eax;
    } else {
        local_10 = 0;
    }
    edi = *(int*)((char*)&local_1c + 0x1c);
    edx = *(int*)edi;
    *(int*)((char*)this + 0x20) = edx;
    eax = *(int*)(edi + 4);
    *(int*)((char*)this + 0x24) = eax;
    ecx = *(int*)(edi + 8);
    *(int*)((char*)this + 0x28) = ecx;
    edx = *(int*)(edi + 0xc);
    *(int*)((char*)this + 0x2c) = edx;
    ecx = *(int*)edi;
    edx = *(int*)ebp;
    edx = *(int*)(edx + 0xb0);
    ebx = ebx + 2;
    {
        int tmp[4];
        tmp[0] = ecx;
        tmp[1] = *(int*)(edi + 4);
        tmp[2] = *(int*)(edi + 8);
        tmp[3] = *(int*)(edi + 0xc);
        eax = ((int (__thiscall*)(void*, int, int, int, int, int))edx)((void*)ebp, ebx, tmp[0], tmp[1], tmp[2], tmp[3]);
    }
    ecx = eax;
    eax = local_10;
    if (eax != 0x200000) {
        eax = *(int*)(edi + 8);
        eax = eax + *(int*)edi;
        edx = (eax < 0) ? -1 : 0;
        eax = eax - edx;
        edi = eax;
        eax = ecx;
        edx = (eax < 0) ? -1 : 0;
        eax = eax - edx;
        eax = eax >> 1;
        edi = edi >> 1;
        edi = edi - eax;
        edi = edi - 1;
        *(int*)((char*)this + 0x20) = edi;
        edx = *(int*)ebp;
        edx = *(int*)(edx + 0xb0);
        ecx = edi;
        {
            int tmp[4];
            tmp[0] = ecx;
            tmp[1] = *(int*)((char*)this + 0x24);
            tmp[2] = *(int*)((char*)this + 0x28);
            tmp[3] = *(int*)((char*)this + 0x2c);
            eax = ((int (__thiscall*)(void*, int, int, int, int, int))edx)((void*)ebp, ebx, tmp[0], tmp[1], tmp[2], tmp[3]);
        }
        eax = eax + *(int*)((char*)this + 0x20);
        *(int*)((char*)this + 0x28) = eax;
        return 0;
    }
    if (eax == 0x400000) {
        eax = *(int*)(edi + 8);
        eax = eax - ecx;
        eax = eax - 2;
        *(int*)((char*)this + 0x20) = eax;
        ecx = *(int*)((char*)this + 0x20);
        edx = *(int*)ebp;
        edx = *(int*)(edx + 0xb0);
        {
            int tmp[4];
            tmp[0] = ecx;
            tmp[1] = *(int*)((char*)this + 0x24);
            tmp[2] = *(int*)((char*)this + 0x28);
            tmp[3] = *(int*)((char*)this + 0x2c);
            eax = ((int (__thiscall*)(void*, int, int, int, int, int))edx)((void*)ebp, ebx, tmp[0], tmp[1], tmp[2], tmp[3]);
        }
        ecx = 0xfffffffe;
        ecx = ecx - eax;
        *(int*)(edi + 8) = *(int*)(edi + 8) + ecx;
        return 0;
    }
    *(int*)((char*)this + 0x20) = *(int*)((char*)this + 0x20) + 2;
    ecx = *(int*)((char*)this + 0x20);
    edx = *(int*)ebp;
    edx = *(int*)(edx + 0xb0);
    {
        int tmp[4];
        tmp[0] = ecx;
        tmp[1] = *(int*)((char*)this + 0x24);
        tmp[2] = *(int*)((char*)this + 0x28);
        tmp[3] = *(int*)((char*)this + 0x2c);
        eax = ((int (__thiscall*)(void*, int, int, int, int, int))edx)((void*)ebp, ebx, tmp[0], tmp[1], tmp[2], tmp[3]);
    }
    eax = eax + 2;
    *(int*)edi = *(int*)edi + eax;
    edi = *(int*)edi;
    edi = edi - 1;
    *(int*)((char*)this + 0x28) = edi;
    return 0;
}
