// from server: 40% by colin
// roc 2008-06 00541360  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541360
//
// 00541360  55                   push ebp
// 00541361  8bec                 mov ebp, esp
// 00541363  51                   push ecx
// 00541364  894dfc               mov dword ptr [ebp - 4], ecx
// 00541367  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054136a  50                   push eax
// 0054136b  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0054136e  51                   push ecx
// 0054136f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00541372  e879130000           call 0x5426f0
// 00541377  8b4508               mov eax, dword ptr [ebp + 8]
// 0054137a  8be5                 mov esp, ebp
// 0054137c  5d                   pop ebp
// 0054137d  c20c00               ret 0xc

struct S
{
    int f(int, int, int);
};

extern "C" int __stdcall sub_5426F0(int, int, S *);

int S::f(int a, int, int c)
{
    sub_5426F0(c, a, this);
    return a;
}
