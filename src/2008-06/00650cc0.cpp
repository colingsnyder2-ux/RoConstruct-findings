// from server: 90% by colin
// from server: 88% by king_originala
// roc 2008-06 00650cc0  unit: RBX::ChatOutput  size: 336 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00650cc0
//
// 00650cc0  6aff                 push -1
// 00650cc2  68f3b67d00           push 0x7db6f3
// 00650cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00650ccd  50                   push eax
// 00650cce  64892500000000       mov dword ptr fs:[0], esp
// 00650cd5  51                   push ecx
// 00650cd6  55                   push ebp
// 00650cd7  56                   push esi
// 00650cd8  57                   push edi
// 00650cd9  8bf1                 mov esi, ecx
// 00650cdb  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00650cde  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00650ce6  e8f5b1dfff           call 0x44bee0
// 00650ceb  3bb834010000         cmp edi, dword ptr [eax + 0x134]
// 00650cf1  7624                 jbe 0x650d17
// 00650cf3  8daebcfeffff         lea ebp, [esi - 0x144]
// 00650cf9  8da42400000000       lea esp, [esp]
// 00650d00  8bcd                 mov ecx, ebp
// 00650d02  e869f0ffff           call 0x64fd70
// 00650d07  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 00650d0a  e8d1b1dfff           call 0x44bee0
// 00650d0f  3bb834010000         cmp edi, dword ptr [eax + 0x134]
// 00650d15  77e9                 ja 0x650d00
// 00650d17  837c245400           cmp dword ptr [esp + 0x54], 0
// 00650d1c  763a                 jbe 0x650d58
// 00650d1e  837c245810           cmp dword ptr [esp + 0x58], 0x10
// 00650d23  8b442444             mov eax, dword ptr [esp + 0x44]
// 00650d27  7304                 jae 0x650d2d
// 00650d29  8d442444             lea eax, [esp + 0x44]
// 00650d2d  80382f               cmp byte ptr [eax], 0x2f
// 00650d30  7526                 jne 0x650d58
// 00650d32  83ec48               sub esp, 0x48
// 00650d35  8d44246c             lea eax, [esp + 0x6c]
// 00650d39  8bcc                 mov ecx, esp
// 00650d3b  89642454             mov dword ptr [esp + 0x54], esp
// 00650d3f  50                   push eax
// 00650d40  e83b57e4ff           call 0x496480
// 00650d45  8d8ebcfeffff         lea ecx, [esi - 0x144]
// 00650d4b  e810f9ffff           call 0x650660
// 00650d50  3c01                 cmp al, 1
// 00650d52  0f8493000000         je 0x650deb
// 00650d58  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00650d5b  8bb9a0010000         mov edi, dword ptr [ecx + 0x1a0]
// 00650d61  85ff                 test edi, edi
// 00650d63  7409                 je 0x650d6e
// 00650d65  80bfb101000000       cmp byte ptr [edi + 0x1b1], 0
// 00650d6c  757d                 jne 0x650deb
// 00650d6e  83ec1c               sub esp, 0x1c
// 00650d71  8d54245c             lea edx, [esp + 0x5c]
// 00650d75  8bcc                 mov ecx, esp
// 00650d77  89642428             mov dword ptr [esp + 0x28], esp
// 00650d7b  52                   push edx
// 00650d7c  ff155c248000         call dword ptr [0x80245c]
// 00650d82  8d4e10               lea ecx, [esi + 0x10]
// 00650d85  e8c6950100           call 0x66a350
// 00650d8a  85ff                 test edi, edi
// 00650d8c  740a                 je 0x650d98
// 00650d8e  397c245c             cmp dword ptr [esp + 0x5c], edi
// 00650d92  7404                 je 0x650d98
// 00650d94  84c0                 test al, al
// 00650d96  7553                 jne 0x650deb
// 00650d98  6a4c                 push 0x4c
// 00650d9a  e881fb0400           call 0x6a0920
// 00650d9f  83c404               add esp, 4
// 00650da2  8944240c             mov dword ptr [esp + 0xc], eax
// 00650da6  c644241801           mov byte ptr [esp + 0x18], 1
// 00650dab  85c0                 test eax, eax
// 00650dad  7420                 je 0x650dcf
// 00650daf  d94650               fld dword ptr [esi + 0x50]
// 00650db2  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00650db6  d8052c798300         fadd dword ptr [0x83792c]
// 00650dbc  51                   push ecx
// 00650dbd  8d4c2444             lea ecx, [esp + 0x44]
// 00650dc1  d91c24               fstp dword ptr [esp]
// 00650dc4  51                   push ecx
// 00650dc5  52                   push edx
// 00650dc6  8bc8                 mov ecx, eax
// 00650dc8  e893f7ffff           call 0x650560
// 00650dcd  eb02                 jmp 0x650dd1
// 00650dcf  33c0                 xor eax, eax
// 00650dd1  8944240c             mov dword ptr [esp + 0xc], eax
// 00650dd5  c6404800             mov byte ptr [eax + 0x48], 0
// 00650dd9  8d44240c             lea eax, [esp + 0xc]
// 00650ddd  50                   push eax
// 00650dde  8d4e30               lea ecx, [esi + 0x30]
// 00650de1  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00650de6  e84585f3ff           call 0x589330
// 00650deb  8d4c2424             lea ecx, [esp + 0x24]
// 00650def  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00650df7  e8c455e4ff           call 0x4963c0
// 00650dfc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00650e00  5f                   pop edi
// 00650e01  5e                   pop esi
// 00650e02  64890d00000000       mov dword ptr fs:[0], ecx
// 00650e09  5d                   pop ebp
// 00650e0a  83c410               add esp, 0x10
// 00650e0d  c24c00               ret 0x4c

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const String&);
    ~String();
};

struct Player {
    char padding[0x1B1];
    bool disabled;
};

struct Message {
    String first;
    String text;
    Player* sender;
    unsigned int extra[3];

    Message(const Message&);
    ~Message();
};

struct Settings {
    char padding[0x134];
    unsigned int limit;
};

Settings* __cdecl getSettings();
extern float lifetime;

struct Owner {
    char padding[0x1A0];
    Player* player;
};

struct Filter {
    char storage[0x20];
    __declspec(dllimport) bool check(String);
};

struct Entry {
    char storage[0x48];
    bool flag;
    char padding[3];

    Entry(Player*, const String&, float);
};

struct Queue {
    char storage[0x1C];
    void append(Entry* const&);
};

struct Base {
    void removeOldest();
    bool command(Message);
};

struct S {
    char padding[0x0C];
    Owner* owner;
    Filter filter;
    Queue queue;
    unsigned int count;
    float time;

    void f(unsigned int, Message);
};

#pragma float_control(precise, off)

void S::f(unsigned int, Message message)
{
    unsigned int current = count;
    while (current > getSettings()->limit) {
        reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x144)->removeOldest();
        current = count;
    }

    if (message.text.length > 0) {
        const char* text = message.text.pointer;
        if (message.text.capacity < 16)
            text = message.text.buffer;
        if (text[0] == '/') {
            if (reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 0x144)->command(message) == true)
                return;
        }
    }

    Player* player = owner->player;
    if (player && player->disabled)
        return;

    bool accepted = filter.check(message.text);
    if (player && message.sender != player && accepted)
        return;

    Entry* entry;
    entry = new Entry(message.sender, message.text, time + lifetime);
    entry->flag = false;
    queue.append(entry);
}
