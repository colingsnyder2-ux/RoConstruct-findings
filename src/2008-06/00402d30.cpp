// from server: 72% by king_originala
typedef long HRESULT;
typedef unsigned short* BSTR;

extern "C" {
    extern void (__stdcall *SysFreeString)(BSTR);
    extern unsigned int (__stdcall *SysStringLen)(BSTR);
}

struct TypeAttr {
    unsigned char reserved[44];
    unsigned short functions;
};

struct FuncDesc {
    long memid;
};

struct TypeInfo;

struct TypeInfoVtbl {
    void* reserved0[3];
    HRESULT (__stdcall *GetTypeAttr)(TypeInfo*, TypeAttr**);
    void* reserved1;
    HRESULT (__stdcall *GetFuncDesc)(TypeInfo*, unsigned int, FuncDesc**);
    void* reserved2[6];
    HRESULT (__stdcall *GetDocumentation)(
        TypeInfo*, long, BSTR*, BSTR*, unsigned long*, BSTR*);
    void* reserved3[6];
    void (__stdcall *ReleaseTypeAttr)(TypeInfo*, TypeAttr*);
    void (__stdcall *ReleaseFuncDesc)(TypeInfo*, FuncDesc*);
};

struct TypeInfo {
    TypeInfoVtbl* vtable;
};

struct Entry {
    BSTR name;
    unsigned int length;
    long memid;
    Entry();
    ~Entry();
};

struct StringOwner {
    BSTR value;
    StringOwner();
    ~StringOwner();
};

inline StringOwner::StringOwner() : value(0) {}
inline StringOwner::~StringOwner() {
    SysFreeString(value);
}

struct S {
    unsigned char reserved[20];
    Entry* entries;
    int count;
    HRESULT f(TypeInfo*);
};

HRESULT S::f(TypeInfo* info) {
    try {
        TypeAttr* attr;
        if (info->vtable->GetTypeAttr(info, &attr) >= 0) {
            Entry* result = 0;
            count = attr->functions;
            entries = 0;

            if (count) {
                result = new Entry[count];
                if (!result)
                    return (HRESULT)0x8007000E;
            }

            Entry* current = result;
            for (int i = 0; i < count; ++i, ++current) {
                FuncDesc* desc;
                if (info->vtable->GetFuncDesc(info, i, &desc) >= 0) {
                    StringOwner name;
                    if (info->vtable->GetDocumentation(
                            info, desc->memid, &name.value, 0, 0, 0) >= 0) {
                        BSTR text = name.value;
                        name.value = 0;
                        if (current->name != text) {
                            SysFreeString(current->name);
                            current->name = text;
                        }
                        current->length = SysStringLen(current->name);
                        current->memid = desc->memid;
                    }
                    info->vtable->ReleaseFuncDesc(info, desc);
                }
            }

            entries = result;
            info->vtable->ReleaseTypeAttr(info, attr);
        }
        return 0;
    } catch (...) {
        return (HRESULT)0x8007000E;
    }
}
