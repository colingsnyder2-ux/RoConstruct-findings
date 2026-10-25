// from server: 100% by colin
// roc 2008-06 00553340  unit: RBX::RenderBase::AggregateChunk  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553340
//
// 00553340  55                   push ebp
// 00553341  8bec                 mov ebp, esp
// 00553343  83ec08               sub esp, 8
// 00553346  0fb64510             movzx eax, byte ptr [ebp + 0x10]
// 0055334a  50                   push eax
// 0055334b  8d4dff               lea ecx, [ebp - 1]
// 0055334e  e88d3f0700           call 0x5c72e0
// 00553353  50                   push eax
// 00553354  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00553357  51                   push ecx
// 00553358  8d4df8               lea ecx, [ebp - 8]
// 0055335b  e840010000           call 0x5534a0
// 00553360  8b10                 mov edx, dword ptr [eax]
// 00553362  52                   push edx
// 00553363  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00553366  e815010000           call 0x553480
// 0055336b  8b4508               mov eax, dword ptr [ebp + 8]
// 0055336e  8be5                 mov esp, ebp
// 00553370  5d                   pop ebp
// 00553371  c3                   ret 

// Analog for 00553340: builds the result from a wrapped value (ctor 005534a0)
// and a flag accessor (005c72e0); result ctor 00553480 takes both.
struct Flag {
    void* f(int);
};

struct Temporary {
    int value;
    Temporary(int);
};

struct S {
    int value;
    S(int, void*);
};

#pragma optimize("gy", off)
S reconstruct(int value, unsigned char flag)
{
    Flag flagObject;
    return S(Temporary(value).value, flagObject.f(flag));
}
