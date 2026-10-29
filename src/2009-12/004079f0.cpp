// roc 2009-12 004079f0  unit: VCApp::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004079f0
//
// 004079f0  6aff                 push -1
// 004079f2  68db729200           push 0x9272db
// 004079f7  64a100000000         mov eax, dword ptr fs:[0]
// 004079fd  50                   push eax
// 004079fe  64892500000000       mov dword ptr fs:[0], esp
// 00407a05  51                   push ecx
// 00407a06  56                   push esi
// 00407a07  8bf1                 mov esi, ecx
// 00407a09  89742404             mov dword ptr [esp + 4], esi
// 00407a0d  c70678fc9900         mov dword ptr [esi], 0x99fc78
// 00407a13  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 00407a1a  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 00407a20  8b01                 mov eax, dword ptr [ecx]
// 00407a22  8b5008               mov edx, dword ptr [eax + 8]
// 00407a25  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00407a2d  ffd2                 call edx
// 00407a2f  8b7618               mov esi, dword ptr [esi + 0x18]
// 00407a32  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00407a3a  85f6                 test esi, esi
// 00407a3c  7408                 je 0x407a46
// 00407a3e  8b06                 mov eax, dword ptr [esi]
// 00407a40  8b4808               mov ecx, dword ptr [eax + 8]
// 00407a43  56                   push esi
// 00407a44  ffd1                 call ecx
// 00407a46  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00407a4a  5e                   pop esi
// 00407a4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00407a52  83c410               add esp, 0x10
// 00407a55  c3                   ret 
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