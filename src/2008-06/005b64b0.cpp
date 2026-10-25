// from server: 100% by king_originala
// roc 2008-06 005b64b0  unit: RBX::FillTool  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b64b0
//
// 005b64b0  8b442404             mov eax, dword ptr [esp + 4]
// 005b64b4  56                   push esi
// 005b64b5  68e0be9700           push 0x97bee0
// 005b64ba  6a00                 push 0
// 005b64bc  50                   push eax
// 005b64bd  8bf1                 mov esi, ecx
// 005b64bf  e8ccf80500           call 0x615d90
// 005b64c4  85c0                 test eax, eax
// 005b64c6  745a                 je 0x5b6522
// 005b64c8  8b0dc06f9700         mov ecx, dword ptr [0x976fc0]
// 005b64ce  51                   push ecx
// 005b64cf  8bc8                 mov ecx, eax
// 005b64d1  e86a7afeff           call 0x59df40
// 005b64d6  8b5618               mov edx, dword ptr [esi + 0x18]
// 005b64d9  6a0a                 push 0xa
// 005b64db  52                   push edx
// 005b64dc  e8cfa2fcff           call 0x5807b0
// 005b64e1  83c404               add esp, 4
// 005b64e4  8bc8                 mov ecx, eax
// 005b64e6  e835730000           call 0x5bd820
// 005b64eb  8b06                 mov eax, dword ptr [esi]
// 005b64ed  8b10                 mov edx, dword ptr [eax]
// 005b64ef  8bce                 mov ecx, esi
// 005b64f1  ffd2                 call edx
// 005b64f3  83c004               add eax, 4
// 005b64f6  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005b64fa  7205                 jb 0x5b6501
// 005b64fc  8b4004               mov eax, dword ptr [eax + 4]
// 005b64ff  eb03                 jmp 0x5b6504
// 005b6501  83c004               add eax, 4
// 005b6504  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005b6507  51                   push ecx
// 005b6508  50                   push eax
// 005b6509  e8b260fdff           call 0x58c5c0
// 005b650e  8b5618               mov edx, dword ptr [esi + 0x18]
// 005b6511  8b8aa8030000         mov ecx, dword ptr [edx + 0x3a8]
// 005b6517  8b01                 mov eax, dword ptr [ecx]
// 005b6519  8b10                 mov edx, dword ptr [eax]
// 005b651b  83c408               add esp, 8
// 005b651e  6a01                 push 1
// 005b6520  ffd2                 call edx
// 005b6522  33c0                 xor eax, eax
// 005b6524  5e                   pop esi
// 005b6525  c20400               ret 4

struct Settings {
    void notify(void*);
};

struct Event {
    virtual void setEnabled(int);
};

namespace RBX {
    struct Instance {
        unsigned char padding[0x3a8];
        Event* event;
    };

    struct ServiceProvider {
        void apply(int);
    };

    void handle(int, int);
}

extern RBX::ServiceProvider* func_005807b0(RBX::Instance*);
extern "C" Settings* __stdcall lookup(void*, int, const void*);
extern unsigned char descriptor;
extern void* property;

struct String {
    unsigned char allocator[4];
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Result {
    unsigned char padding[4];
    String text;
};

struct FillTool {
    virtual Result* getResult();
    unsigned char padding[0x14];
    RBX::Instance* instance;
    int execute(void*);
};

int FillTool::execute(void* argument)
{
    Settings* settings = lookup(argument, 0, &descriptor);
    if (settings) {
        settings->notify(property);
        func_005807b0(instance)->apply(10);

        String* text = &getResult()->text;
        const char* value;
        if (text->capacity >= 16)
            value = text->storage.pointer;
        else
            value = text->storage.buffer;

        RBX::handle(reinterpret_cast<int>(value),
                    reinterpret_cast<int>(instance));
        instance->event->setEnabled(1);
    }
    return 0;
}
