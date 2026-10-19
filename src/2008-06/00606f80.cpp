// from server: 90% by colin
// from server: 89% by king_originala
// roc 2008-06 00606f80  unit: RBX::BallBallContact  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606f80
//
// 00606f80  51                   push ecx
// 00606f81  d9ee                 fldz 
// 00606f83  56                   push esi
// 00606f84  51                   push ecx
// 00606f85  d91c24               fstp dword ptr [esp]
// 00606f88  8bf1                 mov esi, ecx
// 00606f8a  e801ffffff           call 0x606e90
// 00606f8f  84c0                 test al, al
// 00606f91  7476                 je 0x607009
// 00606f93  8b4e04               mov ecx, dword ptr [esi + 4]
// 00606f96  8b01                 mov eax, dword ptr [ecx]
// 00606f98  8b5004               mov edx, dword ptr [eax + 4]
// 00606f9b  ffd2                 call edx
// 00606f9d  83f807               cmp eax, 7
// 00606fa0  7562                 jne 0x607004
// 00606fa2  837e3400             cmp dword ptr [esi + 0x34], 0
// 00606fa6  751e                 jne 0x606fc6
// 00606fa8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00606fab  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 00606fb1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00606fb4  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00606fba  50                   push eax
// 00606fbb  51                   push ecx
// 00606fbc  8bce                 mov ecx, esi
// 00606fbe  e83dfeffff           call 0x606e00
// 00606fc3  894634               mov dword ptr [esi + 0x34], eax
// 00606fc6  8b460c               mov eax, dword ptr [esi + 0xc]
// 00606fc9  8b5610               mov edx, dword ptr [esi + 0x10]
// 00606fcc  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 00606fd2  8b7634               mov esi, dword ptr [esi + 0x34]
// 00606fd5  57                   push edi
// 00606fd6  8bba9c000000         mov edi, dword ptr [edx + 0x9c]
// 00606fdc  8b11                 mov edx, dword ptr [ecx]
// 00606fde  8b4210               mov eax, dword ptr [edx + 0x10]
// 00606fe1  ffd0                 call eax
// 00606fe3  d95c2408             fstp dword ptr [esp + 8]
// 00606fe7  8b17                 mov edx, dword ptr [edi]
// 00606fe9  8b4210               mov eax, dword ptr [edx + 0x10]
// 00606fec  8bcf                 mov ecx, edi
// 00606fee  ffd0                 call eax
// 00606ff0  d9442408             fld dword ptr [esp + 8]
// 00606ff4  d95620               fst dword ptr [esi + 0x20]
// 00606ff7  c7460800000000       mov dword ptr [esi + 8], 0
// 00606ffe  dec1                 faddp st(1)
// 00607000  5f                   pop edi
// 00607001  d95e24               fstp dword ptr [esi + 0x24]
// 00607004  b001                 mov al, 1
// 00607006  5e                   pop esi
// 00607007  59                   pop ecx
// 00607008  c3                   ret 
// 00607009  8b16                 mov edx, dword ptr [esi]
// 0060700b  8b4214               mov eax, dword ptr [edx + 0x14]
// 0060700e  8bce                 mov ecx, esi
// 00607010  ffd0                 call eax
// 00607012  32c0                 xor al, al
// 00607014  5e                   pop esi
// 00607015  59                   pop ecx
// 00607016  c3                   ret 
#include <intrin.h>

struct Shape {
    virtual void reserved0();
    virtual int kind();
};

struct Body {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual float measure();
};

struct Part {
    char reserved[0x9c];
    Body* body;
    void* data;
};

struct Result {
    char reserved0[8];
    int state;
    char reserved1[0x14];
    float first;
    float total;
};

struct Contact {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void reserved3();
    virtual void reserved4();
    virtual void reset();

    Shape* shape;
    int reserved6;
    Part* part1;
    Part* part2;
    char reserved7[0x20];
    Result* result;

    bool check(float value);
    Result* create(void* first, void* second);
    bool update();
};

bool Contact::update()
{
    if (check(0.0f)) {
        if (shape->kind() == 7) {
            if (!result)
                result = create(part1->data, part2->data);

            Body* firstBody = part1->body;
            Body* secondBody = part2->body;
            Result* output = result;
            _ReadWriteBarrier();
            float first = firstBody->measure();
            double second = secondBody->measure();
            output->first = first;
            output->state = 0;
            output->total = first + second;
        }
        return true;
    }

    reset();
    return false;
}
