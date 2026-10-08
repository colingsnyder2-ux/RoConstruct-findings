// from server: 47% by colin
// roc 2007-08 0048ee30  unit: RBX::Network::VPlayer::?$BoundFuncDesc  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048ee30
//
// 0048ee30  56                   push esi
// 0048ee31  8b742408             mov esi, dword ptr [esp + 8]
// 0048ee35  85f6                 test esi, esi
// 0048ee37  742c                 je 0x48ee65
// 0048ee39  8da42400000000       lea esp, [esp]
// 0048ee40  6a00                 push 0
// 0048ee42  68044e8800           push 0x884e04
// 0048ee47  684c1f8800           push 0x881f4c
// 0048ee4c  6a00                 push 0
// 0048ee4e  56                   push esi
// 0048ee4f  e8e21e1a00           call 0x630d36
// 0048ee54  83c414               add esp, 0x14
// 0048ee57  85c0                 test eax, eax
// 0048ee59  750e                 jne 0x48ee69
// 0048ee5b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0048ee61  85f6                 test esi, esi
// 0048ee63  75db                 jne 0x48ee40
// 0048ee65  33c0                 xor eax, eax
// 0048ee67  5e                   pop esi
// 0048ee68  c3                   ret 
// 0048ee69  8bc8                 mov ecx, eax
// 0048ee6b  5e                   pop esi
// 0048ee6c  e94ff3ffff           jmp 0x48e1c0

struct Instance {
    static Instance* findFirstChildOfType(Instance* parent, const char* typeName);
    Instance* findFirstChild(const char* name);
};

extern "C" Instance* __stdcall findFirstChildOfType(Instance* parent, const char* typeName);

struct VPlayer {
    Instance* findFirstChildOfType(const char* typeName);
};

Instance* VPlayer::findFirstChildOfType(const char* typeName) {
    Instance* inst = (Instance*)this;
    while (inst) {
        Instance* found = ::findFirstChildOfType(inst, typeName);
        if (found)
            return found;
        inst = *(Instance**)((char*)inst + 0xbc);
    }
    return 0;
}
