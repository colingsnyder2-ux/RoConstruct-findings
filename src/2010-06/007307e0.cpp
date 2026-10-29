// roc 2010-06 007307e0  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007307e0
//
// 007307e0  53                   push ebx
// 007307e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007307e5  3b5c240c             cmp ebx, dword ptr [esp + 0xc]
// 007307e9  7476                 je 0x730861
// 007307eb  55                   push ebp
// 007307ec  56                   push esi
// 007307ed  8b742418             mov esi, dword ptr [esp + 0x18]
// 007307f1  57                   push edi
// 007307f2  8b03                 mov eax, dword ptr [ebx]
// 007307f4  8906                 mov dword ptr [esi], eax
// 007307f6  8b6b04               mov ebp, dword ptr [ebx + 4]
// 007307f9  3b6e04               cmp ebp, dword ptr [esi + 4]
// 007307fc  7444                 je 0x730842
// 007307fe  85ed                 test ebp, ebp
// 00730800  740c                 je 0x73080e
// 00730802  8d4d04               lea ecx, [ebp + 4]
// 00730805  ba01000000           mov edx, 1
// 0073080a  f00fc111             lock xadd dword ptr [ecx], edx
// 0073080e  8b7e04               mov edi, dword ptr [esi + 4]
// 00730811  85ff                 test edi, edi
// 00730813  742a                 je 0x73083f
// 00730815  8d4704               lea eax, [edi + 4]
// 00730818  83c9ff               or ecx, 0xffffffff
// 0073081b  f00fc108             lock xadd dword ptr [eax], ecx
// 0073081f  751e                 jne 0x73083f
// 00730821  8b17                 mov edx, dword ptr [edi]
// 00730823  8b4204               mov eax, dword ptr [edx + 4]
// 00730826  8bcf                 mov ecx, edi
// 00730828  ffd0                 call eax
// 0073082a  8d4f08               lea ecx, [edi + 8]
// 0073082d  83caff               or edx, 0xffffffff
// 00730830  f00fc111             lock xadd dword ptr [ecx], edx
// 00730834  7509                 jne 0x73083f
// 00730836  8b07                 mov eax, dword ptr [edi]
// 00730838  8b5008               mov edx, dword ptr [eax + 8]
// 0073083b  8bcf                 mov ecx, edi
// 0073083d  ffd2                 call edx
// 0073083f  896e04               mov dword ptr [esi + 4], ebp
// 00730842  dd4308               fld qword ptr [ebx + 8]
// 00730845  83c318               add ebx, 0x18
// 00730848  dd5e08               fstp qword ptr [esi + 8]
// 0073084b  83c618               add esi, 0x18
// 0073084e  dd43f8               fld qword ptr [ebx - 8]
// 00730851  dd5ef8               fstp qword ptr [esi - 8]
// 00730854  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00730858  7598                 jne 0x7307f2
// 0073085a  5f                   pop edi
// 0073085b  8bc6                 mov eax, esi
// 0073085d  5e                   pop esi
// 0073085e  5d                   pop ebp
// 0073085f  5b                   pop ebx
// 00730860  c3                   ret 
// 00730861  8b442410             mov eax, dword ptr [esp + 0x10]
// 00730865  5b                   pop ebx
// 00730866  c3                   ret 
// copied from an identical function in another client (function ?copy_values@@YAPAUValue@@PAU1@00@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    __forceinline void add_ref();
    __forceinline void release();
};

__forceinline void Control::add_ref()
{
    _InterlockedIncrement(&strong);
}

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Value {
    void* pointer;
    Control* control;
    double first;
    double second;

    __forceinline Value& operator=(const Value& source);
};

__forceinline Value& Value::operator=(const Value& source)
{
    pointer = source.pointer;
    Control* incoming = source.control;
    if (incoming != control) {
        if (incoming)
            incoming->add_ref();
        Control* outgoing = control;
        if (outgoing)
            outgoing->release();
        control = incoming;
    }
    first = source.first;
    second = source.second;
    return *this;
}

Value* __cdecl copy_values(Value* first, Value* last, Value* destination)
{
    for (; first != last; ++first, ++destination)
        *destination = *first;
    return destination;
}