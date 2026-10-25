// from server: 100% by king_originala
// roc 2008-06 00544f60  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544f60
//
// 00544f60  55                   push ebp
// 00544f61  8bec                 mov ebp, esp
// 00544f63  51                   push ecx
// 00544f64  894dfc               mov dword ptr [ebp - 4], ecx
// 00544f67  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544f6a  e881d4ffff           call 0x5423f0
// 00544f6f  8b00                 mov eax, dword ptr [eax]
// 00544f71  50                   push eax
// 00544f72  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544f75  e8e60a0000           call 0x545a60
// 00544f7a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544f7d  e86ed4ffff           call 0x5423f0
// 00544f82  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544f85  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00544f88  8910                 mov dword ptr [eax], edx
// 00544f8a  8b45fc               mov eax, dword ptr [ebp - 4]
// 00544f8d  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 00544f94  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544f97  e844b90000           call 0x5508e0
// 00544f9c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544f9f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00544fa2  8910                 mov dword ptr [eax], edx
// 00544fa4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544fa7  e8147f0000           call 0x54cec0
// 00544fac  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544faf  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00544fb2  8910                 mov dword ptr [eax], edx
// 00544fb4  8be5                 mov esp, ebp
// 00544fb6  5d                   pop ebp
// 00544fb7  c3                   ret 

#pragma optimize("", off)

struct VChunk;

struct S {
    char pad[0x18];
    VChunk* pointer;
    unsigned int state;

    char* getPointer();
    void release(VChunk*);
    char* getLink();
    char* get();
    void reset();
};

void S::reset()
{
    release(*reinterpret_cast<VChunk**>(getPointer()));
    *reinterpret_cast<VChunk**>(getPointer()) = pointer;
    state = 0;
    *reinterpret_cast<VChunk**>(getLink()) = pointer;
    *reinterpret_cast<VChunk**>(get()) = pointer;
}
