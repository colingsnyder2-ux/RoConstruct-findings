// from server: 100% by king_originala
// roc 2008-06 00416110  unit: CopyVerb  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416110
//
// 00416110  6aff                 push -1
// 00416112  6888617c00           push 0x7c6188
// 00416117  64a100000000         mov eax, dword ptr fs:[0]
// 0041611d  50                   push eax
// 0041611e  64892500000000       mov dword ptr fs:[0], esp
// 00416125  83ec10               sub esp, 0x10
// 00416128  56                   push esi
// 00416129  8b742428             mov esi, dword ptr [esp + 0x28]
// 0041612d  c744240400000000     mov dword ptr [esp + 4], 0
// 00416135  85f6                 test esi, esi
// 00416137  742c                 je 0x416165
// 00416139  8b0e                 mov ecx, dword ptr [esi]
// 0041613b  85c9                 test ecx, ecx
// 0041613d  7409                 je 0x416148
// 0041613f  8b01                 mov eax, dword ptr [ecx]
// 00416141  8b5004               mov edx, dword ptr [eax + 4]
// 00416144  ffd2                 call edx
// 00416146  eb05                 jmp 0x41614d
// 00416148  b814969200           mov eax, 0x929614
// 0041614d  68f8be9200           push 0x92bef8
// 00416152  8bc8                 mov ecx, eax
// 00416154  ff1578288000         call dword ptr [0x802878]
// 0041615a  84c0                 test al, al
// 0041615c  7407                 je 0x416165
// 0041615e  8b06                 mov eax, dword ptr [esi]
// 00416160  83c004               add eax, 4
// 00416163  7529                 jne 0x41618e
// 00416165  6834ba8000           push 0x80ba34
// 0041616a  8d4c240c             lea ecx, [esp + 0xc]
// 0041616e  ff1564288000         call dword ptr [0x802864]
// 00416174  c74424082cba8000     mov dword ptr [esp + 8], 0x80ba2c
// 0041617c  8d442408             lea eax, [esp + 8]
// 00416180  50                   push eax
// 00416181  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00416189  e86242ffff           call 0x40a3f0
// 0041618e  8b742424             mov esi, dword ptr [esp + 0x24]
// 00416192  50                   push eax
// 00416193  8bce                 mov ecx, esi
// 00416195  ff155c248000         call dword ptr [0x80245c]
// 0041619b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041619f  8bc6                 mov eax, esi
// 004161a1  5e                   pop esi
// 004161a2  64890d00000000       mov dword ptr fs:[0], ecx
// 004161a9  83c41c               add esp, 0x1c
// 004161ac  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info empty_type;
extern type_info string_type;
extern bool (type_info::*type_info_equal)(const type_info&) const;

struct placeholder {
    virtual ~placeholder();
    virtual const type_info& type() const = 0;
};

struct any {
    placeholder* content;
};

extern void (__thiscall *copy_string)(void*, const void*);
extern void (__thiscall *construct_bad_cast)(void*, const char*);

struct string {
    unsigned char storage[28];

    string(const string& source) {
        copy_string(this, &source);
    }

    ~string();
};

struct bad_cast {
    unsigned long storage[3];

    bad_cast(const char* message) {
        construct_bad_cast(this, message);
        storage[0] = 0x0080BA2CUL;
    }

    ~bad_cast();
};

extern __declspec(noreturn) void __cdecl raise_bad_cast(const void*);

string __cdecl cast_string(const any* value)
{
    const string* result = 0;

    if (value) {
        placeholder* content = value->content;
        const type_info& info = content ? content->type() : empty_type;

        if ((info.*type_info_equal)(string_type))
            result = reinterpret_cast<const string*>(
                reinterpret_cast<const char*>(value->content) + 4);
    }

    if (!result) {
        bad_cast error("bad cast");
        raise_bad_cast(&error);
    }

    return string(*result);
}
