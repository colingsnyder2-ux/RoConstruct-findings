// from server: 15% by colin
// Minimal reconstruction of RBX::LDraw2Lua::LDraw2RobloxMapRoot constructor
// (32-bit MSVC 2008, /O2 /GS- /EHsc /MD)

extern "C" {
    void __stdcall string_ctor_empty(void* self);
    void __stdcall string_ctor_copy(void* self, const void* other);
    void __stdcall string_ctor_cstr(void* self, const char* s);
    void __stdcall string_dtor(void* self);
    void* __stdcall string_assign_cstr(void* self, const char* s);
    const char* __stdcall string_c_str(const void* self);

    void __stdcall ifstream_ctor(void* self, const char* name, int mode, int prot);
    void __stdcall ifstream_dtor(void* self);

    int __cdecl atoi(const char* s);

    void* __stdcall mfc798(void* self);
    void* __stdcall mfc800(void* self);
}

struct MapRoot;

void __cdecl helper_413a70(void* p);
void __cdecl helper_6a067a(void* p);
void* __cdecl helper_6a0920(unsigned int size);
void __cdecl helper_4147c0(void* p);
void __cdecl helper_415350(void* self, void* arg);
void __cdecl helper_446110(void* self, void* a, void* b);
void __cdecl helper_699b30(void* self, void* a, void* b);
void* __cdecl helper_58f6c0(void* self, void* out);
void* __cdecl helper_57c230(void* self, void* key);
void* __cdecl helper_57c210(void* self, void* out);
void* __cdecl helper_46cac0(void* self, int a, int b);
int   __cdecl helper_46cb80(void* self);
int   __cdecl helper_46cc80(void* self);
int   __cdecl helper_46cde0(void* self);
void* __cdecl helper_46d010(void* self, int key);
void* __cdecl helper_46d3d0(void* self, void* key);
void  __cdecl helper_46d480(void* self, void* arg);
void* __cdecl helper_46e6b0(void* self, void* a, void* b, void* c);
void* __cdecl helper_46e960(void* self, void* arg);
void* __cdecl helper_46e970(void* self, int a, int b);

extern void* g_96ee1c;
extern void* g_96ee20;
extern void* g_96ee24;
extern void* g_96ee28;
extern void* g_96ee2c;
extern void* g_96ee30;
extern void* g_96ee34;
extern void* g_96ee38;
extern void* g_96ee3c;
extern void* g_96ee40;
extern void* g_96ee44;
extern void* g_96ee48;
extern void* g_96ee4c;
extern void* g_96ee50;
extern void* g_96ee54;
extern void* g_96ee58;

struct MapRoot {
    void* vtable;
    char  pad04[0x1C];
    char  field20[0x1C];
    char  field3C[0x20];
    char  field5C[0x20];

    MapRoot(const char* path, int a, int b, int c, int d, int e, int f, int g);
};

MapRoot::MapRoot(const char* path, int a, int b, int c, int d, int e, int f, int g)
{
    *(void**)this = (void*)0x81c904;

    string_ctor_empty((char*)this + 4);
    string_ctor_empty((char*)this + 0x20);

    {
        char tmp1[4];
        char tmp2[4];
        helper_446110((char*)this + 0x3C, tmp1, tmp2);
    }

    {
        char tmp1[4];
        char tmp2[4];
        helper_699b30((char*)this + 0x5C, tmp1, tmp2);
    }

    char ifs[0x100];
    ifstream_ctor(ifs, path, 1, 0x40);

    char line[0x40];
    helper_415350(line, ifs);

    {
        char header[0x40];
        helper_58f6c0(line, header);

        void* root = *(void**)header;
        *(void**)header = 0;

        void* v1 = helper_57c230(root, g_96ee1c);
        if (v1) {
            helper_57c210((char*)v1 + 0x10, (char*)this + 0x20);
        }

        void* v2 = helper_57c230(root, g_96ee20);
        if (v2) {
            void* v3 = helper_57c230(v2, g_96ee24);
            char tmp[0x20];
            string_ctor_empty(tmp);

            if (v3) {
                void* cur = v3;
                int count = 0;
                int val1 = -1;
                int val2 = -1;

                while (cur) {
                    void* k2 = helper_57c230(cur, g_96ee28);

                    if (k2) {
                        char s[0x20];
                        helper_57c210((char*)k2 + 0x10, s);
                        const char* cs = string_c_str(s);
                        val1 = atoi(cs);
                        string_dtor(s);
                    }

                    void* k3 = helper_57c230(cur, g_96ee2c);
                    if (k3) {
                        char s[0x20];
                        helper_57c210((char*)k3 + 0x10, s);
                        const char* cs = string_c_str(s);
                        val2 = atoi(cs);
                        string_dtor(s);
                    }

                    count++;
                    if (count == 2) {
                        void* obj = helper_6a0920(0xC);
                        void* entry = 0;
                        if (obj) {
                            entry = helper_46cac0(obj, val1, val2);
                        }
                        int key = *(int*)((char*)entry + 4);
                        void* found = helper_46d010(this, key);
                        if (found) {
                            void** vt = *(void***)found;
                            void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                            fn(found, 1);
                        }
                        int k = *(int*)((char*)entry + 4);
                        void* slot = helper_46d3d0((char*)this + 0x3C, &k);
                        *(void**)slot = entry;
                    }

                    cur = *(void**)cur;
                }
            }

            string_dtor(tmp);
        }

        void* v4 = helper_57c230(root, g_96ee30);
        if (v4) {
            void* v5 = helper_57c230(v4, g_96ee34);
            if (v5) {
                void* cur = v5;
                while (cur) {
                    int count = 0;

                    char s1[0x20];
                    string_ctor_cstr(s1, (const char*)0x80b716);
                    void* k1 = helper_57c230(cur, g_96ee38);
                    if (k1) {
                        helper_57c210((char*)k1 + 0x10, s1);
                        count++;
                    }

                    char s2[0x20];
                    string_ctor_cstr(s2, (const char*)0x80b716);
                    void* k2 = helper_57c230(cur, g_96ee3c);
                    if (k2) {
                        helper_57c210((char*)k2 + 0x10, s2);
                        count++;
                    }

                    char s3[0x20];
                    string_ctor_cstr(s3, (const char*)0x80b716);
                    void* k3 = helper_57c230(cur, g_96ee40);
                    if (k3) {
                        helper_57c210((char*)k3 + 0x10, s3);
                        count++;
                    }

                    char s4[0x20];
                    string_ctor_cstr(s4, (const char*)0x80b716);
                    void* k4 = helper_57c230(cur, g_96ee44);
                    int extra = 2;
                    if (k4) {
                        helper_57c210((char*)k4 + 0x10, s4);
                        count++;
                        extra = helper_46cb80(s4);
                    }

                    void* obj = helper_6a0920(0x74);
                    void* entry = 0;
                    if (obj) {
                        entry = helper_46e6b0(obj, s1, s2, s3);
                    }

                    void* v6 = helper_57c230(cur, g_96ee48);
                    if (v6) {
                        int total = count + 1;
                        void* sub = v6;
                        while (sub) {
                            int subcount = 0;
                            int val1 = 0x3E7;
                            int val2 = 0;

                            void* sk1 = helper_57c230(sub, g_96ee4c);
                            if (sk1) {
                                char t[0x20];
                                helper_57c210((char*)sk1 + 0x10, t);
                                val1 = helper_46cc80(t);
                                subcount++;
                            }

                            void* sk2 = helper_57c230(sub, g_96ee50);
                            if (sk2) {
                                char t[0x20];
                                helper_57c210((char*)sk2 + 0x10, t);
                                val2 = helper_46cde0(t);
                                subcount++;
                            }

                            void* sk3 = helper_57c230(sub, g_96ee54);
                            if (sk3) {
                                char t[0x20];
                                helper_57c210((char*)sk3 + 0x10, t);
                                subcount++;
                            }

                            void* sk4 = helper_57c230(sub, g_96ee58);
                            if (sk4) {
                                char t[0x20];
                                helper_57c210((char*)sk4 + 0x10, t);
                                subcount++;
                            }

                            if (subcount == 4) {
                                void* pair = helper_46e970(entry, val1, val2);
                                helper_46e960(entry, pair);
                            }

                            sub = *(void**)sub;
                        }
                    }

                    if (count == 5) {
                        helper_46d480(this, entry);
                    }

                    cur = *(void**)cur;
                }
            }
        }

        if (root) {
            helper_413a70(root);
            helper_6a067a(root);
        }
    }

    helper_4147c0(line);
    ifstream_dtor(ifs);
}
