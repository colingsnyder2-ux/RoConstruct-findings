// from server: 100% by king_originala
// roc 2008-06 004e9fa0  unit: RBX::ViewNew::Texture  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9fa0
//
// 004e9fa0  56                   push esi
// 004e9fa1  8d442408             lea eax, [esp + 8]
// 004e9fa5  8bf1                 mov esi, ecx
// 004e9fa7  50                   push eax
// 004e9fa8  c70600000000         mov dword ptr [esi], 0
// 004e9fae  e83d031200           call 0x60a2f0
// 004e9fb3  83c404               add esp, 4
// 004e9fb6  84c0                 test al, al
// 004e9fb8  752e                 jne 0x4e9fe8
// 004e9fba  8d4608               lea eax, [esi + 8]
// 004e9fbd  85c0                 test eax, eax
// 004e9fbf  741b                 je 0x4e9fdc
// 004e9fc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e9fc5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e9fc9  8908                 mov dword ptr [eax], ecx
// 004e9fcb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e9fcf  895004               mov dword ptr [eax + 4], edx
// 004e9fd2  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e9fd6  894808               mov dword ptr [eax + 8], ecx
// 004e9fd9  89500c               mov dword ptr [eax + 0xc], edx
// 004e9fdc  c7065c6f8200         mov dword ptr [esi], 0x826f5c
// 004e9fe2  8bc6                 mov eax, esi
// 004e9fe4  5e                   pop esi
// 004e9fe5  c21400               ret 0x14
// 004e9fe8  c70600000000         mov dword ptr [esi], 0
// 004e9fee  8bc6                 mov eax, esi
// 004e9ff0  5e                   pop esi
// 004e9ff1  c21400               ret 0x14

struct Value {
    int a, b, c, d, extra;
};

struct Payload {
    int a, b, c, d;
};

extern int marker;
bool __cdecl func_0060a2f0();

struct S {
    int* state;
    int reserved;
    Payload payload;

    S(Value value);
};

S::S(Value value)
{
    state = 0;
    if (!reinterpret_cast<bool (__cdecl *)(const Value*)>(
            func_0060a2f0)(&value)) {
        Payload* destination = &payload;
        if (destination) {
            destination->a = value.a;
            destination->b = value.b;
            destination->c = value.c;
            destination->d = value.d;
        }
        state = &marker;
    } else {
        state = 0;
    }
}
