// roc 2010-06 0040dd70  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040dd70
//
// 0040dd70  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040dd74  56                   push esi
// 0040dd75  8b742408             mov esi, dword ptr [esp + 8]
// 0040dd79  85c9                 test ecx, ecx
// 0040dd7b  7422                 je 0x40dd9f
// 0040dd7d  8b5608               mov edx, dword ptr [esi + 8]
// 0040dd80  3bca                 cmp ecx, edx
// 0040dd82  771b                 ja 0x40dd9f
// 0040dd84  8d41ff               lea eax, [ecx - 1]
// 0040dd87  85c0                 test eax, eax
// 0040dd89  7c0e                 jl 0x40dd99
// 0040dd8b  3bc2                 cmp eax, edx
// 0040dd8d  7d0a                 jge 0x40dd99
// 0040dd8f  8b5604               mov edx, dword ptr [esi + 4]
// 0040dd92  8b0482               mov eax, dword ptr [edx + eax*4]
// 0040dd95  8bd0                 mov edx, eax
// 0040dd97  eb08                 jmp 0x40dda1
// 0040dd99  33c0                 xor eax, eax
// 0040dd9b  8bd0                 mov edx, eax
// 0040dd9d  eb02                 jmp 0x40dda1
// 0040dd9f  33d2                 xor edx, edx
// 0040dda1  8d41ff               lea eax, [ecx - 1]
// 0040dda4  3bc1                 cmp eax, ecx
// 0040dda6  731e                 jae 0x40ddc6
// 0040dda8  3b4608               cmp eax, dword ptr [esi + 8]
// 0040ddab  7319                 jae 0x40ddc6
// 0040ddad  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040ddb0  833c8100             cmp dword ptr [ecx + eax*4], 0
// 0040ddb4  8d0481               lea eax, [ecx + eax*4]
// 0040ddb7  740d                 je 0x40ddc6
// 0040ddb9  c70000000000         mov dword ptr [eax], 0
// 0040ddbf  b801000000           mov eax, 1
// 0040ddc4  eb02                 jmp 0x40ddc8
// 0040ddc6  33c0                 xor eax, eax
// 0040ddc8  f7d8                 neg eax
// 0040ddca  1bc0                 sbb eax, eax
// 0040ddcc  2500fefb7f           and eax, 0x7ffbfe00
// 0040ddd1  0500020480           add eax, 0x80040200
// 0040ddd6  8bf0                 mov esi, eax
// 0040ddd8  750c                 jne 0x40dde6
// 0040ddda  85d2                 test edx, edx
// 0040dddc  7408                 je 0x40dde6
// 0040ddde  8b02                 mov eax, dword ptr [edx]
// 0040dde0  8b4808               mov ecx, dword ptr [eax + 8]
// 0040dde3  52                   push edx
// 0040dde4  ffd1                 call ecx
// 0040dde6  8bc6                 mov eax, esi
// 0040dde8  5e                   pop esi
// 0040dde9  c20800               ret 8
// copied from an identical function in another client (function _Unadvise@8)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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