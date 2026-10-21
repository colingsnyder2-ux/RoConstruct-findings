// from server: 93% by colin
// roc 2008-06 0049d770  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d770
//
// 0049d770  55                   push ebp
// 0049d771  8d6c249c             lea ebp, [esp - 0x64]
// 0049d775  83ec64               sub esp, 0x64
// 0049d778  6aff                 push -1
// 0049d77a  6870747c00           push 0x7c7470
// 0049d77f  64a100000000         mov eax, dword ptr fs:[0]
// 0049d785  50                   push eax
// 0049d786  64892500000000       mov dword ptr fs:[0], esp
// 0049d78d  81ec60010000         sub esp, 0x160
// 0049d793  53                   push ebx
// 0049d794  56                   push esi
// 0049d795  8b7570               mov esi, dword ptr [ebp + 0x70]
// 0049d798  8b4614               mov eax, dword ptr [esi + 0x14]
// 0049d79b  0fb600               movzx eax, byte ptr [eax]
// 0049d79e  83e851               sub eax, 0x51
// 0049d7a1  57                   push edi
// 0049d7a2  8965f0               mov dword ptr [ebp - 0x10], esp
// 0049d7a5  8bf9                 mov edi, ecx
// 0049d7a7  0f841d010000         je 0x49d8ca
// 0049d7ad  83e801               sub eax, 1
// 0049d7b0  7407                 je 0x49d7b9
// 0049d7b2  b001                 mov al, 1
// 0049d7b4  e9b2000000           jmp 0x49d86b
// 0049d7b9  83bf7401000000       cmp dword ptr [edi + 0x174], 0
// 0049d7c0  c745fc08000000       mov dword ptr [ebp - 4], 8
// 0049d7c7  0f849c000000         je 0x49d869
// 0049d7cd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049d7d0  8b5614               mov edx, dword ptr [esi + 0x14]
// 0049d7d3  6a00                 push 0
// 0049d7d5  51                   push ecx
// 0049d7d6  52                   push edx
// 0049d7d7  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d7dd  e83e790000           call 0x4a5120
// 0049d7e2  b309                 mov bl, 9
// 0049d7e4  6a08                 push 8
// 0049d7e6  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d7ec  885dfc               mov byte ptr [ebp - 4], bl
// 0049d7ef  e87c7c0000           call 0x4a5470
// 0049d7f4  8d4db0               lea ecx, [ebp - 0x50]
// 0049d7f7  e824bbffff           call 0x499320
// 0049d7fc  8d45b0               lea eax, [ebp - 0x50]
// 0049d7ff  50                   push eax
// 0049d800  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d806  51                   push ecx
// 0049d807  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 0049d80b  e8408a0000           call 0x4a6250
// 0049d810  83c408               add esp, 8
// 0049d813  8d55b4               lea edx, [ebp - 0x4c]
// 0049d816  52                   push edx
// 0049d817  8d8594feffff         lea eax, [ebp - 0x16c]
// 0049d81d  50                   push eax
// 0049d81e  e82d8a0000           call 0x4a6250
// 0049d823  83c408               add esp, 8
// 0049d826  8d4db8               lea ecx, [ebp - 0x48]
// 0049d829  51                   push ecx
// 0049d82a  8d9594feffff         lea edx, [ebp - 0x16c]
// 0049d830  52                   push edx
// 0049d831  e8da8d0000           call 0x4a6610
// 0049d836  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 0049d83c  83c408               add esp, 8
// 0049d83f  81c778010000         add edi, 0x178
// 0049d845  57                   push edi
// 0049d846  8d45b0               lea eax, [ebp - 0x50]
// 0049d849  50                   push eax
// 0049d84a  e8c1eeffff           call 0x49c710
// 0049d84f  8d4db0               lea ecx, [ebp - 0x50]
// 0049d852  885dfc               mov byte ptr [ebp - 4], bl
// 0049d855  e816bbffff           call 0x499370
// 0049d85a  c645fc08             mov byte ptr [ebp - 4], 8
// 0049d85e  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d864  e837790000           call 0x4a51a0
// 0049d869  32c0                 xor al, al
// 0049d86b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049d86e  5f                   pop edi
// 0049d86f  5e                   pop esi
// 0049d870  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d877  5b                   pop ebx
// 0049d878  83c564               add ebp, 0x64
// 0049d87b  8be5                 mov esp, ebp
// 0049d87d  5d                   pop ebp
// 0049d87e  c20800               ret 8

// from server: 88% by king_originala
struct Packet {
    unsigned char reserved[12];
    unsigned int length;
    unsigned int reserved10;
    unsigned char* data;
};

struct Stream {
    unsigned char storage[284];
    Stream(unsigned char*, unsigned int, bool);
    ~Stream();
    void skip(unsigned int);
};

struct Message {
    unsigned int first;
    unsigned int second;
    unsigned char third[56];
    Message();
    ~Message();
};

struct SmallMessage {
    unsigned char storage[16];
    SmallMessage();
    ~SmallMessage();
};

struct TinyMessage {
    unsigned char storage[4];
    TinyMessage();
    ~TinyMessage();
};

extern void __cdecl readWord(Stream*, unsigned int*);
extern void __cdecl readValue(Stream*, unsigned char*);

struct Handler {
    void invoke(Message*, void*);
};

struct S {
    unsigned char reserved[372];
    Handler* handler;
    unsigned char context[4];
    bool process(unsigned int, volatile Packet*);
};

bool S::process(unsigned int, volatile Packet* packet)
{
    S* owner = this;
    switch (packet->data[0]) {
    case 0x51:
        try {
            SmallMessage a;
            SmallMessage b;
            SmallMessage c;
            SmallMessage d;
            SmallMessage e;
            SmallMessage f;
            TinyMessage g;
            volatile unsigned int length = packet->length;
        }
        catch (...) {
        }
        break;

    case 0x52:
        try {
            if (owner->handler) {
                Stream stream(packet->data, packet->length, false);
                stream.skip(8);
                Message message;
                readWord(&stream, &message.first);
                readWord(&stream, &message.second);
                readValue(&stream, message.third);
                Handler* callback = owner->handler;
                owner = reinterpret_cast<S*>(
                    reinterpret_cast<unsigned char*>(owner) + 376);
                callback->invoke(&message, owner);
            }
        }
        catch (...) {
        }
        break;

    default:
        return true;
    }
    return false;
}
