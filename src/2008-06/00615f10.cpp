// from server: 81% by colin
// from server: 77% by colin
// roc 2008-06 00615f10  unit: RBX::Unlocked  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615f10
//
// 00615f10  64a100000000         mov eax, dword ptr fs:[0]
// 00615f16  6aff                 push -1
// 00615f18  6828ae7d00           push 0x7dae28
// 00615f1d  50                   push eax
// 00615f1e  64892500000000       mov dword ptr fs:[0], esp
// 00615f25  83ec1c               sub esp, 0x1c
// 00615f28  53                   push ebx
// 00615f29  56                   push esi
// 00615f2a  57                   push edi
// 00615f2b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00615f2f  68e0be9700           push 0x97bee0
// 00615f34  6a00                 push 0
// 00615f36  57                   push edi
// 00615f37  8bf1                 mov esi, ecx
// 00615f39  e852feffff           call 0x615d90
// 00615f3e  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00615f42  8903                 mov dword ptr [ebx], eax
// 00615f44  85c0                 test eax, eax
// 00615f46  742a                 je 0x615f72
// 00615f48  57                   push edi
// 00615f49  8d442410             lea eax, [esp + 0x10]
// 00615f4d  50                   push eax
// 00615f4e  8bce                 mov ecx, esi
// 00615f50  e8abfdffff           call 0x615d00
// 00615f55  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00615f59  51                   push ecx
// 00615f5a  8b0b                 mov ecx, dword ptr [ebx]
// 00615f5c  8d542410             lea edx, [esp + 0x10]
// 00615f60  52                   push edx
// 00615f61  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00615f69  e82239f8ff           call 0x599890
// 00615f6e  85c0                 test eax, eax
// 00615f70  7502                 jne 0x615f74
// 00615f72  33c0                 xor eax, eax
// 00615f74  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00615f78  5f                   pop edi
// 00615f79  5e                   pop esi
// 00615f7a  5b                   pop ebx
// 00615f7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00615f82  83c428               add esp, 0x28
// 00615f85  c20c00               ret 0xc

extern char lookupData[];

struct S;

struct Temporary
{
    char storage[28];
    Temporary(S* owner, void* input);
    __declspec(dllimport) ~Temporary() throw();
};

struct Result
{
    void* consume(Temporary* value, void* argument);
};

struct S
{
    void* makeTemporary(void* result, void* input);
    Result* lookup(void* input, int mode, const char* data);
    void* f(void* input, Result** result, void* argument);
};

__forceinline Temporary::Temporary(S* owner, void* input)
{
    owner->makeTemporary(this, input);
}

void* S::f(void* input, Result** result, void* argument)
{
    *result = lookup(input, 0, lookupData);
    if (*result)
    {
        Temporary temp(this, input);
        void* value = (*result)->consume(&temp, argument);
        if (value)
            return value;
    }
    return 0;
}
