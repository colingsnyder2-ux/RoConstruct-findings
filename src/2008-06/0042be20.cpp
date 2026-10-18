// from server: 60% by colin
// from server: 58% by king_originala
// roc 2008-06 0042be20  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 465 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042be20
//
// 0042be20  6aff                 push -1
// 0042be22  68d3f57b00           push 0x7bf5d3
// 0042be27  64a100000000         mov eax, dword ptr fs:[0]
// 0042be2d  50                   push eax
// 0042be2e  64892500000000       mov dword ptr fs:[0], esp
// 0042be35  83ec48               sub esp, 0x48
// 0042be38  53                   push ebx
// 0042be39  55                   push ebp
// 0042be3a  56                   push esi
// 0042be3b  8be9                 mov ebp, ecx
// 0042be3d  57                   push edi
// 0042be3e  8d4c2420             lea ecx, [esp + 0x20]
// 0042be42  c6452800             mov byte ptr [ebp + 0x28], 0
// 0042be46  ff1560248000         call dword ptr [0x802460]
// 0042be4c  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0042be4f  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0042be52  8b38                 mov edi, dword ptr [eax]
// 0042be54  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0042be57  8bc6                 mov eax, esi
// 0042be59  8bde                 mov ebx, esi
// 0042be5b  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0042be63  89442410             mov dword ptr [esp + 0x10], eax
// 0042be67  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0042be6b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0042be6f  85f6                 test esi, esi
// 0042be71  7404                 je 0x42be77
// 0042be73  3bf3                 cmp esi, ebx
// 0042be75  740a                 je 0x42be81
// 0042be77  ff1590288000         call dword ptr [0x802890]
// 0042be7d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042be81  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0042be85  746e                 je 0x42bef5
// 0042be87  85f6                 test esi, esi
// 0042be89  755c                 jne 0x42bee7
// 0042be8b  ff1590288000         call dword ptr [0x802890]
// 0042be91  33c0                 xor eax, eax
// 0042be93  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0042be96  7506                 jne 0x42be9e
// 0042be98  ff1590288000         call dword ptr [0x802890]
// 0042be9e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0042bea1  8d54243c             lea edx, [esp + 0x3c]
// 0042bea5  52                   push edx
// 0042bea6  e8c5feffff           call 0x42bd70
// 0042beab  50                   push eax
// 0042beac  8d4c2424             lea ecx, [esp + 0x24]
// 0042beb0  c644246401           mov byte ptr [esp + 0x64], 1
// 0042beb5  ff150c248000         call dword ptr [0x80240c]
// 0042bebb  8d4c243c             lea ecx, [esp + 0x3c]
// 0042bebf  c644246000           mov byte ptr [esp + 0x60], 0
// 0042bec4  ff1568248000         call dword ptr [0x802468]
// 0042beca  85f6                 test esi, esi
// 0042becc  751d                 jne 0x42beeb
// 0042bece  8b3590288000         mov esi, dword ptr [0x802890]
// 0042bed4  ffd6                 call esi
// 0042bed6  33c0                 xor eax, eax
// 0042bed8  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0042bedb  7502                 jne 0x42bedf
// 0042bedd  ffd6                 call esi
// 0042bedf  8b3f                 mov edi, dword ptr [edi]
// 0042bee1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042bee5  eb19                 jmp 0x42bf00
// 0042bee7  8b06                 mov eax, dword ptr [esi]
// 0042bee9  eba8                 jmp 0x42be93
// 0042beeb  8b06                 mov eax, dword ptr [esi]
// 0042beed  8b3590288000         mov esi, dword ptr [0x802890]
// 0042bef3  ebe3                 jmp 0x42bed8
// 0042bef5  8b3590288000         mov esi, dword ptr [0x802890]
// 0042befb  eb03                 jmp 0x42bf00
// 0042befd  8d4900               lea ecx, [ecx]
// 0042bf00  85c0                 test eax, eax
// 0042bf02  7404                 je 0x42bf08
// 0042bf04  3bc3                 cmp eax, ebx
// 0042bf06  7406                 je 0x42bf0e
// 0042bf08  ffd6                 call esi
// 0042bf0a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042bf0e  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0042bf12  0f8481000000         je 0x42bf99
// 0042bf18  85c0                 test eax, eax
// 0042bf1a  756b                 jne 0x42bf87
// 0042bf1c  ffd6                 call esi
// 0042bf1e  33c0                 xor eax, eax
// 0042bf20  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0042bf23  7502                 jne 0x42bf27
// 0042bf25  ffd6                 call esi
// 0042bf27  8b4f08               mov ecx, dword ptr [edi + 8]
// 0042bf2a  8d44243c             lea eax, [esp + 0x3c]
// 0042bf2e  50                   push eax
// 0042bf2f  e83cfeffff           call 0x42bd70
// 0042bf34  50                   push eax
// 0042bf35  8d4c2424             lea ecx, [esp + 0x24]
// 0042bf39  51                   push ecx
// 0042bf3a  c644246802           mov byte ptr [esp + 0x68], 2
// 0042bf3f  ff15d8238000         call dword ptr [0x8023d8]
// 0042bf45  83c408               add esp, 8
// 0042bf48  8d4c243c             lea ecx, [esp + 0x3c]
// 0042bf4c  8ad8                 mov bl, al
// 0042bf4e  c644246000           mov byte ptr [esp + 0x60], 0
// 0042bf53  ff1568248000         call dword ptr [0x802468]
// 0042bf59  84db                 test bl, bl
// 0042bf5b  7532                 jne 0x42bf8f
// 0042bf5d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042bf61  85c0                 test eax, eax
// 0042bf63  7526                 jne 0x42bf8b
// 0042bf65  ff1590288000         call dword ptr [0x802890]
// 0042bf6b  33c0                 xor eax, eax
// 0042bf6d  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0042bf70  7506                 jne 0x42bf78
// 0042bf72  ff1590288000         call dword ptr [0x802890]
// 0042bf78  8b3f                 mov edi, dword ptr [edi]
// 0042bf7a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0042bf7e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042bf82  e96effffff           jmp 0x42bef5
// 0042bf87  8b00                 mov eax, dword ptr [eax]
// 0042bf89  eb95                 jmp 0x42bf20
// 0042bf8b  8b00                 mov eax, dword ptr [eax]
// 0042bf8d  ebde                 jmp 0x42bf6d
// 0042bf8f  8d4c2420             lea ecx, [esp + 0x20]
// 0042bf93  ff15dc238000         call dword ptr [0x8023dc]
// 0042bf99  8b6d30               mov ebp, dword ptr [ebp + 0x30]
// 0042bf9c  8d4c2420             lea ecx, [esp + 0x20]
// 0042bfa0  ff1564248000         call dword ptr [0x802464]
// 0042bfa6  50                   push eax
// 0042bfa7  8d4c2414             lea ecx, [esp + 0x14]
// 0042bfab  e8d051fdff           call 0x401180
// 0042bfb0  8b00                 mov eax, dword ptr [eax]
// 0042bfb2  8b5500               mov edx, dword ptr [ebp]
// 0042bfb5  50                   push eax
// 0042bfb6  8b4224               mov eax, dword ptr [edx + 0x24]
// 0042bfb9  55                   push ebp
// 0042bfba  c644246803           mov byte ptr [esp + 0x68], 3
// 0042bfbf  ffd0                 call eax
// 0042bfc1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042bfc5  51                   push ecx
// 0042bfc6  ff1544298000         call dword ptr [0x802944]
// 0042bfcc  8d4c2420             lea ecx, [esp + 0x20]
// 0042bfd0  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0042bfd8  ff1568248000         call dword ptr [0x802468]
// 0042bfde  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0042bfe2  5f                   pop edi
// 0042bfe3  5e                   pop esi
// 0042bfe4  5d                   pop ebp
// 0042bfe5  5b                   pop ebx
// 0042bfe6  64890d00000000       mov dword ptr fs:[0], ecx
// 0042bfed  83c454               add esp, 0x54
// 0042bff0  c3                   ret 

struct String;

extern void (__thiscall *string_construct)(String *);
extern void (__thiscall *string_destroy)(String *);
extern String &(__thiscall *string_assign)(String *, const String &);
extern const char *(__thiscall *string_c_str)(const String *);
extern void (__thiscall *string_clear)(String *);
extern bool (__cdecl *string_not_equal)(const String &, const String &);
extern void (__cdecl *invalid_parameter)();
extern void (__stdcall *free_string)(unsigned short *);

struct String {
    unsigned char storage[28];
    String();
    ~String();
    String &operator=(const String &);
    const char *c_str() const;
    void clear();
};

inline String::String() { string_construct(this); }
inline String::~String() { string_destroy(this); }
inline String &String::operator=(const String &s) {
    return string_assign(this, s);
}
inline const char *String::c_str() const { return string_c_str(this); }
inline void String::clear() { string_clear(this); }

struct Value {
    String get();
};

struct Node {
    Node *next;
    Node *previous;
    Value *value;
};

struct Container {
    unsigned char padding[20];
    Node *head;
};

struct Proxy {
    Container *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;

    Iterator(Node *, Proxy *);
    bool operator!=(const Iterator &) const;
    Container *container() const;
    Value *operator*() const;
    Iterator &operator++();
};

inline Iterator::Iterator(Node *n, Proxy *p) : owner(p), node(n) {}

inline bool Iterator::operator!=(const Iterator &other) const {
    if (!owner || owner != other.owner)
        invalid_parameter();
    return node != other.node;
}

inline Container *Iterator::container() const {
    return owner ? owner->container : 0;
}

inline Value *Iterator::operator*() const {
    if (!owner)
        invalid_parameter();
    if (node == container()->head)
        invalid_parameter();
    return node->value;
}

inline Iterator &Iterator::operator++() {
    if (!owner)
        invalid_parameter();
    if (node == container()->head)
        invalid_parameter();
    node = node->next;
    return *this;
}

struct __declspec(dllimport) BString {
    unsigned short *value;
    BString(const char *);
    ~BString();
};

struct Interface {
    typedef long (__stdcall *Setter)(Interface *, unsigned short *);
    struct Table {
        void *slots[9];
        Setter set;
    };
    Table *table;
};

struct S {
    unsigned char padding0[12];
    Proxy *owner;
    unsigned char padding1[16];
    Node *head;
    unsigned char padding2[4];
    unsigned char flag;
    unsigned char padding3[7];
    Interface *target;

    Iterator begin();
    Iterator end();
    void f();
};

inline Iterator S::begin() {
    return Iterator(head->next, owner);
}

inline Iterator S::end() {
    return Iterator(head, owner);
}

void S::f() {
    flag = 0;
    String text;
    Iterator current = begin();
    Iterator last = end();

    if (current != last) {
        text = (*current)->get();
        ++current;
    }

    for (; current != last; ++current) {
        if (string_not_equal(text, (*current)->get())) {
            text.clear();
            break;
        }
    }

    Interface *destination = target;
    destination->table->set(destination, BString(text.c_str()).value);
}
