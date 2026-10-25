// from server: 100% by king_originala
// roc 2008-06 00619a80  unit: RBX::DecalTool  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619a80
//
// 00619a80  56                   push esi
// 00619a81  8bf1                 mov esi, ecx
// 00619a83  8b06                 mov eax, dword ptr [esi]
// 00619a85  8b5028               mov edx, dword ptr [eax + 0x28]
// 00619a88  ffd2                 call edx
// 00619a8a  8b06                 mov eax, dword ptr [esi]
// 00619a8c  8b10                 mov edx, dword ptr [eax]
// 00619a8e  8bce                 mov ecx, esi
// 00619a90  ffd2                 call edx
// 00619a92  83c004               add eax, 4
// 00619a95  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00619a99  7216                 jb 0x619ab1
// 00619a9b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00619a9e  8b4004               mov eax, dword ptr [eax + 4]
// 00619aa1  51                   push ecx
// 00619aa2  50                   push eax
// 00619aa3  e8182bf7ff           call 0x58c5c0
// 00619aa8  83c408               add esp, 8
// 00619aab  33c0                 xor eax, eax
// 00619aad  5e                   pop esi
// 00619aae  c20400               ret 4
// 00619ab1  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00619ab4  83c004               add eax, 4
// 00619ab7  51                   push ecx
// 00619ab8  50                   push eax
// 00619ab9  e8022bf7ff           call 0x58c5c0
// 00619abe  83c408               add esp, 8
// 00619ac1  33c0                 xor eax, eax
// 00619ac3  5e                   pop esi
// 00619ac4  c20400               ret 4

namespace RBX {
    void handle(int a, int b);
}

struct Text {
    int reserved;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned size;
    unsigned capacity;
};

struct Result {
    int reserved;
    Text text;
};

struct DecalTool {
    virtual Result* v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void cancel();

    char padding[20];
    int context;

    int execute(int argument);
};

int DecalTool::execute(int argument)
{
    cancel();
    Text* text = &v0()->text;
    RBX::handle((int)(text->capacity >= 16
                         ? text->pointer
                         : text->buffer),
                context);
    return 0;
}
