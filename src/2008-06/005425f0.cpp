// from server: 100% by king_originala
// roc 2008-06 005425f0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005425f0
//
// 005425f0  55                   push ebp
// 005425f1  8bec                 mov ebp, esp
// 005425f3  51                   push ecx
// 005425f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005425f7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005425fa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005425fd  3b08                 cmp ecx, dword ptr [eax]
// 005425ff  742b                 je 0x54262c
// 00542601  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00542604  e877ffffff           call 0x542580
// 00542609  837d0800             cmp dword ptr [ebp + 8], 0
// 0054260d  741d                 je 0x54262c
// 0054260f  33d2                 xor edx, edx
// 00542611  75fc                 jne 0x54260f
// 00542613  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542616  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00542619  8908                 mov dword ptr [eax], ecx
// 0054261b  33d2                 xor edx, edx
// 0054261d  75fc                 jne 0x54261b
// 0054261f  8b45fc               mov eax, dword ptr [ebp - 4]
// 00542622  8b08                 mov ecx, dword ptr [eax]
// 00542624  83c104               add ecx, 4
// 00542627  e8a44cf2ff           call 0x4672d0
// 0054262c  8be5                 mov esp, ebp
// 0054262e  5d                   pop ebp
// 0054262f  c20400               ret 4

#pragma optimize("", off)

struct AtomicInt32 {
    int value;
    void increment();
};

struct Object {
    unsigned int unused;
    AtomicInt32 count;
};

struct S {
    Object* pointer;
    void reset();
    void f(Object* other);
};

void S::f(Object* other) {
    if (other != pointer) {
        reset();
        if (other != 0) {
            do {} while (0);
            pointer = other;
            do {} while (0);
            pointer->count.increment();
        }
    }
}
