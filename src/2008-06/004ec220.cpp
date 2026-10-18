// from server: 27% by colin
struct Node {
    char padding[32];
    Node* next;
};

struct Iter {
    int index;
    Node* current;
    int unknown;
    int count;
    Node** buckets;
    bool ended;
    Iter operator++(int);
};

struct Node2 {
    char padding[24];
    Node2* next;
};

struct Iter2 {
    int index;
    Node2* current;
    int unknown;
    int count;
    Node2** buckets;
    bool ended;
    Iter2 operator++(int);
};

struct Texture {
    char padding0[0x1c];
    int* field1c;
    char padding20[0x14];
    int* field34;
    char padding38[4];
    int* field3c;
    char padding40[0x14];
    int* field54;
    int f();
};

extern "C" void __cdecl func_00557330(int, int);
extern "C" void __cdecl func_00563090(int);
extern "C" void __cdecl func_005630e0(int);
extern "C" void __cdecl func_006a067a(void*);
extern "C" int __stdcall func_008021ac(void*);
extern "C" void __cdecl func_00802890();
extern "C" void __cdecl func_00438770(Iter*);
extern "C" void __cdecl func_004d7240(Iter2*);
extern "C" void __cdecl func_004e6c30(Iter2*, int);
extern "C" void __cdecl func_004e6c90(Iter*, int);

int Texture::f()
{
    func_00557330(0x4d9750, 0x97273c);
    int* g = *(int**)0x972724;
    int* base = g;
    int* p = (int*)((char*)g + 0x10);
    func_00563090((int)p);
    int* esi = *(int**)((char*)base + 0xc);
    int* ecx = *(int**)((char*)base + 8);
    int edi = 0;
    Iter it;
    it.index = 0;
    it.current = (Node*)base;
    it.unknown = (int)esi;
    it.count = (int)ecx;
    it.buckets = 0;
    it.ended = false;
    while (true) {
        if (esi == 0) {
            it.ended = true;
        } else {
            int* eax = (int*)*ecx;
            it.index = 0;
            it.current = (Node*)eax;
            it.ended = false;
            if (eax == 0) {
                while (true) {
                    edi++;
                    if (edi >= (int)esi) {
                        it.current = (Node*)eax;
                        it.index = edi;
                        it.ended = true;
                        break;
                    }
                    eax = (int*)ecx[edi];
                    if (eax != 0) {
                        it.current = (Node*)eax;
                        it.index = edi;
                        break;
                    }
                }
            }
        }
        if (it.ended && (Node*)base == it.current) {
            break;
        }
        int* eax = (int*)it.current;
        int* edi2 = *(int**)((char*)eax + 0x14);
        int* esi2 = *(int**)((char*)eax + 0x10);
        int* ebp = (int*)((char*)eax + 8);
        Iter2 it2;
        it2.index = 0;
        it2.current = (Node2*)ebp;
        it2.unknown = (int)edi2;
        it2.count = (int)esi2;
        it2.buckets = 0;
        it2.ended = false;
        while (true) {
            if (edi2 == 0) {
                it2.ended = true;
            } else {
                int* eax2 = (int*)*esi2;
                it2.index = 0;
                it2.current = (Node2*)eax2;
                it2.ended = false;
                if (eax2 == 0) {
                    int ecx2 = 0;
                    while (true) {
                        ecx2++;
                        if (ecx2 >= (int)edi2) {
                            it2.current = (Node2*)eax2;
                            it2.index = ecx2;
                            it2.ended = true;
                            break;
                        }
                        eax2 = (int*)esi2[ecx2];
                        if (eax2 != 0) {
                            it2.current = (Node2*)eax2;
                            it2.index = ecx2;
                            break;
                        }
                    }
                }
            }
            if (it2.ended && (Node2*)ebp == it2.current) {
                break;
            }
            int* eax3 = (int*)it2.current;
            int* edi3 = (int*)((char*)eax3 + 0x10);
            int ebx = 4;
            do {
                if (*edi3 != 0) {
                    int* eax4 = (int*)*edi3;
                    eax4 = (int*)((char*)eax4 + 4);
                    eax4 = (int*)*eax4;
                    if ((int)eax4 == 1) {
                        int* eax5 = (int*)*edi3;
                        if (eax5 != 0) {
                            eax5 = (int*)((char*)eax5 + 4);
                            if (func_008021ac(eax5) == 0) {
                                int* ecx3 = (int*)*edi3;
                                int* esi3 = *(int**)((char*)ecx3 + 8);
                                while (esi3 != 0) {
                                    int* ecx4 = (int*)*esi3;
                                    int* edx = (int*)*ecx4;
                                    int* eax6 = (int*)*(int*)((char*)edx + 4);
                                    ((void(__thiscall*)(int*))eax6)(ecx4);
                                    int* eax7 = esi3;
                                    esi3 = *(int**)((char*)esi3 + 4);
                                    func_006a067a(eax7);
                                }
                                int* ecx5 = (int*)*edi3;
                                if (ecx5 != 0) {
                                    int* edx2 = (int*)*ecx5;
                                    int* eax8 = (int*)*edx2;
                                    ((void(__thiscall*)(int*, int))eax8)(ecx5, 1);
                                }
                            }
                            *edi3 = 0;
                        }
                    }
                }
                edi3 = (int*)((char*)edi3 + 4);
                ebx--;
            } while (ebx != 0);
            func_004e6c30(&it2, 0);
        }
        func_004e6c90(&it, 0);
    }
    int* ecx6 = *(int**)((char*)this + 0x34);
    int* ebx2 = (int*)*ecx6;
    int* esi4 = *(int**)((char*)this + 0x1c);
    while (true) {
        int* edi4 = *(int**)((char*)this + 0x34);
        int* eax9 = *(int**)((char*)this + 0x1c);
        if (esi4 != 0 && esi4 == eax9) {
        } else {
            func_00802890();
        }
        if (ebx2 == edi4) {
            break;
        }
        if (esi4 == 0) {
            func_00802890();
            if (ebx2 == *(int**)((char*)0 + 0x18)) {
                func_00802890();
            }
            int* edi5 = (int*)((char*)ebx2 + 0x1c);
            if (*edi5 != 0) {
                if (esi4 != 0) {
                    esi4 = (int*)*esi4;
                } else {
                    func_00802890();
                }
                if (ebx2 == *(int**)((char*)esi4 + 0x18)) {
                    func_00802890();
                }
                int* eax10 = (int*)*edi5;
                eax10 = (int*)((char*)eax10 + 4);
                eax10 = (int*)*eax10;
                if ((int)eax10 == 1) {
                    if (esi4 != 0) {
                        esi4 = (int*)*esi4;
                    } else {
                        func_00802890();
                    }
                    if (ebx2 == *(int**)((char*)0 + 0x18)) {
                        func_00802890();
                    }
                    if (*edi5 != 0) {
                        int* eax11 = (int*)*edi5;
                        eax11 = (int*)((char*)eax11 + 4);
                        if (func_008021ac(eax11) == 0) {
                            int* edx3 = (int*)*edi5;
                            int* esi5 = *(int**)((char*)edx3 + 8);
                            while (esi5 != 0) {
                                int* ecx7 = (int*)*esi5;
                                int* eax12 = (int*)*ecx7;
                                int* edx4 = (int*)*(int*)((char*)eax12 + 4);
                                ((void(__thiscall*)(int*))edx4)(ecx7);
                                int* eax13 = esi5;
                                esi5 = *(int**)((char*)esi5 + 4);
                                func_006a067a(eax13);
                            }
                            int* ecx8 = (int*)*edi5;
                            if (ecx8 != 0) {
                                int* eax14 = (int*)*ecx8;
                                int* edx5 = (int*)*eax14;
                                ((void(__thiscall*)(int*, int))edx5)(ecx8, 1);
                            }
                        }
                        *edi5 = 0;
                    }
                }
            }
            func_004d7240((Iter2*)&esi4);
            ebx2 = *(int**)((char*)this + 0x34);
            esi4 = *(int**)((char*)this + 0x1c);
        }
    }
    int* eax15 = *(int**)((char*)this + 0x54);
    int* ebx3 = (int*)*eax15;
    int* esi6 = *(int**)((char*)this + 0x3c);
    while (true) {
        int* edi6 = *(int**)((char*)this + 0x54);
        int* eax16 = *(int**)((char*)this + 0x3c);
        if (esi6 != 0 && esi6 == eax16) {
        } else {
            func_00802890();
        }
        if (ebx3 == edi6) {
            break;
        }
        if (esi6 == 0) {
            func_00802890();
            if (ebx3 == *(int**)((char*)0 + 0x18)) {
                func_00802890();
            }
            int* edi7 = (int*)((char*)ebx3 + 0x24);
            if (*edi7 != 0) {
                if (esi6 != 0) {
                    esi6 = (int*)*esi6;
                } else {
                    func_00802890();
                }
                if (ebx3 == *(int**)((char*)esi6 + 0x18)) {
                    func_00802890();
                }
                int* eax17 = (int*)*edi7;
                eax17 = (int*)((char*)eax17 + 4);
                eax17 = (int*)*eax17;
                if ((int)eax17 == 1) {
                    if (esi6 != 0) {
                        esi6 = (int*)*esi6;
                    } else {
                        func_00802890();
                    }
                    if (ebx3 == *(int**)((char*)0 + 0x18)) {
                        func_00802890();
                    }
                    if (*edi7 != 0) {
                        int* eax18 = (int*)*edi7;
                        eax18 = (int*)((char*)eax18 + 4);
                        if (func_008021ac(eax18) == 0) {
                            int* edx6 = (int*)*edi7;
                            int* esi7 = *(int**)((char*)edx6 + 8);
                            while (esi7 != 0) {
                                int* ecx9 = (int*)*esi7;
                                int* eax19 = (int*)*ecx9;
                                int* edx7 = (int*)*(int*)((char*)eax19 + 4);
                                ((void(__thiscall*)(int*))edx7)(ecx9);
                                int* eax20 = esi7;
                                esi7 = *(int**)((char*)esi7 + 4);
                                func_006a067a(eax20);
                            }
                            int* ecx10 = (int*)*edi7;
                            if (ecx10 != 0) {
                                int* eax21 = (int*)*ecx10;
                                int* edx8 = (int*)*eax21;
                                ((void(__thiscall*)(int*, int))edx8)(ecx10, 1);
                            }
                        }
                        *edi7 = 0;
                    }
                }
            }
            func_00438770((Iter*)&esi6);
            ebx3 = *(int**)((char*)this + 0x54);
            esi6 = *(int**)((char*)this + 0x3c);
        }
    }
    func_005630e0((int)p);
    return (int)this;
}
