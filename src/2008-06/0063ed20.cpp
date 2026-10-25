// from server: 100% by king_originala
// roc 2008-06 0063ed20  unit: RBX::ResizeTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ed20
//
// 0063ed20  56                   push esi
// 0063ed21  8bf1                 mov esi, ecx
// 0063ed23  807e1400             cmp byte ptr [esi + 0x14], 0
// 0063ed27  744b                 je 0x63ed74
// 0063ed29  8b06                 mov eax, dword ptr [esi]
// 0063ed2b  8b5028               mov edx, dword ptr [eax + 0x28]
// 0063ed2e  ffd2                 call edx
// 0063ed30  8b4624               mov eax, dword ptr [esi + 0x24]
// 0063ed33  85c0                 test eax, eax
// 0063ed35  743d                 je 0x63ed74
// 0063ed37  83780400             cmp dword ptr [eax + 4], 0
// 0063ed3b  7437                 je 0x63ed74
// 0063ed3d  8b06                 mov eax, dword ptr [esi]
// 0063ed3f  8b10                 mov edx, dword ptr [eax]
// 0063ed41  8bce                 mov ecx, esi
// 0063ed43  ffd2                 call edx
// 0063ed45  83c004               add eax, 4
// 0063ed48  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0063ed4c  7205                 jb 0x63ed53
// 0063ed4e  8b4004               mov eax, dword ptr [eax + 4]
// 0063ed51  eb03                 jmp 0x63ed56
// 0063ed53  83c004               add eax, 4
// 0063ed56  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063ed59  51                   push ecx
// 0063ed5a  50                   push eax
// 0063ed5b  e860d8f4ff           call 0x58c5c0
// 0063ed60  8b5618               mov edx, dword ptr [esi + 0x18]
// 0063ed63  8b8aa8030000         mov ecx, dword ptr [edx + 0x3a8]
// 0063ed69  8b01                 mov eax, dword ptr [ecx]
// 0063ed6b  8b10                 mov edx, dword ptr [eax]
// 0063ed6d  83c408               add esp, 8
// 0063ed70  6a01                 push 1
// 0063ed72  ffd2                 call edx
// 0063ed74  33c0                 xor eax, eax
// 0063ed76  5e                   pop esi
// 0063ed77  c20400               ret 4

namespace RBX {
    void handle(int a, int b);
}

struct String {
    int proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Label {
    int prefix;
    String text;
};

struct State {
    int reserved;
    int active;
};

struct Service {
    virtual void setEnabled(int enabled);
};

struct Context {
    char reserved[0x3A8];
    Service* service;
};

struct ResizeTool {
    virtual Label* getLabel();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void update();

    char reserved0[0x10];
    bool enabled;
    char reserved1[3];
    Context* context;
    char reserved2[8];
    State* state;

    int execute(int argument);
};

int ResizeTool::execute(int argument)
{
    if (enabled) {
        update();
        if (state && state->active) {
            String* text = &getLabel()->text;
            char* data;
            if (text->capacity >= 16)
                data = text->storage.pointer;
            else
                data = text->storage.buffer;
            RBX::handle(reinterpret_cast<int>(data),
                        reinterpret_cast<int>(context));
            context->service->setEnabled(1);
        }
    }
    return 0;
}
