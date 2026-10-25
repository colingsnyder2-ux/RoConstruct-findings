// from server: 100% by king_originala
// roc 2008-06 004a6b80  unit: RBX::VHint::?$FactoryProduct::Creator  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6b80
//
// 004a6b80  64a100000000         mov eax, dword ptr fs:[0]
// 004a6b86  6aff                 push -1
// 004a6b88  68257f7c00           push 0x7c7f25
// 004a6b8d  50                   push eax
// 004a6b8e  64892500000000       mov dword ptr fs:[0], esp
// 004a6b95  81eca0000000         sub esp, 0xa0
// 004a6b9b  56                   push esi
// 004a6b9c  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 004a6ba3  57                   push edi
// 004a6ba4  8bbc24bc000000       mov edi, dword ptr [esp + 0xbc]
// 004a6bab  8d4724               lea eax, [edi + 0x24]
// 004a6bae  50                   push eax
// 004a6baf  56                   push esi
// 004a6bb0  e80bfcffff           call 0x4a67c0
// 004a6bb5  8d4c2413             lea ecx, [esp + 0x13]
// 004a6bb9  51                   push ecx
// 004a6bba  56                   push esi
// 004a6bbb  e870efffff           call 0x4a5b30
// 004a6bc0  83c410               add esp, 0x10
// 004a6bc3  807c240b00           cmp byte ptr [esp + 0xb], 0
// 004a6bc8  7466                 je 0x4a6c30
// 004a6bca  6a01                 push 1
// 004a6bcc  6a06                 push 6
// 004a6bce  8d542414             lea edx, [esp + 0x14]
// 004a6bd2  52                   push edx
// 004a6bd3  8bce                 mov ecx, esi
// 004a6bd5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a6bdd  e82ee6ffff           call 0x4a5210
// 004a6be2  84c0                 test al, al
// 004a6be4  7537                 jne 0x4a6c1d
// 004a6be6  68403e8200           push 0x823e40
// 004a6beb  8d4c2424             lea ecx, [esp + 0x24]
// 004a6bef  ff1558248000         call dword ptr [0x802458]
// 004a6bf5  8d442420             lea eax, [esp + 0x20]
// 004a6bf9  50                   push eax
// 004a6bfa  8d4c245c             lea ecx, [esp + 0x5c]
// 004a6bfe  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 004a6c09  e84231f6ff           call 0x409d50
// 004a6c0e  68c81b8d00           push 0x8d1bc8
// 004a6c13  8d4c245c             lea ecx, [esp + 0x5c]
// 004a6c17  51                   push ecx
// 004a6c18  e86fa91f00           call 0x6a158c
// 004a6c1d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004a6c21  57                   push edi
// 004a6c22  52                   push edx
// 004a6c23  e8b8701300           call 0x5ddce0
// 004a6c28  83c408               add esp, 8
// 004a6c2b  e983000000           jmp 0x4a6cb3
// 004a6c30  d9ee                 fldz 
// 004a6c32  8d442418             lea eax, [esp + 0x18]
// 004a6c36  50                   push eax
// 004a6c37  d9542414             fst dword ptr [esp + 0x14]
// 004a6c3b  d9542418             fst dword ptr [esp + 0x18]
// 004a6c3f  8d4c2418             lea ecx, [esp + 0x18]
// 004a6c43  51                   push ecx
// 004a6c44  d95c2420             fstp dword ptr [esp + 0x20]
// 004a6c48  d9e8                 fld1 
// 004a6c4a  8d542418             lea edx, [esp + 0x18]
// 004a6c4e  52                   push edx
// 004a6c4f  d95c2428             fstp dword ptr [esp + 0x28]
// 004a6c53  8d442428             lea eax, [esp + 0x28]
// 004a6c57  50                   push eax
// 004a6c58  8bce                 mov ecx, esi
// 004a6c5a  e8c1f2ffff           call 0x4a5f20
// 004a6c5f  84c0                 test al, al
// 004a6c61  753d                 jne 0x4a6ca0
// 004a6c63  680c3e8200           push 0x823e0c
// 004a6c68  8d4c2440             lea ecx, [esp + 0x40]
// 004a6c6c  ff1558248000         call dword ptr [0x802458]
// 004a6c72  8d4c243c             lea ecx, [esp + 0x3c]
// 004a6c76  51                   push ecx
// 004a6c77  8d8c2484000000       lea ecx, [esp + 0x84]
// 004a6c7e  c78424b400000001000000 mov dword ptr [esp + 0xb4], 1
// 004a6c89  e8c230f6ff           call 0x409d50
// 004a6c8e  68c81b8d00           push 0x8d1bc8
// 004a6c93  8d942484000000       lea edx, [esp + 0x84]
// 004a6c9a  52                   push edx
// 004a6c9b  e8eca81f00           call 0x6a158c
// 004a6ca0  57                   push edi
// 004a6ca1  8d4c2414             lea ecx, [esp + 0x14]
// 004a6ca5  e8266a1300           call 0x5dd6d0
// 004a6caa  57                   push edi
// 004a6cab  e8f0831300           call 0x5df0a0
// 004a6cb0  83c404               add esp, 4
// 004a6cb3  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 004a6cba  5f                   pop edi
// 004a6cbb  8bc6                 mov eax, esi
// 004a6cbd  5e                   pop esi
// 004a6cbe  64890d00000000       mov dword ptr fs:[0], ecx
// 004a6cc5  81c4ac000000         add esp, 0xac
// 004a6ccb  c3                   ret 

extern void (__thiscall *constructString)(void*, const char*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        constructString(this, text);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        void* data;
        int owned;
    public:
        virtual ~exception();
    };

    class runtime_error : public exception {
        string message;
    public:
        runtime_error(const string&);
        virtual ~runtime_error();
    };
}

struct Frame {
    float rotation[9];
    float position[3];
};

struct Quaternion {
    float x, y, z, w;
    void apply(Frame*);
};

struct Stream {
    bool readBits(void*, int, bool);
    bool readNormQuat(float&, float&, float&, float&);
};

extern Stream& __cdecl readPosition(Stream&, float*);
extern Stream& __cdecl readFlag(Stream&, bool&);
extern void __cdecl applyOrientation(int, Frame*);
extern void __cdecl finishFrame(Frame*);

Stream& __cdecl readFrame(Stream& stream, Frame& frame)
{
    readPosition(stream, frame.position);

    bool compressed;
    readFlag(stream, compressed);

    if (compressed) {
        int orientation = 0;
        if (!stream.readBits(&orientation, 6, true))
            throw std::runtime_error("BitStream >> CoordinateFrame orientId failed");
        applyOrientation(orientation, &frame);
    } else {
        Quaternion rotation;
        rotation.x = 0.0f;
        rotation.y = 0.0f;
        rotation.z = 0.0f;
        rotation.w = 1.0f;

        if (!stream.readNormQuat(rotation.w, rotation.x, rotation.y, rotation.z))
            throw std::runtime_error("BitStream >> CoordinateFrame ReadNormQuat failed");

        rotation.apply(&frame);
        finishFrame(&frame);
    }

    return stream;
}
