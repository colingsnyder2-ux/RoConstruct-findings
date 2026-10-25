// from server: 100% by king_originala
// roc 2008-06 00542580  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00542580
//
// 00542580  55                   push ebp
// 00542581  8bec                 mov ebp, esp
// 00542583  83ec10               sub esp, 0x10
// 00542586  894df4               mov dword ptr [ebp - 0xc], ecx
// 00542589  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054258c  833800               cmp dword ptr [eax], 0
// 0054258f  745a                 je 0x5425eb
// 00542591  33c9                 xor ecx, ecx
// 00542593  75fc                 jne 0x542591
// 00542595  33d2                 xor edx, edx
// 00542597  75fc                 jne 0x542595
// 00542599  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054259c  8b08                 mov ecx, dword ptr [eax]
// 0054259e  83c104               add ecx, 4
// 005425a1  e8da87f1ff           call 0x45ad80
// 005425a6  85c0                 test eax, eax
// 005425a8  7538                 jne 0x5425e2
// 005425aa  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005425ad  8b09                 mov ecx, dword ptr [ecx]
// 005425af  e8dc87f1ff           call 0x45ad90
// 005425b4  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005425b7  8b02                 mov eax, dword ptr [edx]
// 005425b9  8945f8               mov dword ptr [ebp - 8], eax
// 005425bc  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005425bf  894dfc               mov dword ptr [ebp - 4], ecx
// 005425c2  837dfc00             cmp dword ptr [ebp - 4], 0
// 005425c6  7413                 je 0x5425db
// 005425c8  6a01                 push 1
// 005425ca  8b55fc               mov edx, dword ptr [ebp - 4]
// 005425cd  8b02                 mov eax, dword ptr [edx]
// 005425cf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005425d2  8b10                 mov edx, dword ptr [eax]
// 005425d4  ffd2                 call edx
// 005425d6  8945f0               mov dword ptr [ebp - 0x10], eax
// 005425d9  eb07                 jmp 0x5425e2
// 005425db  c745f000000000       mov dword ptr [ebp - 0x10], 0
// 005425e2  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005425e5  c70000000000         mov dword ptr [eax], 0
// 005425eb  8be5                 mov esp, ebp
// 005425ed  5d                   pop ebp
// 005425ee  c3                   ret 

#pragma optimize("", off)

struct AtomicInt32 {
    long value;
    unsigned int decrement();
};

struct Ref {
    virtual ~Ref();
    AtomicInt32 count;
    void dispose();
};

struct WeakReferenceCountedPointer {
    Ref* pointer;
    void reset();
};

void WeakReferenceCountedPointer::reset()
{
    if (pointer != 0) {
        do {} while (0);
        do {} while (0);

        if (pointer->count.decrement() == 0) {
            pointer->dispose();
            delete pointer;
        }
        pointer = 0;
    }
}
