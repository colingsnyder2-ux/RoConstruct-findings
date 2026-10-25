// from server: 100% by king_originala
// roc 2008-06 005e9bb0  unit: RBX::PhysicsService  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9bb0
//
// 005e9bb0  51                   push ecx
// 005e9bb1  53                   push ebx
// 005e9bb2  55                   push ebp
// 005e9bb3  8bd9                 mov ebx, ecx
// 005e9bb5  6a01                 push 1
// 005e9bb7  8d8bb8000000         lea ecx, [ebx + 0xb8]
// 005e9bbd  6a00                 push 0
// 005e9bbf  e8acfefaff           call 0x599a70
// 005e9bc4  33ed                 xor ebp, ebp
// 005e9bc6  39abb0000000         cmp dword ptr [ebx + 0xb0], ebp
// 005e9bcc  7e61                 jle 0x5e9c2f
// 005e9bce  56                   push esi
// 005e9bcf  57                   push edi
// 005e9bd0  8b83ac000000         mov eax, dword ptr [ebx + 0xac]
// 005e9bd6  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 005e9bd9  8bce                 mov ecx, esi
// 005e9bdb  89742410             mov dword ptr [esp + 0x10], esi
// 005e9bdf  e88cd9ffff           call 0x5e7570
// 005e9be4  8bf8                 mov edi, eax
// 005e9be6  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e9be9  85c0                 test eax, eax
// 005e9beb  7437                 je 0x5e9c24
// 005e9bed  8b00                 mov eax, dword ptr [eax]
// 005e9bef  83f803               cmp eax, 3
// 005e9bf2  740a                 je 0x5e9bfe
// 005e9bf4  83f801               cmp eax, 1
// 005e9bf7  7405                 je 0x5e9bfe
// 005e9bf9  83f802               cmp eax, 2
// 005e9bfc  7526                 jne 0x5e9c24
// 005e9bfe  8d4c2410             lea ecx, [esp + 0x10]
// 005e9c02  51                   push ecx
// 005e9c03  8d8bb8000000         lea ecx, [ebx + 0xb8]
// 005e9c09  e88205fbff           call 0x59a190
// 005e9c0e  8b5724               mov edx, dword ptr [edi + 0x24]
// 005e9c11  3b721c               cmp esi, dword ptr [edx + 0x1c]
// 005e9c14  7407                 je 0x5e9c1d
// 005e9c16  8bce                 mov ecx, esi
// 005e9c18  e8a3e6ffff           call 0x5e82c0
// 005e9c1d  8bce                 mov ecx, esi
// 005e9c1f  e82cdeffff           call 0x5e7a50
// 005e9c24  45                   inc ebp
// 005e9c25  3babb0000000         cmp ebp, dword ptr [ebx + 0xb0]
// 005e9c2b  7ca3                 jl 0x5e9bd0
// 005e9c2d  5f                   pop edi
// 005e9c2e  5e                   pop esi
// 005e9c2f  5d                   pop ebp
// 005e9c30  5b                   pop ebx
// 005e9c31  59                   pop ecx
// 005e9c32  c3                   ret 

struct Ball;

struct Owner {
    char padding[0x1c];
    Ball* ball;
};

struct Shape {
    char padding0[0x18];
    int* kind;
    char padding1[8];
    Owner* owner;
};

struct Ball {
    int getBulletSphereShape() const;
    void update();
    const void* get();
};

struct BallList {
    Ball** data;
    int size;
    int capacity;

    void resize(int size, int value);
    void append(Ball* const& ball);
};

struct S {
    char padding0[0xac];
    Ball** balls;
    int count;
    int padding1;
    BallList selected;

    void f();
};

void S::f()
{
    selected.resize(0, 1);
    for (int i = 0; i < count; ++i) {
        Ball* ball = balls[i];
        Ball* entry = ball;
        Shape* shape = reinterpret_cast<Shape*>(ball->getBulletSphereShape());
        if (shape->kind) {
            int kind = *shape->kind;
            if (kind == 3 || kind == 1 || kind == 2) {
                selected.append(entry);
                if (ball != shape->owner->ball)
                    ball->update();
                ball->get();
            }
        }
    }
}
