// from server: 98% by king_originala
// roc 2008-06 0045dce0  unit: RBX::VCamera::?$FactoryProduct::Creator  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045dce0
//
// 0045dce0  6aff                 push -1
// 0045dce2  64a100000000         mov eax, dword ptr fs:[0]
// 0045dce8  6868917d00           push 0x7d9168
// 0045dced  50                   push eax
// 0045dcee  64892500000000       mov dword ptr fs:[0], esp
// 0045dcf5  83ec0c               sub esp, 0xc
// 0045dcf8  53                   push ebx
// 0045dcf9  55                   push ebp
// 0045dcfa  56                   push esi
// 0045dcfb  57                   push edi
// 0045dcfc  6894de9600           push 0x96de94
// 0045dd01  6820b84500           push 0x45b820
// 0045dd06  8bd9                 mov ebx, ecx
// 0045dd08  e823960f00           call 0x557330
// 0045dd0d  83c408               add esp, 8
// 0045dd10  e89bd5ffff           call 0x45b2b0
// 0045dd15  8b8ba0010000         mov ecx, dword ptr [ebx + 0x1a0]
// 0045dd1b  2b8b9c010000         sub ecx, dword ptr [ebx + 0x19c]
// 0045dd21  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0045dd27  8db390010000         lea esi, [ebx + 0x190]
// 0045dd2d  8bf8                 mov edi, eax
// 0045dd2f  8d4701               lea eax, [edi + 1]
// 0045dd32  c1f903               sar ecx, 3
// 0045dd35  3bc1                 cmp eax, ecx
// 0045dd37  7620                 jbe 0x45dd59
// 0045dd39  83ec08               sub esp, 8
// 0045dd3c  8bcc                 mov ecx, esp
// 0045dd3e  c70100000000         mov dword ptr [ecx], 0
// 0045dd44  89642418             mov dword ptr [esp + 0x18], esp
// 0045dd48  c7410400000000       mov dword ptr [ecx + 4], 0
// 0045dd4f  50                   push eax
// 0045dd50  8bce                 mov ecx, esi
// 0045dd52  e86947fbff           call 0x4124c0
// 0045dd57  eb1d                 jmp 0x45dd76
// 0045dd59  8b5610               mov edx, dword ptr [esi + 0x10]
// 0045dd5c  2b560c               sub edx, dword ptr [esi + 0xc]
// 0045dd5f  c1fa03               sar edx, 3
// 0045dd62  3bfa                 cmp edi, edx
// 0045dd64  7202                 jb 0x45dd68
// 0045dd66  ffd5                 call ebp
// 0045dd68  8b460c               mov eax, dword ptr [esi + 0xc]
// 0045dd6b  8b04f8               mov eax, dword ptr [eax + edi*8]
// 0045dd6e  85c0                 test eax, eax
// 0045dd70  0f8597000000         jne 0x45de0d
// 0045dd76  6888de9600           push 0x96de88
// 0045dd7b  68d0b64500           push 0x45b6d0
// 0045dd80  e8ab950f00           call 0x557330
// 0045dd85  83c408               add esp, 8
// 0045dd88  e8d3d3ffff           call 0x45b160
// 0045dd8d  50                   push eax
// 0045dd8e  8d4c2418             lea ecx, [esp + 0x18]
// 0045dd92  51                   push ecx
// 0045dd93  8bcb                 mov ecx, ebx
// 0045dd95  e8f64c1100           call 0x572a90
// 0045dd9a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045dd9e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0045dda6  85c9                 test ecx, ecx
// 0045dda8  7526                 jne 0x45ddd0
// 0045ddaa  8d4c2414             lea ecx, [esp + 0x14]
// 0045ddae  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0045ddb6  e8a5281a00           call 0x600660
// 0045ddbb  33c0                 xor eax, eax
// 0045ddbd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045ddc1  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ddc8  5f                   pop edi
// 0045ddc9  5e                   pop esi
// 0045ddca  5d                   pop ebp
// 0045ddcb  5b                   pop ebx
// 0045ddcc  83c418               add esp, 0x18
// 0045ddcf  c3                   ret 
// 0045ddd0  8b5610               mov edx, dword ptr [esi + 0x10]
// 0045ddd3  2b560c               sub edx, dword ptr [esi + 0xc]
// 0045ddd6  8bd9                 mov ebx, ecx
// 0045ddd8  c1fa03               sar edx, 3
// 0045dddb  3bfa                 cmp edi, edx
// 0045dddd  7206                 jb 0x45dde5
// 0045dddf  ffd5                 call ebp
// 0045dde1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045dde5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0045dde8  8d04f8               lea eax, [eax + edi*8]
// 0045ddeb  8908                 mov dword ptr [eax], ecx
// 0045dded  8d4c2418             lea ecx, [esp + 0x18]
// 0045ddf1  51                   push ecx
// 0045ddf2  8d4804               lea ecx, [eax + 4]
// 0045ddf5  e8b647faff           call 0x4025b0
// 0045ddfa  8d4c2414             lea ecx, [esp + 0x14]
// 0045ddfe  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0045de06  e855281a00           call 0x600660
// 0045de0b  8bc3                 mov eax, ebx
// 0045de0d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045de11  5f                   pop edi
// 0045de12  5e                   pop esi
// 0045de13  5d                   pop ebp
// 0045de14  64890d00000000       mov dword ptr fs:[0], ecx
// 0045de1b  5b                   pop ebx
// 0045de1c  83c418               add esp, 0x18
// 0045de1f  c3                   ret 

extern "C" {
    extern void (__cdecl *invalid_parameter)();
}

extern void __cdecl register_type(void (__cdecl *)(), void *);
extern void __cdecl register_first();
extern void __cdecl register_second();
extern unsigned first_registration;
extern unsigned second_registration;
extern void *func_0045b2b0();
extern void *func_0045b160();

typedef void (__cdecl *InvalidHandler)();

struct Control {
    void *value;
    Control &assign(const Control &);
};

struct EmptyValue {
    void *object;
    void *control;
    EmptyValue();
    EmptyValue(const EmptyValue &);
};

inline EmptyValue::EmptyValue() : object(0), control(0) {}

struct Value {
    void *object;
    Control control;
    ~Value();
    Value &operator=(const Value &);
};

inline Value &Value::operator=(const Value &other) {
    object = other.object;
    control.assign(other.control);
    return *this;
}

struct Values {
    unsigned char prefix[12];
    Value *first;
    Value *last;
    Value *limit;

    void resize(unsigned, EmptyValue);
    unsigned size() const;
    Value &at(unsigned, InvalidHandler);
};

inline unsigned Values::size() const {
    return static_cast<unsigned>(last - first);
}

inline Value &Values::at(unsigned index, InvalidHandler handler) {
    if (index >= size())
        handler();
    return first[index];
}

struct S {
    unsigned char prefix[0x190];
    Values values;

    Value create(void *);
    void *get();
};

void *S::get() {
    register_type(register_first, &first_registration);
    unsigned index = reinterpret_cast<unsigned>(func_0045b2b0());
    InvalidHandler handler = invalid_parameter;

    if (index + 1 > values.size()) {
        values.resize(index + 1, EmptyValue());
    } else {
        void *existing = values.at(index, handler).object;
        if (existing)
            return existing;
    }

    register_type(register_second, &second_registration);
    Value result = create(func_0045b160());
    if (!result.object)
        return 0;

    void *object = result.object;
    values.at(index, handler) = result;
    return object;
}
