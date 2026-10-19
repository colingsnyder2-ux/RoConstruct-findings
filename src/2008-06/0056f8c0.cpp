// from server: 58% by colin
// from server: 54% by king_originala
// roc 2008-06 0056f8c0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 501 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056f8c0
//
// 0056f8c0  6aff                 push -1
// 0056f8c2  64a100000000         mov eax, dword ptr fs:[0]
// 0056f8c8  6896ff7c00           push 0x7cff96
// 0056f8cd  50                   push eax
// 0056f8ce  64892500000000       mov dword ptr fs:[0], esp
// 0056f8d5  81ec90000000         sub esp, 0x90
// 0056f8db  53                   push ebx
// 0056f8dc  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056f8e2  55                   push ebp
// 0056f8e3  56                   push esi
// 0056f8e4  8bf1                 mov esi, ecx
// 0056f8e6  8b06                 mov eax, dword ptr [esi]
// 0056f8e8  8b4008               mov eax, dword ptr [eax + 8]
// 0056f8eb  57                   push edi
// 0056f8ec  50                   push eax
// 0056f8ed  b914969200           mov ecx, 0x929614
// 0056f8f2  ffd3                 call ebx
// 0056f8f4  33ed                 xor ebp, ebp
// 0056f8f6  84c0                 test al, al
// 0056f8f8  742e                 je 0x56f928
// 0056f8fa  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056f8fe  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056f902  8d4c2410             lea ecx, [esp + 0x10]
// 0056f906  51                   push ecx
// 0056f907  8d4e04               lea ecx, [esi + 4]
// 0056f90a  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 0056f911  e8eae3f1ff           call 0x48dd00
// 0056f916  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 0056f921  e8bad1ffff           call 0x56cae0
// 0056f926  8906                 mov dword ptr [esi], eax
// 0056f928  8b06                 mov eax, dword ptr [esi]
// 0056f92a  8b5008               mov edx, dword ptr [eax + 8]
// 0056f92d  52                   push edx
// 0056f92e  b910709300           mov ecx, 0x937010
// 0056f933  ffd3                 call ebx
// 0056f935  84c0                 test al, al
// 0056f937  0f84f7000000         je 0x56fa34
// 0056f93d  8d7e04               lea edi, [esi + 4]
// 0056f940  3bfd                 cmp edi, ebp
// 0056f942  0f84bb000000         je 0x56fa03
// 0056f948  8b0f                 mov ecx, dword ptr [edi]
// 0056f94a  3bcd                 cmp ecx, ebp
// 0056f94c  7409                 je 0x56f957
// 0056f94e  8b01                 mov eax, dword ptr [ecx]
// 0056f950  8b5004               mov edx, dword ptr [eax + 4]
// 0056f953  ffd2                 call edx
// 0056f955  eb05                 jmp 0x56f95c
// 0056f957  b814969200           mov eax, 0x929614
// 0056f95c  6810709300           push 0x937010
// 0056f961  8bc8                 mov ecx, eax
// 0056f963  ffd3                 call ebx
// 0056f965  84c0                 test al, al
// 0056f967  0f8496000000         je 0x56fa03
// 0056f96d  8b07                 mov eax, dword ptr [edi]
// 0056f96f  83c004               add eax, 4
// 0056f972  3bc5                 cmp eax, ebp
// 0056f974  0f8489000000         je 0x56fa03
// 0056f97a  8b00                 mov eax, dword ptr [eax]
// 0056f97c  55                   push ebp
// 0056f97d  687c909200           push 0x92907c
// 0056f982  68fc919200           push 0x9291fc
// 0056f987  55                   push ebp
// 0056f988  50                   push eax
// 0056f989  e8381e1300           call 0x6a17c6
// 0056f98e  83c414               add esp, 0x14
// 0056f991  3bc5                 cmp eax, ebp
// 0056f993  7537                 jne 0x56f9cc
// 0056f995  6858f78200           push 0x82f758
// 0056f99a  8d4c2438             lea ecx, [esp + 0x38]
// 0056f99e  ff1558248000         call dword ptr [0x802458]
// 0056f9a4  8d442434             lea eax, [esp + 0x34]
// 0056f9a8  50                   push eax
// 0056f9a9  8d4c2454             lea ecx, [esp + 0x54]
// 0056f9ad  c78424ac00000001000000 mov dword ptr [esp + 0xac], 1
// 0056f9b8  e893a3e9ff           call 0x409d50
// 0056f9bd  68c81b8d00           push 0x8d1bc8
// 0056f9c2  8d4c2454             lea ecx, [esp + 0x54]
// 0056f9c6  51                   push ecx
// 0056f9c7  e8c01b1300           call 0x6a158c
// 0056f9cc  50                   push eax
// 0056f9cd  8d542414             lea edx, [esp + 0x14]
// 0056f9d1  52                   push edx
// 0056f9d2  e869900a00           call 0x618a40
// 0056f9d7  83c408               add esp, 8
// 0056f9da  50                   push eax
// 0056f9db  8bcf                 mov ecx, edi
// 0056f9dd  c78424ac00000002000000 mov dword ptr [esp + 0xac], 2
// 0056f9e8  e813e3f1ff           call 0x48dd00
// 0056f9ed  8d4c2410             lea ecx, [esp + 0x10]
// 0056f9f1  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 0056f9fc  e85f0c0900           call 0x600660
// 0056fa01  eb2a                 jmp 0x56fa2d
// 0056fa03  896c2410             mov dword ptr [esp + 0x10], ebp
// 0056fa07  896c2414             mov dword ptr [esp + 0x14], ebp
// 0056fa0b  8d442410             lea eax, [esp + 0x10]
// 0056fa0f  50                   push eax
// 0056fa10  8bcf                 mov ecx, edi
// 0056fa12  c78424ac00000003000000 mov dword ptr [esp + 0xac], 3
// 0056fa1d  e8dee2f1ff           call 0x48dd00
// 0056fa22  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 0056fa2d  e8aed0ffff           call 0x56cae0
// 0056fa32  8906                 mov dword ptr [esi], eax
// 0056fa34  83c604               add esi, 4
// 0056fa37  3bf5                 cmp esi, ebp
// 0056fa39  742a                 je 0x56fa65
// 0056fa3b  8b0e                 mov ecx, dword ptr [esi]
// 0056fa3d  3bcd                 cmp ecx, ebp
// 0056fa3f  7409                 je 0x56fa4a
// 0056fa41  8b11                 mov edx, dword ptr [ecx]
// 0056fa43  8b4204               mov eax, dword ptr [edx + 4]
// 0056fa46  ffd0                 call eax
// 0056fa48  eb05                 jmp 0x56fa4f
// 0056fa4a  b814969200           mov eax, 0x929614
// 0056fa4f  6880599300           push 0x935980
// 0056fa54  8bc8                 mov ecx, eax
// 0056fa56  ffd3                 call ebx
// 0056fa58  84c0                 test al, al
// 0056fa5a  7409                 je 0x56fa65
// 0056fa5c  8b06                 mov eax, dword ptr [esi]
// 0056fa5e  83c004               add eax, 4
// 0056fa61  3bc5                 cmp eax, ebp
// 0056fa63  7537                 jne 0x56fa9c
// 0056fa65  6858f78200           push 0x82f758
// 0056fa6a  8d4c241c             lea ecx, [esp + 0x1c]
// 0056fa6e  ff1558248000         call dword ptr [0x802458]
// 0056fa74  8d4c2418             lea ecx, [esp + 0x18]
// 0056fa78  51                   push ecx
// 0056fa79  8d4c247c             lea ecx, [esp + 0x7c]
// 0056fa7d  c78424ac00000004000000 mov dword ptr [esp + 0xac], 4
// 0056fa88  e8c3a2e9ff           call 0x409d50
// 0056fa8d  68c81b8d00           push 0x8d1bc8
// 0056fa92  8d54247c             lea edx, [esp + 0x7c]
// 0056fa96  52                   push edx
// 0056fa97  e8f01a1300           call 0x6a158c
// 0056fa9c  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0056faa3  5f                   pop edi
// 0056faa4  5e                   pop esi
// 0056faa5  5d                   pop ebp
// 0056faa6  5b                   pop ebx
// 0056faa7  64890d00000000       mov dword ptr fs:[0], ecx
// 0056faae  81c49c000000         add esp, 0x9c
// 0056fab4  c3                   ret 

struct TypeInfo {};
extern bool (__thiscall *typeEqual)(const TypeInfo *, const TypeInfo *);

extern TypeInfo emptyType;
extern TypeInfo instancePointerType;
extern TypeInfo objectPointerType;
extern TypeInfo instanceType;
extern TypeInfo objectType;

struct String;
extern String *(__thiscall *constructString)(String *, const char *);

struct String {
    unsigned char storage[28];
    String(const char *text) { constructString(this, text); }
    ~String();
};

struct CastError {
    unsigned char storage[40];
    CastError(const String &);
    CastError(const CastError &);
    ~CastError();
};

struct SharedPointer {
    void *pointer;
    void *control;

    SharedPointer() : pointer(0), control(0) {}
    __declspec(dllimport) ~SharedPointer() throw();
};

struct Holder {
    virtual void destroy();
    virtual const TypeInfo &type() const;
};

struct PointerHolder : Holder {
    SharedPointer value;
};

struct Any {
    Holder *holder;
    Any &assign(const SharedPointer &);
};

struct Descriptor {
    unsigned int reserved[2];
    const TypeInfo *type;
};

extern Descriptor *__cdecl objectDescriptor();
extern void *__cdecl dynamicCast(void *, int, const TypeInfo *,
                                 const TypeInfo *, int);
extern SharedPointer *__cdecl makeObjectPointer(SharedPointer *, void *);

struct Value {
    Descriptor *descriptor;
    Any value;

    SharedPointer &getObject();
};

SharedPointer &Value::getObject()
{
    if (typeEqual(&emptyType, descriptor->type)) {
        SharedPointer empty;
        value.assign(empty);
        descriptor = objectDescriptor();
    }

    if (typeEqual(&instancePointerType, descriptor->type)) {
        Any *a = &value;
        SharedPointer *source = 0;

        if (a) {
            const TypeInfo *type = a->holder
                ? &a->holder->type() : &emptyType;
            if (typeEqual(type, &instancePointerType))
                source = &static_cast<PointerHolder *>(a->holder)->value;
        }

        if (source) {
            void *object = dynamicCast(source->pointer, 0,
                                      &instanceType, &objectType, 0);
            if (!object) {
                String message("Unable to cast value to Object");
                throw CastError(message);
            }

            SharedPointer temporary;
            makeObjectPointer(&temporary, object);
            a->assign(temporary);
        } else {
            SharedPointer empty;
            a->assign(empty);
        }

        descriptor = objectDescriptor();
    }

    Any *a = &value;
    SharedPointer *result = 0;

    if (a) {
        const TypeInfo *type = a->holder
            ? &a->holder->type() : &emptyType;
        if (typeEqual(type, &objectPointerType))
            result = &static_cast<PointerHolder *>(a->holder)->value;
    }

    if (!result) {
        String message("Unable to cast value to Object");
        throw CastError(message);
    }

    return *result;
}
