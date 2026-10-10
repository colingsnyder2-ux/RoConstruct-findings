// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct InstanceHandle {
    RefCounted* rep;
};

struct XmlNameValuePair {
    bool getValue(void* s) const;
};

struct IIDREF;

struct DescribedBase {
    void setXmlId(void* s);
};

struct IDREFBinding {
    const XmlNameValuePair* valueIDREF;
    DescribedBase* propertyOwner;
    const IIDREF* idref;
};

struct MapNode {
    MapNode* left;
    MapNode* parent;
    MapNode* right;
    char color;
    char pad[3];
    void* key;
    InstanceHandle value;
};

struct ListBase {
    void* next;
    void* prev;
};

struct ListHead {
    ListBase* next;
    ListBase* prev;
};

struct ArchiveBinder {
    char pad0[4];
    ListHead idrefBindings;
    char pad1[8];
    void* idMapRoot;
    unsigned int idMapSize;

    bool processID(const XmlNameValuePair* valueID, DescribedBase* source);
    bool processIDREF(const XmlNameValuePair* valueIDREF, DescribedBase* propertyOwner, const IIDREF* idref);
    bool resolveIDREF(IDREFBinding binding);
};

extern "C" void __cdecl sub_55d770(void* out, void* in);
extern "C" void* __cdecl sub_4178f0(void* out, void* in);
extern "C" void* __cdecl sub_56a680(void* self, void* arg);
extern "C" void __cdecl sub_402a60(void* out, void* in);

bool ArchiveBinder::resolveIDREF(IDREFBinding binding)
{
    void* s[6];
    s[0] = 0;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    s[5] = 0;

    bool foundString = binding.valueIDREF->getValue(s);
    (void)foundString;

    void* iter = 0;
    void* node = this->idMapRoot;
    if (node != 0) {
        void* tmp[2];
        tmp[0] = 0;
        tmp[1] = 0;
        sub_55d770(tmp, (char*)node + 4);
        void* key = sub_4178f0(s, tmp);
        iter = *(void**)key;
    }

    if (iter != 0) {
        InstanceHandle h;
        h.rep = 0;
        void* result = sub_56a680(&h, &iter);
        *(void**)result = 0;
        sub_402a60((char*)result + 4, s);
        if (h.rep != 0) {
            RefCounted* r = h.rep;
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
                r->Release();
                if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                    r->Release();
                }
            }
        }
        return true;
    }

    return false;
}
