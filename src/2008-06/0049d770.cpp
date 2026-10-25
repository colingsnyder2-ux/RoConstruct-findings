// from server: 93% by colin
// roc 2008-06 0049d770  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 732 bytes
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
// 0049d881  8d4d28               lea ecx, [ebp + 0x28]
// 0049d884  51                   push ecx
// 0049d885  e896bd0c00           call 0x569620
// 0049d88a  83c404               add esp, 4
// 0049d88d  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 0049d890  8b11                 mov edx, dword ptr [ecx]
// 0049d892  8b30                 mov esi, dword ptr [eax]
// 0049d894  8b4204               mov eax, dword ptr [edx + 4]
// 0049d897  c645fc0c             mov byte ptr [ebp - 4], 0xc
// 0049d89b  ffd0                 call eax
// 0049d89d  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 0049d8a0  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0049d8a3  50                   push eax
// 0049d8a4  0fb602               movzx eax, byte ptr [edx]
// 0049d8a7  50                   push eax
// 0049d8a8  68382b8200           push 0x822b38
// 0049d8ad  6a03                 push 3
// 0049d8af  56                   push esi
// 0049d8b0  e8ebba0c00           call 0x5693a0
// 0049d8b5  83c414               add esp, 0x14
// 0049d8b8  8d4d28               lea ecx, [ebp + 0x28]
// 0049d8bb  c645fc0b             mov byte ptr [ebp - 4], 0xb
// 0049d8bf  e89c2d1600           call 0x600660
// 0049d8c4  b869d84900           mov eax, 0x49d869
// 0049d8c9  c3                   ret 
// 0049d8ca  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049d8cd  8b5614               mov edx, dword ptr [esi + 0x14]
// 0049d8d0  33db                 xor ebx, ebx
// 0049d8d2  53                   push ebx
// 0049d8d3  51                   push ecx
// 0049d8d4  52                   push edx
// 0049d8d5  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d8db  895dfc               mov dword ptr [ebp - 4], ebx
// 0049d8de  e83d780000           call 0x4a5120
// 0049d8e3  6a08                 push 8
// 0049d8e5  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d8eb  c645fc01             mov byte ptr [ebp - 4], 1
// 0049d8ef  e87c7b0000           call 0x4a5470
// 0049d8f4  8d4d00               lea ecx, [ebp]
// 0049d8f7  ff1560248000         call dword ptr [0x802460]
// 0049d8fd  8d4500               lea eax, [ebp]
// 0049d900  50                   push eax
// 0049d901  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d907  51                   push ecx
// 0049d908  c645fc02             mov byte ptr [ebp - 4], 2
// 0049d90c  e8ff8c0000           call 0x4a6610
// 0049d911  8d5500               lea edx, [ebp]
// 0049d914  83c408               add esp, 8
// 0049d917  52                   push edx
// 0049d918  e863680b00           call 0x554180
// 0049d91d  894558               mov dword ptr [ebp + 0x58], eax
// 0049d920  83c404               add esp, 4
// 0049d923  8d455c               lea eax, [ebp + 0x5c]
// 0049d926  50                   push eax
// 0049d927  8d8d94feffff         lea ecx, [ebp - 0x16c]
// 0049d92d  51                   push ecx
// 0049d92e  e81d890000           call 0x4a6250
// 0049d933  83c408               add esp, 8
// 0049d936  8d5560               lea edx, [ebp + 0x60]
// 0049d939  52                   push edx
// 0049d93a  8d4558               lea eax, [ebp + 0x58]
// 0049d93d  50                   push eax
// 0049d93e  895d60               mov dword ptr [ebp + 0x60], ebx
// 0049d941  e83ae1ffff           call 0x49ba80
// 0049d946  83c408               add esp, 8
// 0049d949  8d4d3c               lea ecx, [ebp + 0x3c]
// 0049d94c  ff1560248000         call dword ptr [0x802460]
// 0049d952  8d4d3c               lea ecx, [ebp + 0x3c]
// 0049d955  51                   push ecx
// 0049d956  8d9594feffff         lea edx, [ebp - 0x16c]
// 0049d95c  52                   push edx
// 0049d95d  c645fc03             mov byte ptr [ebp - 4], 3
// 0049d961  e8aa8c0000           call 0x4a6610
// 0049d966  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0049d969  83c408               add esp, 8
// 0049d96c  3bc3                 cmp eax, ebx
// 0049d96e  7548                 jne 0x49d9b8
// 0049d970  8d4534               lea eax, [ebp + 0x34]
// 0049d973  50                   push eax
// 0049d974  e8a7bc0c00           call 0x569620
// 0049d979  83c404               add esp, 4
// 0049d97c  837d5410             cmp dword ptr [ebp + 0x54], 0x10
// 0049d980  8b5d40               mov ebx, dword ptr [ebp + 0x40]
// 0049d983  c645fc04             mov byte ptr [ebp - 4], 4
// 0049d987  7303                 jae 0x49d98c
// 0049d989  8d5d40               lea ebx, [ebp + 0x40]
// 0049d98c  8b38                 mov edi, dword ptr [eax]
// 0049d98e  6a01                 push 1
// 0049d990  8d4e04               lea ecx, [esi + 4]
// 0049d993  e818bf0000           call 0x4a98b0
// 0049d998  53                   push ebx
// 0049d999  50                   push eax
// 0049d99a  68102b8200           push 0x822b10
// 0049d99f  6a02                 push 2
// 0049d9a1  57                   push edi
// 0049d9a2  e8f9b90c00           call 0x5693a0
// 0049d9a7  83c414               add esp, 0x14
// 0049d9aa  8d4d34               lea ecx, [ebp + 0x34]
// 0049d9ad  c645fc03             mov byte ptr [ebp - 4], 3
// 0049d9b1  e8aa2c1600           call 0x600660
// 0049d9b6  eb71                 jmp 0x49da29
// 0049d9b8  39b804010000         cmp dword ptr [eax + 0x104], edi
// 0049d9be  7569                 jne 0x49da29
// 0049d9c0  83ec08               sub esp, 8
// 0049d9c3  05e4000000           add eax, 0xe4
// 0049d9c8  8bcc                 mov ecx, esp
// 0049d9ca  896560               mov dword ptr [ebp + 0x60], esp
// 0049d9cd  50                   push eax
// 0049d9ce  51                   push ecx
// 0049d9cf  e85c9b0200           call 0x4c7530
// 0049d9d4  8b4540               mov eax, dword ptr [ebp + 0x40]
// 0049d9d7  83c408               add esp, 8
// 0049d9da  837d5410             cmp dword ptr [ebp + 0x54], 0x10
// 0049d9de  7303                 jae 0x49d9e3
// 0049d9e0  8d4540               lea eax, [ebp + 0x40]
// 0049d9e3  50                   push eax
// 0049d9e4  8d4da8               lea ecx, [ebp - 0x58]
// 0049d9e7  e83492ffff           call 0x496c20
// 0049d9ec  8d55a8               lea edx, [ebp - 0x58]
// 0049d9ef  52                   push edx
// 0049d9f0  8bcf                 mov ecx, edi
// 0049d9f2  c645fc05             mov byte ptr [ebp - 4], 5
// 0049d9f6  e835fcffff           call 0x49d630
// 0049d9fb  8b5608               mov edx, dword ptr [esi + 8]
// 0049d9fe  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 0049da01  8b01                 mov eax, dword ptr [ecx]
// 0049da03  8b4038               mov eax, dword ptr [eax + 0x38]
// 0049da06  6a01                 push 1
// 0049da08  52                   push edx
// 0049da09  8b5604               mov edx, dword ptr [esi + 4]
// 0049da0c  52                   push edx
// 0049da0d  8b560c               mov edx, dword ptr [esi + 0xc]
// 0049da10  6a02                 push 2
// 0049da12  6a02                 push 2
// 0049da14  6a01                 push 1
// 0049da16  52                   push edx
// 0049da17  8b5614               mov edx, dword ptr [esi + 0x14]
// 0049da1a  52                   push edx
// 0049da1b  ffd0                 call eax
// 0049da1d  8d4da8               lea ecx, [ebp - 0x58]
// 0049da20  c645fc03             mov byte ptr [ebp - 4], 3
// 0049da24  e89789ffff           call 0x4963c0
// 0049da29  8d4d3c               lea ecx, [ebp + 0x3c]
// 0049da2c  c645fc02             mov byte ptr [ebp - 4], 2
// 0049da30  ff1568248000         call dword ptr [0x802468]
// 0049da36  8d4d00               lea ecx, [ebp]
// 0049da39  c645fc01             mov byte ptr [ebp - 4], 1
// 0049da3d  ff1568248000         call dword ptr [0x802468]
// 0049da43  c645fc00             mov byte ptr [ebp - 4], 0
// 0049da47  e912feffff           jmp 0x49d85e

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
