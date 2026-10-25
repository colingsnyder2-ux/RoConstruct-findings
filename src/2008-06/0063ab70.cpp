// from server: 100% by king_originala
// roc 2008-06 0063ab70  unit: RBX::H$1?sIntValue::V?$Value::?$SignalDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ab70
//
// 0063ab70  83ec0c               sub esp, 0xc
// 0063ab73  85c9                 test ecx, ecx
// 0063ab75  7405                 je 0x63ab7c
// 0063ab77  8d4114               lea eax, [ecx + 0x14]
// 0063ab7a  eb02                 jmp 0x63ab7e
// 0063ab7c  33c0                 xor eax, eax
// 0063ab7e  dd8130010000         fld qword ptr [ecx + 0x130]
// 0063ab84  50                   push eax
// 0063ab85  b990d49700           mov ecx, 0x97d490
// 0063ab8a  dd5c2408             fstp qword ptr [esp + 8]
// 0063ab8e  e88d0af3ff           call 0x56b620
// 0063ab93  85c0                 test eax, eax
// 0063ab95  7417                 je 0x63abae
// 0063ab97  dd442404             fld qword ptr [esp + 4]
// 0063ab9b  83ec08               sub esp, 8
// 0063ab9e  8d4c240b             lea ecx, [esp + 0xb]
// 0063aba2  dd1c24               fstp qword ptr [esp]
// 0063aba5  51                   push ecx
// 0063aba6  8d4810               lea ecx, [eax + 0x10]
// 0063aba9  e822e6ffff           call 0x6391d0
// 0063abae  83c40c               add esp, 0xc
// 0063abb1  c20400               ret 4

struct Empty {};

struct Signal {
    void emit(Empty* result, double value);
};

struct Entry {
    char padding[16];
    Signal signal;
};

struct Registry {
    Entry* find(void* key);
};

struct S {
    char padding[304];
    double value;
    void notify(int unused);
};

void S::notify(int unused)
{
    void* key = this ? static_cast<void*>(padding + 20) : 0;
    double current = value;
    Entry* entry = reinterpret_cast<Registry*>(0x97d490)->find(key);
    if (entry) {
        Empty result;
        entry->signal.emit(&result, current);
    }
}
