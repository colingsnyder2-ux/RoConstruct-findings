// from server: 100% by king_originala
// roc 2008-06 005ab240  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab240
//
// 005ab240  6aff                 push -1
// 005ab242  6888617c00           push 0x7c6188
// 005ab247  64a100000000         mov eax, dword ptr fs:[0]
// 005ab24d  50                   push eax
// 005ab24e  64892500000000       mov dword ptr fs:[0], esp
// 005ab255  83ec10               sub esp, 0x10
// 005ab258  56                   push esi
// 005ab259  8b742428             mov esi, dword ptr [esp + 0x28]
// 005ab25d  c744240400000000     mov dword ptr [esp + 4], 0
// 005ab265  85f6                 test esi, esi
// 005ab267  742c                 je 0x5ab295
// 005ab269  8b0e                 mov ecx, dword ptr [esi]
// 005ab26b  85c9                 test ecx, ecx
// 005ab26d  7409                 je 0x5ab278
// 005ab26f  8b01                 mov eax, dword ptr [ecx]
// 005ab271  8b5004               mov edx, dword ptr [eax + 4]
// 005ab274  ffd2                 call edx
// 005ab276  eb05                 jmp 0x5ab27d
// 005ab278  b814969200           mov eax, 0x929614
// 005ab27d  6850899300           push 0x938950
// 005ab282  8bc8                 mov ecx, eax
// 005ab284  ff1578288000         call dword ptr [0x802878]
// 005ab28a  84c0                 test al, al
// 005ab28c  7407                 je 0x5ab295
// 005ab28e  8b0e                 mov ecx, dword ptr [esi]
// 005ab290  83c104               add ecx, 4
// 005ab293  7529                 jne 0x5ab2be
// 005ab295  6834ba8000           push 0x80ba34
// 005ab29a  8d4c240c             lea ecx, [esp + 0xc]
// 005ab29e  ff1564288000         call dword ptr [0x802864]
// 005ab2a4  c74424082cba8000     mov dword ptr [esp + 8], 0x80ba2c
// 005ab2ac  8d442408             lea eax, [esp + 8]
// 005ab2b0  50                   push eax
// 005ab2b1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ab2b9  e832f1e5ff           call 0x40a3f0
// 005ab2be  8b11                 mov edx, dword ptr [ecx]
// 005ab2c0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ab2c4  8910                 mov dword ptr [eax], edx
// 005ab2c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ab2c9  894804               mov dword ptr [eax + 4], ecx
// 005ab2cc  85c9                 test ecx, ecx
// 005ab2ce  740c                 je 0x5ab2dc
// 005ab2d0  83c104               add ecx, 4
// 005ab2d3  ba01000000           mov edx, 1
// 005ab2d8  f00fc111             lock xadd dword ptr [ecx], edx
// 005ab2dc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ab2e0  5e                   pop esi
// 005ab2e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab2e8  83c41c               add esp, 0x1c
// 005ab2eb  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct TypeInfo {};
typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);
extern TypeEqual typeEqual;
extern const TypeInfo emptyType;
extern const TypeInfo sharedType;

struct Control {
    void* vtable;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;
};

struct Placeholder {
    virtual void destroy();
    virtual const TypeInfo& type() const;
};

struct Holder : Placeholder {
    Shared value;
};

struct Any {
    Placeholder* content;
};

struct BadCast {
    void* vtable;
    const char* message;
    int ownsMessage;
    BadCast(const char*);
    ~BadCast();
};

typedef void (__thiscall *BadCastConstructor)(BadCast*, const char*);
extern BadCastConstructor constructBadCast;
extern void* badCastVtable;
__declspec(noreturn) void __cdecl throwBadCast(const BadCast&);

__forceinline BadCast::BadCast(const char* text)
{
    constructBadCast(this, text);
    vtable = &badCastVtable;
}

Shared* __cdecl extractShared(Shared* result, const Any* source)
{
    volatile int constructed = 0;
    Shared* value = 0;

    if (source) {
        const TypeInfo& type =
            source->content ? source->content->type() : emptyType;
        if (typeEqual(&type, sharedType))
            value = &static_cast<Holder*>(source->content)->value;
    }

    if (!value) {
        BadCast exception("bad cast");
        throwBadCast(exception);
    }

    result->object = value->object;
    result->control = value->control;
    if (result->control) {
        volatile long* references = &result->control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(references, 1);
    }
    return result;
}
