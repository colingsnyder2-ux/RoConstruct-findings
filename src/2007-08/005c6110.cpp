// from server: 30% by colin
struct lua_exception {
    char pad[0x38];
    int field_0x38;
};

struct lua_State;

extern "C" int __cdecl sub_5c5c90(int);
extern "C" void __cdecl sub_5c5a30(lua_State*, int);
extern "C" int __cdecl sub_5c5c20(int, int);
extern "C" void __cdecl sub_5c60d0(lua_State*);
extern "C" void __cdecl sub_5c5b40(lua_State*, int, int);
extern "C" int __cdecl sub_5c5d80(lua_State*, int);

struct lua_State {
    char pad0[8];
    int field_0x08;
    int field_0x0c;
    int field_0x10;
    int field_0x14;
    int field_0x18;
    int field_0x1c;
    int field_0x20;
    int field_0x24;
    int field_0x28;
    int field_0x2c;
    int field_0x30;
    int field_0x34;
    unsigned char field_0x36;
    char pad1[1];
};

int __cdecl sub_5c6110(lua_State* L, int a2, int a3, int a4) {
    int eax = a2;
    int ebp;
    int ecx;
    int edx;
    int edi;
    int ebx;
    int* p;

    if (*(int*)(eax + 8) != 6) {
        edi = eax;
        eax = sub_5c5c90(edi);
    }

    ecx = L->field_0x14;
    edx = L->field_0x18;
    ebp = eax;
    ebp -= L->field_0x20;
    eax = *(int*)eax;
    *(int*)(ecx + 0xc) = edx;
    ecx = L->field_0x1c;
    ecx -= L->field_0x08;

    if (*(unsigned char*)(eax + 6) != 0) {
        if (ecx > 0x140) {
            goto loc_5c624b;
        }
        eax = L->field_0x2c;
        if (eax < 0x14) {
            eax += 0x14;
            sub_5c5a30(L, eax);
        } else {
            edx = eax + eax;
            sub_5c5a30(L, edx);
        }
    loc_5c624b:
        eax = L->field_0x14;
        if (eax == L->field_0x24) {
            sub_5c60d0(L);
        } else {
            eax += 0x18;
            L->field_0x14 = eax;
        }
        ecx = L->field_0x20;
        ecx += ebp;
        *(int*)(eax + 4) = ecx;
        ecx += 0x10;
        *(int*)eax = ecx;
        edx = L->field_0x08;
        L->field_0x0c = ecx;
        ecx = a3;
        edx += 0x140;
        *(int*)(eax + 8) = edx;
        *(int*)(eax + 0x10) = ecx;
        if ((L->field_0x36 & 1) != 0) {
            sub_5c5b40(L, 0, -1);
        }
        edx = L->field_0x14;
        eax = *(int*)(edx + 4);
        ecx = *(int*)eax;
        edx = *(int*)(ecx + 0x10);
        eax = ((int (__cdecl*)(lua_State*))edx)(L);
        if (eax < 0) {
            return 2;
        }
        ecx = L->field_0x08;
        eax <<= 4;
        ecx -= eax;
        sub_5c5d80(L, ecx);
        return 1;
    }

    ebx = *(int*)(eax + 0x10);
    eax = *(unsigned char*)(ebx + 0x4b);
    edx = eax;
    edx <<= 4;
    if (ecx > edx) {
        goto loc_5c6176;
    }
    ecx = L->field_0x2c;
    if (eax > ecx) {
        ecx += eax;
        sub_5c5a30(L, ecx);
    } else {
        eax = ecx + ecx;
        sub_5c5a30(L, eax);
    }
loc_5c6176:
    edi = L->field_0x20;
    edi += ebp;
    if (*(unsigned char*)(ebx + 0x4a) == 0) {
        ecx = *(unsigned char*)(ebx + 0x49);
        ecx <<= 4;
        ebp = edi + 0x10;
        eax = ecx + ebp;
        if (L->field_0x08 > eax) {
            L->field_0x08 = eax;
        }
    } else {
        eax = L->field_0x08;
        eax -= edi;
        eax >>= 4;
        eax -= 1;
        ecx = ebx;
        eax = sub_5c5c20(ecx, eax);
        edi = L->field_0x20;
        edi += a4;
        ebp = eax;
    }
loc_5c61b3:
    eax = L->field_0x14;
    if (eax == L->field_0x24) {
        sub_5c60d0(L);
    } else {
        eax += 0x18;
        L->field_0x14 = eax;
    }
    *(int*)(eax + 4) = edi;
    *(int*)eax = ebp;
    L->field_0x0c = ebp;
    edx = *(unsigned char*)(ebx + 0x4b);
    edx <<= 4;
    edx += ebp;
    *(int*)(eax + 8) = edx;
    ecx = *(int*)(ebx + 0xc);
    L->field_0x18 = ecx;
    ecx = a4;
    edx = 0;
    *(int*)(eax + 0x14) = edx;
    *(int*)(eax + 0x10) = ecx;
    ecx = L->field_0x08;
    if (ecx < *(int*)(eax + 8)) {
        do {
            *(int*)(ecx + 8) = edx;
            ecx += 0x10;
        } while (ecx < *(int*)(eax + 8));
    }
    if ((L->field_0x36 & 1) != 0) {
        L->field_0x18 += 4;
        sub_5c5b40(L, edx, -1);
        L->field_0x18 -= 4;
    }
    eax = *(int*)(eax + 8);
    L->field_0x08 = eax;
    return 0;
}
