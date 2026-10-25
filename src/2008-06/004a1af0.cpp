// from server: 100% by colin
// roc 2008-06 004a1af0  unit: RBX::Network::Server::ClientProxy  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1af0
//
// 004a1af0  53                   push ebx
// 004a1af1  55                   push ebp
// 004a1af2  56                   push esi
// 004a1af3  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a1af7  57                   push edi
// 004a1af8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004a1afc  33db                 xor ebx, ebx
// 004a1afe  3bf7                 cmp esi, edi
// 004a1b00  7438                 je 0x4a1b3a
// 004a1b02  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004a1b06  8b06                 mov eax, dword ptr [esi]
// 004a1b08  83ec08               sub esp, 8
// 004a1b0b  8bcc                 mov ecx, esp
// 004a1b0d  8901                 mov dword ptr [ecx], eax
// 004a1b0f  8b4604               mov eax, dword ptr [esi + 4]
// 004a1b12  8964241c             mov dword ptr [esp + 0x1c], esp
// 004a1b16  894104               mov dword ptr [ecx + 4], eax
// 004a1b19  85c0                 test eax, eax
// 004a1b1b  740c                 je 0x4a1b29
// 004a1b1d  83c004               add eax, 4
// 004a1b20  b901000000           mov ecx, 1
// 004a1b25  f00fc108             lock xadd dword ptr [eax], ecx
// 004a1b29  ffd5                 call ebp
// 004a1b2b  83c408               add esp, 8
// 004a1b2e  84c0                 test al, al
// 004a1b30  7401                 je 0x4a1b33
// 004a1b32  43                   inc ebx
// 004a1b33  83c608               add esi, 8
// 004a1b36  3bf7                 cmp esi, edi
// 004a1b38  75cc                 jne 0x4a1b06
// 004a1b3a  5f                   pop edi
// 004a1b3b  5e                   pop esi
// 004a1b3c  5d                   pop ebp
// 004a1b3d  8bc3                 mov eax, ebx
// 004a1b3f  5b                   pop ebx
// 004a1b40  c3                   ret 

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
