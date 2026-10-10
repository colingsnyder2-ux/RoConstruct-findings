// from server: 34% by colin
struct CSelectionPropGrid {
    void addProperty(int, void*);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void* __cdecl sub_630D36(void*, void*, void*, int, void*);
extern "C" bool __cdecl sub_5707B0(void*, int);

extern "C" void* __cdecl sub_43E210(void*, void*, void*);
extern "C" void* __cdecl sub_43BAE0(void*, void*, void*);
extern "C" void* __cdecl sub_43BE80(void*, void*, void*);
extern "C" void* __cdecl sub_43C270(void*, void*, void*);
extern "C" void* __cdecl sub_43E3E0(void*, void*, void*);
extern "C" void* __cdecl sub_43E550(void*, void*, void*);
extern "C" void* __cdecl sub_43F140(void*, void*, void*);
extern "C" void* __cdecl sub_43EA40(void*, void*, void*);
extern "C" void* __cdecl sub_43ED70(void*, void*, void*);
extern "C" void* __cdecl sub_43F740(void*, void*, void*);
extern "C" void* __cdecl sub_43F640(void*, void*, void*);
extern "C" void* __cdecl sub_43C9D0(void*, void*, void*);

extern "C" void __cdecl sub_43ACE0(void*, void*);
extern "C" void __cdecl sub_43AE20(void*, void*);
extern "C" void __cdecl sub_43AF60(void*, void*);
extern "C" void __cdecl sub_43B0A0(void*, void*);

extern char byte_887E68;
extern char byte_887E2C;
extern char byte_887DF0;
extern char byte_887DA8;
extern char byte_887D58;
extern char byte_887D10;
extern char byte_887CDC;
extern char byte_887CA8;
extern char byte_887C60;
extern char byte_887C18;
extern char byte_887174;
extern char byte_8C1274;

void CSelectionPropGrid::addProperty(int a2, void* a3)
{
    void* p;
    void* q;
    void* r;

    if (sub_5707B0(*(void**)((char*)a3 + 0xc), a2))
        return;
    if (!(*(unsigned char*)((char*)a3 + 0x10) & 1))
        return;

    p = sub_630D36(a3, &byte_887174, &byte_887E68, 0, 0);
    if (p) {
        r = sub_62FEF6(0x130);
        if (r) {
            q = sub_43E210(r, p, this);
        } else {
            q = 0;
        }
        sub_43ACE0(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887E2C, 0, 0);
    if (p) {
        r = sub_62FEF6(0x11c);
        if (r) {
            q = sub_43BAE0(r, p, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887DF0, 0, 0);
    if (p) {
        r = sub_62FEF6(0x11c);
        if (r) {
            q = sub_43BE80(r, p, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887DA8, 0, 0);
    if (p) {
        r = sub_62FEF6(0x128);
        if (r) {
            q = sub_43C270(r, p, this);
        } else {
            q = 0;
        }
        sub_43AE20(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887D58, 0, 0);
    if (p) {
        r = sub_62FEF6(0x128);
        if (r) {
            q = sub_43E3E0(r, p, this);
        } else {
            q = 0;
        }
        sub_43AE20(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887D10, 0, 0);
    if (p) {
        r = sub_62FEF6(0x128);
        if (r) {
            q = sub_43E550(r, p, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887CDC, 0, 0);
    if (p) {
        r = sub_62FEF6(0x124);
        if (r) {
            q = sub_43F140(r, p, this);
        } else {
            q = 0;
        }
        sub_43AF60(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887CA8, 0, 0);
    if (p) {
        r = sub_62FEF6(0x120);
        if (r) {
            q = sub_43EA40(r, p, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    if (a3 == &byte_8C1274) {
        r = sub_62FEF6(0x11c);
        if (r) {
            q = sub_43ED70(r, a3, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887C60, 0, 0);
    if (p) {
        r = sub_62FEF6(0x11c);
        if (r) {
            q = sub_43F740(r, p, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    p = sub_630D36(a3, &byte_887174, &byte_887C18, 0, 0);
    if (p) {
        r = sub_62FEF6(0x11c);
        if (r) {
            q = sub_43F640(r, p, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
        return;
    }

    if ((*(bool (__thiscall**)(void*))(*(int*)a3 + 0xc))(a3)) {
        r = sub_62FEF6(0x11c);
        if (r) {
            q = sub_43C9D0(r, a3, this);
        } else {
            q = 0;
        }
        sub_43B0A0(this, q);
    }
}
