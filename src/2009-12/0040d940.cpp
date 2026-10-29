// roc 2009-12 0040d940  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d940
//
// 0040d940  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d944  56                   push esi
// 0040d945  8b742408             mov esi, dword ptr [esp + 8]
// 0040d949  85c9                 test ecx, ecx
// 0040d94b  7422                 je 0x40d96f
// 0040d94d  8b5608               mov edx, dword ptr [esi + 8]
// 0040d950  3bca                 cmp ecx, edx
// 0040d952  771b                 ja 0x40d96f
// 0040d954  8d41ff               lea eax, [ecx - 1]
// 0040d957  85c0                 test eax, eax
// 0040d959  7c0e                 jl 0x40d969
// 0040d95b  3bc2                 cmp eax, edx
// 0040d95d  7d0a                 jge 0x40d969
// 0040d95f  8b5604               mov edx, dword ptr [esi + 4]
// 0040d962  8b0482               mov eax, dword ptr [edx + eax*4]
// 0040d965  8bd0                 mov edx, eax
// 0040d967  eb08                 jmp 0x40d971
// 0040d969  33c0                 xor eax, eax
// 0040d96b  8bd0                 mov edx, eax
// 0040d96d  eb02                 jmp 0x40d971
// 0040d96f  33d2                 xor edx, edx
// 0040d971  8d41ff               lea eax, [ecx - 1]
// 0040d974  3bc1                 cmp eax, ecx
// 0040d976  731e                 jae 0x40d996
// 0040d978  3b4608               cmp eax, dword ptr [esi + 8]
// 0040d97b  7319                 jae 0x40d996
// 0040d97d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040d980  833c8100             cmp dword ptr [ecx + eax*4], 0
// 0040d984  8d0481               lea eax, [ecx + eax*4]
// 0040d987  740d                 je 0x40d996
// 0040d989  c70000000000         mov dword ptr [eax], 0
// 0040d98f  b801000000           mov eax, 1
// 0040d994  eb02                 jmp 0x40d998
// 0040d996  33c0                 xor eax, eax
// 0040d998  f7d8                 neg eax
// 0040d99a  1bc0                 sbb eax, eax
// 0040d99c  2500fefb7f           and eax, 0x7ffbfe00
// 0040d9a1  0500020480           add eax, 0x80040200
// 0040d9a6  8bf0                 mov esi, eax
// 0040d9a8  750c                 jne 0x40d9b6
// 0040d9aa  85d2                 test edx, edx
// 0040d9ac  7408                 je 0x40d9b6
// 0040d9ae  8b02                 mov eax, dword ptr [edx]
// 0040d9b0  8b4808               mov ecx, dword ptr [eax + 8]
// 0040d9b3  52                   push edx
// 0040d9b4  ffd1                 call ecx
// 0040d9b6  8bc6                 mov eax, esi
// 0040d9b8  5e                   pop esi
// 0040d9b9  c20800               ret 8
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