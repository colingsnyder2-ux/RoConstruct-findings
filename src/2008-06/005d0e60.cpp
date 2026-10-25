// from server: 100% by EspClaude
// roc 2008-06 005d0e60  unit: VCRenderSettings::?$EnumPropDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0e60
//
// 005d0e60  53                   push ebx
// 005d0e61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005d0e65  56                   push esi
// 005d0e66  57                   push edi
// 005d0e67  8bf9                 mov edi, ecx
// 005d0e69  8b7720               mov esi, dword ptr [edi + 0x20]
// 005d0e6c  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 005d0e6f  7342                 jae 0x5d0eb3
// 005d0e71  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 005d0e77  2b86c4000000         sub eax, dword ptr [esi + 0xc4]
// 005d0e7d  c1f802               sar eax, 2
// 005d0e80  3bd8                 cmp ebx, eax
// 005d0e82  7206                 jb 0x5d0e8a
// 005d0e84  ff1590288000         call dword ptr [0x802890]
// 005d0e8a  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005d0e90  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 005d0e93  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005d0e96  89442414             mov dword ptr [esp + 0x14], eax
// 005d0e9a  8b11                 mov edx, dword ptr [ecx]
// 005d0e9c  8b520c               mov edx, dword ptr [edx + 0xc]
// 005d0e9f  8d442414             lea eax, [esp + 0x14]
// 005d0ea3  50                   push eax
// 005d0ea4  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d0ea8  50                   push eax
// 005d0ea9  ffd2                 call edx
// 005d0eab  5f                   pop edi
// 005d0eac  5e                   pop esi
// 005d0ead  b001                 mov al, 1
// 005d0eaf  5b                   pop ebx
// 005d0eb0  c20800               ret 8
// 005d0eb3  5f                   pop edi
// 005d0eb4  5e                   pop esi
// 005d0eb5  32c0                 xor al, al
// 005d0eb7  5b                   pop ebx
// 005d0eb8  c20800               ret 8

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

enum EnumValue { EnumZero = 0 };

struct Property {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const EnumValue&);
};

struct IntVector {
    unsigned int* first;
    unsigned int* last;
    unsigned int* end;
    unsigned int size() const { return first ? last - first : 0; }
    unsigned int operator[](unsigned int i) const {
        if (i >= (unsigned int)(last - first))
            _invalid_parameter_noinfo();
        return first[i];
    }
};

struct EnumMap {
    char padding0[0x28];
    unsigned int enumCount;
    char padding1[0x94];
    unsigned int proxy;
    IntVector indexToEnum;
    __forceinline bool convertToValue(unsigned int index, EnumValue& value) const {
        if (index < enumCount) {
            value = (EnumValue)indexToEnum[index];
            return true;
        }
        return false;
    }
};

struct Descriptor {
    char padding[0x1c];
    Property* property;
    EnumMap* enumMap;
    void setValue(void* o, EnumValue value) const { property->set(o, value); }
    bool set(void*, unsigned int);
};

bool Descriptor::set(void* instance, unsigned int index)
{
    EnumValue val;
    if (enumMap->convertToValue(index, val)) {
        setValue(instance, val);
        return true;
    }
    return false;
}
