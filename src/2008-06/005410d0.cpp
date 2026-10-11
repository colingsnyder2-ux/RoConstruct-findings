// from server: 47% by colin
// roc 2008-06 005410d0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005410d0
//
// 005410d0  55                   push ebp
// 005410d1  8bec                 mov ebp, esp
// 005410d3  51                   push ecx
// 005410d4  894dfc               mov dword ptr [ebp - 4], ecx
// 005410d7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005410da  c70000000000         mov dword ptr [eax], 0
// 005410e0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005410e3  8b11                 mov edx, dword ptr [ecx]
// 005410e5  52                   push edx
// 005410e6  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005410e9  e8b27e0500           call 0x598fa0
// 005410ee  8b45fc               mov eax, dword ptr [ebp - 4]
// 005410f1  8be5                 mov esp, ebp
// 005410f3  5d                   pop ebp
// 005410f4  c20400               ret 4

struct S
{
    int f(int *p);
};

extern "C" int __stdcall sub_598fa0(int *self, int value);

int S::f(int *p)
{
    *(int *)this = 0;
    sub_598fa0((int *)this, *p);
    return (int)this;
}
