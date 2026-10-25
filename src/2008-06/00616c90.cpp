// from server: 100% by king_originala
// roc 2008-06 00616c90  unit: RBX::VInstance::?$FilteredSelection  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00616c90
//
// 00616c90  83ec08               sub esp, 8
// 00616c93  53                   push ebx
// 00616c94  55                   push ebp
// 00616c95  56                   push esi
// 00616c96  57                   push edi
// 00616c97  8d442414             lea eax, [esp + 0x14]
// 00616c9b  50                   push eax
// 00616c9c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616ca0  8d542420             lea edx, [esp + 0x20]
// 00616ca4  52                   push edx
// 00616ca5  50                   push eax
// 00616ca6  e865f2ffff           call 0x615f10
// 00616cab  89442410             mov dword ptr [esp + 0x10], eax
// 00616caf  85c0                 test eax, eax
// 00616cb1  0f84b0000000         je 0x616d67
// 00616cb7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00616cbb  83b80801000000       cmp dword ptr [eax + 0x108], 0
// 00616cc2  0f849f000000         je 0x616d67
// 00616cc8  8bb008010000         mov esi, dword ptr [eax + 0x108]
// 00616cce  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00616cd1  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00616cd7  894c2420             mov dword ptr [esp + 0x20], ecx
// 00616cdb  394e0c               cmp dword ptr [esi + 0xc], ecx
// 00616cde  7606                 jbe 0x616ce6
// 00616ce0  ffd3                 call ebx
// 00616ce2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00616ce6  8b2e                 mov ebp, dword ptr [esi]
// 00616ce8  8bb008010000         mov esi, dword ptr [eax + 0x108]
// 00616cee  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00616cf1  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00616cf4  7602                 jbe 0x616cf8
// 00616cf6  ffd3                 call ebx
// 00616cf8  8b36                 mov esi, dword ptr [esi]
// 00616cfa  8d9b00000000         lea ebx, [ebx]
// 00616d00  85f6                 test esi, esi
// 00616d02  7404                 je 0x616d08
// 00616d04  3bf5                 cmp esi, ebp
// 00616d06  7402                 je 0x616d0a
// 00616d08  ffd3                 call ebx
// 00616d0a  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00616d0e  7457                 je 0x616d67
// 00616d10  85f6                 test esi, esi
// 00616d12  754b                 jne 0x616d5f
// 00616d14  ffd3                 call ebx
// 00616d16  33c0                 xor eax, eax
// 00616d18  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00616d1b  7202                 jb 0x616d1f
// 00616d1d  ffd3                 call ebx
// 00616d1f  8b07                 mov eax, dword ptr [edi]
// 00616d21  6a00                 push 0
// 00616d23  68bc0d9400           push 0x940dbc
// 00616d28  687c909200           push 0x92907c
// 00616d2d  6a00                 push 0
// 00616d2f  50                   push eax
// 00616d30  e891aa0800           call 0x6a17c6
// 00616d35  83c414               add esp, 0x14
// 00616d38  85c0                 test eax, eax
// 00616d3a  740f                 je 0x616d4b
// 00616d3c  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 00616d42  8b542410             mov edx, dword ptr [esp + 0x10]
// 00616d46  3b4a04               cmp ecx, dword ptr [edx + 4]
// 00616d49  741e                 je 0x616d69
// 00616d4b  85f6                 test esi, esi
// 00616d4d  7514                 jne 0x616d63
// 00616d4f  ffd3                 call ebx
// 00616d51  33c0                 xor eax, eax
// 00616d53  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00616d56  7202                 jb 0x616d5a
// 00616d58  ffd3                 call ebx
// 00616d5a  83c708               add edi, 8
// 00616d5d  eba1                 jmp 0x616d00
// 00616d5f  8b06                 mov eax, dword ptr [esi]
// 00616d61  ebb5                 jmp 0x616d18
// 00616d63  8b06                 mov eax, dword ptr [esi]
// 00616d65  ebec                 jmp 0x616d53
// 00616d67  33c0                 xor eax, eax
// 00616d69  5f                   pop edi
// 00616d6a  5e                   pop esi
// 00616d6b  5d                   pop ebp
// 00616d6c  5b                   pop ebx
// 00616d6d  83c408               add esp, 8
// 00616d70  c20800               ret 8

extern "C" void (__cdecl *invalid_parameter_noinfo)();
typedef void (__cdecl *ErrorHandler)();

namespace RBX {
class Instance;
class Decal;
}

struct Children;

struct Proxy {
    Children* owner;
};

struct Entry {
    RBX::Instance* object;
    void* control;
};

struct Iterator {
    Proxy* proxy;
    Entry* position;
    RBX::Instance* get(ErrorHandler error) const;
    void advance(ErrorHandler error);
};

struct Children {
    Proxy* proxy;
    unsigned int reserved[2];
    Entry* first;
    Entry* last;
    Iterator begin(ErrorHandler error);
    Proxy* end(Entry*& position, ErrorHandler& error);
};

namespace RBX {
class Instance {
public:
    virtual ~Instance();
    char padding[0x104];
    Children* children;
};

class Decal : public Instance {
public:
    char padding2[0x34];
    void* value;
};
}

struct Context {
    unsigned int reserved;
    void* value;
};

struct Selection {
    Context* lookup(int argument, RBX::Instance** object, int* temporary);
    RBX::Decal* find(RBX::Instance* object, int argument);
};

inline Iterator Children::begin(ErrorHandler error) {
    Iterator result;
    result.position = first;
    if (first > last)
        error();
    result.proxy = proxy;
    return result;
}

inline Proxy* Children::end(Entry*& position, ErrorHandler& error) {
    position = last;
    error = invalid_parameter_noinfo;
    if (first > position)
        error();
    return proxy;
}

inline RBX::Instance* Iterator::get(ErrorHandler error) const {
    if (!proxy)
        error();
    Children* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        error();
    return position->object;
}

inline void Iterator::advance(ErrorHandler error) {
    if (!proxy)
        error();
    Children* owner = proxy ? proxy->owner : 0;
    if (position >= owner->last)
        error();
    ++position;
}

RBX::Decal* Selection::find(RBX::Instance* object, int argument) {
    int temporary;
    Context* context = lookup(argument, &object, &temporary);
    if (context && object->children) {
        ErrorHandler error;
        Entry*& finishPosition = reinterpret_cast<Entry*&>(argument);
        Proxy* finishProxy = object->children->end(finishPosition, error);
        Iterator current = object->children->begin(error);
        for (;;) {
            if (!current.proxy || current.proxy != finishProxy)
                error();
            if (current.position == finishPosition)
                break;
            RBX::Decal* decal = dynamic_cast<RBX::Decal*>(current.get(error));
            if (decal && decal->value == context->value)
                return decal;
            current.advance(error);
        }
    }
    return 0;
}
