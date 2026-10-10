// from server: 24% by colin
struct CXTPDockingPaneGripperedTheme {
    int field0;
    char pad[0x20];
    int field24;
    char pad2[0x24];
    int field48;
    int field4c;
    char pad3[0x28];
    int field78;
    char pad4[0x130];
    int field1ac;
    int field1a0;
    int Paint(void* p1, int p2, int p3, int p4, int p5, int p6);
};

extern "C" {
    int __stdcall sub_77ddb8(void* p);
    int __stdcall sub_77dd74(void* p);
    int __stdcall sub_77ddbc(void* p);
    int __stdcall sub_7383ca(void* p1, int p2, int p3, int p4, int p5, int p6);
}

int CXTPDockingPaneGripperedTheme::Paint(void* p1, int p2, int p3, int p4, int p5, int p6)
{
    int v18 = 0;
    int v20;
    int v24;
    int v28;
    int v2c;
    int v30;
    int v3c = 0;
    int ebx = 0;
    int ebp;
    int eax;
    int edi;
    int edx;
    int ecx;
    int* pobj;
    int result;

    pobj = (int*)p1;
    eax = (*(int (__thiscall**)(void*))(*(int*)pobj + 0x140))(p1);
    v18 = eax;

    v20 = this->field78;
    v24 = p2;
    v28 = p3;
    v2c = p4;
    v30 = p5;

    if (eax != 0) {
        eax = p4 - p2;
    } else {
        eax = p5 - p3;
    }
    eax = eax - v20 - 1;

    if (v18 != 0) {
        v2c = v2c - eax;
        edi = this->field1ac + p2;
        eax = this->field4c;
        if (eax == -1) {
            eax = this->field48;
        }
        v24 = edi;
        sub_7383ca(p1, p2, p3, v20 + 2, p5 - p3, eax);
        ebp = v2c;
    } else {
        ebp = v2c - eax;
        ebx = this->field1ac + p3;
        eax = this->field4c;
        if (eax == -1) {
            eax = this->field48;
        }
        v28 = ebx;
        sub_7383ca(p1, p2, p3, ebp + 2, p4 - p2, eax);
    }

    ecx = *(int*)((char*)p1 + 0x1a0);
    if (ecx != 0) {
        edx = *(int*)ecx;
        edx = *(int*)(edx + 0x5c);
        eax = (int)((char*)&v3c + 0x30);
        ((void (__thiscall*)(void*, void*))edx)((void*)ecx, (void*)eax);
        v3c = 0;
        ebx = 1;
    } else {
        sub_77ddb8((void*)0x785954);
        v3c = 1;
        ebx = 2;
    }

    sub_77dd74((void*)&v18);
    v3c = 2;

    if (ebx & 2) {
        ebx &= ~2;
        sub_77ddbc((void*)&v24);
    }
    if (ebx & 1) {
        sub_77ddbc((void*)&v3c);
    }

    if (this->field24 != 0) {
        eax = *(int*)((char*)p1 + 0x190);
        if (eax != 0) {
            eax = 1;
        } else {
            eax = 0;
        }
    } else {
        eax = 0;
    }

    edx = *(int*)this;
    edx = *(int*)(edx + 0x84);
    ((void (__thiscall*)(void*, int, int, void*, int, int, int, int))edx)(
        this, eax, v18, (void*)&v24, v24, v28, v2c, ebp);

    sub_77ddbc((void*)&v18);
    return 0;
}
