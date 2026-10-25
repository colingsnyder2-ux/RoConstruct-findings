// from server: 100% by colin
// roc 2008-06 0060a360  unit: VAuthoringSettings::?$BoundPropGetSet  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060a360
//
// 0060a360  6aff                 push -1
// 0060a362  68c8d37b00           push 0x7bd3c8
// 0060a367  64a100000000         mov eax, dword ptr fs:[0]
// 0060a36d  50                   push eax
// 0060a36e  64892500000000       mov dword ptr fs:[0], esp
// 0060a375  51                   push ecx
// 0060a376  56                   push esi
// 0060a377  8bf1                 mov esi, ecx
// 0060a379  8d8e30010000         lea ecx, [esi + 0x130]
// 0060a37f  89742404             mov dword ptr [esp + 4], esi
// 0060a383  c706742c8400         mov dword ptr [esi], 0x842c74
// 0060a389  c74610682c8400       mov dword ptr [esi + 0x10], 0x842c68
// 0060a390  c74614602c8400       mov dword ptr [esi + 0x14], 0x842c60
// 0060a397  c74620582c8400       mov dword ptr [esi + 0x20], 0x842c58
// 0060a39e  c74624482c8400       mov dword ptr [esi + 0x24], 0x842c48
// 0060a3a5  c74644382c8400       mov dword ptr [esi + 0x44], 0x842c38
// 0060a3ac  c74664282c8400       mov dword ptr [esi + 0x64], 0x842c28
// 0060a3b3  c78684000000182c8400 mov dword ptr [esi + 0x84], 0x842c18
// 0060a3bd  c786a4000000082c8400 mov dword ptr [esi + 0xa4], 0x842c08
// 0060a3c7  c786c4000000f82b8400 mov dword ptr [esi + 0xc4], 0x842bf8
// 0060a3d1  c701e02b8400         mov dword ptr [ecx], 0x842be0
// 0060a3d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060a3df  e82c30e7ff           call 0x47d410
// 0060a3e4  8bce                 mov ecx, esi
// 0060a3e6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0060a3ee  e84d01f5ff           call 0x55a540
// 0060a3f3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060a3f7  5e                   pop esi
// 0060a3f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a3ff  83c410               add esp, 0x10
// 0060a402  c3                   ret 

template<int Tag, int Size>
struct Part {
    virtual void f();
    char padding[Size - 4];
};

template<int Tag>
struct Part<Tag, 4> {
    virtual void f();
};

struct Base :
    Part<0, 16>,
    Part<1, 4>,
    Part<2, 12>,
    Part<3, 4>,
    Part<4, 32>,
    Part<5, 32>,
    Part<6, 32>,
    Part<7, 32>,
    Part<8, 32> {
    ~Base();
};

struct Member {
    virtual void f();
    ~Member();
};

struct S : Base, Part<9, 108>, Member {
    virtual void f();
    ~S();
};

S::~S()
{
}
