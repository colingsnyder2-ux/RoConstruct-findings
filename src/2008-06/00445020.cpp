// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_metadatacache_b2842be62adde624.cpp

// Candidate translation unit (score above; library headers required).

#include <boost/shared_ptr.hpp>

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
    __declspec(dllimport) ~CString() throw();
    const char* text() const;
    int length() const;
    char* buffer(int);
    void release(int);
};

inline CString::CString() { stringConstruct(this); }
inline CString::CString(const char* s) { stringConstructText(this, s); }
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

typedef boost::shared_ptr<Metadata> Shared;

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

    if (!cached.get()) {
        cached = createMetadata();

        CString filename;
        void* module = runtimeState()->state->module;
        moduleFileName(module, &filename);
        CString directory(filename.text());
        PathRemoveFileSpecA(directory.buffer(directory.length()));
        directory.release(-1);
        cached->load((directory + "\\ReflectionMetadata.xml").text());
    }

    return cached;
}