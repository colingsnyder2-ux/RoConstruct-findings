// from server: 66% by colin
// roc 2007-08 004a0e90  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0e90
//
// 004a0e90  8b442404             mov eax, dword ptr [esp + 4]
// 004a0e94  56                   push esi
// 004a0e95  8bf1                 mov esi, ecx
// 004a0e97  8b08                 mov ecx, dword ptr [eax]
// 004a0e99  8b4004               mov eax, dword ptr [eax + 4]
// 004a0e9c  8b11                 mov edx, dword ptr [ecx]
// 004a0e9e  50                   push eax
// 004a0e9f  8b4224               mov eax, dword ptr [edx + 0x24]
// 004a0ea2  ffd0                 call eax
// 004a0ea4  85c0                 test eax, eax
// 004a0ea6  7405                 je 0x4a0ead
// 004a0ea8  83c0fc               add eax, -4
// 004a0eab  eb02                 jmp 0x4a0eaf
// 004a0ead  33c0                 xor eax, eax
// 004a0eaf  8b0e                 mov ecx, dword ptr [esi]
// 004a0eb1  50                   push eax
// 004a0eb2  e8e9320000           call 0x4a41a0
// 004a0eb7  6a01                 push 1
// 004a0eb9  6a20                 push 0x20
// 004a0ebb  8d4c2410             lea ecx, [esp + 0x10]
// 004a0ebf  51                   push ecx
// 004a0ec0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a0ec4  89442414             mov dword ptr [esp + 0x14], eax
// 004a0ec8  e8c3eeffff           call 0x49fd90
// 004a0ecd  5e                   pop esi
// 004a0ece  c20800               ret 8

struct BoundFuncDesc {
    void* field0;
    void construct(void*, int);
};

extern "C" void* __stdcall sub_4A41A0(void*, void*);
extern "C" void __stdcall sub_49FD90(void*, int, int);

void BoundFuncDesc::construct(void* arg0, int arg1)
{
    void* p = *(void**)arg0;
    int v = *(int*)((char*)arg0 + 4);
    void* r = (*(void*(**)(void*, int))(*(char**)p + 0x24))(p, v);
    void* q;
    if (r != 0)
        q = (char*)r - 4;
    else
        q = 0;
    void* res = sub_4A41A0(field0, q);
    void* tmp;
    sub_49FD90(&tmp, 0x20, 1);
    *(void**)((char*)&tmp + 4) = res;
}
