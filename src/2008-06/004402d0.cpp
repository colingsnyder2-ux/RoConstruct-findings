// from server: 27% by colin
struct ContentItem {
    char pad0[0x118];
    void* begin;
    char pad11c[8];
    void* end;
    void* cap;
    char pad12c[4];
    void* field130;

    void func(void* arg);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl func_43a320(void*, void*);
extern "C" void __cdecl func_43c940(void*, void*, void*, void*, void*);
extern "C" void __cdecl func_576f00(void*, void*);
extern "C" void __cdecl func_5773c0(void*);
extern "C" void* __cdecl func_58c5c0(void*, void*);
extern "C" void __cdecl func_5a2fe0(void*);
extern "C" void __cdecl func_420110(void*, void*);
extern "C" void* __cdecl func_6a0920(unsigned int);

struct Inner {
    char pad0[0x198];
    void* field198;
    char pad19c[0x1f0 - 0x19c];
    void* field1f0;
};

struct Outer {
    char pad0[0x130];
    Inner* field130;
    char pad134[4];
    void* field134;
};

void ContentItem::func(void* arg)
{
    void* local60;
    void* local54;
    void* local50;
    void* local4c;
    void* local44;
    void* local40;
    void* local3c;
    void* local38;
    void* local34;
    void* local30;
    void* local2c;
    void* local28;
    void* local24;
    void* local20;
    void* local18;
    void* local74;
    void* local6c;
    void* local48;
    void* localb8;
    void* eax_val;

    void* p = func_6a0920(4);
    if (p) {
        *(void**)p = &local60;
    } else {
        p = 0;
    }
    local60 = p;
    local54 = 0;
    local50 = 0;
    local4c = 0;

    Outer* outer = (Outer*)this;
    Inner* inner = outer->field130;
    local38 = *(void**)((char*)inner + 0x230);
    local3c = *(void**)((char*)inner + 0x218);

    void* esi = *(void**)((char*)this + 0x128);
    if (*(unsigned int*)((char*)this + 0x124) > (unsigned int)esi) {
        _invalid_parameter_noinfo();
    }
    local30 = esi;
    void* ecx_val = *(void**)((char*)this + 0x118);
    esi = *(void**)((char*)this + 0x124);
    local34 = ecx_val;
    if ((unsigned int)esi > *(unsigned int*)((char*)this + 0x128)) {
        _invalid_parameter_noinfo();
    }
    void* edi = *(void**)((char*)this + 0x118);
    local2c = edi;
    local28 = esi;

    while (1) {
        if (edi) {
            if (edi == local34) goto skip1;
        }
        _invalid_parameter_noinfo();
    skip1:
        if (esi == local30) break;
        if (edi) {
            edi = *(void**)edi;
        } else {
            _invalid_parameter_noinfo();
        }
        if ((unsigned int)esi < *(unsigned int*)((char*)edi + 0x10)) {
            _invalid_parameter_noinfo();
        }
        void* edx_val = *(void**)esi;
        Inner* inner2 = outer->field130;
        local18 = edx_val;
        func_43a320((char*)inner2 + 0x218, &local44);
        edi = local44;
        if (edi) {
            if (edi == local3c) goto skip2;
        }
        _invalid_parameter_noinfo();
    skip2:
        esi = local40;
        if (esi == local38) {
            goto done_outer;
        }
        if (edi) {
            edi = *(void**)edi;
        } else {
            _invalid_parameter_noinfo();
        }
        if (esi != *(void**)((char*)edi + 0x18)) {
            _invalid_parameter_noinfo();
        }
        void* ebx_val = *(void**)((char*)esi + 0x1c);
        if ((unsigned int)ebx_val > *(unsigned int*)((char*)esi + 0x20)) {
            _invalid_parameter_noinfo();
        }
        eax_val = *(void**)((char*)esi + 0x10);
        local20 = ebx_val;
        local24 = eax_val;
        if (edi) {
            edi = *(void**)edi;
        } else {
            _invalid_parameter_noinfo();
        }
        if (esi != *(void**)((char*)edi + 0x18)) {
            _invalid_parameter_noinfo();
        }
        void* edi2 = *(void**)((char*)esi + 0x20);
        if (*(unsigned int*)((char*)esi + 0x1c) > (unsigned int)edi2) {
            _invalid_parameter_noinfo();
        }
        esi = *(void**)((char*)esi + 0x10);
        if (eax_val) {
            if (eax_val == esi) goto skip3;
        }
        _invalid_parameter_noinfo();
    skip3:
        if (local20 == edi2) goto done_inner;
        if (eax_val) {
            eax_val = *(void**)eax_val;
        } else {
            _invalid_parameter_noinfo();
        }
        if ((unsigned int)local20 < *(unsigned int*)((char*)eax_val + 0x10)) {
            _invalid_parameter_noinfo();
        }
        func_420110(&local60, local20);
        if (local24) {
            eax_val = *(void**)local24;
        } else {
            _invalid_parameter_noinfo();
        }
        if ((unsigned int)local20 < *(unsigned int*)((char*)eax_val + 0x10)) {
            _invalid_parameter_noinfo();
        }
        local20 = (char*)local20 + 8;
        eax_val = local24;
        goto skip3;
    done_inner:
        ;
    }
done_outer:
    if (local2c) {
        eax_val = *(void**)local2c;
    } else {
        _invalid_parameter_noinfo();
    }
    if ((unsigned int)local28 < *(unsigned int*)((char*)eax_val + 0x10)) {
        _invalid_parameter_noinfo();
    }
    local28 = (char*)local28 + 4;
    edi = local2c;
    esi = local28;
    goto skip1;

    void* arg_val = *(void**)arg;
    void* edi_val = local40;
    void* ebx_val2 = (void*)0x43c500;
    void* eax_val2 = local50;
    void* ecx_val2 = local54;
    void* edx_val2 = (void*)0x71f210;
    local74 = 0;
    local6c = edx_val2;
    arg = eax_val2;
    if ((unsigned int)ecx_val2 > (unsigned int)eax_val2) {
        _invalid_parameter_noinfo();
        eax_val2 = local50;
        ecx_val2 = local54;
    }
    void* edx_val3 = local60;
    local44 = edx_val3;
    local18 = ecx_val2;
    if ((unsigned int)ecx_val2 > (unsigned int)eax_val2) {
        _invalid_parameter_noinfo();
    }
    void* ecx_val3 = local74;
    void* edx_val4 = local6c;
    void* eax_val3 = (char*)0 - 0x18;
    *(void**)((char*)eax_val3 + 0) = ebx_val2;
    *(void**)((char*)eax_val3 + 4) = ecx_val3;
    void* ecx_val4 = (void*)this;
    *(void**)((char*)eax_val3 + 8) = ecx_val4;
    void* ecx_val5 = local44;
    *(void**)((char*)eax_val3 + 0xc) = edx_val4;
    void* edx_val5 = local18;
    *(void**)((char*)eax_val3 + 0x10) = edi_val;
    *(void**)((char*)eax_val3 + 0x14) = arg_val;
    void* eax_val4 = arg;
    func_43c940(&localb8, local60, edx_val5, ecx_val5, eax_val4);

    void* esi_val = (void*)this;
    Inner* inner3 = *(Inner**)((char*)esi_val + 0x130);
    if (inner3->field198) {
        void* eax_val5 = inner3->field198;
        local48 = 0;
        local44 = 0;
        local40 = 0;
        func_576f00(&local48, eax_val5);
        void* edx_val6 = *(void**)((char*)esi_val + 0x134);
        void* eax_val6 = *(void**)((char*)edx_val6 + 4);
        void* ecx_val6 = (char*)eax_val6 + 4;
        void* eax_val7 = func_58c5c0(ecx_val6, 0);
        Inner* inner4 = *(Inner**)((char*)esi_val + 0x130);
        void* edx_val7 = inner4->field198;
        func_58c5c0(eax_val7, edx_val7);
        Inner* inner5 = *(Inner**)((char*)esi_val + 0x130);
        void* eax_val8 = inner5->field198;
        void* edx_val8 = *(void**)((char*)eax_val8 + 0x1f0);
        void* ecx_val7 = (char*)eax_val8 + 0x1f0;
        void* eax_val9 = *(void**)edx_val8;
        ((void(__thiscall*)(void*, int))eax_val9)(ecx_val7, 1);
        func_5773c0(&local48);
    }
    func_5a2fe0(&local60);
}
