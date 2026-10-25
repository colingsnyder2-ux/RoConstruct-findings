// from server: 100% by king_originala
// roc 2008-06 0040ee80  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ee80
//
// 0040ee80  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040ee84  56                   push esi
// 0040ee85  8b742408             mov esi, dword ptr [esp + 8]
// 0040ee89  85c9                 test ecx, ecx
// 0040ee8b  7422                 je 0x40eeaf
// 0040ee8d  8b5608               mov edx, dword ptr [esi + 8]
// 0040ee90  3bca                 cmp ecx, edx
// 0040ee92  771b                 ja 0x40eeaf
// 0040ee94  8d41ff               lea eax, [ecx - 1]
// 0040ee97  85c0                 test eax, eax
// 0040ee99  7c0e                 jl 0x40eea9
// 0040ee9b  3bc2                 cmp eax, edx
// 0040ee9d  7d0a                 jge 0x40eea9
// 0040ee9f  8b5604               mov edx, dword ptr [esi + 4]
// 0040eea2  8b0482               mov eax, dword ptr [edx + eax*4]
// 0040eea5  8bd0                 mov edx, eax
// 0040eea7  eb08                 jmp 0x40eeb1
// 0040eea9  33c0                 xor eax, eax
// 0040eeab  8bd0                 mov edx, eax
// 0040eead  eb02                 jmp 0x40eeb1
// 0040eeaf  33d2                 xor edx, edx
// 0040eeb1  8d41ff               lea eax, [ecx - 1]
// 0040eeb4  3bc1                 cmp eax, ecx
// 0040eeb6  731e                 jae 0x40eed6
// 0040eeb8  3b4608               cmp eax, dword ptr [esi + 8]
// 0040eebb  7319                 jae 0x40eed6
// 0040eebd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040eec0  833c8100             cmp dword ptr [ecx + eax*4], 0
// 0040eec4  8d0481               lea eax, [ecx + eax*4]
// 0040eec7  740d                 je 0x40eed6
// 0040eec9  c70000000000         mov dword ptr [eax], 0
// 0040eecf  b801000000           mov eax, 1
// 0040eed4  eb02                 jmp 0x40eed8
// 0040eed6  33c0                 xor eax, eax
// 0040eed8  f7d8                 neg eax
// 0040eeda  1bc0                 sbb eax, eax
// 0040eedc  2500fefb7f           and eax, 0x7ffbfe00
// 0040eee1  0500020480           add eax, 0x80040200
// 0040eee6  8bf0                 mov esi, eax
// 0040eee8  750c                 jne 0x40eef6
// 0040eeea  85d2                 test edx, edx
// 0040eeec  7408                 je 0x40eef6
// 0040eeee  8b02                 mov eax, dword ptr [edx]
// 0040eef0  8b4808               mov ecx, dword ptr [eax + 8]
// 0040eef3  52                   push edx
// 0040eef4  ffd1                 call ecx
// 0040eef6  8bc6                 mov eax, esi
// 0040eef8  5e                   pop esi
// 0040eef9  c20800               ret 8

struct Unknown;

struct UnknownTable {
    void *entry0;
    void *entry1;
    unsigned long (__stdcall *release)(Unknown *);
};

struct Unknown {
    UnknownTable *table;
};

struct ConnectionArray {
    void *reserved;
    Unknown **items;
    int count;

    Unknown *getAt(int index);
    Unknown *getUnknown(unsigned long cookie);
    int remove(unsigned long cookie);
};

inline Unknown *ConnectionArray::getAt(int index)
{
    if (index < 0 || index >= count)
        return 0;
    return items[index];
}

inline Unknown *ConnectionArray::getUnknown(unsigned long cookie)
{
    if (cookie == 0 || cookie > (unsigned long)count)
        return 0;
    return getAt((int)(cookie - 1));
}

inline int ConnectionArray::remove(unsigned long cookie)
{
    unsigned long index = cookie - 1;
    if (index < cookie && index < (unsigned long)count) {
        if (items[index] != 0) {
            items[index] = 0;
            return 1;
        }
    }
    return 0;
}

extern "C" long __stdcall Unadvise(ConnectionArray *array, unsigned long cookie)
{
    Unknown *object = array->getUnknown(cookie);
    long result = array->remove(cookie) ? 0 : (long)0x80040200UL;
    if (result == 0 && object != 0)
        object->table->release(object);
    return result;
}
