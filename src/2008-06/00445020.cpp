// from server: 70% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct RefHandle {
    RefCount* p;
    RefHandle& operator=(const RefHandle&);
};

struct CString;
extern void (__thiscall *stringConstruct)(CString*);
extern void (__thiscall *stringConstructText)(CString*, const char*);
extern void (__thiscall *stringDestroy)(CString*);
extern const char* (__thiscall *stringText)(const CString*);
extern int (__thiscall *stringLength)(const CString*);
extern char* (__thiscall *stringBuffer)(CString*, int);
extern void (__thiscall *stringRelease)(CString*, int);
extern int (__stdcall *PathRemoveFileSpecA)(char*);

struct CString {
    void* data;
    CString();
    CString(const char*);
    ~CString() throw();
    const char* text() const;
    int length() const;
    char* buffer(int);
    void release(int);
};

inline CString::CString() { stringConstruct(this); }
inline CString::CString(const char* s) { stringConstructText(this, s); }
inline CString::~CString() throw() { stringDestroy(this); }
inline const char* CString::text() const { return stringText(this); }
inline int CString::length() const { return stringLength(this); }
inline char* CString::buffer(int n) { return stringBuffer(this, n); }
inline void CString::release(int n) { stringRelease(this, n); }

struct StringValue;
extern void (__thiscall *valueConstruct)(StringValue*, const char*);

struct StringValue {
    unsigned char data[28];
    StringValue(const char*);
};

inline StringValue::StringValue(const char* s) {
    valueConstruct(this, s);
}

struct Metadata {
    void load(StringValue);
};

struct Shared {
    Metadata* object;
    RefHandle reference;
    Shared();
    Shared(const Shared&);
    ~Shared() throw();
    Shared& operator=(const Shared&);
};

inline Shared::Shared() {
    object = 0;
    reference.p = 0;
}

inline Shared::Shared(const Shared& s) {
    object = s.object;
    reference.p = s.reference.p;
    if (s.reference.p)
        _InterlockedExchangeAdd(&s.reference.p->strong, 1);
}

inline Shared::~Shared() throw() {
    RefCount* p = reference.p;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

inline Shared& Shared::operator=(const Shared& s) {
    object = s.object;
    reference = s.reference;
    return *this;
}

struct ModuleState {
    unsigned char padding[68];
    void* module;
};

struct RuntimeState {
    unsigned char padding[4];
    ModuleState* state;
};

extern RuntimeState* __cdecl runtimeState();
extern void __stdcall moduleFileName(void*, CString*);
extern Shared __cdecl createMetadata();
extern CString __cdecl operator+(const CString&, const char*);

Shared __cdecl getMetadata()
{
    static Shared cached;

    if (!cached.object) {
        cached = createMetadata();

        CString filename;
        moduleFileName(runtimeState()->state->module, &filename);
        CString directory(filename.text());
        PathRemoveFileSpecA(directory.buffer(directory.length()));
        directory.release(-1);
        cached.object->load((directory + "\\ReflectionMetadata.xml").text());
    }

    return cached;
}
