// roc 2009-06 006c1c70  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c1c70
//
// 006c1c70  53                   push ebx
// 006c1c71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006c1c75  3b5c240c             cmp ebx, dword ptr [esp + 0xc]
// 006c1c79  7476                 je 0x6c1cf1
// 006c1c7b  55                   push ebp
// 006c1c7c  56                   push esi
// 006c1c7d  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c1c81  57                   push edi
// 006c1c82  8b03                 mov eax, dword ptr [ebx]
// 006c1c84  8906                 mov dword ptr [esi], eax
// 006c1c86  8b6b04               mov ebp, dword ptr [ebx + 4]
// 006c1c89  3b6e04               cmp ebp, dword ptr [esi + 4]
// 006c1c8c  7444                 je 0x6c1cd2
// 006c1c8e  85ed                 test ebp, ebp
// 006c1c90  740c                 je 0x6c1c9e
// 006c1c92  8d4d04               lea ecx, [ebp + 4]
// 006c1c95  ba01000000           mov edx, 1
// 006c1c9a  f00fc111             lock xadd dword ptr [ecx], edx
// 006c1c9e  8b7e04               mov edi, dword ptr [esi + 4]
// 006c1ca1  85ff                 test edi, edi
// 006c1ca3  742a                 je 0x6c1ccf
// 006c1ca5  8d4704               lea eax, [edi + 4]
// 006c1ca8  83c9ff               or ecx, 0xffffffff
// 006c1cab  f00fc108             lock xadd dword ptr [eax], ecx
// 006c1caf  751e                 jne 0x6c1ccf
// 006c1cb1  8b17                 mov edx, dword ptr [edi]
// 006c1cb3  8b4204               mov eax, dword ptr [edx + 4]
// 006c1cb6  8bcf                 mov ecx, edi
// 006c1cb8  ffd0                 call eax
// 006c1cba  8d4f08               lea ecx, [edi + 8]
// 006c1cbd  83caff               or edx, 0xffffffff
// 006c1cc0  f00fc111             lock xadd dword ptr [ecx], edx
// 006c1cc4  7509                 jne 0x6c1ccf
// 006c1cc6  8b07                 mov eax, dword ptr [edi]
// 006c1cc8  8b5008               mov edx, dword ptr [eax + 8]
// 006c1ccb  8bcf                 mov ecx, edi
// 006c1ccd  ffd2                 call edx
// 006c1ccf  896e04               mov dword ptr [esi + 4], ebp
// 006c1cd2  dd4308               fld qword ptr [ebx + 8]
// 006c1cd5  83c318               add ebx, 0x18
// 006c1cd8  dd5e08               fstp qword ptr [esi + 8]
// 006c1cdb  83c618               add esi, 0x18
// 006c1cde  dd43f8               fld qword ptr [ebx - 8]
// 006c1ce1  dd5ef8               fstp qword ptr [esi - 8]
// 006c1ce4  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 006c1ce8  7598                 jne 0x6c1c82
// 006c1cea  5f                   pop edi
// 006c1ceb  8bc6                 mov eax, esi
// 006c1ced  5e                   pop esi
// 006c1cee  5d                   pop ebp
// 006c1cef  5b                   pop ebx
// 006c1cf0  c3                   ret 
// 006c1cf1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c1cf5  5b                   pop ebx
// 006c1cf6  c3                   ret 
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