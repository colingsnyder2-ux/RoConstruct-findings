// from server: 81% by colin
// from server: 77% by king_originala
// roc 2008-06 0057e470  unit: RBX::ClearBackpack  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057e470
//
// 0057e470  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057e474  53                   push ebx
// 0057e475  56                   push esi
// 0057e476  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057e47a  57                   push edi
// 0057e47b  8bf8                 mov edi, eax
// 0057e47d  3bf0                 cmp esi, eax
// 0057e47f  7439                 je 0x57e4ba
// 0057e481  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0057e485  8b06                 mov eax, dword ptr [esi]
// 0057e487  83ec08               sub esp, 8
// 0057e48a  8bcc                 mov ecx, esp
// 0057e48c  8901                 mov dword ptr [ecx], eax
// 0057e48e  8b4604               mov eax, dword ptr [esi + 4]
// 0057e491  89642428             mov dword ptr [esp + 0x28], esp
// 0057e495  894104               mov dword ptr [ecx + 4], eax
// 0057e498  85c0                 test eax, eax
// 0057e49a  740c                 je 0x57e4a8
// 0057e49c  83c004               add eax, 4
// 0057e49f  b901000000           mov ecx, 1
// 0057e4a4  f00fc108             lock xadd dword ptr [eax], ecx
// 0057e4a8  ffd3                 call ebx
// 0057e4aa  83c608               add esi, 8
// 0057e4ad  83c408               add esp, 8
// 0057e4b0  3bf7                 cmp esi, edi
// 0057e4b2  75d1                 jne 0x57e485
// 0057e4b4  8bc3                 mov eax, ebx
// 0057e4b6  5f                   pop edi
// 0057e4b7  5e                   pop esi
// 0057e4b8  5b                   pop ebx
// 0057e4b9  c3                   ret 
// 0057e4ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057e4be  5f                   pop edi
// 0057e4bf  5e                   pop esi
// 0057e4c0  5b                   pop ebx
// 0057e4c1  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    unsigned int reserved;
    volatile long count;
};

struct Entry {
    void* object;
    Control* control;

    Entry(const Entry& other);
};

__forceinline Entry::Entry(const Entry& other)
{
    object = other.object;
    control = other.control;
    if (control)
        _InterlockedIncrement(&control->count);
}

typedef void (__cdecl *Callback)(Entry);

Callback __cdecl process(unsigned int, Entry* first, unsigned int,
                         Entry* last, Callback callback)
{
    for (; first != last; ++first)
        callback(*first);
    return callback;
}
