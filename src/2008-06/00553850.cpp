// from server: 100% by king_originala
// roc 2008-06 00553850  unit: RBX::RenderBase::AggregateChunk  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553850
//
// 00553850  55                   push ebp
// 00553851  8bec                 mov ebp, esp
// 00553853  51                   push ecx
// 00553854  894dfc               mov dword ptr [ebp - 4], ecx
// 00553857  8b45fc               mov eax, dword ptr [ebp - 4]
// 0055385a  50                   push eax
// 0055385b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0055385e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00553861  52                   push edx
// 00553862  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00553865  e8360cffff           call 0x5444a0
// 0055386a  8b4508               mov eax, dword ptr [ebp + 8]
// 0055386d  8be5                 mov esp, ebp
// 0055386f  5d                   pop ebp
// 00553870  c20400               ret 4

#pragma optimize("", off)

struct S;

struct Result {
    void initialize(unsigned long value, S* owner);
};

struct S {
    unsigned char padding[12];
    unsigned long value;
    Result* f(Result* result);
};

Result* S::f(Result* result)
{
    result->initialize(value, this);
    return result;
}
