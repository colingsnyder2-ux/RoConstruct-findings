// roc 2010-06 00407340  unit: VCApp::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407340
//
// 00407340  6aff                 push -1
// 00407342  68ebdb9700           push 0x97dbeb
// 00407347  64a100000000         mov eax, dword ptr fs:[0]
// 0040734d  50                   push eax
// 0040734e  64892500000000       mov dword ptr fs:[0], esp
// 00407355  51                   push ecx
// 00407356  56                   push esi
// 00407357  8bf1                 mov esi, ecx
// 00407359  89742404             mov dword ptr [esp + 4], esi
// 0040735d  c706e007a000         mov dword ptr [esi], 0xa007e0
// 00407363  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 0040736a  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 00407370  8b01                 mov eax, dword ptr [ecx]
// 00407372  8b5008               mov edx, dword ptr [eax + 8]
// 00407375  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040737d  ffd2                 call edx
// 0040737f  8b7618               mov esi, dword ptr [esi + 0x18]
// 00407382  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040738a  85f6                 test esi, esi
// 0040738c  7408                 je 0x407396
// 0040738e  8b06                 mov eax, dword ptr [esi]
// 00407390  8b4808               mov ecx, dword ptr [eax + 8]
// 00407393  56                   push esi
// 00407394  ffd1                 call ecx
// 00407396  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040739a  5e                   pop esi
// 0040739b  64890d00000000       mov dword ptr fs:[0], ecx
// 004073a2  83c410               add esp, 0x10
// 004073a5  c3                   ret 
// copied from an identical function in another client (function ??1S@@QAE@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Interface
{
    virtual int __stdcall Query(void*, void**) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct ReleaseHolder
{
    Interface* pointer;
    ~ReleaseHolder();
};

inline ReleaseHolder::~ReleaseHolder()
{
    if (pointer)
        pointer->Release();
}

struct Module
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void Unlock() = 0;
};

extern Module* module;

struct S
{
    virtual int slot0();
    virtual int slot1();
    virtual int slot2();

    unsigned long references;
    unsigned char reserved[16];
    ReleaseHolder holder;

    ~S();
};

S::~S()
{
    references = 0xC0000001UL;
    module->Unlock();
}