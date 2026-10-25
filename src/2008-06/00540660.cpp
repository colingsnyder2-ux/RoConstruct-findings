// from server: 100% by king_originala
// roc 2008-06 00540660  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540660
//
// 00540660  55                   push ebp
// 00540661  8bec                 mov ebp, esp
// 00540663  51                   push ecx
// 00540664  894dfc               mov dword ptr [ebp - 4], ecx
// 00540667  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054066a  50                   push eax
// 0054066b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054066e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00540671  52                   push edx
// 00540672  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540675  e876200000           call 0x5426f0
// 0054067a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054067d  8be5                 mov esp, ebp
// 0054067f  5d                   pop ebp
// 00540680  c20400               ret 4

#pragma optimize("", off)

struct Bucket;

struct Iterator {
    Iterator(void* node, Bucket* owner);
    void* node;
    Bucket* owner;
};

struct Bucket {
    unsigned char padding[16];
    void* node;
    Iterator f();
};

Iterator Bucket::f()
{
    return Iterator(node, this);
}
