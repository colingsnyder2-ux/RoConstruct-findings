// from server: 100% by colin
// roc 2008-06 005815a0  unit: RBX::WatchCameraCommand  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005815a0
//
// 005815a0  56                   push esi
// 005815a1  8bf1                 mov esi, ecx
// 005815a3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005815a6  57                   push edi
// 005815a7  85c9                 test ecx, ecx
// 005815a9  7407                 je 0x5815b2
// 005815ab  e820f0ffff           call 0x5805d0
// 005815b0  eb02                 jmp 0x5815b4
// 005815b2  33c0                 xor eax, eax
// 005815b4  8bc8                 mov ecx, eax
// 005815b6  e885d4ffff           call 0x57ea40
// 005815bb  8bf8                 mov edi, eax
// 005815bd  8b460c               mov eax, dword ptr [esi + 0xc]
// 005815c0  8d8888020000         lea ecx, [eax + 0x288]
// 005815c6  8b01                 mov eax, dword ptr [ecx]
// 005815c8  8b5004               mov edx, dword ptr [eax + 4]
// 005815cb  6a02                 push 2
// 005815cd  ffd2                 call edx
// 005815cf  8bc8                 mov ecx, eax
// 005815d1  e8fac70400           call 0x5cddd0
// 005815d6  8b460c               mov eax, dword ptr [esi + 0xc]
// 005815d9  8d8888020000         lea ecx, [eax + 0x288]
// 005815df  8b01                 mov eax, dword ptr [ecx]
// 005815e1  8b5004               mov edx, dword ptr [eax + 4]
// 005815e4  57                   push edi
// 005815e5  ffd2                 call edx
// 005815e7  8bc8                 mov ecx, eax
// 005815e9  e822c80400           call 0x5cde10
// 005815ee  8b4604               mov eax, dword ptr [esi + 4]
// 005815f1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005815f4  83c004               add eax, 4
// 005815f7  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005815fb  5f                   pop edi
// 005815fc  5e                   pop esi
// 005815fd  7205                 jb 0x581604
// 005815ff  8b4004               mov eax, dword ptr [eax + 4]
// 00581602  eb03                 jmp 0x581607
// 00581604  83c004               add eax, 4
// 00581607  51                   push ecx
// 00581608  50                   push eax
// 00581609  e8b2af0000           call 0x58c5c0
// 0058160e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00581612  8b01                 mov eax, dword ptr [ecx]
// 00581614  8b10                 mov edx, dword ptr [eax]
// 00581616  83c408               add esp, 8
// 00581619  c744240401000000     mov dword ptr [esp + 4], 1
// 00581621  ffe2                 jmp edx

//

//

struct Subject;

struct Intermediate {
    Subject* resolve();
};

struct Source {
    Intermediate* get();
};

struct Camera {
    void setType(int);
    void setSubject(Subject*);
};

struct CameraProvider {
    virtual void unused();
    virtual Camera* getCamera();
};

struct Model {
    char padding[0x288];
    CameraProvider cameras;
};

struct String {
    unsigned int unused;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int size;
    unsigned int capacity;
};

struct Descriptor {
    unsigned int unused;
    String name;
};

struct Disposable {
    virtual void release(int);
};

extern "C" void __cdecl notify(const char*, Model*);

struct Command {
    unsigned int unused0;
    Descriptor* descriptor;
    unsigned int unused8;
    Model* model;
    char padding[16];
    Source* source;

    void execute(Disposable*);
};

void Command::execute(Disposable* disposable)
{
    Subject* subject = (source ? source->get() : 0)->resolve();

    model->cameras.getCamera()->setType(2);
    model->cameras.getCamera()->setSubject(subject);

    Model* target = model;
    String* name = &descriptor->name;
    const char* text = name->capacity >= 16
        ? name->storage.pointer
        : name->storage.buffer;

    notify(text, target);
    disposable->release(1);
}
