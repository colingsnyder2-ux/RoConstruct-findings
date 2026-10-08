// from server: 50% by colin
// roc 2007-08 0049d970  unit: RBX::Network::VServer::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049d970
//
// 0049d970  51                   push ecx
// 0049d971  6a00                 push 0
// 0049d973  8d44240c             lea eax, [esp + 0xc]
// 0049d977  50                   push eax
// 0049d978  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049d97c  c644240800           mov byte ptr [esp + 8], 0
// 0049d981  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049d985  50                   push eax
// 0049d986  51                   push ecx
// 0049d987  8d4804               lea ecx, [eax + 4]
// 0049d98a  e8d1f5ffff           call 0x49cf60
// 0049d98f  59                   pop ecx
// 0049d990  c3                   ret 

struct FactoryProduct {
    char pad0[4];
    void construct(int, int, int);
    void init();
};

void FactoryProduct::init()
{
    char flag = 0;
    construct(*(int*)&flag, 0, 0);
}
