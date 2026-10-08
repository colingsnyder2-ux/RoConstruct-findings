// from server: 90% by colin
// roc 2007-08 005a6270  unit: RBX::VHumanoid::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6270
//
// 005a6270  e8ebf9ffff           call 0x5a5c60
// 005a6275  85c0                 test eax, eax
// 005a6277  740b                 je 0x5a6284
// 005a6279  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005a627f  8b4064               mov eax, dword ptr [eax + 0x64]
// 005a6282  eb02                 jmp 0x5a6286
// 005a6284  33c0                 xor eax, eax
// 005a6286  85c0                 test eax, eax
// 005a6288  7404                 je 0x5a628e
// 005a628a  8b4004               mov eax, dword ptr [eax + 4]
// 005a628d  c3                   ret 
// 005a628e  33c0                 xor eax, eax
// 005a6290  c3                   ret 

extern void* __cdecl func_005a5c60();

int func_005a6270()
{
    void* p = func_005a5c60();
    if (p != 0) {
        int* q = *(int**)((char*)p + 0x1d8);
        int* r = *(int**)((char*)q + 0x64);
        if (r != 0) {
            return *(int*)((char*)r + 4);
        }
    }
    return 0;
}
