// from server: 37% by colin


extern "C" void __stdcall _invalid_parameter_noinfo();

struct VInstance {
    char pad0[0x108];
    void* field_108;
};

struct FilteredSelection {
    char pad0[0x10];
    void* field_10;
};

struct Node {
    char pad0[0xc];
    unsigned int field_c;
    unsigned int field_10;
};

struct Elem {
    char pad0[4];
    void* field_4;
};

struct Obj {
    char pad0[0x140];
    void* field_140;
};

extern "C" void* __cdecl func_00615f10(void* a, void* b, void* c);
extern "C" void* __cdecl func_006a17c6(void* a, void* b, void* c, void* d, void* e);

void* __stdcall func_00616c90(VInstance* self, void* arg1, void* arg2) {
    void* local14;
    void* local20;
    void* result = func_00615f10(arg1, &local20, &local14);
    if (result == 0) return 0;
    if (self->field_108 == 0) return 0;

    Node* n = (Node*)self->field_108;
    unsigned int saved = n->field_10;
    local20 = (void*)saved;
    if (n->field_c > saved) {
        _invalid_parameter_noinfo();
    }
    void* ebp = *(void**)n;
    Node* n2 = (Node*)self->field_108;
    unsigned int edi = n2->field_c;
    if (edi > n2->field_10) {
        _invalid_parameter_noinfo();
    }
    void* esi = *(void**)n2;
    while (1) {
        if (esi != 0 && esi == ebp) {
            // equal, continue
        } else {
            _invalid_parameter_noinfo();
        }
        if (edi == (unsigned int)local20) return 0;
        if (esi != 0) {
            void* eax = *(void**)esi;
            goto check;
        }
        _invalid_parameter_noinfo();
        {
            void* eax = 0;
            if (edi < *(unsigned int*)((char*)eax + 0x10)) {
                // ok
            } else {
                _invalid_parameter_noinfo();
            }
            void* v = *(void**)edi;
            void* r = func_006a17c6(v, 0, (void*)0x92907c, (void*)0x940dbc, 0);
            if (r != 0) {
                void* ecx = *(void**)((char*)r + 0x140);
                Elem* edx = (Elem*)result;
                if (ecx == edx->field_4) {
                    return r;
                }
            }
            if (esi != 0) {
                void* eax = *(void**)esi;
                goto check2;
            }
            _invalid_parameter_noinfo();
            {
                void* eax = 0;
                if (edi < *(unsigned int*)((char*)eax + 0x10)) {
                    // ok
                } else {
                    _invalid_parameter_noinfo();
                }
                edi += 8;
                continue;
            }
        }
    check:
        {
            void* eax = *(void**)esi;
            if (edi < *(unsigned int*)((char*)eax + 0x10)) {
                // ok
            } else {
                _invalid_parameter_noinfo();
            }
            void* v = *(void**)edi;
            void* r = func_006a17c6(v, 0, (void*)0x92907c, (void*)0x940dbc, 0);
            if (r != 0) {
                void* ecx = *(void**)((char*)r + 0x140);
                Elem* edx = (Elem*)result;
                if (ecx == edx->field_4) {
                    return r;
                }
            }
            if (esi != 0) {
                void* eax = *(void**)esi;
                goto check2;
            }
            _invalid_parameter_noinfo();
            {
                void* eax = 0;
                if (edi < *(unsigned int*)((char*)eax + 0x10)) {
                    // ok
                } else {
                    _invalid_parameter_noinfo();
                }
                edi += 8;
                continue;
            }
        }
    check2:
        {
            void* eax = *(void**)esi;
            if (edi < *(unsigned int*)((char*)eax + 0x10)) {
                // ok
            } else {
                _invalid_parameter_noinfo();
            }
            edi += 8;
            continue;
        }
    }
}
