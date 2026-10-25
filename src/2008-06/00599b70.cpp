// from server: 100% by king_originala
// roc 2008-06 00599b70  unit: RBX::PartInstance  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599b70
//
// 00599b70  83ec68               sub esp, 0x68
// 00599b73  56                   push esi
// 00599b74  8bf1                 mov esi, ecx
// 00599b76  807e6800             cmp byte ptr [esi + 0x68], 0
// 00599b7a  742f                 je 0x599bab
// 00599b7c  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00599b7f  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 00599b85  8d4c2404             lea ecx, [esp + 4]
// 00599b89  51                   push ecx
// 00599b8a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00599b8d  8b140a               mov edx, dword ptr [edx + ecx]
// 00599b90  035674               add edx, dword ptr [esi + 0x74]
// 00599b93  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 00599b9a  8b4670               mov eax, dword ptr [esi + 0x70]
// 00599b9d  ffd0                 call eax
// 00599b9f  50                   push eax
// 00599ba0  8bce                 mov ecx, esi
// 00599ba2  e8d9f2ffff           call 0x598e80
// 00599ba7  c6466800             mov byte ptr [esi + 0x68], 0
// 00599bab  56                   push esi
// 00599bac  8b742474             mov esi, dword ptr [esp + 0x74]
// 00599bb0  8bce                 mov ecx, esi
// 00599bb2  e859f3ffff           call 0x598f10
// 00599bb7  8bc6                 mov eax, esi
// 00599bb9  5e                   pop esi
// 00599bba  83c468               add esp, 0x68
// 00599bbd  c20400               ret 4

struct Value {
    char data[104];
    Value(const Value&);
    Value& operator=(const Value&);
};

typedef Value* (__thiscall *Getter)(void*, Value*);

struct Object {
    char padding[308];
    int* table;
};

struct S {
    Value value;
    bool dirty;
    Object* object;
    Getter getter;
    int adjustment;
    int tableOffset;

    Value get();
};

Value S::get()
{
    if (dirty) {
        char temporary[104];
        value = *getter(
            (char*)object + 308
                + *(int*)((char*)object->table + tableOffset)
                + adjustment,
            (Value*)temporary);
        dirty = false;
    }
    return value;
}
