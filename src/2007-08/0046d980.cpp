// from server: 32% by colin
// roc 2007-08 0046d980  unit: RBX::LDraw2Lua::LuaWriter  size: 861 bytes

typedef unsigned int size_t;

struct String {
    char pad[0x1c];
    String();
    String(const char*);
    String(const String&);
    ~String();
    String& operator=(const String&);
    String& operator=(const char*);
    String substr(size_t, size_t) const;
    size_t rfind(const char*, size_t, size_t) const;
};

struct Ostream {
    void put(const String&);
    void put(const char*);
};

extern "C" {
    unsigned int __stdcall GetSystemDirectoryA(char*, unsigned int);
    const char* __stdcall glGetString(unsigned int);
}

extern String g_str1;
extern String g_str2;
extern Ostream g_out;

extern "C" int __cdecl sub_46D880();
extern "C" int __cdecl sub_5017C0(char*, const char*, int, int, int, int);
extern "C" void* __cdecl sub_62FF32(const char*);
extern "C" void __cdecl sub_62FF26(void*);
extern "C" int __cdecl sub_727130(const char*, int*);
extern "C" int __cdecl sub_72712A(const char*, int, const char*, void*);
extern "C" void __cdecl sub_630D23(void*);
extern "C" void __cdecl sub_630A1E();

struct LuaWriter {
    int f();
};

int LuaWriter::f()
{
    char buf[0x400];
    String s1;
    String s2;
    String s3;
    int flag = 0;

    if (sub_46D880() == 2) {
        if (!(*(volatile unsigned char*)0x8bd000 & 1)) {
            *(volatile unsigned int*)0x8bd000 |= 1;
            GetSystemDirectoryA(buf, 0x1f02);
            g_str1 = buf;
            sub_630D23((void*)0x777f00);
        }
        g_out.put(g_str1);
        return 0;
    }

    if (!GetSystemDirectoryA(buf, 0x400)) {
        g_out.put("Unknown (Can't find driver)");
        return 1;
    }

    s1 = buf;

    int r = sub_46D880();
    if (r == 0) {
        s2 = "Unknown (No information)";
    } else if (r == 1) {
        s2 = "Unknown (Unknown vendor)";
    } else {
        g_out.put("Unknown");
        return 1;
    }

    const char* p = glGetString(0x1F02);
    if (!p) {
        g_out.put("Unknown (No information)");
        return 1;
    }

    int len = sub_727130(p, 0);
    if (!len) {
        g_out.put("Unknown");
        return 1;
    }

    char* q = (char*)sub_62FF32(p);
    if (!sub_72712A(p, 0, q, (void*)len)) {
        sub_62FF26(q);
        g_out.put("Unknown");
        return 1;
    }

    char* end = q + 6;
    char* start = end + 2;
    while (*(unsigned short*)end) end += 2;
    int n = (int)(end - start) >> 1;
    char* vend = q + n * 2 + 8;
    int off = (int)(vend - q);
    off = (off + 3) & ~3;
    char* vptr = q + off;

    s3 = "Unknown";

    if (*(unsigned short*)(q + 2)) {
        unsigned int a = *(unsigned int*)(vptr + 0x14);
        unsigned int b = *(unsigned int*)(vptr + 0x10);
        char tmp[0x40];
        sub_5017C0(tmp, "%d.%d.%d.%d",
            (unsigned short)b, b >> 16,
            (unsigned short)a, a >> 16);
        s3 = tmp;
    }

    sub_62FF26(q);
    g_out.put(s3);
    return 0;
}
