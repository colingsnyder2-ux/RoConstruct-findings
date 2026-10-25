// from server: 100% by king_originala
// roc 2008-06 0041cf60  unit: VDHTMLWindowService::?$FactoryProduct::Creator  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041cf60
//
// 0041cf60  64a100000000         mov eax, dword ptr fs:[0]
// 0041cf66  6aff                 push -1
// 0041cf68  6848e27b00           push 0x7be248
// 0041cf6d  50                   push eax
// 0041cf6e  64892500000000       mov dword ptr fs:[0], esp
// 0041cf75  56                   push esi
// 0041cf76  57                   push edi
// 0041cf77  8bf1                 mov esi, ecx
// 0041cf79  8d442418             lea eax, [esp + 0x18]
// 0041cf7d  50                   push eax
// 0041cf7e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041cf86  c70600000000         mov dword ptr [esi], 0
// 0041cf8c  e85fd31e00           call 0x60a2f0
// 0041cf91  83c404               add esp, 4
// 0041cf94  84c0                 test al, al
// 0041cf96  7522                 jne 0x41cfba
// 0041cf98  6a38                 push 0x38
// 0041cf9a  e881392800           call 0x6a0920
// 0041cf9f  8d4c241c             lea ecx, [esp + 0x1c]
// 0041cfa3  8bf8                 mov edi, eax
// 0041cfa5  51                   push ecx
// 0041cfa6  57                   push edi
// 0041cfa7  e834ceffff           call 0x419de0
// 0041cfac  83c40c               add esp, 0xc
// 0041cfaf  897e08               mov dword ptr [esi + 8], edi
// 0041cfb2  c7062cf08000         mov dword ptr [esi], 0x80f02c
// 0041cfb8  eb06                 jmp 0x41cfc0
// 0041cfba  c70600000000         mov dword ptr [esi], 0
// 0041cfc0  8d4c2420             lea ecx, [esp + 0x20]
// 0041cfc4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041cfcc  e8afb6ffff           call 0x418680
// 0041cfd1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041cfd5  5f                   pop edi
// 0041cfd6  8bc6                 mov eax, esi
// 0041cfd8  64890d00000000       mov dword ptr fs:[0], ecx
// 0041cfdf  5e                   pop esi
// 0041cfe0  83c40c               add esp, 0xc
// 0041cfe3  c23c00               ret 0x3c

struct String {
    char storage[28];
    ~String();
};

struct Argument {
    char prefix[8];
    String text;
    char suffix[24];
};

extern bool __cdecl func_0060a2f0();
extern void* __cdecl allocate(unsigned int);
extern void __cdecl initialize(void*, Argument*);
extern char tag[];

struct Creator {
    void* kind;
    unsigned int reserved;
    void* object;

    Creator(Argument);
};

Creator::Creator(Argument argument)
{
    kind = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument*)>(
            func_0060a2f0)(&argument)) {
        void* p = allocate(0x38);
        initialize(p, &argument);
        object = p;
        kind = tag;
    } else {
        kind = 0;
    }
}
