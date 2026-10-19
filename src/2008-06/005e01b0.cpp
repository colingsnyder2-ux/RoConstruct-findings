// from server: 90% by colin
// from server: 86% by king_originala
// roc 2008-06 005e01b0  unit: RBX::P8Lighting::?$GetSetImpl  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e01b0
//
// 005e01b0  6aff                 push -1
// 005e01b2  68c63e7d00           push 0x7d3ec6
// 005e01b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e01bd  50                   push eax
// 005e01be  64892500000000       mov dword ptr fs:[0], esp
// 005e01c5  81eca0000000         sub esp, 0xa0
// 005e01cb  6a01                 push 1
// 005e01cd  6a03                 push 3
// 005e01cf  8d4c2420             lea ecx, [esp + 0x20]
// 005e01d3  ff1528248000         call dword ptr [0x802428]
// 005e01d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e01dd  8b4004               mov eax, dword ptr [eax + 4]
// 005e01e0  83640428fe           and dword ptr [esp + eax + 0x28], 0xfffffffe
// 005e01e5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e01e9  8d440418             lea eax, [esp + eax + 0x18]
// 005e01ed  8b4104               mov eax, dword ptr [ecx + 4]
// 005e01f0  8d440418             lea eax, [esp + eax + 0x18]
// 005e01f4  c7401405000000       mov dword ptr [eax + 0x14], 5
// 005e01fb  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 005e0202  52                   push edx
// 005e0203  8d442424             lea eax, [esp + 0x24]
// 005e0207  50                   push eax
// 005e0208  c78424b000000000000000 mov dword ptr [esp + 0xb0], 0
// 005e0213  ff1584238000         call dword ptr [0x802384]
// 005e0219  8b08                 mov ecx, dword ptr [eax]
// 005e021b  8b5104               mov edx, dword ptr [ecx + 4]
// 005e021e  8b440208             mov eax, dword ptr [edx + eax + 8]
// 005e0222  83c408               add esp, 8
// 005e0225  a806                 test al, 6
// 005e0227  7568                 jne 0x5e0291
// 005e0229  8d0424               lea eax, [esp]
// 005e022c  50                   push eax
// 005e022d  8d4c241c             lea ecx, [esp + 0x1c]
// 005e0231  ff1524258000         call dword ptr [0x802524]
// 005e0237  8b08                 mov ecx, dword ptr [eax]
// 005e0239  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e023c  8b540108             mov edx, dword ptr [ecx + eax + 8]
// 005e0240  03c8                 add ecx, eax
// 005e0242  80e206               and dl, 6
// 005e0245  0fbec2               movsx eax, dl
// 005e0248  f7d8                 neg eax
// 005e024a  1bc0                 sbb eax, eax
// 005e024c  f7d0                 not eax
// 005e024e  85c1                 test ecx, eax
// 005e0250  743f                 je 0x5e0291
// 005e0252  8d4c2418             lea ecx, [esp + 0x18]
// 005e0256  ff1510258000         call dword ptr [0x802510]
// 005e025c  83f8ff               cmp eax, -1
// 005e025f  7530                 jne 0x5e0291
// 005e0261  56                   push esi
// 005e0262  0fb7742404           movzx esi, word ptr [esp + 4]
// 005e0267  8d4c241c             lea ecx, [esp + 0x1c]
// 005e026b  898424ac000000       mov dword ptr [esp + 0xac], eax
// 005e0272  ff152c248000         call dword ptr [0x80242c]
// 005e0278  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 005e027f  668bc6               mov ax, si
// 005e0282  5e                   pop esi
// 005e0283  64890d00000000       mov dword ptr fs:[0], ecx
// 005e028a  81c4ac000000         add esp, 0xac
// 005e0290  c3                   ret 
// 005e0291  6834ba8000           push 0x80ba34
// 005e0296  8d4c2408             lea ecx, [esp + 8]
// 005e029a  ff1564288000         call dword ptr [0x802864]
// 005e02a0  c744240424728200     mov dword ptr [esp + 4], 0x827224
// 005e02a8  c7442410f8be9200     mov dword ptr [esp + 0x10], 0x92bef8
// 005e02b0  c744241488469500     mov dword ptr [esp + 0x14], 0x954688
// 005e02b8  8d4c2404             lea ecx, [esp + 4]
// 005e02bc  51                   push ecx
// 005e02bd  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 005e02c5  e8c615f2ff           call 0x501890

namespace std {
    struct basic_string {
        char storage[28];
    };

    struct ios_base {
        void* table;
        long reserved;
        volatile int state;
        int exceptions;
        unsigned long format;
        int digits;
        char storage[32];

        void unsetf(unsigned long);
        int precision(int);
        bool fail() const;
    };

    inline void ios_base::unsetf(unsigned long mask) {
        format &= ~mask;
    }

    inline int ios_base::precision(int value) {
        int old = digits;
        digits = value;
        return old;
    }

    inline bool ios_base::fail() const {
        if ((state & 6) != 0)
            return true;
        return false;
    }

    struct basic_ios : ios_base {
        operator void*() const;
    };

    inline basic_ios::operator void*() const {
        return fail() ? 0 : const_cast<basic_ios*>(this);
    }

    struct basic_istream : virtual basic_ios {
        int count;
        basic_istream& operator>>(unsigned short&);
        int get();
    };

    struct basic_ostream : virtual basic_ios {
    };

    struct basic_stringstream : basic_istream, basic_ostream {
        char buffer[68];
    };
}

typedef void (__thiscall *StreamConstructor)(
    std::basic_stringstream*, int, int);
typedef void (__thiscall *StreamDestructor)(std::basic_stringstream*);
typedef std::basic_ostream& (__cdecl *StringInsertion)(
    std::basic_ostream&, const std::basic_string&);
typedef std::basic_istream& (__thiscall *ShortExtraction)(
    std::basic_istream*, unsigned short&);
typedef int (__thiscall *StreamGet)(std::basic_istream*);
typedef void (__thiscall *BadCastConstructor)(void*, const char*);

extern StreamConstructor constructStream;
extern StreamDestructor destroyStream;
extern StringInsertion insertString;
extern ShortExtraction extractShort;
extern StreamGet streamGet;
extern BadCastConstructor constructBadCast;

inline std::basic_istream&
std::basic_istream::operator>>(unsigned short& value) {
    return extractShort(this, value);
}

inline int std::basic_istream::get() {
    return streamGet(this);
}

struct StreamStorage {
    char storage[136];

    StreamStorage(int);
    ~StreamStorage();
    std::basic_stringstream& stream();
};

inline StreamStorage::StreamStorage(int mode) {
    constructStream(
        reinterpret_cast<std::basic_stringstream*>(storage), mode, 1);
}

inline StreamStorage::~StreamStorage() {
    destroyStream(reinterpret_cast<std::basic_stringstream*>(storage));
}

inline std::basic_stringstream& StreamStorage::stream() {
    return *reinterpret_cast<std::basic_stringstream*>(storage);
}

struct type_info;
extern const type_info source_type;
extern const type_info target_type;
extern unsigned char lexicalCastVtable;

struct bad_lexical_cast {
    void* vtable;
    unsigned long base[2];
    const type_info* source;
    const type_info* target;

    bad_lexical_cast();
    ~bad_lexical_cast();
};

inline bad_lexical_cast::bad_lexical_cast() {
    constructBadCast(
        this,
        "bad lexical cast: source type value could not be interpreted as target");
    vtable = &lexicalCastVtable;
    source = &source_type;
    target = &target_type;
}

__declspec(noreturn) void __cdecl raise(const bad_lexical_cast&);

unsigned short convert(const std::basic_string& text) {
    unsigned short value;
    StreamStorage storage(3);
    std::basic_stringstream& stream = storage.stream();

    stream.unsetf(1);
    stream.precision(5);

    if (!insertString(stream, text).fail() &&
        (stream >> value) &&
        stream.get() == -1)
        return value;

    bad_lexical_cast error;
    raise(error);
}
