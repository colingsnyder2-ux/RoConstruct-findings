// from server: 85% by atomic.potato
// roc 2009-12 00657d20  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657d20
//
// 00657d20  8d816cffffff         lea eax, [ecx - 0x94]
// 00657d26  c3                   ret 
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

struct S {
    int f();
};

int S::f() {
    return *(int*)((char*)this - 0x94);
}
