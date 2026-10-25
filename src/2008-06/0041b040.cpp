// from server: 100% by king_originala
// roc 2008-06 0041b040  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b040
//
// 0041b040  56                   push esi
// 0041b041  57                   push edi
// 0041b042  8d44240c             lea eax, [esp + 0xc]
// 0041b046  8bf9                 mov edi, ecx
// 0041b048  50                   push eax
// 0041b049  c70700000000         mov dword ptr [edi], 0
// 0041b04f  e88cefffff           call 0x419fe0
// 0041b054  8b742418             mov esi, dword ptr [esp + 0x18]
// 0041b058  85f6                 test esi, esi
// 0041b05a  742a                 je 0x41b086
// 0041b05c  8d4e04               lea ecx, [esi + 4]
// 0041b05f  83caff               or edx, 0xffffffff
// 0041b062  f00fc111             lock xadd dword ptr [ecx], edx
// 0041b066  751e                 jne 0x41b086
// 0041b068  8b06                 mov eax, dword ptr [esi]
// 0041b06a  8b5004               mov edx, dword ptr [eax + 4]
// 0041b06d  8bce                 mov ecx, esi
// 0041b06f  ffd2                 call edx
// 0041b071  8d4608               lea eax, [esi + 8]
// 0041b074  83c9ff               or ecx, 0xffffffff
// 0041b077  f00fc108             lock xadd dword ptr [eax], ecx
// 0041b07b  7509                 jne 0x41b086
// 0041b07d  8b16                 mov edx, dword ptr [esi]
// 0041b07f  8b4208               mov eax, dword ptr [edx + 8]
// 0041b082  8bce                 mov ecx, esi
// 0041b084  ffd0                 call eax
// 0041b086  8bc7                 mov eax, edi
// 0041b088  5f                   pop edi
// 0041b089  5e                   pop esi
// 0041b08a  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Value {
    unsigned long words[3];
    Control* control;
    unsigned long last;
};

struct S {
    void* pointer;
    void initialize(Value*);
    S* f(Value);
};

S* S::f(Value value)
{
    pointer = 0;
    initialize(&value);

    if (value.control)
        value.control->release();

    return this;
}
