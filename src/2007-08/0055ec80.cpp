// from server: 69% by colin
// roc 2007-08 0055ec80  unit: RBX::AttachCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ec80
//
// 0055ec80  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055ec83  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055ec89  8b5004               mov edx, dword ptr [eax + 4]
// 0055ec8c  81c128020000         add ecx, 0x228
// 0055ec92  ffd2                 call edx
// 0055ec94  33c9                 xor ecx, ecx
// 0055ec96  83b88c01000001       cmp dword ptr [eax + 0x18c], 1
// 0055ec9d  0f94c1               sete cl
// 0055eca0  8ac1                 mov al, cl
// 0055eca2  c3                   ret 

struct Sub {
    int pad0;
    int pad4;
    int pad8;
    int padC;
    char pad10[0x218];
    int field228;
};

struct Inner {
    int pad0;
    int field4;
    char pad8[0x184];
    int field18C;
};

struct S {
    char pad0[0xC];
    Sub* ptrC;
    char m();
};

char S::m()
{
    Sub* p = this->ptrC;
    Inner* q = (Inner*)p->field228;
    int (__stdcall *fn)(int) = (int (__stdcall *)(int))q->field4;
    fn((int)(p->field228 + 0x228));
    return q->field18C == 1;
}
