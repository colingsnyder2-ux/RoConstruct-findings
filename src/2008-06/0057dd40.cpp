// from server: 100% by king_originala
// roc 2008-06 0057dd40  unit: RBX::WatchCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057dd40
//
// 0057dd40  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057dd43  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057dd49  8b5004               mov edx, dword ptr [eax + 4]
// 0057dd4c  81c188020000         add ecx, 0x288
// 0057dd52  ffd2                 call edx
// 0057dd54  33c9                 xor ecx, ecx
// 0057dd56  83b8d401000002       cmp dword ptr [eax + 0x1d4], 2
// 0057dd5d  0f94c1               sete cl
// 0057dd60  8ac1                 mov al, cl
// 0057dd62  c3                   ret 

struct Result
{
    char padding[0x1D4];
    int state;
};

struct Interface
{
    virtual void slot0();
    virtual Result* get();
};

struct Owner
{
    char padding[0x288];
    Interface value;
};

struct S
{
    char padding[0x0C];
    Owner* owner;
    bool f();
};

bool S::f()
{
    return owner->value.get()->state == 2;
}
