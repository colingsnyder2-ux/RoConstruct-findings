// from server: 8% by colin
struct Type {
    virtual ~Type();
};

struct EnumDescriptor;

struct Item {
    Item(const char*, int, int, unsigned int, const EnumDescriptor&);
    virtual ~Item();
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
};

struct EnumDescriptor : Type {
    EnumDescriptor(const char*);
    virtual ~EnumDescriptor();
    char pad0[0x110 - 4];
    void* allItemsBegin;
    void* allItemsEnd;
    void* allItemsCap;
    unsigned int enumCount;
    unsigned int enumCountMSB;
    char pad1[0x198 - 0x128];
    void* field198;
    char pad2[0x218 - 0x19c];
    void* field218;
    char pad3[0x230 - 0x21c];
    void* field230;
};

struct ScriptItem {
    char pad0[0x110];
    void* field110;
    char pad1[0x11c - 0x114];
    unsigned int field11c;
    unsigned int field120;
    char pad2[0x128 - 0x124];
    EnumDescriptor* field128;
    void* field12c;
    void construct(const Item*);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void __stdcall mfc798(void*);
extern "C" void __stdcall mfc45c(void*, const void*);
extern "C" void __stdcall mfc464(void*);
extern "C" void __stdcall mfc468(void*);
extern "C" void __stdcall string_copy(void*, const void*);
extern "C" void __stdcall string_dtor(void*);
extern "C" const char* __stdcall string_cstr(const void*);
extern "C" void __cdecl func_43a320(void*, void*, void*);
extern "C" void __cdecl func_43d0e0(void*, void*, void*, void*, void*, void*, void*);
extern "C" void __cdecl func_43d1d0(void*, void*, void*, void*, void*, void*);
extern "C" void __cdecl func_576f00(void*, void*);
extern "C" long __cdecl func_5773c0(void*, void*);
extern "C" void __cdecl func_58c5c0(void*, void*);
extern "C" void __cdecl func_5a2fe0(void*);
extern "C" void __cdecl func_420110(void*, void*);

void ScriptItem::construct(const Item* item)
{
    void* p = operator_new(4);
    if (p) {
        *(void**)p = &p;
    } else {
        p = 0;
    }
    void* local = p;
    void* v0 = 0;
    void* v1 = 0;
    void* v2 = 0;

    EnumDescriptor* ed = field128;
    void* a = *(void**)((char*)ed + 0x218);
    void* b = *(void**)((char*)ed + 0x230);
    unsigned int end = field120;
    if (field11c > end) _invalid_parameter_noinfo();
    void* begin = field110;
    unsigned int e2 = field11c;
    if (e2 > field120) _invalid_parameter_noinfo();
    void* cur = field110;
    unsigned int c2 = e2;
    while (true) {
        if (cur) {
            if (cur == begin) break;
        } else {
            _invalid_parameter_noinfo();
        }
        if (c2 == end) break;
        if (cur) {
            cur = *(void**)cur;
        } else {
            _invalid_parameter_noinfo();
        }
    }
    (void)v0; (void)v1; (void)v2; (void)a; (void)b;
    (void)local;
    (void)item;
}
