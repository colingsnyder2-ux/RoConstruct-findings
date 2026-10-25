// from server: 100% by king_originala
// roc 2008-06 00540630  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540630
//
// 00540630  55                   push ebp
// 00540631  8bec                 mov ebp, esp
// 00540633  51                   push ecx
// 00540634  894dfc               mov dword ptr [ebp - 4], ecx
// 00540637  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054063a  50                   push eax
// 0054063b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054063e  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00540641  52                   push edx
// 00540642  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540645  e8a6200000           call 0x5426f0
// 0054064a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054064d  8be5                 mov esp, ebp
// 0054064f  5d                   pop ebp
// 00540650  c20400               ret 4

struct Bucket;

struct Result {
    void initialize(void* value, Bucket* owner);
};

struct Bucket {
    unsigned char padding[12];
    void* value;
    Result* f(Result* result);
};

#pragma optimize("", off)
Result* Bucket::f(Result* result)
{
    result->initialize(value, this);
    return result;
}
#pragma optimize("", on)
