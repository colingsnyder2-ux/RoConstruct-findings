// from server: 100% by king_originala
// roc 2008-06 00543090  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00543090
//
// 00543090  55                   push ebp
// 00543091  8bec                 mov ebp, esp
// 00543093  51                   push ecx
// 00543094  894dfc               mov dword ptr [ebp - 4], ecx
// 00543097  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054309a  e8c1210000           call 0x545260
// 0054309f  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430a2  894118               mov dword ptr [ecx + 0x18], eax
// 005430a5  8b55fc               mov edx, dword ptr [ebp - 4]
// 005430a8  8b4218               mov eax, dword ptr [edx + 0x18]
// 005430ab  50                   push eax
// 005430ac  e84ffdffff           call 0x542e00
// 005430b1  83c404               add esp, 4
// 005430b4  c60001               mov byte ptr [eax], 1
// 005430b7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430ba  e831f3ffff           call 0x5423f0
// 005430bf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430c2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005430c5  8910                 mov dword ptr [eax], edx
// 005430c7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430ca  e811d80000           call 0x5508e0
// 005430cf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430d2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005430d5  8910                 mov dword ptr [eax], edx
// 005430d7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430da  e8e19d0000           call 0x54cec0
// 005430df  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005430e2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005430e5  8910                 mov dword ptr [eax], edx
// 005430e7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005430ea  c7401c00000000       mov dword ptr [eax + 0x1c], 0
// 005430f1  8be5                 mov esp, ebp
// 005430f3  5d                   pop ebp
// 005430f4  c3                   ret 

struct VChunk;

char* __cdecl flagAddress(VChunk* p);

struct S {
    char pad[0x18];
    VChunk* pointer;
    unsigned int state;

    VChunk* acquire();
    char* getPointer();
    char* getSecondPointer();
    char* getThirdPointer();
    void initialize();
};

#pragma optimize("", off)
void S::initialize()
{
    pointer = acquire();
    *flagAddress(pointer) = 1;
    *reinterpret_cast<VChunk**>(getPointer()) = pointer;
    *reinterpret_cast<VChunk**>(getSecondPointer()) = pointer;
    *reinterpret_cast<VChunk**>(getThirdPointer()) = pointer;
    state = 0;
}
