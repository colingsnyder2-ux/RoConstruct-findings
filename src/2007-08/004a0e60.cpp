// from server: 73% by colin
// roc 2007-08 004a0e60  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0e60
//
// 004a0e60  56                   push esi
// 004a0e61  57                   push edi
// 004a0e62  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004a0e66  6a01                 push 1
// 004a0e68  6a20                 push 0x20
// 004a0e6a  8bf1                 mov esi, ecx
// 004a0e6c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a0e70  57                   push edi
// 004a0e71  e82aebffff           call 0x49f9a0
// 004a0e76  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a0e7a  8b0f                 mov ecx, dword ptr [edi]
// 004a0e7c  50                   push eax
// 004a0e7d  51                   push ecx
// 004a0e7e  8b0e                 mov ecx, dword ptr [esi]
// 004a0e80  e88b2b0000           call 0x4a3a10
// 004a0e85  5f                   pop edi
// 004a0e86  5e                   pop esi
// 004a0e87  c20c00               ret 0xc

struct BoundFuncDesc {
    void* field0;
    void construct(void* function, const char* name, int security);
};

extern "C" void __stdcall sub_49F9A0(void* self, int size, int flag, void* function);
extern "C" void __stdcall sub_4A3A10(void* self, void* a, const char* b);

void BoundFuncDesc::construct(void* function, const char* name, int security)
{
    sub_49F9A0(this, 0x20, 1, function);
    sub_4A3A10(*(void**)this, *(void**)function, name);
}
