// from server: 90% by atomic.potato
// roc 2011-06 005a86a0  unit: RBX::VFriendService::?$FactoryProduct  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a86a0
//
// 005a86a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a86a4  8d442408             lea eax, [esp + 8]
// 005a86a8  50                   push eax
// 005a86a9  e872fcffff           call 0x5a8320
// 005a86ae  c3                   ret 

extern "C" void __stdcall sub_005a8320(int, void*);

struct RBX_VFriendService_FactoryProduct_005a86a0 {
};

void __cdecl f_005a86a0(int a, void* b)
{
    sub_005a8320(a, &b);
}
