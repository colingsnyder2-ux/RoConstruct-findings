// from server: 100% by colin
// roc 2008-06 0057ee60  unit: RBX::ClearBackpack  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ee60
//
// 0057ee60  56                   push esi
// 0057ee61  8b742408             mov esi, dword ptr [esp + 8]
// 0057ee65  57                   push edi
// 0057ee66  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057ee6a  3bf7                 cmp esi, edi
// 0057ee6c  743c                 je 0x57eeaa
// 0057ee6e  8bff                 mov edi, edi
// 0057ee70  8b06                 mov eax, dword ptr [esi]
// 0057ee72  83ec08               sub esp, 8
// 0057ee75  8bcc                 mov ecx, esp
// 0057ee77  8901                 mov dword ptr [ecx], eax
// 0057ee79  8b4604               mov eax, dword ptr [esi + 4]
// 0057ee7c  89642414             mov dword ptr [esp + 0x14], esp
// 0057ee80  894104               mov dword ptr [ecx + 4], eax
// 0057ee83  85c0                 test eax, eax
// 0057ee85  740c                 je 0x57ee93
// 0057ee87  83c004               add eax, 4
// 0057ee8a  b901000000           mov ecx, 1
// 0057ee8f  f00fc108             lock xadd dword ptr [eax], ecx
// 0057ee93  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057ee97  52                   push edx
// 0057ee98  ff542420             call dword ptr [esp + 0x20]
// 0057ee9c  83c40c               add esp, 0xc
// 0057ee9f  84c0                 test al, al
// 0057eea1  7507                 jne 0x57eeaa
// 0057eea3  83c608               add esi, 8
// 0057eea6  3bf7                 cmp esi, edi
// 0057eea8  75c6                 jne 0x57ee70
// 0057eeaa  5f                   pop edi
// 0057eeab  8bc6                 mov eax, esi
// 0057eead  5e                   pop esi
// 0057eeae  c3                   ret 

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    void* reserved;
    volatile long references;
};

struct Pointer {
    void* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
};

__forceinline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Predicate {
    bool (__cdecl *function)(void*, Pointer);
    void* context;
};

Pointer* __cdecl findPointer(Pointer* first, Pointer* last,
                            Predicate predicate)
{
    while (first != last) {
        if (predicate.function(predicate.context, *first))
            break;
        ++first;
    }
    return first;
}
