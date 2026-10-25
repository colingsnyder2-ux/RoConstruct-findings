// from server: 100% by king_originala
// roc 2008-06 005442d0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005442d0
//
// 005442d0  55                   push ebp
// 005442d1  8bec                 mov ebp, esp
// 005442d3  51                   push ecx
// 005442d4  894dfc               mov dword ptr [ebp - 4], ecx
// 005442d7  8b4508               mov eax, dword ptr [ebp + 8]
// 005442da  50                   push eax
// 005442db  e8e01d0000           call 0x5460c0
// 005442e0  83c404               add esp, 4
// 005442e3  8be5                 mov esp, ebp
// 005442e5  5d                   pop ebp
// 005442e6  c20400               ret 4

extern "C" void __cdecl target(void*);

struct S {
    void f(void*);
};

#pragma optimize("", off)
void S::f(void* p)
{
    target(p);
}
#pragma optimize("", on)
