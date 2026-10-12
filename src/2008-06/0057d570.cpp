// from server: 100% by king_originala
// roc 2008-06 0057d570  unit: RBX::CameraTiltUpCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d570
//
// 0057d570  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057d573  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057d579  8b5004               mov edx, dword ptr [eax + 4]
// 0057d57c  81c188020000         add ecx, 0x288
// 0057d582  ffd2                 call edx
// 0057d584  6aff                 push -1
// 0057d586  8bc8                 mov ecx, eax
// 0057d588  e8b3ea0400           call 0x5cc040
// 0057d58d  c3                   ret 

struct Result {
    void func_005cc040(int);
};

struct Proxy {
    virtual void slot0();
    virtual Result* slot1();
};

struct Owner {
    char padding[0x288];
    Proxy proxy;
};

struct S {
    char padding[0x0c];
    Owner* owner;
    void func_0057d570();
};

void S::func_0057d570()
{
    Result* result = owner->proxy.slot1();
    result->func_005cc040(-1);
}
