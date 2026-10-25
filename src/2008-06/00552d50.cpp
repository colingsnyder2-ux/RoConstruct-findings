// from server: 100% by king_originala
// roc 2008-06 00552d50  unit: RBX::RenderBase::AggregateChunk  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552d50
//
// 00552d50  55                   push ebp
// 00552d51  8bec                 mov ebp, esp
// 00552d53  83ec38               sub esp, 0x38
// 00552d56  894dd4               mov dword ptr [ebp - 0x2c], ecx
// 00552d59  8d4de4               lea ecx, [ebp - 0x1c]
// 00552d5c  e84f4aeeff           call 0x4377b0
// 00552d61  8d45f8               lea eax, [ebp - 8]
// 00552d64  50                   push eax
// 00552d65  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00552d68  83c10c               add ecx, 0xc
// 00552d6b  e8c0d8feff           call 0x540630
// 00552d70  8d4df0               lea ecx, [ebp - 0x10]
// 00552d73  51                   push ecx
// 00552d74  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00552d77  83c10c               add ecx, 0xc
// 00552d7a  e8e1d8feff           call 0x540660
// 00552d7f  eb08                 jmp 0x552d89
// 00552d81  8d4df8               lea ecx, [ebp - 8]
// 00552d84  e8c7e1feff           call 0x540f50
// 00552d89  8d55f0               lea edx, [ebp - 0x10]
// 00552d8c  52                   push edx
// 00552d8d  8d4df8               lea ecx, [ebp - 8]
// 00552d90  e88be1feff           call 0x540f20
// 00552d95  0fb6c0               movzx eax, al
// 00552d98  85c0                 test eax, eax
// 00552d9a  7428                 je 0x552dc4
// 00552d9c  8d4df8               lea ecx, [ebp - 8]
// 00552d9f  e8dce3feff           call 0x541180
// 00552da4  8b08                 mov ecx, dword ptr [eax]
// 00552da6  894dd0               mov dword ptr [ebp - 0x30], ecx
// 00552da9  8b55d0               mov edx, dword ptr [ebp - 0x30]
// 00552dac  8b02                 mov eax, dword ptr [edx]
// 00552dae  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00552db1  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00552db4  ffd2                 call edx
// 00552db6  83c024               add eax, 0x24
// 00552db9  50                   push eax
// 00552dba  8d4de4               lea ecx, [ebp - 0x1c]
// 00552dbd  e86ed9fdff           call 0x530730
// 00552dc2  ebbd                 jmp 0x552d81
// 00552dc4  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00552dc7  83c10c               add ecx, 0xc
// 00552dca  e85135ffff           call 0x546320
// 00552dcf  8945c8               mov dword ptr [ebp - 0x38], eax
// 00552dd2  c745cc00000000       mov dword ptr [ebp - 0x34], 0
// 00552dd9  df6dc8               fild qword ptr [ebp - 0x38]
// 00552ddc  51                   push ecx
// 00552ddd  d91c24               fstp dword ptr [esp]
// 00552de0  8d45d8               lea eax, [ebp - 0x28]
// 00552de3  50                   push eax
// 00552de4  8d4de4               lea ecx, [ebp - 0x1c]
// 00552de7  e85459fcff           call 0x518740
// 00552dec  50                   push eax
// 00552ded  8b4dd4               mov ecx, dword ptr [ebp - 0x2c]
// 00552df0  e8eb1dfcff           call 0x514be0
// 00552df5  8be5                 mov esp, ebp
// 00552df7  5d                   pop ebp
// 00552df8  c3                   ret 

#pragma optimize("", off)

struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3& operator=(const Vector3&);
    Vector3& operator+=(const Vector3&);
    Vector3 operator/(float) const;
};

struct Frame {
    char padding[36];
    Vector3 position;
};

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual const Frame& getFrame();
};

struct Iterator {
    unsigned int state[2];
    bool operator!=(const Iterator&) const;
    Iterator& operator++();
    Object*& operator*() const;
};

struct Collection {
    Iterator begin();
    Iterator end();
    unsigned int size() const;
};

struct AggregateChunk {
    Vector3 position;
    Collection objects;
    void update();
};

void AggregateChunk::update()
{
    Vector3 sum;
    Iterator last = objects.begin();
    Iterator i = objects.end();

    for (; last != i; ++last)
        sum += (*last)->getFrame().position;

    position = sum / static_cast<float>(objects.size());
}
