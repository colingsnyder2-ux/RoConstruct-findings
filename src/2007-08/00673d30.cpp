// from server: 43% by colin
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void* field_bc;
    void* field_c0;
    void Func();
};

extern "C" {
    int __stdcall GetMenuItemCount(void*);
    unsigned int __stdcall GetMenuItemID(void*, int);
    int __stdcall GetMenuItemInfoA(void*, unsigned int, int, void*);
    void* __stdcall GetSubMenu(void*, int);
}

void* __cdecl sub_6B3010();
void* __cdecl sub_6302F8(void*, int);
void* __cdecl sub_677390(int);
void* __cdecl sub_6321D0();
void* __cdecl sub_631E80();
void __cdecl sub_643A10(void*, void*);
void __cdecl sub_643A90(void*, void*);
void __cdecl sub_738370(void*, int, void*, unsigned int);
void* __cdecl sub_62FEF6(unsigned int);
void* __cdecl sub_670500();
void* __cdecl sub_67A2D0();
void __cdecl sub_671070(void*, void*);
void __cdecl sub_6301E4(void*);
void* __cdecl sub_6C6860();
void* __cdecl sub_6CA460();
void __cdecl sub_63A700(void*, void*);
void __cdecl sub_67D1E0(void*, void*, int, int, int, void*);
void __cdecl sub_63046C(void*);
void __cdecl sub_77DDAC(void*);
void __cdecl sub_77DD98(void*);
void __cdecl sub_77DDBC(void*);
void __cdecl sub_77D2EC(void*);
void __cdecl sub_77EDFC(void*, void*);
void __cdecl sub_77EE00(void*, int);
void __cdecl sub_77EE04(void*);
void __cdecl sub_77EE50(void*, int, int, void*);

void CXTPCustomizeSheet::Func()
{
    void* local_28;
    void* local_2c;
    int local_64;
    int local_18;
    int local_20;
    int local_14;
    char local_30[0x2c];
    int local_24;

    local_28 = (void*)0x788318;
    local_2c = 0;
    local_64 = 0;

    void* p = sub_6B3010();
    void** vt = *(void***)p;
    typedef int (__thiscall *Fn)(void*, void*, unsigned int);
    Fn fn = (Fn)vt[2];
    int r = fn(p, &local_2c, 0x23a1);
    if (r == 0) {
        local_28 = (void*)0x788318;
        goto cleanup;
    }

    void* hmenu = local_2c;
    void* hsub = GetSubMenu(hmenu, 0);
    void* p2 = sub_6302F8(hsub, 0);
    void* obj = sub_677390(0);
    field_bc = obj;
    void* v = *(void**)((char*)field_b8 + 0xa0);
    *(void**)((char*)obj + 0xe0) = v;
    *(void**)((char*)field_bc + 0x104) = this;
    void* p3 = sub_6321D0();
    void* p4 = sub_631E80();
    sub_77D2EC((char*)p3 + 4);
    sub_643A10(field_bc, p3);
    sub_77D2EC((char*)field_c0 + 4);
    *(void**)((char*)field_c0 + 0x64) = p4;
    sub_643A90(field_bc, field_c0);

    int count = GetMenuItemCount(*(void**)((char*)p2 + 4));
    int i = 0;
    if (count > 0) {
        do {
            local_18 = 0;
            local_20 = 0;
            local_30[0] = 0;
            *(int*)(local_30 + 0x10) = 0x2c;
            *(int*)(local_30 + 0x14) = 0x11;
            GetMenuItemInfoA(*(void**)((char*)p2 + 4), i, 1, local_30);
            unsigned int id = GetMenuItemID(*(void**)((char*)p2 + 4), i);
            local_20 = id;
            sub_77DDAC(&local_18);
            sub_738370(p2, 0, &local_18, 0x400);
            if ((*(unsigned int*)(local_30 + 8) & 0x800) != 0 || id == 0) {
                local_14 = 1;
            } else {
                void* newobj;
                if (id == 0x23aa) {
                    void* a = sub_62FEF6(0x178);
                    local_24 = (int)a;
                    void* b;
                    if (a != 0) {
                        b = sub_670500();
                    } else {
                        b = 0;
                    }
                    void* c = sub_62FEF6(0x248);
                    local_24 = (int)c;
                    void* d;
                    if (c != 0) {
                        d = sub_67A2D0();
                    } else {
                        d = 0;
                    }
                    *(int*)((char*)d + 0xd4) = 0x23aa;
                    sub_671070(b, d);
                    sub_6301E4(d);
                    newobj = b;
                } else if (id == 0x23a5) {
                    void* a = sub_62FEF6(0x1a4);
                    local_24 = (int)a;
                    if (a != 0) {
                        sub_6C6860();
                        *(void**)a = (void*)0x7cbf64;
                        *(void**)((char*)a + 0x20) = (void*)0x7cbf04;
                    }
                    newobj = a;
                } else {
                    void* a = sub_62FEF6(0x168);
                    local_24 = (int)a;
                    if (a != 0) {
                        sub_6CA460();
                        *(void**)a = (void*)0x7cc124;
                        *(void**)((char*)a + 0x20) = (void*)0x7cc0c4;
                    }
                    newobj = a;
                }
                sub_77DD98(&local_18);
                sub_63A700(newobj, &local_18);
                void* sub = GetSubMenu(*(void**)((char*)p2 + 4), i);
                void* p5 = *(void**)((char*)field_bc + 0xf8);
                sub_67D1E0(p5, newobj, local_20, -1, 0, sub);
                if (local_14 != 0) {
                    void** vt2 = *(void***)newobj;
                    typedef void (__thiscall *Fn2)(void*, int);
                    Fn2 fn2 = (Fn2)vt2[0x64 / 4];
                    fn2(newobj, 1);
                    local_14 = 0;
                }
            }
            sub_77DDBC(&local_18);
            i++;
        } while (i < GetMenuItemCount(*(void**)((char*)p2 + 4)));
    }

cleanup:
    local_28 = (void*)0x788318;
    local_64 = -1;
    sub_63046C(&local_28);
}
