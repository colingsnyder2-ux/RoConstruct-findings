// from server: 49% by tester
// roc 2007-08 0062aba0  unit: RBX::AssemblyStage  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062aba0

extern "C" {
    __declspec(dllimport) void* __stdcall GetCurrentThreadId();
    __declspec(dllimport) void* __stdcall GetCurrentProcess();
    __declspec(dllimport) void* __stdcall GetCurrentProcessId();
}

struct Locale {
    void* p;
    Locale();
    ~Locale();
};

struct String {
    char buf[16];
    unsigned int len;
    unsigned int cap;
    String();
    String(const String&);
    ~String();
};

struct Entry {
    char data[28];
    ~Entry();
};

struct Vec {
    Entry* first;
    Entry* last;
    Entry* end;
};

struct AssemblyStage {
    bool func(int, int, int, int, int, int, int);
};

extern "C" void __cdecl sub_61ca20(void*, void*);
extern "C" void __cdecl sub_48a570(void*, const char*);
extern "C" void __cdecl sub_490ab0(void*, void*);
extern "C" void __cdecl sub_62fc62(void*);

bool AssemblyStage::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    Locale loc;
    void* t1 = GetCurrentThreadId();
    void* t2 = GetCurrentProcess();
    void* t3 = GetCurrentProcessId();
    (void)t1; (void)t2; (void)t3;

    Vec v;
    v.first = 0;
    v.last = 0;
    v.end = 0;

    String s;
    sub_48a570(&s, " !.?,:;><[]{}|\\/@#$%^&*()_-+=\"");
    sub_490ab0(&v, &s);

    unsigned int i = 0;
    unsigned int off = 0;
    while (true) {
        Entry* first = v.first;
        Entry* last = v.last;
        if (first == 0)
            break;
        unsigned int count = (unsigned int)((last - first) / 28);
        if (i >= count)
            break;
        Entry tmp;
        sub_61ca20(&tmp, first + off);
        if (((bool (__thiscall*)(void*, void*))0x62a6b0)(this, &tmp)) {
            if (v.first) {
                Entry* p = v.first;
                Entry* e = v.last;
                while (p != e) {
                    p->~Entry();
                    p++;
                }
                sub_62fc62(v.first);
            }
            v.first = 0;
            v.last = 0;
            v.end = 0;
            return true;
        }
        i++;
        off += 28;
    }

    if (v.first) {
        Entry* p = v.first;
        Entry* e = v.last;
        while (p != e) {
            p->~Entry();
            p++;
        }
        sub_62fc62(v.first);
    }
    v.first = 0;
    v.last = 0;
    v.end = 0;
    return false;
}
