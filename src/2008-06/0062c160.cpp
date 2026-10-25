// from server: 100% by king_originala
// roc 2008-06 0062c160  unit: RBX::VFlagStandService::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c160
//
// 0062c160  56                   push esi
// 0062c161  8b742408             mov esi, dword ptr [esp + 8]
// 0062c165  57                   push edi
// 0062c166  56                   push esi
// 0062c167  8bf9                 mov edi, ecx
// 0062c169  e882e1fdff           call 0x60a2f0
// 0062c16e  83c404               add esp, 4
// 0062c171  84c0                 test al, al
// 0062c173  7534                 jne 0x62c1a9
// 0062c175  8d4708               lea eax, [edi + 8]
// 0062c178  85c0                 test eax, eax
// 0062c17a  7422                 je 0x62c19e
// 0062c17c  8b0e                 mov ecx, dword ptr [esi]
// 0062c17e  8908                 mov dword ptr [eax], ecx
// 0062c180  8b5604               mov edx, dword ptr [esi + 4]
// 0062c183  895004               mov dword ptr [eax + 4], edx
// 0062c186  8b4e08               mov ecx, dword ptr [esi + 8]
// 0062c189  894808               mov dword ptr [eax + 8], ecx
// 0062c18c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0062c18f  89500c               mov dword ptr [eax + 0xc], edx
// 0062c192  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0062c195  894810               mov dword ptr [eax + 0x10], ecx
// 0062c198  8b5614               mov edx, dword ptr [esi + 0x14]
// 0062c19b  895014               mov dword ptr [eax + 0x14], edx
// 0062c19e  c70760618400         mov dword ptr [edi], 0x846160
// 0062c1a4  5f                   pop edi
// 0062c1a5  5e                   pop esi
// 0062c1a6  c20400               ret 4
// 0062c1a9  c70700000000         mov dword ptr [edi], 0
// 0062c1af  5f                   pop edi
// 0062c1b0  5e                   pop esi
// 0062c1b1  c20400               ret 4

struct Value {
    unsigned int words[6];
};

inline void* operator new(unsigned int, void* p) {
    return p;
}

extern bool __cdecl func_0060a2f0(const Value&);

struct S {
    unsigned int tag;
    unsigned int reserved;
    Value value;

    void f(const Value& source);
};

void S::f(const Value& source) {
    if (!func_0060a2f0(source)) {
        new (&value) Value(source);
        tag = 0x00846160;
    } else {
        tag = 0;
    }
}
