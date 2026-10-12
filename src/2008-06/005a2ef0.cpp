// from server: 100% by king_originala
// roc 2008-06 005a2ef0  unit: RBX::Workspace  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2ef0
//
// 005a2ef0  56                   push esi
// 005a2ef1  8d442408             lea eax, [esp + 8]
// 005a2ef5  8bf1                 mov esi, ecx
// 005a2ef7  50                   push eax
// 005a2ef8  c70600000000         mov dword ptr [esi], 0
// 005a2efe  e8ed730600           call 0x60a2f0
// 005a2f03  83c404               add esp, 4
// 005a2f06  84c0                 test al, al
// 005a2f08  752e                 jne 0x5a2f38
// 005a2f0a  8d4608               lea eax, [esi + 8]
// 005a2f0d  85c0                 test eax, eax
// 005a2f0f  741b                 je 0x5a2f2c
// 005a2f11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a2f15  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a2f19  8908                 mov dword ptr [eax], ecx
// 005a2f1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2f1f  895004               mov dword ptr [eax + 4], edx
// 005a2f22  8b542414             mov edx, dword ptr [esp + 0x14]
// 005a2f26  894808               mov dword ptr [eax + 8], ecx
// 005a2f29  89500c               mov dword ptr [eax + 0xc], edx
// 005a2f2c  c706f0388300         mov dword ptr [esi], 0x8338f0
// 005a2f32  8bc6                 mov eax, esi
// 005a2f34  5e                   pop esi
// 005a2f35  c21400               ret 0x14
// 005a2f38  c70600000000         mov dword ptr [esi], 0
// 005a2f3e  8bc6                 mov eax, esi
// 005a2f40  5e                   pop esi
// 005a2f41  c21400               ret 0x14

struct Value {
    unsigned int a, b, c, d;
};

extern bool __cdecl func_0060a2f0(const Value *);
extern unsigned char descriptor;

inline void *__cdecl operator new(unsigned int, void *p) {
    return p;
}

struct S {
    void *type;
    unsigned int reserved;
    Value value;

    S(Value input, unsigned int unused);
};

S::S(Value input, unsigned int unused) {
    type = 0;
    if (!func_0060a2f0(&input)) {
        new (&value) Value(input);
        type = &descriptor;
    } else {
        type = 0;
    }
}
