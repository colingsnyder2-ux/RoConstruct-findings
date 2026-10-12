// from server: 100% by king_originala
// roc 2008-06 00620a80  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620a80
//
// 00620a80  53                   push ebx
// 00620a81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00620a85  3b5c240c             cmp ebx, dword ptr [esp + 0xc]
// 00620a89  7476                 je 0x620b01
// 00620a8b  55                   push ebp
// 00620a8c  56                   push esi
// 00620a8d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00620a91  57                   push edi
// 00620a92  8b03                 mov eax, dword ptr [ebx]
// 00620a94  8906                 mov dword ptr [esi], eax
// 00620a96  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00620a99  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00620a9c  7444                 je 0x620ae2
// 00620a9e  85ed                 test ebp, ebp
// 00620aa0  740c                 je 0x620aae
// 00620aa2  8d4d04               lea ecx, [ebp + 4]
// 00620aa5  ba01000000           mov edx, 1
// 00620aaa  f00fc111             lock xadd dword ptr [ecx], edx
// 00620aae  8b7e04               mov edi, dword ptr [esi + 4]
// 00620ab1  85ff                 test edi, edi
// 00620ab3  742a                 je 0x620adf
// 00620ab5  8d4704               lea eax, [edi + 4]
// 00620ab8  83c9ff               or ecx, 0xffffffff
// 00620abb  f00fc108             lock xadd dword ptr [eax], ecx
// 00620abf  751e                 jne 0x620adf
// 00620ac1  8b17                 mov edx, dword ptr [edi]
// 00620ac3  8b4204               mov eax, dword ptr [edx + 4]
// 00620ac6  8bcf                 mov ecx, edi
// 00620ac8  ffd0                 call eax
// 00620aca  8d4f08               lea ecx, [edi + 8]
// 00620acd  83caff               or edx, 0xffffffff
// 00620ad0  f00fc111             lock xadd dword ptr [ecx], edx
// 00620ad4  7509                 jne 0x620adf
// 00620ad6  8b07                 mov eax, dword ptr [edi]
// 00620ad8  8b5008               mov edx, dword ptr [eax + 8]
// 00620adb  8bcf                 mov ecx, edi
// 00620add  ffd2                 call edx
// 00620adf  896e04               mov dword ptr [esi + 4], ebp
// 00620ae2  dd4308               fld qword ptr [ebx + 8]
// 00620ae5  83c318               add ebx, 0x18
// 00620ae8  dd5e08               fstp qword ptr [esi + 8]
// 00620aeb  83c618               add esi, 0x18
// 00620aee  dd43f8               fld qword ptr [ebx - 8]
// 00620af1  dd5ef8               fstp qword ptr [esi - 8]
// 00620af4  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00620af8  7598                 jne 0x620a92
// 00620afa  5f                   pop edi
// 00620afb  8bc6                 mov eax, esi
// 00620afd  5e                   pop esi
// 00620afe  5d                   pop ebp
// 00620aff  5b                   pop ebx
// 00620b00  c3                   ret 
// 00620b01  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620b05  5b                   pop ebx
// 00620b06  c3                   ret 

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
