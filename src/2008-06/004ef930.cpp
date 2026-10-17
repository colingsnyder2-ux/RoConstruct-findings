// from server: 26% by colin
struct Part {
    char pad0[0x1c];
    float field_1c;
    char pad1[0xbc - 0x20];
    int field_bc;
    char pad2[0xcc - 0xc0];
    int field_cc;
    char pad3[0xd4 - 0xd0];
    int field_d4;
    char pad4[0x130 - 0xd8];
    int field_130;
    float field_134;
    float field_138;
    float field_13c;
    char pad5[0x1dc - 0x140];
    int field_1dc;
    char pad6[0x1e4 - 0x1e0];
    int field_1e4;

    void method();
};

struct Obj {
    char pad0[0x104];
    int field_104;
    int field_108;
    char pad2[0x130 - 0x10c];
    int field_130;
    float field_134;
    float field_138;
    float field_13c;
    char pad3[0x148 - 0x140];
    int field_148;
    char pad4[0x154 - 0x14c];
    char field_154[0x14];
    int field_168;
};

struct Vec3 {
    float x, y, z;
};

extern "C" {
    int __stdcall InterlockedDecrement(int*);
    void __cdecl _invalid_parameter_noinfo();
}

void* __cdecl func_598de0(int, int);
void* __cdecl func_5ecc00(void*);
int __cdecl func_5f1290(void*);
void* __cdecl func_598cd0(void*);
int __cdecl func_4e5f80(void*);
void* __cdecl func_6a17c6(void*, void*, void*, void*, void*);
int __cdecl func_4e7ff0(void*);
void* __cdecl func_5d9a20(void*);
void __cdecl func_43d050(void*);
void __cdecl func_43d0a0(void*, void*);
void __cdecl func_68ff20(void*, void*);
void __cdecl func_68fef0(void*, void*);
void __cdecl func_5d8b10(void*);
void __cdecl func_5d8c10(void*);
void __cdecl func_5d8d10(void*);
void __cdecl func_5d8e10(void*);
void __cdecl func_5d8f10(void*);
void __cdecl func_4e54e0(void*, void*, void*, void*, void*, void*, void*, void*);
void __cdecl func_598fa0(void*, void*);
void __cdecl func_4d7560(void*, void*);
void __cdecl func_4e58b0(void*, void*, void*, void*);
void __cdecl func_502a70(void*);
void __cdecl func_45ad90(void*);
void __cdecl func_4e5f20(void*, void*);
void __cdecl func_465210(void*, void*);
void __cdecl func_500b90(void*, void*);
void __cdecl func_4eef30(void*, void*);
void __cdecl func_4edb20(void*, void*);
void __cdecl func_4eea30(void*, void*);
void __cdecl func_4ee030(void*, void*);
void __cdecl func_4ef430(void*, void*);
void __cdecl func_4ee530(void*, void*);
void __cdecl func_4dc4e0(void*, void*);

void Part::method()
{
    int ebp;
    int eax_val;
    int edi_val;
    int ebx_val;
    Vec3 vec;
    int local_10;
    int local_14;
    int local_18;
    int local_1c;
    int local_20;
    int local_24;
    char local_34[0x20];
    char local_54[0x20];
    int local_68;
    int local_48;
    int local_7c;

    int* pbc = (int*)field_bc;

    void* r1 = func_598de0((int)pbc, 0);
    void* r2 = func_5ecc00(r1);
    int r3 = func_5f1290(r2);
    r3--;
    if (r3 <= 3) {
        switch (r3) {
        case 0: ebp = 1; break;
        case 1: ebp = 2; break;
        case 2: ebp = 3; break;
        case 3: ebp = 4; break;
        }
    } else {
        ebp = 0;
    }

    pbc = (int*)field_bc;
    void* r4 = func_598de0((int)pbc, 1);
    void* r5 = func_5ecc00(r4);
    int r6 = func_5f1290(r5);
    r6--;
    if (r6 <= 3) {
        switch (r6) {
        case 0: eax_val = 1; break;
        case 1: eax_val = 2; break;
        case 2: eax_val = 3; break;
        case 3: eax_val = 4; break;
        }
    } else {
        eax_val = 0;
    }

    pbc = (int*)field_bc;
    edi_val = eax_val * 8;
    ebp &= 0xffc7;
    void* r7 = func_598de0((int)pbc, 2);
    edi_val |= ebp;
    void* r8 = func_5ecc00(r7);
    int r9 = func_5f1290(r8);
    r9--;
    if (r9 <= 3) {
        switch (r9) {
        case 0: eax_val = 1; break;
        case 1: eax_val = 2; break;
        case 2: eax_val = 3; break;
        case 3: eax_val = 4; break;
        }
    } else {
        eax_val = 0;
    }

    pbc = (int*)field_bc;
    eax_val <<= 6;
    edi_val &= 0xfe3f;
    void* r10 = func_598de0((int)pbc, 3);
    edi_val |= eax_val;
    void* r11 = func_5ecc00(r10);
    int r12 = func_5f1290(r11);
    r12--;
    if (r12 <= 3) {
        switch (r12) {
        case 0: eax_val = 1; break;
        case 1: eax_val = 2; break;
        case 2: eax_val = 3; break;
        case 3: eax_val = 4; break;
        }
    } else {
        eax_val = 0;
    }

    pbc = (int*)field_bc;
    eax_val <<= 9;
    edi_val &= 0xf1ff;
    void* r13 = func_598de0((int)pbc, 4);
    edi_val |= eax_val;
    void* r14 = func_5ecc00(r13);
    int r15 = func_5f1290(r14);
    r15--;
    if (r15 <= 3) {
        switch (r15) {
        case 0: eax_val = 1; break;
        case 1: eax_val = 2; break;
        case 2: eax_val = 3; break;
        case 3: eax_val = 4; break;
        }
    } else {
        eax_val = 0;
    }

    pbc = (int*)field_bc;
    eax_val <<= 12;
    edi_val &= 0x8fff;
    eax_val |= edi_val;
    void* r16 = func_598de0((int)pbc, 5);
    edi_val = eax_val;
    void* r17 = func_5ecc00(r16);
    int r18 = func_5f1290(r17);
    r18--;
    if (r18 <= 3) {
        switch (r18) {
        case 0: eax_val = 1; break;
        case 1: eax_val = 2; break;
        case 2: eax_val = 3; break;
        case 3: eax_val = 4; break;
        }
    } else {
        eax_val = 0;
    }

    pbc = (int*)field_bc;
    eax_val <<= 15;
    edi_val &= 0x7fff;
    eax_val |= edi_val;
    ebx_val = eax_val;
    local_14 = ebx_val;

    void* r19 = func_598cd0(pbc);
    vec.x = *(float*)r19;
    vec.y = *(float*)((char*)r19 + 4);
    vec.z = *(float*)((char*)r19 + 8);

    if (func_4e5f80(this)) {
        Obj* obj = (Obj*)((char*)this + 0xbc);
        int* pobj = (int*)obj;
        int edi2 = *(int*)((char*)pobj + 0x104);
        if (edi2 != 0) {
            void* r20 = func_6a17c6((void*)edi2, 0, (void*)0x92907c, (void*)0x932a40, 0);
            int ebp2 = 0;
            if (r20 != 0) {
                ebp2 = func_4e7ff0(r20);
            }
            void* r21 = func_5d9a20((void*)edi2);
            local_10 = (int)r21;
            if (ebp2 != 0 && r21 != 0) {
                func_43d050(local_54);
                func_43d050(local_34);
                local_7c = 1;
                local_7c = 2;

                int ecx2 = *(int*)((char*)pobj + 0x108);
                if (ecx2 != 0) {
                    func_68ff20((void*)ecx2, &local_20);
                    func_68fef0((void*)ecx2, &local_18);
                    int ebx2 = local_18;
                    int ebp3 = local_1c;
                    while (1) {
                        if (ebx2 != 0 && ebx2 == local_20) {
                        } else {
                            _invalid_parameter_noinfo();
                        }
                        if (ebp3 == local_24) break;
                        int eax2;
                        if (ebx2 != 0) {
                            eax2 = *(int*)ebx2;
                        } else {
                            _invalid_parameter_noinfo();
                            eax2 = 0;
                            if (ebp3 >= *(int*)((char*)0 + 0x10)) {
                                _invalid_parameter_noinfo();
                            }
                        }
                        int* peax = (int*)eax2;
                        void* r22 = func_6a17c6((void*)*peax, 0, (void*)0x92907c, (void*)0x936980, 0);
                        int edi3 = (int)r22;
                        if (edi3 != 0) {
                            if (local_68 == 0 && *(int*)((char*)edi3 + 0x148) != 0) {
                                func_43d0a0(local_54, (void*)(edi3 + 0x134));
                            }
                            if (local_48 == 0 && *(int*)((char*)edi3 + 0x168) != 0) {
                                func_43d0a0(local_34, (void*)(edi3 + 0x154));
                            }
                        }
                        if (ebx2 == 0) {
                            _invalid_parameter_noinfo();
                            if (ebp3 >= *(int*)((char*)0 + 0x10)) {
                                _invalid_parameter_noinfo();
                            }
                            ebp3 += 8;
                        } else {
                            ebp3 += 8;
                        }
                    }
                }

                ebx_val = local_10;
                int edi4 = field_bc;
                func_5d8b10((void*)ebx_val);
                if (edi4 == eax_val || local_68 != 0 || local_48 != 0) {
                    goto L_fd5a;
                }
                edi4 = field_bc;
                func_5d8e10((void*)ebx_val);
                if (edi4 == eax_val && local_48 != 0) goto L_fd5a;
                edi4 = field_bc;
                func_5d8f10((void*)ebx_val);
                if (edi4 == eax_val && local_48 != 0) goto L_fd5a;
                edi4 = field_bc;
                func_5d8c10((void*)ebx_val);
                if (edi4 == eax_val && local_68 != 0) goto L_fd5a;
                edi4 = field_bc;
                func_5d8d10((void*)ebx_val);
                if (edi4 != eax_val || local_68 == 0) goto L_ff49;

            L_fd5a:
                {
                    int ebp4 = field_bc;
                    func_5d8b10((void*)ebx_val);
                    int edi5 = 0;
                    if (ebp4 == eax_val) {
                        float f = *(float*)0x826fd8;
                        int eax3 = *(int*)((char*)field_bc + 0x1e4);
                        func_4e54e0(&local_20, &local_18, (void*)edi5, (void*)eax3, (void*)0x941568, (void*)0x941448, (void*)0x9415e0, &f);
                        local_7c = 3;
                        func_598fa0((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
                        func_502a70(&local_10);
                    } else {
                        ebp4 = field_bc;
                        func_5d8e10((void*)ebx_val);
                        if (ebp4 == eax_val) {
                            float f = *(float*)0x826fd8;
                            int eax3 = *(int*)((char*)field_bc + 0x1e4);
                            func_4e54e0(&local_20, &local_18, (void*)edi5, (void*)eax3, (void*)0x941598, (void*)0x941448, (void*)0x941610, &f);
                            local_7c = 4;
                            func_598fa0((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
                            func_502a70(&local_10);
                        } else {
                            ebp4 = field_bc;
                            func_5d8f10((void*)ebx_val);
                            if (ebp4 == eax_val) {
                                float f = *(float*)0x826fd8;
                                int eax3 = *(int*)((char*)field_bc + 0x1e4);
                                func_4e54e0(&local_20, &local_18, (void*)edi5, (void*)eax3, (void*)0x941580, (void*)0x941448, (void*)0x9415f8, &f);
                                local_7c = 5;
                                func_4d7560((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
                                func_502a70(&local_10);
                            } else {
                                ebp4 = field_bc;
                                func_5d8c10((void*)ebx_val);
                                if (ebp4 == eax_val) {
                                    float f = *(float*)0x826fd8;
                                    int eax3 = *(int*)((char*)field_bc + 0x1e4);
                                    func_4e54e0(&local_20, &local_18, (void*)edi5, (void*)eax3, (void*)0x9415c8, (void*)0x941448, (void*)0x941640, &f);
                                    local_7c = 6;
                                    func_4d7560((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
                                    func_502a70(&local_10);
                                } else {
                                    ebp4 = field_bc;
                                    func_5d8d10((void*)ebx_val);
                                    if (ebp4 == eax_val) {
                                        float f = *(float*)0x826fd8;
                                        int eax3 = *(int*)((char*)field_bc + 0x1e4);
                                        func_4e54e0(&local_20, &local_18, (void*)edi5, (void*)eax3, (void*)0x9415b0, (void*)0x941448, (void*)0x941628, &f);
                                        local_7c = 7;
                                        func_4d7560((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
                                        func_502a70(&local_10);
                                    }
                                }
                            }
                        }
                    }
                }
                goto L_ff91;

            L_ff49:
                {
                    int eax3 = *(int*)((char*)field_bc + 0x1e4);
                    func_4e58b0(&local_20, &local_18, (void*)local_14, (void*)eax3);
                    local_7c = 8;
                    func_598fa0((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
                    func_502a70(&local_14);
                }
                goto L_ff91;

            L_ff91:
                local_7c = 1;
                func_502a70(&local_34);
                local_7c = 0xffffffff;
                func_502a70(&local_54);
                goto L_0225;
            }
        }

        {
            int eax3 = *(int*)((char*)field_bc + 0x1e4);
            func_4e58b0(&local_20, &local_18, (void*)ebx_val, (void*)eax3);
            local_7c = 0;
            func_598fa0((void*)((char*)this + 0xcc), (void*)*(int*)&local_18);
            int eax4 = local_10;
            local_7c = 0xffffffff;
            if (eax4 != 0) {
                if (InterlockedDecrement((int*)(eax4 + 4)) == 0) {
                    func_45ad90((void*)local_10);
                    if (local_10 != 0) {
                        void* v = *(void**)local_10;
                        void (*fn)(void*, int) = *(void (**)(void*, int))v;
                        fn((void*)local_10, 1);
                    }
                }
            }
        }
    } else {
        int ecx3 = field_d4;
        if (ecx3 == 0) {
            int eax3 = *(int*)((char*)field_bc + 0x1dc);
            eax3 -= ecx3;
            if (eax3 == 0) {
                func_4eea30(&vec, (void*)ebx_val);
                func_598fa0((void*)((char*)this + 0xcc), (void*)eax3);
            } else if (eax3 == 1) {
                func_4edb20(&vec, (void*)ebx_val);
                func_598fa0((void*)((char*)this + 0xcc), (void*)eax3);
            } else if (eax3 == 2) {
                func_4eef30(&vec, (void*)ebx_val);
                func_598fa0((void*)((char*)this + 0xcc), (void*)eax3);
            }
        } else {
            vec.x *= *(float*)(ecx3 + 0x134);
            vec.y *= *(float*)(ecx3 + 0x138);
            vec.z *= *(float*)(ecx3 + 0x13c);
            int eax3 = *(int*)(ecx3 + 0x130);
            if (eax3 <= 6) {
                switch (eax3) {
                case 0:
                    func_4ee030(&vec, (void*)ebx_val);
                    func_4dc4e0((void*)((char*)this + 0xcc), (void*)eax3);
                    break;
                case 1:
                    func_4ef430(&vec, (void*)ebx_val);
                    func_4dc4e0((void*)((char*)this + 0xcc), (void*)eax3);
                    break;
                case 2:
                    func_4ee530(&vec, (void*)ebx_val);
                    func_4dc4e0((void*)((char*)this + 0xcc), (void*)eax3);
                    break;
                case 3:
                    func_4eea30(&vec, (void*)ebx_val);
                    func_4dc4e0((void*)((char*)this + 0xcc), (void*)eax3);
                    break;
                case 4:
                    func_4eef30(&vec, (void*)ebx_val);
                    func_4dc4e0((void*)((char*)this + 0xcc), (void*)eax3);
                    break;
                case 5:
                    func_4edb20(&vec, (void*)ebx_val);
                    func_4dc4e0((void*)((char*)this + 0xcc), (void*)eax3);
                    break;
                case 6:
                    {
                        char buf[0x20];
                        func_4e5f20(buf, &vec);
                        int eax4 = field_d4 + 0x134;
                        func_465210((void*)field_bc, (void*)eax4);
                        local_7c = 9;
                        func_500b90(&local_18, (void*)eax4);
                        local_7c = 0xffffffff;
                        func_4d7560((void*)((char*)this + 0xcc), (void*)eax4);
                        func_502a70(&local_18);
                    }
                    break;
                }
            }
        }
    }

L_0225:
    {
        float f1 = *(float*)0x826fd0;
        float f2 = *(float*)0x826fd4;
        float sq = f1 * f2;
        float a = vec.x < 0 ? -vec.x : vec.x;
        float b = vec.y < 0 ? -vec.y : vec.y;
        float c = vec.z < 0 ? -vec.z : vec.z;
        float m;
        if (a > b) {
            m = a > c ? a : c;
        } else {
            m = b > c ? b : c;
        }
        field_1c = m * sq * *(float*)0x819bac;
    }
}
