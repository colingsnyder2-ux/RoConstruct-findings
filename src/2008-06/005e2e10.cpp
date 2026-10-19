// from server: 83% by colin
// from server: 82% by king_originala
// roc 2008-06 005e2e10  unit: RBX::JointInstance  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2e10
//
// 005e2e10  6aff                 push -1
// 005e2e12  688e657d00           push 0x7d658e
// 005e2e17  64a100000000         mov eax, dword ptr fs:[0]
// 005e2e1d  50                   push eax
// 005e2e1e  64892500000000       mov dword ptr fs:[0], esp
// 005e2e25  51                   push ecx
// 005e2e26  56                   push esi
// 005e2e27  8bf1                 mov esi, ecx
// 005e2e29  57                   push edi
// 005e2e2a  8dbe30010000         lea edi, [esi + 0x130]
// 005e2e30  89742408             mov dword ptr [esp + 8], esi
// 005e2e34  c70654e38300         mov dword ptr [esi], 0x83e354
// 005e2e3a  c7461044e38300       mov dword ptr [esi + 0x10], 0x83e344
// 005e2e41  c746143ce38300       mov dword ptr [esi + 0x14], 0x83e33c
// 005e2e48  c7462034e38300       mov dword ptr [esi + 0x20], 0x83e334
// 005e2e4f  c7462424e38300       mov dword ptr [esi + 0x24], 0x83e324
// 005e2e56  c7464414e38300       mov dword ptr [esi + 0x44], 0x83e314
// 005e2e5d  c7466404e38300       mov dword ptr [esi + 0x64], 0x83e304
// 005e2e64  c78684000000f4e28300 mov dword ptr [esi + 0x84], 0x83e2f4
// 005e2e6e  c786a4000000e4e28300 mov dword ptr [esi + 0xa4], 0x83e2e4
// 005e2e78  c786c4000000d4e28300 mov dword ptr [esi + 0xc4], 0x83e2d4
// 005e2e82  c707bce28300         mov dword ptr [edi], 0x83e2bc
// 005e2e88  6a00                 push 0
// 005e2e8a  6a00                 push 0
// 005e2e8c  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 005e2e94  e837feffff           call 0x5e2cd0
// 005e2e99  6a00                 push 0
// 005e2e9b  6a01                 push 1
// 005e2e9d  8bce                 mov ecx, esi
// 005e2e9f  e82cfeffff           call 0x5e2cd0
// 005e2ea4  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005e2eaa  6a00                 push 0
// 005e2eac  e8ef250600           call 0x6454a0
// 005e2eb1  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005e2eb7  85c9                 test ecx, ecx
// 005e2eb9  7408                 je 0x5e2ec3
// 005e2ebb  8b01                 mov eax, dword ptr [ecx]
// 005e2ebd  8b10                 mov edx, dword ptr [eax]
// 005e2ebf  6a01                 push 1
// 005e2ec1  ffd2                 call edx
// 005e2ec3  68e0765500           push 0x5576e0
// 005e2ec8  6a02                 push 2
// 005e2eca  6a08                 push 8
// 005e2ecc  8d8640010000         lea eax, [esi + 0x140]
// 005e2ed2  50                   push eax
// 005e2ed3  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 005e2edd  c644242401           mov byte ptr [esp + 0x24], 1
// 005e2ee2  e874e70b00           call 0x6a165b
// 005e2ee7  8bcf                 mov ecx, edi
// 005e2ee9  c644241400           mov byte ptr [esp + 0x14], 0
// 005e2eee  e81da5e9ff           call 0x47d410
// 005e2ef3  8bce                 mov ecx, esi
// 005e2ef5  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e2efd  e83e76f7ff           call 0x55a540
// 005e2f02  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e2f06  5f                   pop edi
// 005e2f07  5e                   pop esi
// 005e2f08  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2f0f  83c410               add esp, 0x10
// 005e2f12  c3                   ret 
#include <intrin.h>

struct Base {
    unsigned int words[76];
    ~Base();
};

struct Member {
    unsigned int words[4];
    ~Member();
};

struct Element {
    unsigned int words[2];
    ~Element();
};

struct Object {
    virtual ~Object();
    char padding[28];
    int m_x;
    void f(int);
};

struct S : Base {
    Member member;
    Element elements[2];
    Object* object;

    void setPart(int, int);
    ~S();
};

S::~S()
{
    words[0] = 0x83e354;
    words[4] = 0x83e344;
    words[5] = 0x83e33c;
    _ReadWriteBarrier();
    words[8] = 0x83e334;
    words[9] = 0x83e324;
    words[17] = 0x83e314;
    words[25] = 0x83e304;
    words[33] = 0x83e2f4;
    words[41] = 0x83e2e4;
    words[49] = 0x83e2d4;
    member.words[0] = 0x83e2bc;

    setPart(0, 0);
    setPart(1, 0);
    object->f(0);
    if (object)
        delete object;
    object = 0;
}
