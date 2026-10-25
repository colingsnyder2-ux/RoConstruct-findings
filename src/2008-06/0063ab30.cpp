// from server: 100% by king_originala
// roc 2008-06 0063ab30  unit: RBX::H$1?sIntValue::V?$Value::?$SignalDesc  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ab30
//
// 0063ab30  83ec08               sub esp, 8
// 0063ab33  85c9                 test ecx, ecx
// 0063ab35  7405                 je 0x63ab3c
// 0063ab37  8d4114               lea eax, [ecx + 0x14]
// 0063ab3a  eb02                 jmp 0x63ab3e
// 0063ab3c  33c0                 xor eax, eax
// 0063ab3e  8a8930010000         mov cl, byte ptr [ecx + 0x130]
// 0063ab44  884c2404             mov byte ptr [esp + 4], cl
// 0063ab48  50                   push eax
// 0063ab49  b918d29700           mov ecx, 0x97d218
// 0063ab4e  e8cd0af3ff           call 0x56b620
// 0063ab53  85c0                 test eax, eax
// 0063ab55  7412                 je 0x63ab69
// 0063ab57  8b542404             mov edx, dword ptr [esp + 4]
// 0063ab5b  52                   push edx
// 0063ab5c  8d4c2407             lea ecx, [esp + 7]
// 0063ab60  51                   push ecx
// 0063ab61  8d4810               lea ecx, [eax + 0x10]
// 0063ab64  e89773faff           call 0x5e1f00
// 0063ab69  83c408               add esp, 8
// 0063ab6c  c20400               ret 4

struct Empty {};

struct Signal {
    void emit(Empty* result, bool value);
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
    bool value;
    void notify(int unused);
};

void S::notify(int unused)
{
    void* key = this ? static_cast<void*>(padding + 20) : 0;
    bool current = value;
    Entry* entry = reinterpret_cast<Registry*>(0x97d218)->find(key);
    if (entry) {
        Empty result;
        entry->signal.emit(&result, current);
    }
}
