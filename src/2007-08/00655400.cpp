// from server: 35% by colin
struct RBX_Name;
struct EnumDescriptor;

struct Descriptor {
    char pad0[4];
    int m_attr;
};

struct EnumDescriptor_Item : Descriptor {
    const EnumDescriptor* owner;
    int value;
    unsigned int index;
};

struct EnumDescriptor {
    char pad0[0x54];
    int m_54;
    char pad1[0x1a0 - 0x58];
    int m_1a0;
};

struct CInstanceRecord_CNameItem {
    void f(void* a1);
};

extern "C" {
    void __stdcall sub_77ddac(void* p);
    void* __stdcall sub_77dd98(void* p);
    int __stdcall sub_77dcb8(void* p, void* q);
    void __stdcall sub_77ddbc(void* p);
}

void CInstanceRecord_CNameItem::f(void* a1)
{
    if (a1 != 0)
        return;

    int* p = (int*)a1;
    int ebx = p[1];
    EnumDescriptor* ebp = (EnumDescriptor*)((char*)ebx + 0x1a0);

    int v28 = p[2];
    int v2c = p[3];
    int v30 = p[4];
    int v34 = p[5];
    int v38 = p[6];
    int v3c = p[7];
    int v40 = p[8];

    int v14 = ebx;
    int v20 = 0x7c7e28;
    int v24 = ebx;
    int v4c = 0;

    if (ebp == 0)
        return;
    if (*(int*)((char*)ebp + 0x20) == 0)
        return;
    if (*(int*)((char*)ebp + 0x64) != (int)this)
        return;

    *(int*)((char*)ebp + 0x64) = 0;

    int r = ((int (__thiscall*)(void*, int))0x654ba0)(this, v2c);
    if (*(int*)(r + 0x24) != 0) {
        int eax = *(int*)((char*)ebp + 0x84);
        if (eax != 0) {
            int* vt = *(int**)this;
            int fn = *(int*)((char*)vt + 0x12c);
            ((void (__thiscall*)(void*, int*, int))fn)(this, &v4c, eax);
        }
    } else {
        char buf[0x10];
        sub_77ddac(buf);
        ((void (__thiscall*)(EnumDescriptor*, char*))0x630250)(ebp, buf);

        int* vt = *(int**)this;
        int fn = *(int*)((char*)vt + 0x6c);
        int ebx2 = ((int (__thiscall*)(void*, int*, int))fn)(this, &v14, v2c);

        void* s = sub_77dd98(buf);
        int cmp = sub_77dcb8((void*)ebx2, s);
        int bl = (cmp != 0);

        sub_77ddbc(&v14);

        if (bl) {
            int* vt2 = *(int**)this;
            void* s2 = sub_77dd98(buf);
            int fn2 = *(int*)((char*)vt2 + 0x124);
            ((void (__thiscall*)(void*, int*, void*))fn2)(this, &v4c, s2);
            ebx2 = 1;
        } else {
            ebx2 = v14;
        }

        sub_77ddbc(buf);

        if (ebx2 != 0) {
            ((void (__thiscall*)(int))0x657410)(ebx2);
            ((void (__stdcall*)(int, int, int, int, void*, int))0x65ad10)(v28, (int)this, v2c, -0x39, 0, -1);
        } else {
            int* vt3 = *(int**)this;
            int fn3 = *(int*)((char*)vt3 + 0x128);
            ((void (__thiscall*)(void*, void*))fn3)(this, a1);
            ((void (__stdcall*)(int, int, int, int, void*, int))0x65ad10)(v28, (int)this, v2c, -0x48, 0, -1);
        }
    }

    int eax2 = *(int*)((char*)ebp + 0x54);
    int edx2 = *(int*)(eax2 + 4);
    ((void (__thiscall*)(char*, int))edx2)((char*)ebp + 0x54, 0);
}
