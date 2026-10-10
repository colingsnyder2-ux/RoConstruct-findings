// from server: 44% by colin
// roc 2007-08 0056e0c0  unit: RBX::VContentId::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e0c0

struct std_string {
    char pad[0x1c];
};

struct ContentId {
    std_string* id;
    void* holder;
};

struct S {
    ContentId* content;
    void* field4;
    void convertToLegacyContent(const std_string& baseUrl);
};

void* __cdecl sub_411770(void* a, void* b);
int __cdecl sub_580420(void* a, void* b);
void* __cdecl sub_4ae220();
void* __cdecl sub_56d840();
void __cdecl sub_411730(void* a);
void* __cdecl sub_5017c0(void* a, void* b, void* c, void* d);
void __cdecl sub_412dc0(void* a, void* b);
void __cdecl sub_630b9e(void* a, void* b);

extern void* g_77e708;
extern void* g_8827c8;
extern void* g_8827e0;
extern void* g_8827f8;
extern void* g_7aa03c;
extern void* g_8410c0;

void S::convertToLegacyContent(const std_string& baseUrl)
{
    void* p = this->field4;
    if (p == 0) {
        void* vt = *(void**)p;
        void* fn = *(void**)((char*)vt + 4);
        ((void (__thiscall*)(void*))fn)(p);
    } else {
        p = &g_8827c8;
    }
    if (((bool (__thiscall*)(void*, void*))g_77e708)(p, &g_8827e0)) {
        if ((char*)this->field4 + 4 != 0) {
            return;
        }
    }
    void* v = *(void**)this->content;
    void* v2 = *(void**)((char*)v + 8);
    if (((bool (__thiscall*)(void*, void*))g_77e708)(&g_8827f8, v2)) {
        char buf[1];
        void* r = sub_411770(&buf, &this->field4);
        if (sub_580420(r, 0)) {
            sub_4ae220();
            void* r2 = sub_56d840();
            this->content->id = (std_string*)r2;
            sub_411730(&this->field4);
            return;
        }
    }
    void* r3 = sub_56d840();
    void* v3 = *(void**)((char*)r3 + 0xc);
    void* v4;
    if (*(unsigned int*)((char*)v3 + 0x1c) < 0x10) {
        v4 = (char*)v3 + 8;
    } else {
        v4 = *(void**)((char*)v3 + 8);
    }
    void* v5 = *(void**)this->content;
    void* v6 = *(void**)((char*)v5 + 0xc);
    void* v7 = (char*)v6 + 4;
    void* v8;
    if (*(unsigned int*)((char*)v7 + 0x18) < 0x10) {
        v8 = (char*)v7 + 4;
    } else {
        v8 = *(void**)((char*)v7 + 4);
    }
    void* r4 = sub_5017c0(v8, v4, &g_7aa03c, 0);
    sub_412dc0((void*)&baseUrl, r4);
    sub_630b9e((void*)&baseUrl, &g_8410c0);
}
