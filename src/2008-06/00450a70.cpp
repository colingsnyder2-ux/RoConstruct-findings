// from server: 36% by colin
// from server: 35% by colin
// roc 2008-06 00450a70  unit: CRobloxDoc  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00450a70
//
// 00450a70  64a100000000         mov eax, dword ptr fs:[0]
// 00450a76  6aff                 push -1
// 00450a78  68081c7c00           push 0x7c1c08
// 00450a7d  50                   push eax
// 00450a7e  64892500000000       mov dword ptr fs:[0], esp
// 00450a85  83ec44               sub esp, 0x44
// 00450a88  53                   push ebx
// 00450a89  56                   push esi
// 00450a8a  57                   push edi
// 00450a8b  8d44240c             lea eax, [esp + 0xc]
// 00450a8f  50                   push eax
// 00450a90  8bf1                 mov esi, ecx
// 00450a92  e8a925fbff           call 0x403040
// 00450a97  833800               cmp dword ptr [eax], 0
// 00450a9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00450a9e  0f95c3               setne bl
// 00450aa1  85c0                 test eax, eax
// 00450aa3  742c                 je 0x450ad1
// 00450aa5  8bf8                 mov edi, eax
// 00450aa7  83c004               add eax, 4
// 00450aaa  83c9ff               or ecx, 0xffffffff
// 00450aad  f00fc108             lock xadd dword ptr [eax], ecx
// 00450ab1  751e                 jne 0x450ad1
// 00450ab3  8b17                 mov edx, dword ptr [edi]
// 00450ab5  8b4204               mov eax, dword ptr [edx + 4]
// 00450ab8  8bcf                 mov ecx, edi
// 00450aba  ffd0                 call eax
// 00450abc  8d4f08               lea ecx, [edi + 8]
// 00450abf  83caff               or edx, 0xffffffff
// 00450ac2  f00fc111             lock xadd dword ptr [ecx], edx
// 00450ac6  7509                 jne 0x450ad1
// 00450ac8  8b07                 mov eax, dword ptr [edi]
// 00450aca  8b5008               mov edx, dword ptr [eax + 8]
// 00450acd  8bcf                 mov ecx, edi
// 00450acf  ffd2                 call edx
// 00450ad1  84db                 test bl, bl
// 00450ad3  0f8406010000         je 0x450bdf
// 00450ad9  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00450adf  8d442414             lea eax, [esp + 0x14]
// 00450ae3  50                   push eax
// 00450ae4  e8579e0100           call 0x46a940
// 00450ae9  8b10                 mov edx, dword ptr [eax]
// 00450aeb  83ec08               sub esp, 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl sprintf(char*, const char*, ...);

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* ctrl;
};

struct RBX_DataModel {
    char pad[0x20c];
    void* field_214;
    double get() const;
};

struct QString {
    void* data;
    QString();
    __declspec(dllimport) ~QString() throw();
    void sprintf(const char* fmt, ...);
};

struct CRobloxDoc {
    char pad[0x94];
    Source* source;
    void func(Shared* arg);
};

void CRobloxDoc::func(Shared* arg) {
    Result r;
    bool hasData;
    source->copy(&r);
    hasData = (r.first != 0);

    if (arg) {
        Control* c = arg->ctrl;
        if (c) {
            if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                c->dispose();
                if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                    c->destroy();
                }
            }
        }
    }

    if (hasData) {
        Result r2;
        source->copy(&r2);
        double t = ((RBX_DataModel*)r2.first)->get();
        QString label;
        label.sprintf("t %.4g", t);
    }
}
