// from server: 100% by colin
// roc 2007-08 005bb0d0  unit: RBX::VModelInstance::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb0d0
//
// 005bb0d0  b001                 mov al, 1
// 005bb0d2  88812c010000         mov byte ptr [ecx + 0x12c], al
// 005bb0d8  8881f9000000         mov byte ptr [ecx + 0xf9], al
// 005bb0de  888111010000         mov byte ptr [ecx + 0x111], al
// 005bb0e4  e9176af8ff           jmp 0x541b00

struct T_func_005bb0d0 {
    char pad[0x12d];
    void m();
};

void func_005bb0d0();

void T_func_005bb0d0::m()
{
    *(char*)((char*)this + 0x12c) = 1;
    *(char*)((char*)this + 0xf9) = 1;
    *(char*)((char*)this + 0x111) = 1;
    func_005bb0d0();
}
