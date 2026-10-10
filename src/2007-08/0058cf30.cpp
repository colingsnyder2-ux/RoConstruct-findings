// from server: 41% by colin
struct SoundService {
    char pad[0x14];
    int field14;
    bool getListenerValues(unsigned short* out);
};

extern "C" {
    int __stdcall find_first_of_impl(const char*, unsigned int, const char*, unsigned int, unsigned int);
    int __stdcall substr_impl(void*, const char*, unsigned int, unsigned int);
    void __stdcall string_dtor(void*);
    int __stdcall atoi_impl(const char*);
}

bool SoundService::getListenerValues(unsigned short* out) {
    int pos = find_first_of_impl((const char*)this, 0, (const char*)0x7af6a0, 0, 2);
    if (pos < 0) {
        return false;
    }
    char buf[0x1c];
    substr_impl(buf, (const char*)this, 0, pos);
    const char* p;
    if (*(unsigned int*)(buf + 0x18) < 0x10) {
        p = buf + 4;
    } else {
        p = *(const char**)(buf + 4);
    }
    out[0] = (unsigned short)atoi_impl(p);
    string_dtor(buf);
    int next = pos + 1;
    if (field14 < next) {
        return false;
    }
    substr_impl(buf, (const char*)this, next, field14 - next);
    if (*(unsigned int*)(buf + 0x18) < 0x10) {
        p = buf + 4;
    } else {
        p = *(const char**)(buf + 4);
    }
    out[1] = (unsigned short)atoi_impl(p);
    string_dtor(buf);
    return true;
}
