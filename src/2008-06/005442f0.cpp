// from server: 100% by king_originala
// roc 2008-06 005442f0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005442f0
//
// 005442f0  55                   push ebp
// 005442f1  8bec                 mov ebp, esp
// 005442f3  51                   push ecx
// 005442f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005442f7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005442fa  83c008               add eax, 8
// 005442fd  50                   push eax
// 005442fe  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00544301  51                   push ecx
// 00544302  8b5508               mov edx, dword ptr [ebp + 8]
// 00544305  52                   push edx
// 00544306  e8c51d0000           call 0x5460d0
// 0054430b  83c40c               add esp, 0xc
// 0054430e  8be5                 mov esp, ebp
// 00544310  5d                   pop ebp
// 00544311  c20800               ret 8

extern "C" void __cdecl target(void*, void*, void*);

struct S {
    char padding[8];
    int value;
    void f(void*, void*);
};

#pragma optimize("", off)
void S::f(void* a, void* b)
{
    target(a, b, &value);
}
#pragma optimize("", on)
