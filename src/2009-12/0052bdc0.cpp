// roc 2009-12 0052bdc0  unit: RBX::Network::Server  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052bdc0
//
// 0052bdc0  53                   push ebx
// 0052bdc1  55                   push ebp
// 0052bdc2  56                   push esi
// 0052bdc3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0052bdc7  57                   push edi
// 0052bdc8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052bdcc  33db                 xor ebx, ebx
// 0052bdce  3bf7                 cmp esi, edi
// 0052bdd0  7438                 je 0x52be0a
// 0052bdd2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0052bdd6  8b06                 mov eax, dword ptr [esi]
// 0052bdd8  83ec08               sub esp, 8
// 0052bddb  8bcc                 mov ecx, esp
// 0052bddd  8901                 mov dword ptr [ecx], eax
// 0052bddf  8b4604               mov eax, dword ptr [esi + 4]
// 0052bde2  8964241c             mov dword ptr [esp + 0x1c], esp
// 0052bde6  894104               mov dword ptr [ecx + 4], eax
// 0052bde9  85c0                 test eax, eax
// 0052bdeb  740c                 je 0x52bdf9
// 0052bded  83c004               add eax, 4
// 0052bdf0  b901000000           mov ecx, 1
// 0052bdf5  f00fc108             lock xadd dword ptr [eax], ecx
// 0052bdf9  ffd5                 call ebp
// 0052bdfb  83c408               add esp, 8
// 0052bdfe  84c0                 test al, al
// 0052be00  7401                 je 0x52be03
// 0052be02  43                   inc ebx
// 0052be03  83c608               add esi, 8
// 0052be06  3bf7                 cmp esi, edi
// 0052be08  75cc                 jne 0x52bdd6
// 0052be0a  5f                   pop edi
// 0052be0b  5e                   pop esi
// 0052be0c  5d                   pop ebp
// 0052be0d  8bc3                 mov eax, ebx
// 0052be0f  5b                   pop ebx
// 0052be10  c3                   ret 
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