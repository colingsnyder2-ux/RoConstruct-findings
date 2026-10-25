// from server: 80% by colin
// roc 2008-06 004cbc10  unit: RBX::VInstance::?$NonFactoryProduct  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbc10
//
// 004cbc10  55                   push ebp
// 004cbc11  8bec                 mov ebp, esp
// 004cbc13  6aff                 push -1
// 004cbc15  68a0987c00           push 0x7c98a0
// 004cbc1a  64a100000000         mov eax, dword ptr fs:[0]
// 004cbc20  50                   push eax
// 004cbc21  64892500000000       mov dword ptr fs:[0], esp
// 004cbc28  83ec10               sub esp, 0x10
// 004cbc2b  53                   push ebx
// 004cbc2c  56                   push esi
// 004cbc2d  57                   push edi
// 004cbc2e  8b7d08               mov edi, dword ptr [ebp + 8]
// 004cbc31  8965f0               mov dword ptr [ebp - 0x10], esp
// 004cbc34  c645ec00             mov byte ptr [ebp - 0x14], 0
// 004cbc38  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004cbc3b  50                   push eax
// 004cbc3c  57                   push edi
// 004cbc3d  8bf1                 mov esi, ecx
// 004cbc3f  57                   push edi
// 004cbc40  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004cbc43  e8f8f2ffff           call 0x4caf40
// 004cbc48  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004cbc4f  84c0                 test al, al
// 004cbc51  0f85cc000000         jne 0x4cbd23
// 004cbc57  85f6                 test esi, esi
// 004cbc59  7405                 je 0x4cbc60
// 004cbc5b  8d46f4               lea eax, [esi - 0xc]
// 004cbc5e  eb02                 jmp 0x4cbc62
// 004cbc60  33c0                 xor eax, eax
// 004cbc62  8b5804               mov ebx, dword ptr [eax + 4]
// 004cbc65  85f6                 test esi, esi
// 004cbc67  7405                 je 0x4cbc6e
// 004cbc69  8d46f4               lea eax, [esi - 0xc]
// 004cbc6c  eb02                 jmp 0x4cbc70
// 004cbc6e  33c0                 xor eax, eax
// 004cbc70  8b5004               mov edx, dword ptr [eax + 4]
// 004cbc73  85f6                 test esi, esi
// 004cbc75  7405                 je 0x4cbc7c
// 004cbc77  8d46f4               lea eax, [esi - 0xc]
// 004cbc7a  eb02                 jmp 0x4cbc7e
// 004cbc7c  33c0                 xor eax, eax
// 004cbc7e  8b4004               mov eax, dword ptr [eax + 4]
// 004cbc81  8d4850               lea ecx, [eax + 0x50]
// 004cbc84  85ff                 test edi, edi
// 004cbc86  7405                 je 0x4cbc8d
// 004cbc88  8d4750               lea eax, [edi + 0x50]
// 004cbc8b  eb02                 jmp 0x4cbc8f
// 004cbc8d  33c0                 xor eax, eax
// 004cbc8f  83c358               add ebx, 0x58
// 004cbc92  53                   push ebx
// 004cbc93  83c254               add edx, 0x54
// 004cbc96  52                   push edx
// 004cbc97  51                   push ecx
// 004cbc98  50                   push eax
// 004cbc99  e842adffff           call 0x4c69e0
// 004cbc9e  8b4744               mov eax, dword ptr [edi + 0x44]
// 004cbca1  83c410               add esp, 0x10
// 004cbca4  c645ec00             mov byte ptr [ebp - 0x14], 0
// 004cbca8  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004cbcab  51                   push ecx
// 004cbcac  8d55e8               lea edx, [ebp - 0x18]
// 004cbcaf  52                   push edx
// 004cbcb0  50                   push eax
// 004cbcb1  8bce                 mov ecx, esi
// 004cbcb3  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004cbcba  e8c1f5ffff           call 0x4cb280
// 004cbcbf  84c0                 test al, al
// 004cbcc1  7532                 jne 0x4cbcf5
// 004cbcc3  57                   push edi
// 004cbcc4  8bce                 mov ecx, esi
// 004cbcc6  e835f6ffff           call 0x4cb300
// 004cbccb  32c0                 xor al, al
// 004cbccd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cbcd0  64890d00000000       mov dword ptr fs:[0], ecx
// 004cbcd7  5f                   pop edi
// 004cbcd8  5e                   pop esi
// 004cbcd9  5b                   pop ebx
// 004cbcda  8be5                 mov esp, ebp
// 004cbcdc  5d                   pop ebp
// 004cbcdd  c20400               ret 4
// 004cbce0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004cbce3  51                   push ecx
// 004cbce4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004cbce7  e814f6ffff           call 0x4cb300
// 004cbcec  6a00                 push 0
// 004cbcee  6a00                 push 0
// 004cbcf0  e897581d00           call 0x6a158c
// 004cbcf5  85f6                 test esi, esi
// 004cbcf7  7405                 je 0x4cbcfe
// 004cbcf9  8d46f4               lea eax, [esi - 0xc]
// 004cbcfc  eb02                 jmp 0x4cbd00
// 004cbcfe  33c0                 xor eax, eax
// 004cbd00  8b4004               mov eax, dword ptr [eax + 4]
// 004cbd03  85c0                 test eax, eax
// 004cbd05  7405                 je 0x4cbd0c
// 004cbd07  83c050               add eax, 0x50
// 004cbd0a  eb02                 jmp 0x4cbd0e
// 004cbd0c  33c0                 xor eax, eax
// 004cbd0e  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004cbd11  50                   push eax
// 004cbd12  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004cbd15  52                   push edx
// 004cbd16  8d4f50               lea ecx, [edi + 0x50]
// 004cbd19  50                   push eax
// 004cbd1a  51                   push ecx
// 004cbd1b  e860acffff           call 0x4c6980
// 004cbd20  83c410               add esp, 0x10
// 004cbd23  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cbd26  5f                   pop edi
// 004cbd27  5e                   pop esi
// 004cbd28  b001                 mov al, 1
// 004cbd2a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cbd31  5b                   pop ebx
// 004cbd32  8be5                 mov esp, ebp
// 004cbd34  5d                   pop ebp
// 004cbd35  c20400               ret 4

// from server: 86% by king_originala
struct Flag {
    unsigned char value;
    Flag() : value(0) {}
    ~Flag() {}
};

struct Object {
    char padding[0x44];
    unsigned int key;
    char reserved[8];
    float x, y, z;
};

struct State {
    char padding[0x50];
    float x, y, z;
};

extern "C" void __cdecl copyValues(float *, float *, float *, float *);

struct Part {
    bool check(Object *, Object *, Flag);
    bool update(unsigned int, unsigned int *, Flag);
    void release(Object *);
    bool f(Object *);
};

struct Prefix {
    unsigned int reserved;
    State *state;
    unsigned int extra;
};

struct Complete : Prefix, Part {};

bool Part::f(Object *object)
{
    if (!check(object, object, Flag())) {
        State *zs = static_cast<Complete *>(this)->state;
        State *ys = static_cast<Complete *>(this)->state;
        float *x = &static_cast<Complete *>(this)->state->x;
        copyValues(object ? &object->x : 0, x, &ys->y, &zs->z);

        unsigned int result;
        try {
            if (!update(object->key, &result, Flag())) {
                release(object);
                return false;
            }
        } catch (...) {
            release(object);
            throw;
        }
    }
    return true;
}
