// from server: 100% by king_originala
// roc 2008-06 005414a0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005414a0
//
// 005414a0  55                   push ebp
// 005414a1  8bec                 mov ebp, esp
// 005414a3  51                   push ecx
// 005414a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005414a7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005414aa  83c008               add eax, 8
// 005414ad  50                   push eax
// 005414ae  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005414b1  51                   push ecx
// 005414b2  8b5508               mov edx, dword ptr [ebp + 8]
// 005414b5  52                   push edx
// 005414b6  e8554a0000           call 0x545f10
// 005414bb  83c40c               add esp, 0xc
// 005414be  8be5                 mov esp, ebp
// 005414c0  5d                   pop ebp
// 005414c1  c20800               ret 8

extern "C" void __cdecl target(void*, void*, void*);

struct S {
    void f(void*, void*);
};

#pragma optimize("", off)
void S::f(void* a, void* b)
{
    target(a, b, reinterpret_cast<char*>(this) + 8);
}
#pragma optimize("", on)
