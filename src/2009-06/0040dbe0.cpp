// roc 2009-06 0040dbe0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040dbe0
//
// 0040dbe0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040dbe4  56                   push esi
// 0040dbe5  8b742408             mov esi, dword ptr [esp + 8]
// 0040dbe9  85c9                 test ecx, ecx
// 0040dbeb  7422                 je 0x40dc0f
// 0040dbed  8b5608               mov edx, dword ptr [esi + 8]
// 0040dbf0  3bca                 cmp ecx, edx
// 0040dbf2  771b                 ja 0x40dc0f
// 0040dbf4  8d41ff               lea eax, [ecx - 1]
// 0040dbf7  85c0                 test eax, eax
// 0040dbf9  7c0e                 jl 0x40dc09
// 0040dbfb  3bc2                 cmp eax, edx
// 0040dbfd  7d0a                 jge 0x40dc09
// 0040dbff  8b5604               mov edx, dword ptr [esi + 4]
// 0040dc02  8b0482               mov eax, dword ptr [edx + eax*4]
// 0040dc05  8bd0                 mov edx, eax
// 0040dc07  eb08                 jmp 0x40dc11
// 0040dc09  33c0                 xor eax, eax
// 0040dc0b  8bd0                 mov edx, eax
// 0040dc0d  eb02                 jmp 0x40dc11
// 0040dc0f  33d2                 xor edx, edx
// 0040dc11  8d41ff               lea eax, [ecx - 1]
// 0040dc14  3bc1                 cmp eax, ecx
// 0040dc16  731e                 jae 0x40dc36
// 0040dc18  3b4608               cmp eax, dword ptr [esi + 8]
// 0040dc1b  7319                 jae 0x40dc36
// 0040dc1d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040dc20  833c8100             cmp dword ptr [ecx + eax*4], 0
// 0040dc24  8d0481               lea eax, [ecx + eax*4]
// 0040dc27  740d                 je 0x40dc36
// 0040dc29  c70000000000         mov dword ptr [eax], 0
// 0040dc2f  b801000000           mov eax, 1
// 0040dc34  eb02                 jmp 0x40dc38
// 0040dc36  33c0                 xor eax, eax
// 0040dc38  f7d8                 neg eax
// 0040dc3a  1bc0                 sbb eax, eax
// 0040dc3c  2500fefb7f           and eax, 0x7ffbfe00
// 0040dc41  0500020480           add eax, 0x80040200
// 0040dc46  8bf0                 mov esi, eax
// 0040dc48  750c                 jne 0x40dc56
// 0040dc4a  85d2                 test edx, edx
// 0040dc4c  7408                 je 0x40dc56
// 0040dc4e  8b02                 mov eax, dword ptr [edx]
// 0040dc50  8b4808               mov ecx, dword ptr [eax + 8]
// 0040dc53  52                   push edx
// 0040dc54  ffd1                 call ecx
// 0040dc56  8bc6                 mov eax, esi
// 0040dc58  5e                   pop esi
// 0040dc59  c20800               ret 8
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