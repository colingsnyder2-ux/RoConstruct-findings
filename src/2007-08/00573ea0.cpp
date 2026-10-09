// from server: 100% by colin
// roc 2007-08 00573ea0  unit: RBX::PartInstance  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573ea0
//
// 00573ea0  b001                 mov al, 1
// 00573ea2  888150020000         mov byte ptr [ecx + 0x250], al
// 00573ea8  8881f9000000         mov byte ptr [ecx + 0xf9], al
// 00573eae  888169020000         mov byte ptr [ecx + 0x269], al
// 00573eb4  81c17c010000         add ecx, 0x17c
// 00573eba  e861950400           call 0x5bd420
// 00573ebf  c20400               ret 4

struct PartInstance {
    void sub_005BD420();
    void func_00573EA0(int);
};

void PartInstance::func_00573EA0(int)
{
    *(unsigned char*)((char*)this + 0x250) = 1;
    *(unsigned char*)((char*)this + 0xf9) = 1;
    *(unsigned char*)((char*)this + 0x269) = 1;
    ((PartInstance*)((char*)this + 0x17c))->sub_005BD420();
}
