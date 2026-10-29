// roc 2009-12 00797f80  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00797f80
//
// 00797f80  53                   push ebx
// 00797f81  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00797f85  3b5c240c             cmp ebx, dword ptr [esp + 0xc]
// 00797f89  7476                 je 0x798001
// 00797f8b  55                   push ebp
// 00797f8c  56                   push esi
// 00797f8d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00797f91  57                   push edi
// 00797f92  8b03                 mov eax, dword ptr [ebx]
// 00797f94  8906                 mov dword ptr [esi], eax
// 00797f96  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00797f99  3b6e04               cmp ebp, dword ptr [esi + 4]
// 00797f9c  7444                 je 0x797fe2
// 00797f9e  85ed                 test ebp, ebp
// 00797fa0  740c                 je 0x797fae
// 00797fa2  8d4d04               lea ecx, [ebp + 4]
// 00797fa5  ba01000000           mov edx, 1
// 00797faa  f00fc111             lock xadd dword ptr [ecx], edx
// 00797fae  8b7e04               mov edi, dword ptr [esi + 4]
// 00797fb1  85ff                 test edi, edi
// 00797fb3  742a                 je 0x797fdf
// 00797fb5  8d4704               lea eax, [edi + 4]
// 00797fb8  83c9ff               or ecx, 0xffffffff
// 00797fbb  f00fc108             lock xadd dword ptr [eax], ecx
// 00797fbf  751e                 jne 0x797fdf
// 00797fc1  8b17                 mov edx, dword ptr [edi]
// 00797fc3  8b4204               mov eax, dword ptr [edx + 4]
// 00797fc6  8bcf                 mov ecx, edi
// 00797fc8  ffd0                 call eax
// 00797fca  8d4f08               lea ecx, [edi + 8]
// 00797fcd  83caff               or edx, 0xffffffff
// 00797fd0  f00fc111             lock xadd dword ptr [ecx], edx
// 00797fd4  7509                 jne 0x797fdf
// 00797fd6  8b07                 mov eax, dword ptr [edi]
// 00797fd8  8b5008               mov edx, dword ptr [eax + 8]
// 00797fdb  8bcf                 mov ecx, edi
// 00797fdd  ffd2                 call edx
// 00797fdf  896e04               mov dword ptr [esi + 4], ebp
// 00797fe2  dd4308               fld qword ptr [ebx + 8]
// 00797fe5  83c318               add ebx, 0x18
// 00797fe8  dd5e08               fstp qword ptr [esi + 8]
// 00797feb  83c618               add esi, 0x18
// 00797fee  dd43f8               fld qword ptr [ebx - 8]
// 00797ff1  dd5ef8               fstp qword ptr [esi - 8]
// 00797ff4  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00797ff8  7598                 jne 0x797f92
// 00797ffa  5f                   pop edi
// 00797ffb  8bc6                 mov eax, esi
// 00797ffd  5e                   pop esi
// 00797ffe  5d                   pop ebp
// 00797fff  5b                   pop ebx
// 00798000  c3                   ret 
// 00798001  8b442410             mov eax, dword ptr [esp + 0x10]
// 00798005  5b                   pop ebx
// 00798006  c3                   ret 
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