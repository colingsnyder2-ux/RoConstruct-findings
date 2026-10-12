// from server: 91% by king_originala
// roc 2008-06 00422fc0  unit: CRobloxTreeCtrl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422fc0
//
// 00422fc0  6aff                 push -1
// 00422fc2  6853827d00           push 0x7d8253
// 00422fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00422fcd  50                   push eax
// 00422fce  64892500000000       mov dword ptr fs:[0], esp
// 00422fd5  51                   push ecx
// 00422fd6  56                   push esi
// 00422fd7  57                   push edi
// 00422fd8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00422fdc  8b07                 mov eax, dword ptr [edi]
// 00422fde  6a00                 push 0
// 00422fe0  68c8e19200           push 0x92e1c8
// 00422fe5  687c909200           push 0x92907c
// 00422fea  8bf1                 mov esi, ecx
// 00422fec  6a00                 push 0
// 00422fee  50                   push eax
// 00422fef  8974241c             mov dword ptr [esp + 0x1c], esi
// 00422ff3  e8cee72700           call 0x6a17c6
// 00422ff8  8906                 mov dword ptr [esi], eax
// 00422ffa  8b4704               mov eax, dword ptr [edi + 4]
// 00422ffd  83c414               add esp, 0x14
// 00423000  8d4e04               lea ecx, [esi + 4]
// 00423003  8901                 mov dword ptr [ecx], eax
// 00423005  85c0                 test eax, eax
// 00423007  740c                 je 0x423015
// 00423009  83c004               add eax, 4
// 0042300c  ba01000000           mov edx, 1
// 00423011  f00fc110             lock xadd dword ptr [eax], edx
// 00423015  833e00               cmp dword ptr [esi], 0
// 00423018  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00423020  7517                 jne 0x423039
// 00423022  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0042302a  8d44241c             lea eax, [esp + 0x1c]
// 0042302e  50                   push eax
// 0042302f  c644241801           mov byte ptr [esp + 0x18], 1
// 00423034  e877f5fdff           call 0x4025b0
// 00423039  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042303d  5f                   pop edi
// 0042303e  8bc6                 mov eax, esi
// 00423040  5e                   pop esi
// 00423041  64890d00000000       mov dword ptr fs:[0], ecx
// 00423048  83c410               add esp, 0x10
// 0042304b  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern unsigned char instanceType;
extern unsigned char scriptType;

struct Control {
    long reserved;
    volatile long references;
    void release();
};

struct Count {
    Control* control;
    Count();
    Count(const Count&);
    ~Count();
    Count& operator=(const Count&);
};

inline Count::Count() : control(0) {}

inline Count::Count(const Count& other) : control(other.control) {
    if (control) {
        volatile long* references = &control->references;
        _InterlockedExchangeAdd(references, 1);
    }
}

inline Count::~Count() {
    if (control)
        control->release();
}

struct Source {
    void* pointer;
    Count count;
};

struct CastTag {};

struct S {
    void* pointer;
    Count count;
    S(const Source&, CastTag);
};

S::S(const Source& source, CastTag)
    : pointer(__RTDynamicCast(source.pointer, 0,
                              &instanceType, &scriptType, 0)),
      count(source.count) {
    if (!pointer) {
        const Count empty;
        count = empty;
    }
}
