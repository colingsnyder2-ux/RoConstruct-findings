// roc 2009-06 004d6430  unit: RBX::Network::Server  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d6430
//
// 004d6430  53                   push ebx
// 004d6431  55                   push ebp
// 004d6432  56                   push esi
// 004d6433  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d6437  57                   push edi
// 004d6438  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d643c  33db                 xor ebx, ebx
// 004d643e  3bf7                 cmp esi, edi
// 004d6440  7438                 je 0x4d647a
// 004d6442  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004d6446  8b06                 mov eax, dword ptr [esi]
// 004d6448  83ec08               sub esp, 8
// 004d644b  8bcc                 mov ecx, esp
// 004d644d  8901                 mov dword ptr [ecx], eax
// 004d644f  8b4604               mov eax, dword ptr [esi + 4]
// 004d6452  8964241c             mov dword ptr [esp + 0x1c], esp
// 004d6456  894104               mov dword ptr [ecx + 4], eax
// 004d6459  85c0                 test eax, eax
// 004d645b  740c                 je 0x4d6469
// 004d645d  83c004               add eax, 4
// 004d6460  b901000000           mov ecx, 1
// 004d6465  f00fc108             lock xadd dword ptr [eax], ecx
// 004d6469  ffd5                 call ebp
// 004d646b  83c408               add esp, 8
// 004d646e  84c0                 test al, al
// 004d6470  7401                 je 0x4d6473
// 004d6472  43                   inc ebx
// 004d6473  83c608               add esi, 8
// 004d6476  3bf7                 cmp esi, edi
// 004d6478  75cc                 jne 0x4d6446
// 004d647a  5f                   pop edi
// 004d647b  5e                   pop esi
// 004d647c  5d                   pop ebp
// 004d647d  8bc3                 mov eax, ebx
// 004d647f  5b                   pop ebx
// 004d6480  c3                   ret 
// copied from an identical function in another client (function ?count_if@@YAHPAUValue@@0P6A_NU1@@Z@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control {
    long reserved;
    volatile long references;
};

struct Value {
    void* object;
    Control* control;
    Value(const Value& other);
    ~Value();
};

__forceinline Value::Value(const Value& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

int __cdecl count_if(Value* first, Value* last,
                     bool (__cdecl *predicate)(Value))
{
    int count = 0;
    for (; first != last; ++first) {
        if (predicate(*first))
            ++count;
    }
    return count;
}