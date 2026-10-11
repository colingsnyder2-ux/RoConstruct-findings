// from server: 35% by atomic.potato



extern "C" void __stdcall sub_43b510();
extern "C" void __stdcall sub_7110d0();
extern "C" void __stdcall sub_7119f0();
extern "C" void __stdcall sub_803f10();

struct VBrickColor {
    void func(unsigned int* arg);
    void _invalid_parameter_noinfo();
    void sub_43a320();
};

void VBrickColor::func(unsigned int* arg) {
    unsigned int* p = arg;
    unsigned int v0 = p[0];
    unsigned int v1 = p[6];
    unsigned int local14 = (unsigned int)this;
    unsigned int local18 = 0xc2;
    unsigned char local13 = 0;
    unsigned int local38 = v1;
    unsigned int local34 = v0;
    unsigned int local2c;
    unsigned int local30;
    unsigned int local20;
    unsigned int local44;
    unsigned int local1c;
    unsigned int local40;
    unsigned int local4c;
    unsigned int local28;
    unsigned int local24;
    unsigned int local3c;
    unsigned int local48;

    unsigned int esi = *(unsigned int*)((char*)this + 0x10);
    if (esi > *(unsigned int*)((char*)this + 0x14)) {
        _invalid_parameter_noinfo();
    }
    unsigned int ebp = *(unsigned int*)((char*)this + 4);
    unsigned int ebx = esi;
    esi = *(unsigned int*)((char*)this + 0x14);
    local2c = ebp;
    local30 = ebx;
    local20 = esi;
    if (*(unsigned int*)((char*)this + 0x10) > esi) {
        _invalid_parameter_noinfo();
    }
    unsigned int eax = *(unsigned int*)((char*)this + 4);
    local44 = eax;

    while (1) {
        if (ebp != 0 && ebp != local44) {
            _invalid_parameter_noinfo();
        }
        if (ebx == esi) break;
        if (ebp != 0) {
            eax = *(unsigned int*)ebp;
        } else {
            _invalid_parameter_noinfo();
            eax = 0;
            if (ebx < *(unsigned int*)((char*)eax + 0x10)) {
                _invalid_parameter_noinfo();
            }
            eax = *(unsigned int*)ebx;
        }
        local1c = eax;
        sub_43a320();
        unsigned int edi = local3c;
        if (edi != 0 && edi != local34) {
            _invalid_parameter_noinfo();
        }
        unsigned int esi2 = local40;
        if (esi2 == local38) {
            ebp = local2c;
            ebx = local30;
            if (ebp == 0) {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebx < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx += 4;
                local30 = ebx;
                continue;
            } else {
                eax = *(unsigned int*)ebp;
                if (ebx < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx += 4;
                local30 = ebx;
                continue;
            }
        }
        if (edi != 0) {
            eax = *(unsigned int*)edi;
        } else {
            _invalid_parameter_noinfo();
            eax = 0;
            if (esi2 == *(unsigned int*)((char*)eax + 0x18)) {
                _invalid_parameter_noinfo();
            }
            ebp = *(unsigned int*)((char*)esi2 + 0x1c);
            if (ebp > *(unsigned int*)((char*)esi2 + 0x20)) {
                _invalid_parameter_noinfo();
            }
            ebx = *(unsigned int*)((char*)esi2 + 0x10);
        }
        if (edi != 0) {
            edi = *(unsigned int*)edi;
        }
        if (esi2 != *(unsigned int*)((char*)edi + 0x18)) {
            _invalid_parameter_noinfo();
        }
        unsigned int edi2 = *(unsigned int*)((char*)esi2 + 0x20);
        local1c = edi2;
        if (*(unsigned int*)((char*)esi2 + 0x1c) > edi2) {
            _invalid_parameter_noinfo();
        }
        unsigned int ecx2 = *(unsigned int*)((char*)esi2 + 0x10);
        local4c = ecx2;
        if (ebx != 0 && ebx != local4c) {
            _invalid_parameter_noinfo();
        }
        if (ebp == edi2) {
            ebp = local2c;
            ebx = local30;
            if (ebp == 0) {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebx < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx += 4;
                local30 = ebx;
                continue;
            } else {
                eax = *(unsigned int*)ebp;
                if (ebx < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                ebx += 4;
                local30 = ebx;
                continue;
            }
        }
        if (local13 != 0) {
            if (ebx != 0) {
                eax = *(unsigned int*)ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                eax = *(unsigned int*)ebp;
            }
            unsigned int esi3 = local14;
            unsigned int edi3 = *(unsigned int*)((char*)esi3 - 0x118);
            local28 = eax;
            esi3 += 0xfffffee8;
            sub_43b510();
            edi3 += 0xf8;
            unsigned int edx2 = *(unsigned int*)edi3;
            local24 = eax;
            if (((int (__stdcall*)(unsigned int))edx2)(local24) == 0) {
                goto fail;
            }
            local13 = 1;
            if (ebx != 0) {
                eax = *(unsigned int*)ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
            }
            edi = local1c;
            ebp += 8;
            if (ebx != 0 && ebx != local4c) {
                _invalid_parameter_noinfo();
            }
            continue;
        } else {
            if (ebx != 0) {
                eax = *(unsigned int*)ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
                eax = *(unsigned int*)ebp;
            }
            unsigned int esi4 = local14;
            local28 = eax;
            esi4 += 0xfffffee8;
            sub_43b510();
            eax = *(unsigned int*)eax;
            unsigned int edx3 = *(unsigned int*)esi4;
            edx3 = *(unsigned int*)((char*)edx3 + 0xf4);
            local18 = eax;
            local24 = (unsigned int)&local18;
            ((void (__stdcall*)(unsigned int))edx3)(local24);
            local13 = 1;
            if (ebx != 0) {
                eax = *(unsigned int*)ebx;
            } else {
                _invalid_parameter_noinfo();
                eax = 0;
                if (ebp < *(unsigned int*)((char*)eax + 0x10)) {
                    _invalid_parameter_noinfo();
                }
            }
            edi = local1c;
            ebp += 8;
            if (ebx != 0 && ebx != local4c) {
                _invalid_parameter_noinfo();
            }
            continue;
        }
    }

    {
        unsigned char al = (local13 == 0) ? 1 : 0;
        unsigned int ecx3 = (unsigned int)this - 0x118;
        ((void (__stdcall*)(unsigned int))sub_7110d0)((unsigned int)al);
        return;
    }

fail:
    sub_803f10();
    unsigned int esi5 = local14;
    esi5 += 0xfffffee8;
    sub_7119f0();
    sub_7110d0();
    return;
}
