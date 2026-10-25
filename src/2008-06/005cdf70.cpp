// from server: 100% by king_originala
// roc 2008-06 005cdf70  unit: RBX::Camera  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cdf70
//
// 005cdf70  83ec30               sub esp, 0x30
// 005cdf73  53                   push ebx
// 005cdf74  56                   push esi
// 005cdf75  8bf1                 mov esi, ecx
// 005cdf77  57                   push edi
// 005cdf78  8dbe74010000         lea edi, [esi + 0x174]
// 005cdf7e  57                   push edi
// 005cdf7f  8d442410             lea eax, [esp + 0x10]
// 005cdf83  8d9e30010000         lea ebx, [esi + 0x130]
// 005cdf89  50                   push eax
// 005cdf8a  8bcb                 mov ecx, ebx
// 005cdf8c  e81f28f4ff           call 0x5107b0
// 005cdf91  8bc8                 mov ecx, eax
// 005cdf93  e84886eaff           call 0x4765e0
// 005cdf98  84c0                 test al, al
// 005cdf9a  7442                 je 0x5cdfde
// 005cdf9c  57                   push edi
// 005cdf9d  c686e401000001       mov byte ptr [esi + 0x1e4], 1
// 005cdfa4  e807fa0000           call 0x5dd9b0
// 005cdfa9  83c404               add esp, 4
// 005cdfac  84c0                 test al, al
// 005cdfae  7408                 je 0x5cdfb8
// 005cdfb0  57                   push edi
// 005cdfb1  8bcb                 mov ecx, ebx
// 005cdfb3  e82828f4ff           call 0x5107e0
// 005cdfb8  68d49a9700           push 0x979ad4
// 005cdfbd  8bce                 mov ecx, esi
// 005cdfbf  e83cfbe3ff           call 0x40db00
// 005cdfc4  8bce                 mov ecx, esi
// 005cdfc6  e885dfffff           call 0x5cbf50
// 005cdfcb  85c0                 test eax, eax
// 005cdfcd  740f                 je 0x5cdfde
// 005cdfcf  8b10                 mov edx, dword ptr [eax]
// 005cdfd1  5f                   pop edi
// 005cdfd2  5e                   pop esi
// 005cdfd3  8bc8                 mov ecx, eax
// 005cdfd5  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cdfd8  5b                   pop ebx
// 005cdfd9  83c430               add esp, 0x30
// 005cdfdc  ffe0                 jmp eax
// 005cdfde  5f                   pop edi
// 005cdfdf  5e                   pop esi
// 005cdfe0  5b                   pop ebx
// 005cdfe1  83c430               add esp, 0x30
// 005cdfe4  c3                   ret 

struct Frame {
    float data[12];
    bool changed() const;
};

struct Ray {
    char data[0x44];
    Frame difference(const Frame& other) const;
    void setFrame(const Frame& other);
};

struct Observer {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void update() = 0;
};

extern const char property;
extern bool __cdecl validateFrame(const Frame& frame);

struct Camera {
    char prefix[0x130];
    Ray ray;
    Frame frame;
    char padding[0x40];
    bool dirty;

    void notify(const char* property);
    Observer* g();
    void update();
};

void Camera::update()
{
    if (ray.difference(frame).changed()) {
        dirty = true;
        if (validateFrame(frame))
            ray.setFrame(frame);
        notify(&property);
        Observer* observer = g();
        if (observer)
            observer->update();
    }
}
