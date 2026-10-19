// from server: 88% by colin
// from server: 87% by king_originala
// roc 2008-06 004a7e20  unit: RBX::VHint::?$FactoryProduct::Creator  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7e20
//
// 004a7e20  64a100000000         mov eax, dword ptr fs:[0]
// 004a7e26  6aff                 push -1
// 004a7e28  68e88e7d00           push 0x7d8ee8
// 004a7e2d  50                   push eax
// 004a7e2e  64892500000000       mov dword ptr fs:[0], esp
// 004a7e35  83ec30               sub esp, 0x30
// 004a7e38  56                   push esi
// 004a7e39  57                   push edi
// 004a7e3a  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004a7e3e  6816b78000           push 0x80b716
// 004a7e43  57                   push edi
// 004a7e44  8bf1                 mov esi, ecx
// 004a7e46  ff156c238000         call dword ptr [0x80236c]
// 004a7e4c  83c408               add esp, 8
// 004a7e4f  84c0                 test al, al
// 004a7e51  742a                 je 0x4a7e7d
// 004a7e53  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004a7e57  6a01                 push 1
// 004a7e59  6a08                 push 8
// 004a7e5b  8d442454             lea eax, [esp + 0x54]
// 004a7e5f  50                   push eax
// 004a7e60  c644245800           mov byte ptr [esp + 0x58], 0
// 004a7e65  e896d7ffff           call 0x4a5600
// 004a7e6a  5f                   pop edi
// 004a7e6b  5e                   pop esi
// 004a7e6c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a7e70  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7e77  83c43c               add esp, 0x3c
// 004a7e7a  c20800               ret 8
// 004a7e7d  53                   push ebx
// 004a7e7e  8a9e200e0000         mov bl, byte ptr [esi + 0xe20]
// 004a7e84  57                   push edi
// 004a7e85  8d4c2420             lea ecx, [esp + 0x20]
// 004a7e89  ff155c248000         call dword ptr [0x80245c]
// 004a7e8f  885c2438             mov byte ptr [esp + 0x38], bl
// 004a7e93  8d4c241c             lea ecx, [esp + 0x1c]
// 004a7e97  51                   push ecx
// 004a7e98  8d542414             lea edx, [esp + 0x14]
// 004a7e9c  52                   push edx
// 004a7e9d  8bce                 mov ecx, esi
// 004a7e9f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004a7ea7  e884fbffff           call 0x4a7a30
// 004a7eac  8d4c241c             lea ecx, [esp + 0x1c]
// 004a7eb0  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004a7eb8  ff1568248000         call dword ptr [0x802468]
// 004a7ebe  807c241800           cmp byte ptr [esp + 0x18], 0
// 004a7ec3  754e                 jne 0x4a7f13
// 004a7ec5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a7ec9  8b3d90288000         mov edi, dword ptr [0x802890]
// 004a7ecf  85c0                 test eax, eax
// 004a7ed1  753c                 jne 0x4a7f0f
// 004a7ed3  ffd7                 call edi
// 004a7ed5  33c0                 xor eax, eax
// 004a7ed7  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a7edb  3b7018               cmp esi, dword ptr [eax + 0x18]
// 004a7ede  7502                 jne 0x4a7ee2
// 004a7ee0  ffd7                 call edi
// 004a7ee2  8a4628               mov al, byte ptr [esi + 0x28]
// 004a7ee5  6a01                 push 1
// 004a7ee7  6a08                 push 8
// 004a7ee9  8d4c2458             lea ecx, [esp + 0x58]
// 004a7eed  51                   push ecx
// 004a7eee  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004a7ef2  8844245c             mov byte ptr [esp + 0x5c], al
// 004a7ef6  e805d7ffff           call 0x4a5600
// 004a7efb  5b                   pop ebx
// 004a7efc  5f                   pop edi
// 004a7efd  5e                   pop esi
// 004a7efe  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a7f02  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7f09  83c43c               add esp, 0x3c
// 004a7f0c  c20800               ret 8
// 004a7f0f  8b00                 mov eax, dword ptr [eax]
// 004a7f11  ebc4                 jmp 0x4a7ed7
// 004a7f13  8b86200e0000         mov eax, dword ptr [esi + 0xe20]
// 004a7f19  8d14c500000000       lea edx, [eax*8]
// 004a7f20  2bd0                 sub edx, eax
// 004a7f22  8d449620             lea eax, [esi + edx*4 + 0x20]
// 004a7f26  50                   push eax
// 004a7f27  8bce                 mov ecx, esi
// 004a7f29  e802feffff           call 0x4a7d30
// 004a7f2e  8b86200e0000         mov eax, dword ptr [esi + 0xe20]
// 004a7f34  8d0cc500000000       lea ecx, [eax*8]
// 004a7f3b  2bc8                 sub ecx, eax
// 004a7f3d  57                   push edi
// 004a7f3e  8d4c8e20             lea ecx, [esi + ecx*4 + 0x20]
// 004a7f42  ff150c248000         call dword ptr [0x80240c]
// 004a7f48  8a96200e0000         mov dl, byte ptr [esi + 0xe20]
// 004a7f4e  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 004a7f52  6a01                 push 1
// 004a7f54  6a08                 push 8
// 004a7f56  8d442414             lea eax, [esp + 0x14]
// 004a7f5a  80ca80               or dl, 0x80
// 004a7f5d  50                   push eax
// 004a7f5e  8bcb                 mov ecx, ebx
// 004a7f60  88542418             mov byte ptr [esp + 0x18], dl
// 004a7f64  e897d6ffff           call 0x4a5600
// 004a7f69  57                   push edi
// 004a7f6a  53                   push ebx
// 004a7f6b  e8f0e5ffff           call 0x4a6560
// 004a7f70  8b86200e0000         mov eax, dword ptr [esi + 0xe20]
// 004a7f76  99                   cdq 
// 004a7f77  b97f000000           mov ecx, 0x7f
// 004a7f7c  f7f9                 idiv ecx
// 004a7f7e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a7f82  83c408               add esp, 8
// 004a7f85  5b                   pop ebx
// 004a7f86  5f                   pop edi
// 004a7f87  42                   inc edx
// 004a7f88  8996200e0000         mov dword ptr [esi + 0xe20], edx
// 004a7f8e  5e                   pop esi
// 004a7f8f  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7f96  83c43c               add esp, 0x3c
// 004a7f99  c20800               ret 8

struct String;

extern bool (__cdecl *stringEqual)(const String&, const char*);
extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);
extern String& (__thiscall *stringAssign)(String*, const String&);
extern void (__cdecl *invalidParameter)();

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
    String& operator=(const String&);
};

__declspec(noinline) String::String(const String& other) {
    stringCopy(this, other);
}

inline String::~String() {
    stringDestroy(this);
}

inline String& String::operator=(const String& other) {
    return stringAssign(this, other);
}

struct Key {
    String text;
    unsigned char index;
    Key(const String&, unsigned char);
};

inline Key::Key(const String& textValue, unsigned char indexValue)
    : text(textValue), index(indexValue) {
}

struct Node {
    unsigned char padding[40];
    unsigned char index;
};

struct Container {
    unsigned char padding[24];
    Node* sentinel;
};

struct Proxy {
    Container* container;
};

struct Result {
    Proxy* proxy;
    Node* node;
    bool inserted;
};

struct Stream {
    void writeBits(const unsigned char*, int, bool);
};

extern void __cdecl writeString(Stream*, const String&);

struct S {
    unsigned char padding[32];
    String strings[128];
    int next;
    void encode(Stream*, const String&);
    Result* insert(Result*, const Key&);
    void remove(const String*);
};

void S::encode(Stream* stream, const String& text) {
    if (stringEqual(text, ">Authoring")) {
        unsigned char value = 0;
        stream->writeBits(&value, 8, true);
        return;
    }

    Result result;
    {
        Key key(text, (unsigned char)next);
        insert(&result, key);
    }

    if (!result.inserted) {
        Container* container;
        if (!result.proxy) {
            invalidParameter();
            container = 0;
        } else {
            container = result.proxy->container;
        }

        Node* node = result.node;
        if (node == container->sentinel)
            invalidParameter();

        unsigned char value = node->index;
        stream->writeBits(&value, 8, true);
        return;
    }

    remove(&strings[next]);
    strings[next] = text;
    unsigned char value = (unsigned char)next | 0x80;
    stream->writeBits(&value, 8, true);
    writeString(stream, text);
    next = next % 127 + 1;
}
