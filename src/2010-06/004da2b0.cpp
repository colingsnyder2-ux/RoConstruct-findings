// roc 2010-06 004da2b0  unit: RBX::Network::Server  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004da2b0
//
// 004da2b0  53                   push ebx
// 004da2b1  55                   push ebp
// 004da2b2  56                   push esi
// 004da2b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 004da2b7  57                   push edi
// 004da2b8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004da2bc  33db                 xor ebx, ebx
// 004da2be  3bf7                 cmp esi, edi
// 004da2c0  7438                 je 0x4da2fa
// 004da2c2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004da2c6  8b06                 mov eax, dword ptr [esi]
// 004da2c8  83ec08               sub esp, 8
// 004da2cb  8bcc                 mov ecx, esp
// 004da2cd  8901                 mov dword ptr [ecx], eax
// 004da2cf  8b4604               mov eax, dword ptr [esi + 4]
// 004da2d2  8964241c             mov dword ptr [esp + 0x1c], esp
// 004da2d6  894104               mov dword ptr [ecx + 4], eax
// 004da2d9  85c0                 test eax, eax
// 004da2db  740c                 je 0x4da2e9
// 004da2dd  83c004               add eax, 4
// 004da2e0  b901000000           mov ecx, 1
// 004da2e5  f00fc108             lock xadd dword ptr [eax], ecx
// 004da2e9  ffd5                 call ebp
// 004da2eb  83c408               add esp, 8
// 004da2ee  84c0                 test al, al
// 004da2f0  7401                 je 0x4da2f3
// 004da2f2  43                   inc ebx
// 004da2f3  83c608               add esi, 8
// 004da2f6  3bf7                 cmp esi, edi
// 004da2f8  75cc                 jne 0x4da2c6
// 004da2fa  5f                   pop edi
// 004da2fb  5e                   pop esi
// 004da2fc  5d                   pop ebp
// 004da2fd  8bc3                 mov eax, ebx
// 004da2ff  5b                   pop ebx
// 004da300  c3                   ret 
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