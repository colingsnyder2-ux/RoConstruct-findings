// from server: 69% by colin
// roc 2007-08 004a01f0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a01f0
//
// 004a01f0  56                   push esi
// 004a01f1  57                   push edi
// 004a01f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a01f6  8b37                 mov esi, dword ptr [edi]
// 004a01f8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a0200  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a0203  8b4824               mov ecx, dword ptr [eax + 0x24]
// 004a0206  6a01                 push 1
// 004a0208  83c101               add ecx, 1
// 004a020b  51                   push ecx
// 004a020c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a0210  8d542414             lea edx, [esp + 0x14]
// 004a0214  52                   push edx
// 004a0215  e886f7ffff           call 0x49f9a0
// 004a021a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a021e  8b06                 mov eax, dword ptr [esi]
// 004a0220  8b5704               mov edx, dword ptr [edi + 4]
// 004a0223  8b4028               mov eax, dword ptr [eax + 0x28]
// 004a0226  51                   push ecx
// 004a0227  52                   push edx
// 004a0228  8bce                 mov ecx, esi
// 004a022a  ffd0                 call eax
// 004a022c  5f                   pop edi
// 004a022d  5e                   pop esi
// 004a022e  c3                   ret 

struct BoundFuncDesc {
    void invoke(void* arg);
};

extern "C" void __cdecl sub_49F9A0(void*, int, int);

void BoundFuncDesc::invoke(void* arg) {
    int* p = (int*)arg;
    int* obj = (int*)p[0];
    int local = 0;
    int* vtable = (int*)obj[6];
    int count = *(int*)((char*)vtable + 0x24) + 1;
    sub_49F9A0(&local, count, 1);
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))((int*)*(int*)obj)[10];
    fn(obj, p[1], local);
}
