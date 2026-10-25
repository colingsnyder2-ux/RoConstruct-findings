// from server: 100% by king_originala
// roc 2008-06 004087e0  unit: VCApp::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004087e0
//
// 004087e0  6aff                 push -1
// 004087e2  681bcf7b00           push 0x7bcf1b
// 004087e7  64a100000000         mov eax, dword ptr fs:[0]
// 004087ed  50                   push eax
// 004087ee  64892500000000       mov dword ptr fs:[0], esp
// 004087f5  51                   push ecx
// 004087f6  56                   push esi
// 004087f7  8bf1                 mov esi, ecx
// 004087f9  89742404             mov dword ptr [esp + 4], esi
// 004087fd  c70638b68000         mov dword ptr [esi], 0x80b638
// 00408803  c74604010000c0       mov dword ptr [esi + 4], 0xc0000001
// 0040880a  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00408810  8b01                 mov eax, dword ptr [ecx]
// 00408812  8b5008               mov edx, dword ptr [eax + 8]
// 00408815  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040881d  ffd2                 call edx
// 0040881f  8b7618               mov esi, dword ptr [esi + 0x18]
// 00408822  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040882a  85f6                 test esi, esi
// 0040882c  7408                 je 0x408836
// 0040882e  8b06                 mov eax, dword ptr [esi]
// 00408830  8b4808               mov ecx, dword ptr [eax + 8]
// 00408833  56                   push esi
// 00408834  ffd1                 call ecx
// 00408836  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040883a  5e                   pop esi
// 0040883b  64890d00000000       mov dword ptr fs:[0], ecx
// 00408842  83c410               add esp, 0x10
// 00408845  c3                   ret 

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
