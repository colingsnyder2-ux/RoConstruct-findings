// from server: 62% by colin
extern "C" {
    unsigned int __stdcall RegisterClipboardFormatA(const char*);
    int __stdcall IsClipboardFormatAvailable(unsigned int);
}

struct PasteVerb {
    char pad[0xc];
    void* field_c;
    char field_10;
    bool isEnabled() const;
};

struct Inner {
    char pad[0x104];
    void* field_104;
};

struct Inner2 {
    void* field_0;
    void* field_4;
    void* field_8;
};

void* __fastcall sub_410d40(void*);

bool PasteVerb::isEnabled() const {
    static unsigned int g_format = 0;
    static bool g_init = false;
    if (!g_init) {
        g_init = true;
        g_format = RegisterClipboardFormatA("Roblox");
    }
    if (IsClipboardFormatAvailable(g_format) != 1)
        return false;
    if (field_10 == 0)
        return true;
    void* p;
    if (field_c != 0)
        p = sub_410d40(field_c);
    else
        p = 0;
    Inner* in = (Inner*)((char*)p + 0x104);
    Inner2* in2 = (Inner2*)in->field_104;
    if (in2->field_4 == 0) {
        int v = 0;
        return v == 1;
    }
    int count = ((char*)in2->field_8 - (char*)in2->field_4) >> 3;
    return count == 1;
}
